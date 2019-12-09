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
	/// Form1 ժҪ
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
	private: System::Windows::Forms::ToolStripMenuItem^  �������ݿ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�������ݿ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->�������ݿ�ToolStripMenuItem,
					this->toolStripComboBox1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(582, 32);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �������ݿ�ToolStripMenuItem
			// 
			this->�������ݿ�ToolStripMenuItem->Name = L"�������ݿ�ToolStripMenuItem";
			this->�������ݿ�ToolStripMenuItem->Size = System::Drawing::Size(96, 28);
			this->�������ݿ�ToolStripMenuItem->Text = L"�������ݿ�";
			this->�������ݿ�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::On_DBOpen);
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
			this->Text = L"���ݿ������";
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
		pOFD->Filter = "Access�ļ�(*.mdb)|*.mdb";
		pOFD->DefaultExt = "mdb";
		if (pOFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		strConn = String::Format(
			"Provider=Microsoft.Jet.OLEDB.4.0; Data Source={0}", pOFD->FileName);
		OleDbConnection^ con1 = gcnew OleDbConnection(strConn);
		con1->Open();		// ������
		// �����Ͽ���б���
		this->toolStripComboBox1->Items->Clear();
		// ��ȡ���ݱ����ƣ�����䵽toolStripComboBox1��
		// ָ�������У�����GetOleDbSchemaTable��,���ص�����Ϊtable��
		array<String^>^ strs = gcnew array<String^>{ nullptr, nullptr, nullptr, "TABLE" };
		DataTable^ table = con1->GetOleDbSchemaTable(
			OleDbSchemaGuid::Tables, strs);		// ��ȡ���ݱ���

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

		// ��ȡѡ������ݱ���

		String^ strTableName = this->toolStripComboBox1->Items[nIndex]->ToString();

		// ʹ��DataAdapter��DataSet

		String^ cmdText = String::Format("SELECT * FROM {0}", strTableName);

		OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, strConn);

		DataSet^ theSet1 = gcnew DataSet();

		//da1->Fill(theSet1, "Test");			// ����ָ��������

		//this->dataGridView1->DataSource = theSet1;

		//this->dataGridView1->DataMember = "Test";	// ָ��Ҫ�򿪵ı�

		//ֱ��ʹ�ñ�

		DataTable^ table = gcnew DataTable;

		da1->Fill( table );

		this->dataGridView1->DataSource = table;
	}
};
}

