#pragma once

namespace EX63StudentForm {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  获奖情况;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::HelpProvider^  helpProvider1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->获奖情况 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->获奖情况->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(64, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(72, 25);
			this->textBox1->TabIndex = 0;
			this->textBox1->Validated += gcnew System::EventHandler(this, &Form1::On_Validaed);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(344, 32);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(104, 25);
			this->textBox2->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(48, 128);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(128, 152);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"性别";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(24, 96);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(43, 19);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"女";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(24, 40);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(43, 19);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"男";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Location = System::Drawing::Point(304, 128);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(128, 144);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"生源";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(32, 96);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(58, 19);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"外招";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(32, 40);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(58, 19);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"内招";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"姓名";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(280, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"学号";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BeepOnError = true;
			this->maskedTextBox1->Location = System::Drawing::Point(96, 304);
			this->maskedTextBox1->Mask = L"0000-00-00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(152, 25);
			this->maskedTextBox1->TabIndex = 6;
			this->maskedTextBox1->TabStop = false;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &Form1::On_inputRejected);
			this->maskedTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::On_Change);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 304);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 15);
			this->label3->TabIndex = 7;
			this->label3->Text = L"出生日期";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Location = System::Drawing::Point(392, 304);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(64, 25);
			this->numericUpDown1->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(328, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 15);
			this->label4->TabIndex = 9;
			this->label4->Text = L"现年龄";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->numericUpDown5);
			this->groupBox3->Controls->Add(this->numericUpDown4);
			this->groupBox3->Controls->Add(this->numericUpDown3);
			this->groupBox3->Controls->Add(this->numericUpDown2);
			this->groupBox3->Location = System::Drawing::Point(56, 368);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(504, 80);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"入学成绩";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(392, 48);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 15);
			this->label8->TabIndex = 7;
			this->label8->Text = L"总分";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(280, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 15);
			this->label7->TabIndex = 6;
			this->label7->Text = L"外语";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(152, 48);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 15);
			this->label6->TabIndex = 5;
			this->label6->Text = L"数学";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 15);
			this->label5->TabIndex = 4;
			this->label5->Text = L"语文";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Enabled = false;
			this->numericUpDown5->Location = System::Drawing::Point(440, 40);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(56, 25);
			this->numericUpDown5->TabIndex = 3;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(320, 40);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(56, 25);
			this->numericUpDown4->TabIndex = 2;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &Form1::On_Numchange3);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(192, 40);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(56, 25);
			this->numericUpDown3->TabIndex = 1;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &Form1::On_Numchange2);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(48, 40);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(56, 25);
			this->numericUpDown2->TabIndex = 0;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Form1::On_Numchange);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->checkBox4);
			this->groupBox4->Controls->Add(this->checkBox3);
			this->groupBox4->Controls->Add(this->checkBox2);
			this->groupBox4->Controls->Add(this->checkBox1);
			this->groupBox4->Location = System::Drawing::Point(72, 464);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(496, 72);
			this->groupBox4->TabIndex = 11;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"兴趣爱好";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(384, 32);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(59, 19);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"武术";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(272, 32);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(59, 19);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"美术";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(152, 32);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(59, 19);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"音乐";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(24, 32);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(59, 19);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"足球";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(568, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(184, 208);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// 获奖情况
			// 
			this->获奖情况->Controls->Add(this->textBox3);
			this->获奖情况->Location = System::Drawing::Point(56, 552);
			this->获奖情况->Name = L"获奖情况";
			this->获奖情况->Size = System::Drawing::Size(288, 88);
			this->获奖情况->TabIndex = 13;
			this->获奖情况->TabStop = false;
			this->获奖情况->Text = L"获奖情况";
			this->获奖情况->Enter += gcnew System::EventHandler(this, &Form1::获奖情况_Enter);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(24, 32);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(232, 50);
			this->textBox3->TabIndex = 0;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::On_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(392, 576);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(48, 25);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(392, 616);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(48, 25);
			this->textBox5->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label9->Location = System::Drawing::Point(344, 584);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 15);
			this->label9->TabIndex = 16;
			this->label9->Text = L"行数";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label10->Location = System::Drawing::Point(344, 616);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(37, 15);
			this->label10->TabIndex = 17;
			this->label10->Text = L"字数";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(632, 456);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 64);
			this->button1->TabIndex = 18;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::On_OK);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(632, 576);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 56);
			this->button2->TabIndex = 19;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// helpProvider1
			// 
			this->helpProvider1->Tag = L"按F1键显示";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(825, 704);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->获奖情况);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"学生基本情况";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->获奖情况->ResumeLayout(false);
			this->获奖情况->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void maskedTextBox1_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
	}


private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void 获奖情况_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	this->radioButton1->Checked = true;
	this->radioButton3->Checked = true;
	this->checkBox1->Checked = true;
	this->helpProvider1->SetShowHelp(this->textBox1, true);
	this->helpProvider1->SetHelpString(this->textBox1, "在此输入学生姓名");
	this->toolTip1->SetToolTip(this->textBox1, "在此文本框中输入学生姓名");
	this->numericUpDown1->Value = (int::Parse(DateTime::Now.ToString(L"yyyy"))) -
		(int::Parse((maskedTextBox1->Text->ToString())->Substring(0, 4)));
	this->numericUpDown5->Value = this->numericUpDown2->Value;
	+this->numericUpDown3->Value;
	+this->numericUpDown4->Value;
}
private: System::Void On_Validaed(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Text = this->textBox1->Text->Trim();
	if (this->textBox1->Text->Length<1)
		this->errorProvider1->SetError(this->textBox1, "学生姓名不能为空，要输入姓名!");
	else
		this->errorProvider1->SetError(this->textBox1, "");

}
private: System::Void On_Change(System::Object^  sender, System::EventArgs^  e) {
	String^str1 = DateTime::Now.Year.ToString("");
	String^ str2 = maskedTextBox1->Text->ToString()->Substring(0, 4);
	if (str2->Trim()->Length >= 4)
		this->numericUpDown1->Value = Convert::ToInt16(str1) - Convert::ToInt16(str2);
}
private: System::Void On_inputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
	this->toolTip1->ToolTipTitle = "输入格式错误";
	toolTip1->Show("在日期中只允许(0-9)的数字", maskedTextBox1, maskedTextBox1->Location, 5000);
}
private: System::Void On_Numchange(System::Object^  sender, System::EventArgs^  e) {
	this->numericUpDown5->Value = this->numericUpDown2->Value;
	+this->numericUpDown3->Value;
	+this->numericUpDown4->Value;
}
private: System::Void On_Numchange2(System::Object^  sender, System::EventArgs^  e) {
	this->numericUpDown5->Value = this->numericUpDown2->Value;

	+this->numericUpDown3->Value;
			+ this->numericUpDown4->Value;
}
private: System::Void On_Numchange3(System::Object^  sender, System::EventArgs^  e) {
	this->numericUpDown5->Value = this->numericUpDown2->Value;
	+this->numericUpDown3->Value;
	+this->numericUpDown4->Value;
}
private: System::Void On_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	int strNum = 0;
	int lineNum = textBox3->Lines->Length;
	array<String ^>^ tempArray = gcnew array<String ^>(lineNum);

	tempArray = this->textBox3->Lines;

	for (int i = 0; i<lineNum; i++)

		strNum += tempArray[i]->Length;

	this->textBox4->Text = lineNum.ToString();

	this->textBox5->Text = strNum.ToString();
}
private: System::Void On_OK(System::Object^  sender, System::EventArgs^  e) {
	String^ str = L"学生姓名：" + this->textBox1->Text + L"\n";
	str = String::Concat(str, L"学生学号：", this->textBox2->Text, L"\n");
	str = String::Concat(str, L"性别是：");

	// 获取性别的选项

	for (int i = 0; i<this->groupBox1->Controls->Count; i++)
	{
		RadioButton^ btn = safe_cast<RadioButton^>(groupBox1->Controls[i]);
		if (btn->Checked){
			str = String::Concat(str, btn->Text, L"\n");
			break;
		}
	}

	str = String::Concat(str, L"生源是：");
	// 获取生源的选项
	array<RadioButton^>^ btn2s = gcnew array<RadioButton^>{
	radioButton3, radioButton4 };
	for each (RadioButton^btn in btn2s)

	{

		if (btn->Checked) {

			str = String::Concat(str, btn->Text, L"\n");

			break;

		}

	}

	str = String::Concat(str, L"现年龄：", this->numericUpDown1->Value, L"\n");
	str = String::Concat(str, L"入学总分为：", this->numericUpDown5->Value, L"\n");
	str = String::Concat(str, L"兴趣爱好主要是：\n");

	// 获取兴趣爱好的选项

	for (int i = 0; i<this->groupBox4->Controls->Count; i++)

	{
		CheckBox^ check = safe_cast<CheckBox^>(groupBox4->Controls[i]);

		if (check->Checked) {

			str = String::Concat(str, L"\t", check->Text, L"\n");
		}
	}

	str = String::Concat(str, L"获奖情况为：\n", this->textBox3->Text, L"\n");

	// 最后结果显示

	MessageBox::Show(str, L"学生的基本情况");
}
};
}

