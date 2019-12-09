#pragma once

namespace EX122 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	protected:
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Data::DataSet^  dataSet1;
	private: System::Data::DataTable^  dataTable1;
	private: System::Data::DataColumn^  dataColumn1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
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
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT  学号, 课程号, 成绩\r\nFROM      CJB";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\admin\\Desktop\\student.mdb;J"
				L"et OLEDB:Database Password=123";
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `CJB` (`学号`, `课程号`, `成绩`) VALUES (\?, \?, \?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {
				(gcnew System::Data::OleDb::OleDbParameter(L"学号",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"学号")), (gcnew System::Data::OleDb::OleDbParameter(L"课程号", System::Data::OleDb::OleDbType::VarWChar,
					0, L"课程号")), (gcnew System::Data::OleDb::OleDbParameter(L"成绩", System::Data::OleDb::OleDbType::Single, 0, L"成绩"))
			});
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(3) {
				(gcnew System::Data::Common::DataColumnMapping(L"学号",
					L"学号")), (gcnew System::Data::Common::DataColumnMapping(L"课程号", L"课程号")), (gcnew System::Data::Common::DataColumnMapping(L"成绩",
					L"成绩"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"CJB", __mcTemp__1))
			});
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(1) { this->dataColumn1 });
			cli::array< System::String^ >^ __mcTemp__2 = gcnew cli::array< System::String^  >(1) { L"Column1" };
			this->dataTable1->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {
				(gcnew System::Data::UniqueConstraint(L"Constraint1",
					__mcTemp__2, true))
			});
			this->dataTable1->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) { this->dataColumn1 };
			this->dataTable1->TableName = L"Table1";
			// 
			// dataColumn1
			// 
			this->dataColumn1->AllowDBNull = false;
			this->dataColumn1->ColumnName = L"Column1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(35, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"简单查询";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(155, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"成绩表查询";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(285, 27);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(82, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"多表查询";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(419, 27);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 33);
			this->button4->TabIndex = 3;
			this->button4->Text = L"成绩表编辑";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::On_Edit);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(544, 72);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(342, 275);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"成绩表编辑";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(246, 234);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 8;
			this->button7->Text = L"修改";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::On_Change);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(138, 234);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 7;
			this->button6->Text = L"删除";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::On_Del);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(19, 234);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"添加";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::On_Add);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(93, 171);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 25);
			this->numericUpDown1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(93, 115);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 25);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 25);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"成绩";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"课程号";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"学号";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(35, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(459, 335);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CurrentCellChanged += gcnew System::EventHandler(this, &Form1::On_SelCell);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(988, 489);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"数据库连接";
			this->Load += gcnew System::EventHandler(this, &Form1::On_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
//private: System::Data::DataSet^  dataSet1;  //数据集
//private: System::Data::DataTable^  dataTable1; //数据表
//private: System::Data::DataColumn^  dataColumn1; //数据行
private: bool dbedit = false;  //状态标记
private: String ^strStuNO, ^strCourseNO; //学号，课程号
	private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
		DataTable^ table1 = gcnew DataTable;
		this->oleDbDataAdapter1->Fill(table1);
		this->dataGridView1->DataSource = table1;

	}
private: System::Void On_SelCell(System::Object^  sender, System::EventArgs^  e) {
	// 使dataGridView1控件中当前选中的记录行内容显示在右边的控件中

	// 获取当前行

	DataGridViewRow^ curRow = this->dataGridView1->CurrentRow;
	if (curRow == nullptr) return;
	this->textBox1->Text = curRow->Cells[0]->Value->ToString();
	this->textBox2->Text = curRow->Cells[1]->Value->ToString();
	String^ strValue = curRow->Cells[2]->Value->ToString();
	if (String::IsNullOrEmpty(strValue))
		this->numericUpDown1->Value = Decimal(0.0);
	else
		this->numericUpDown1->Value = Decimal::Parse(strValue);
}
		 private: System::Boolean CheckValid(System::Void){
			 strStuNO = this->textBox1->Text->Trim();
			 strCourseNO = this->textBox2->Text->Trim();
			 if (String::IsNullOrEmpty(strStuNO))return false;
			 if (String::IsNullOrEmpty(strCourseNO))return false;
			 return true;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Text = "简单查询访问";
	this->oleDbDataAdapter1->Fill(dataSet1, "Simple");
	this->dataGridView1->DataSource = dataSet1;
	this->dataGridView1->DataMember = "Simple";


}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Text = "成绩表查询";
	String ^strCmd = "SELECT *FROM成绩表";
	Data::OleDb::OleDbCommand ^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, this->oleDbConnection1);
	this->oleDbDataAdapter1->SelectCommand = cmd;
	oleDbDataAdapter1->Fill(dataSet1, "TestInfo");
	this->dataGridView1->DataSource = dataSet1;
	this->dataGridView1->DataMember = "TestInfo";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	// dataSet1->Clear();
	this->Text = "多表关联查询访问";
	String ^strCmd = L"SELECT   学生表.学号, 学生表.姓名, 课程表.课程号, 成绩表.成绩  FROM((成绩表 INNER JOIN  学生表 ON 成绩表.学号 = 学生表.学号) INNER JOIN  课程表 ON 成绩表.课程号 = 课程表.课程号)";
	// Data::OleDb::OleDbCommand ^ cmd= gcnew Data::OleDb::OleDbCommand(strCmd,this->oleDbConnection1);
	this->oleDbDataAdapter1->SelectCommand->CommandText = strCmd;
	oleDbDataAdapter1->Fill(dataSet1, "TestMInfo");
	this->dataGridView1->DataSource = dataSet1;
	this->dataGridView1->DataMember = "TestMInfo";
}
private: System::Void On_Edit(System::Object^  sender, System::EventArgs^  e) {
	if (!dbedit)

	{
		dbedit = true;
		this->button1->Enabled = false;
		this->button2->Enabled = false;
		this->button3->Enabled = false;
		this->button7->Text = "表浏览";
		button2_Click(nullptr, nullptr);
		this->Text = "成绩表编辑";
	}

	else

	{

		dbedit = false;
		this->button1->Enabled = true;
		this->button2->Enabled = true;
		this->button3->Enabled = true;
		this->button7->Text = "表编辑";

	}
}

private: System::Void On_Add(System::Object^  sender, System::EventArgs^  e) {
	if (!CheckValid()) return;

	// 判断是否有学生号和课程号都相同的记录，若有，则不添加

	String^ strCmd = String::Format("SELECT * FROM 成绩表 WHERE 学号 = '{0}' AND 课程号 = '{1}'",strStuNO, strCourseNO );
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ selectCmd = gcnew Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);

	// 执行操作

	this->oleDbConnection1->Open();
	Object^ oRes = selectCmd->ExecuteScalar();
	this->oleDbConnection1->Close();
	if (oRes)
	{
		MessageBox::Show("添加记录有重复！", "添加失败");
		return;
	}
	// 添加记录
	try {
		strCmd = String::Format("INSERT INTO CJB(学号,课程号,成绩)\
			VALUES('{0}', '{1}', { 2 })", strStuNO,  strCourseNO, numericUpDown1->Value );
			// 创建可执行命令
			Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);
		// 执行操作
		this->oleDbConnection1->Open();
		cmd->ExecuteNonQuery();
		this->oleDbConnection1->Close();
		// 显示结果
		DataTable^ table1 = gcnew DataTable;
		this->oleDbDataAdapter1->Fill(table1);
		this->dataGridView1->DataSource = table1;
	}
	catch (Data::OleDb::OleDbException^ e)

	{
		MessageBox::Show(e->Message, "错误");
	}
}
private: System::Void On_Del(System::Object^  sender, System::EventArgs^  e) {
	if (!CheckValid()) return;

	// 删除记录
	try {

		String^ strCmd = String::Format("DELETE FROM 成绩表 WHERE 学号 = '{0}' AND 课程号 = '{1}'",strStuNO, strCourseNO );
			// 创建可执行命令
			Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);
		// 执行操作

		this->oleDbConnection1->Open();
		cmd->ExecuteNonQuery();
		this->oleDbConnection1->Close();
		// 显示结果

		DataTable^ table1 = gcnew DataTable;
		this->oleDbDataAdapter1->Fill(table1);
		this->dataGridView1->DataSource = table1;
	}
	catch (Data::OleDb::OleDbException^ e)
	{
		MessageBox::Show(e->Message, "错误");

	}
}

private: System::Void On_Change(System::Object^  sender, System::EventArgs^  e) {
	if (!CheckValid()) return;

	// 修改记录

	try {

		String^ strCmd = String::Format("UPDATE 成绩表 SET 成绩 = { 2 } WHERE 学号 = '{0}' AND 课程号 = '{1}'", strStuNO, strCourseNO,  
			this->numericUpDown1->Value);
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);
		// 执行操作
		this->oleDbConnection1->Open();
		cmd->ExecuteNonQuery();
		this->oleDbConnection1->Close();
		// 显示结果
		DataTable^ table1 = gcnew DataTable;
		this->oleDbDataAdapter1->Fill(table1);
		this->dataGridView1->DataSource = table1;
	}
	catch (Data::OleDb::OleDbException^ e)
	{
		MessageBox::Show(e->Message, "错误");

	}
}
};
}

