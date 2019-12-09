#pragma once

namespace EX61 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// LoginForm ժҪ
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  checkBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(67, 215);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(447, 106);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��¼���";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &LoginForm::groupBox1_Enter);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(324, 79);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(73, 19);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"����Ա";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(185, 79);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(88, 19);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"�߼��û�";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(26, 79);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(88, 19);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"��ͨ�û�";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(63, 366);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 65);
			this->button1->TabIndex = 1;
			this->button1->Text = L"��¼";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(252, 366);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 65);
			this->button2->TabIndex = 2;
			this->button2->Text = L"ȡ��";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(433, 366);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 65);
			this->button3->TabIndex = 3;
			this->button3->Text = L"�˳�";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LoginForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(216, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(197, 25);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(218, 110);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(194, 25);
			this->textBox2->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(136, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 15);
			this->label1->TabIndex = 6;
			this->label1->Text = L"�û���";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(139, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 7;
			this->label2->Text = L"����";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(433, 112);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(89, 19);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"��ʾ����";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::checkBox1_CheckedChanged);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 470);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoginForm";
			this->Text = L"�û���¼";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ strLogon = L"����ĵ�¼��Ϣ:\r\n";
	if (textBox1->Text == String::Empty) strLogon += L"δ�����û���\r\n";
	else strLogon += textBox1->Text + L"\r\n";
	if (textBox2->Text == String::Empty) strLogon += L"δ�����¼����\r\n";
	else strLogon += textBox2->Text + L"\r\n";
	strLogon += L"��¼���: ";
	if (radioButton1->Checked) strLogon += L"��ͨ�û�\r\n";
	else if (radioButton2->Checked) strLogon += L"�߼��û�\r\n";
	else if (radioButton3->Checked) strLogon += L"����Ա\r\n";
	else strLogon += L"δ֪���\r\n";
	MessageBox::Show(strLogon);         //��ʾ�û��������Ϣ
	if (textBox1->Text != "admin" || textBox2->Text != "123")

	{
		MessageBox::Show("û�д��û������������");

		this->DialogResult = System::Windows::Forms::DialogResult::Cancel;

	}

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	
		this->Close();
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox2->PasswordChar = checkBox1->Checked ? 0 : '*';   // ȡ�������������ַ�
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Clear();                  //����û�����Ϣ
	textBox2->Clear();                  //��յ�¼����
	checkBox1->Checked = false;         //����ʾ����
	radioButton1->Checked = true;       // Ĭ��Ϊ��ͨ�û����

}
};
}
