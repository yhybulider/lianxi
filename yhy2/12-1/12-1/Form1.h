#pragma once

namespace My121 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Common;
	using namespace System::Data::Odbc;
	using namespace System::Xml;
	using namespace System::Data::OleDb;
	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  调入数据库ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->调入数据库ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->调入数据库ToolStripMenuItem,
					this->toolStripComboBox1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(582, 32);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 调入数据库ToolStripMenuItem
			// 
			this->调入数据库ToolStripMenuItem->Name = L"调入数据库ToolStripMenuItem";
			this->调入数据库ToolStripMenuItem->Size = System::Drawing::Size(96, 28);
			this->调入数据库ToolStripMenuItem->Text = L"调入数据库";
			this->调入数据库ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::On_DBOpen);
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 28);
			this->toolStripComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::On_SelChange);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 35);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(536, 244);
			this->dataGridView1->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 303);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"数据库浏览器";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: String^ strConn;
	private: System::Void On_DBOpen(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^  pOFD = gcnew OpenFileDialog();
		pOFD->Filter = "Access文件(*.mdb)|*.mdb";
		pOFD->DefaultExt = "mdb";
		if (pOFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		strConn = String::Format(
			"Provider=Microsoft.Jet.OLEDB.4.0; Data Source={0}", pOFD->FileName);
		OleDbConnection^ con1 = gcnew OleDbConnection(strConn);
		con1->Open();		// 打开连接
		// 清空组合框的列表项
		this->toolStripComboBox1->Items->Clear();
		// 获取数据表名称，并填充到toolStripComboBox1中
		// 指定限制列，用于GetOleDbSchemaTable中,返回第四列为table表
		array<String^>^ strs = gcnew array<String^>{ nullptr, nullptr, nullptr, "TABLE" };
		DataTable^ table = con1->GetOleDbSchemaTable(
			OleDbSchemaGuid::Tables, strs);		// 获取数据表名

		if (table->Rows->Count > 0)

		{
			for each (DataRow^ row in table->Rows)
			{

				this->toolStripComboBox1->Items->Add(row["TABLE_NAME"]);
			}
			this->toolStripComboBox1->SelectedIndex = 0;
		}

		con1->Close();
	}
	private: System::Void On_SelChange(System::Object^  sender, System::EventArgs^  e) {
		int nIndex = this->toolStripComboBox1->SelectedIndex;

		if (nIndex < 0) return;

		// 获取选择的数据表名

		String^ strTableName = this->toolStripComboBox1->Items[nIndex]->ToString();

		// 使用DataAdapter和DataSet

		String^ cmdText = String::Format("SELECT * FROM {0}", strTableName);

		OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, strConn);

		DataSet^ theSet1 = gcnew DataSet();

		//da1->Fill(theSet1, "Test");			// 重新指定表名称

		//this->dataGridView1->DataSource = theSet1;

		//this->dataGridView1->DataMember = "Test";	// 指定要打开的表

		//直接使用表

		DataTable^ table = gcnew DataTable;

		da1->Fill( table );

		this->dataGridView1->DataSource = table;
	}
};
}

