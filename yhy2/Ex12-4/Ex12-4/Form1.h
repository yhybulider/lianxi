#pragma once

namespace Ex124 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;

	private: System::Windows::Forms::ListView^  listView1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Data::DataSet^  dataSet1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DateTimePicker^  birthday1;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbDeleteCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->birthday1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->birthday1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(701, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(305, 484);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(80, 183);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 25);
			this->numericUpDown1->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 193);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 15);
			this->label7->TabIndex = 17;
			this->label7->Text = L"ѧ��";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(75, 104);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(44, 19);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"��";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(86, 263);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 51);
			this->textBox4->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(79, 218);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 25);
			this->textBox3->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(75, 65);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 25);
			this->textBox2->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 11);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 11;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(175, 413);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(79, 47);
			this->button5->TabIndex = 10;
			this->button5->Text = L"�˳�";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::On_ExitOK);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(50, 413);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 47);
			this->button4->TabIndex = 9;
			this->button4->Text = L"��ѯ";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(212, 340);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 32);
			this->button3->TabIndex = 8;
			this->button3->Text = L"�޸�";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::On_Change);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(125, 340);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 32);
			this->button2->TabIndex = 7;
			this->button2->Text = L"ɾ��";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::On_Del);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 340);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 6;
			this->button1->Text = L"���";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::On_Add);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 263);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 15);
			this->label6->TabIndex = 5;
			this->label6->Text = L"��ע ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 228);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 15);
			this->label5->TabIndex = 4;
			this->label5->Text = L"רҵ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"�Ա�";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ѧ�ţ�";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����:";
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT  \r\n * FROM      XSB";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\admin\\Desktop\\student.mdb;J"
				L"et OLEDB:Database Password=123";
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(6) {
				(gcnew System::Data::Common::DataColumnMapping(L"ѧ��",
					L"ѧ��")), (gcnew System::Data::Common::DataColumnMapping(L"����", L"����")), (gcnew System::Data::Common::DataColumnMapping(L"�Ա�",
					L"�Ա�")), (gcnew System::Data::Common::DataColumnMapping(L"��������", L"��������")), (gcnew System::Data::Common::DataColumnMapping(L"����",
					L"����")), (gcnew System::Data::Common::DataColumnMapping(L"סַ", L"סַ"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"XSB", __mcTemp__1))
			});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand;
			// 
			// oleDbDeleteCommand
			// 
			this->oleDbDeleteCommand->CommandText = resources->GetString(L"oleDbDeleteCommand.CommandText");
			this->oleDbDeleteCommand->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(11) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_ѧ��",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"ѧ��", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_����",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"����", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_����",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"����", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_�Ա�",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"�Ա�", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_�Ա�",
					System::Data::OleDb::OleDbType::Boolean, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"�Ա�", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_��������",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"��������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_��������",
					System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"��������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_����", System::Data::OleDb::OleDbType::Integer,
					0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"����", System::Data::DataRowVersion::Original,
					true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_����", System::Data::OleDb::OleDbType::VarWChar, 0,
					System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"����", System::Data::DataRowVersion::Original,
					nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_סַ", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
					static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"סַ", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_סַ",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"סַ", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbInsertCommand
			// 
			this->oleDbInsertCommand->CommandText = L"INSERT INTO `XSB` (`ѧ��`, `����`, `�Ա�`, `��������`, `����`, `סַ`) VALUES (\?, \?, \?, \?, \?, \?"
				L")";
			this->oleDbInsertCommand->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(6) {
				(gcnew System::Data::OleDb::OleDbParameter(L"ѧ��",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"ѧ��")), (gcnew System::Data::OleDb::OleDbParameter(L"����", System::Data::OleDb::OleDbType::VarWChar,
					0, L"����")), (gcnew System::Data::OleDb::OleDbParameter(L"�Ա�", System::Data::OleDb::OleDbType::Boolean, 0, L"�Ա�")), (gcnew System::Data::OleDb::OleDbParameter(L"��������",
					System::Data::OleDb::OleDbType::Date, 0, L"��������")), (gcnew System::Data::OleDb::OleDbParameter(L"����", System::Data::OleDb::OleDbType::VarWChar,
					0, L"����")), (gcnew System::Data::OleDb::OleDbParameter(L"סַ", System::Data::OleDb::OleDbType::VarWChar, 0, L"סַ"))
			});
			// 
			// oleDbUpdateCommand
			// 
			this->oleDbUpdateCommand->CommandText = resources->GetString(L"oleDbUpdateCommand.CommandText");
			this->oleDbUpdateCommand->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(17) {
				(gcnew System::Data::OleDb::OleDbParameter(L"ѧ��",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"ѧ��")), (gcnew System::Data::OleDb::OleDbParameter(L"����", System::Data::OleDb::OleDbType::VarWChar,
					0, L"����")), (gcnew System::Data::OleDb::OleDbParameter(L"�Ա�", System::Data::OleDb::OleDbType::Boolean, 0, L"�Ա�")), (gcnew System::Data::OleDb::OleDbParameter(L"��������",
					System::Data::OleDb::OleDbType::Date, 0, L"��������")), (gcnew System::Data::OleDb::OleDbParameter(L"����", System::Data::OleDb::OleDbType::VarWChar,
					0, L"����")), (gcnew System::Data::OleDb::OleDbParameter(L"סַ", System::Data::OleDb::OleDbType::VarWChar, 0, L"סַ")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ѧ��",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"ѧ��", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_����",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"����", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_����",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"����", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_�Ա�",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"�Ա�", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_�Ա�",
					System::Data::OleDb::OleDbType::Boolean, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"�Ա�", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_��������",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"��������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_��������",
					System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"��������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_����", System::Data::OleDb::OleDbType::Integer,
					0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"����", System::Data::DataRowVersion::Original,
					true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_����", System::Data::OleDb::OleDbType::VarWChar, 0,
					System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"����", System::Data::DataRowVersion::Original,
					nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_סַ", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
					static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"סַ", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_סַ",
					System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"סַ", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// listView1
			// 
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(79, 75);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(514, 333);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::On_SelChanged);
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			// 
			// birthday1
			// 
			this->birthday1->Location = System::Drawing::Point(75, 152);
			this->birthday1->Name = L"birthday1";
			this->birthday1->Size = System::Drawing::Size(200, 25);
			this->birthday1->TabIndex = 19;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 533);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::On_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 private: System::Void DispView(DataTable^ table)

			 {
				 this->listView1->Columns->Clear();
				 this->listView1->Items->Clear();
				 if (table == nullptr) return;
				 ListViewItem^ item;
				 for each (DataRow^ row in table->Rows)
				 {
					 if (row->RowState != DataRowState::Deleted)// ��������ɾ������
					 {
						 item = gcnew ListViewItem(row[0]->ToString());
						 for (int i = 1; i<table->Columns->Count; i++)
							 item->SubItems->Add(row[i]->ToString());
					 }
					 listView1->Items->Add(item);
				 }
				 // ����ListView�б�ͷ

				 for each (DataColumn^ col in table->Columns)

					 listView1->Columns->Add(col->Caption, 80);

			 }

private: BindingSource^ binding1;

private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
	// ��ȡ���ݱ�

	oleDbDataAdapter1->Fill(dataSet1, "TheData");

	DataTable^ table1 = dataSet1->Tables["TheData"];

	table1->PrimaryKey = gcnew array<DataColumn^>{ table1->Columns[0] };

	binding1 = gcnew BindingSource(dataSet1, "TheData");

	// ��ʾ������

	DispView(table1);

	// �������󶨵�textBox1

	textBox1->DataBindings->Add(gcnew System::Windows::Forms::Binding(

		"Text", binding1, "����"));

	// ��ѧ�Ű󶨵�textBox2

	textBox2->DataBindings->Add(gcnew System::Windows::Forms::Binding(

		"Text", binding1, "ѧ��"));

	// ���Ա�󶨵�checkBox1

	checkBox1->DataBindings->Add(gcnew System::Windows::Forms::Binding(

		"Checked", binding1, "�Ա�"));

	// ������ʱ��󶨵�birthday1

	birthday1->DataBindings->Add(gcnew System::Windows::Forms::Binding(
		"Value", binding1, "��������"));

	// ��רҵ�󶨵�textBox3

	textBox3->DataBindings->Add(gcnew System::Windows::Forms::Binding(

		"Text", binding1, "רҵ"));

	//����ѧ�ְ󶨵�numericUpDown1

	numericUpDown1->DataBindings->Add(gcnew System::Windows::Forms::Binding(

		"Text", binding1, "��ѧ��"));

	// ����ע�󶨵�textBox4
	textBox4->DataBindings->Add(gcnew System::Windows::Forms::Binding(
		"Text", binding1, "סַ"));
}
private: System::Void On_SelChanged(System::Object^  sender, System::EventArgs^  e) {
	if (listView1->SelectedIndices->Count< 1) return;

	// ����ѡ���б���ʱ��Ҫ�Զ����°󶨵Ŀؼ�����
	int nIndex = listView1->SelectedIndices[0];
	// �ƶ�����α�
	binding1->Position = nIndex;
}
		 private: String ^strStuNO, ^strStuName;

private: System::Boolean CheckValid(System::Void){
	strStuName = this->textBox1->Text->Trim();
	strStuNO = this->textBox2->Text->Trim();
	if (String::IsNullOrEmpty(strStuName))     return false;
	if (String::IsNullOrEmpty(strStuNO))       return false;
	return true;

}
private: System::Void On_Add(System::Object^  sender, System::EventArgs^  e) {
	if (!CheckValid()) return;

	// �ж��Ƿ���ѧ��������ѧ������ͬ�ļ�¼�����У������

	// ʹ��DataView���ж�

	DataTable^ table1 = dataSet1->Tables["TheData"];

	DataView^ view1 = gcnew DataView(table1);

	// ָ���й�������

	view1->RowFilter = String::Format("ѧ��='{0}'", strStuNO);

	if (view1->Count > 0)

	{

		MessageBox::Show("��Ӽ�¼��ѧ�����ظ���", "���ʧ��");

		return;

	}

	// ��ȡ��ǰ�����ɿؼ�ָ��������

	DataRowView^ rowView1 = (DataRowView^)binding1->Current;

	DataRow^   row1 = table1->NewRow();

	// ����ǰ�ؼ����е����ݸ�������

	for (int i = 0; i<table1->Columns->Count; i++)

		row1[i] = rowView1->Row[i];

	table1->Rows->Add(row1);

	// ��ȡ�ؼ��������ݱ�󶨵�ԭ��������

	rowView1->CancelEdit();

	// ��ʾ������

	DispView(table1);
}
private: System::Void On_Del(System::Object^  sender, System::EventArgs^  e) {
	// ɾ����listView1ѡ�е���

	if (listView1->SelectedIndices->Count< 1){

		MessageBox::Show("��������б���ѡ��Ҫɾ���ļ�¼�У�", "��ʾ");

		return;

	}

	int nIndex = listView1->SelectedIndices[0];

	DataTable^ table1 = dataSet1->Tables["TheData"];

	// ����ɾ����ǰ��

	if (nIndex == table1->Rows->Count - 1)

		binding1->MoveFirst();

	else

		binding1->MoveNext();

	table1->Rows[nIndex]->Delete();

	listView1->Items->RemoveAt(nIndex);
}
private: System::Void On_Change(System::Object^  sender, System::EventArgs^  e) {
	if (!CheckValid()) return;

	// ��ȡ��ǰ�����ɿؼ�ָ��������

	DataRowView^ rowView1 = (DataRowView^)binding1->Current;

	// ��listView1ѡ�е���

	if (listView1->SelectedIndices->Count< 1){

		MessageBox::Show("��������б���ѡ��Ҫ�޸ĵļ�¼�У�", "��ʾ");

		rowView1->CancelEdit();

		return;

	}

	rowView1->EndEdit();

	// ��ʾ������

	DispView(dataSet1->Tables["TheData"]);
}


private: System::Void On_ExitOK(System::Object^  sender, System::EventArgs^  e) {
	// �����ǲ����б���ʾ����������������Դ�ģ�����

	DataRowView^ rowView1 = (DataRowView^)binding1->Current;

	rowView1->CancelEdit();

	DataTable^ table1 = dataSet1->Tables["TheData"];

	this->oleDbDataAdapter1->Update(table1);

	table1->AcceptChanges();   // ���Ǳ�֤��������Դ�Ĺؼ�

	this->Close();
}
};
}

