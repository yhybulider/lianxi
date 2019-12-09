#pragma once

namespace My82message {

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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label4;




	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(235, 55);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(452, 292);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->radioButton2);
			this->tabPage1->Controls->Add(this->radioButton1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->dateTimePicker1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(444, 263);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"基本情况";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(157, 108);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 25);
			this->textBox2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(157, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 9;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(157, 219);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 25);
			this->dateTimePicker1->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"出生日期";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 182);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"性别";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"呢称";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"性别";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->maskedTextBox2);
			this->tabPage2->Controls->Add(this->maskedTextBox1);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(444, 263);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"联系方式";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(164, 189);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 25);
			this->textBox6->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(164, 131);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 25);
			this->textBox5->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(49, 189);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 15);
			this->label8->TabIndex = 3;
			this->label8->Text = L"联系地址";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(49, 131);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 15);
			this->label7->TabIndex = 2;
			this->label7->Text = L"电子邮件";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(49, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 15);
			this->label6->TabIndex = 1;
			this->label6->Text = L"移动电话";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(49, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 15);
			this->label5->TabIndex = 0;
			this->label5->Text = L"联系电话";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->textBox8);
			this->tabPage3->Controls->Add(this->textBox7);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(444, 263);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"单位信息";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &Form1::tabPage3_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(196, 185);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 25);
			this->textBox10->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(196, 128);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 25);
			this->textBox9->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(196, 77);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 25);
			this->textBox8->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(196, 29);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 25);
			this->textBox7->TabIndex = 4;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(60, 185);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 15);
			this->label12->TabIndex = 3;
			this->label12->Text = L"单位地址";
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(60, 128);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(61, 15);
			this->label11->TabIndex = 2;
			this->label11->Text = L"邮   编";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(60, 77);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 15);
			this->label10->TabIndex = 1;
			this->label10->Text = L"单位电话";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(60, 29);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 15);
			this->label9->TabIndex = 0;
			this->label9->Text = L"单位名称";
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(3, 21);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(192, 124);
			this->listBox1->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 65);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(198, 148);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"所有联系人";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 473);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 51);
			this->button1->TabIndex = 3;
			this->button1->Text = L"删除";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(324, 473);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 52);
			this->button2->TabIndex = 4;
			this->button2->Text = L"添加";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(520, 473);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 52);
			this->button3->TabIndex = 5;
			this->button3->Text = L"修改";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(133, 180);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(43, 19);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"男";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(281, 178);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(43, 19);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"女";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(183, 22);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(100, 25);
			this->maskedTextBox1->TabIndex = 8;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(183, 77);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(100, 25);
			this->maskedTextBox2->TabIndex = 9;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(759, 606);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"联系人信息管理";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	public:
		Form1(void)
		{
			InitializeComponent();
			this->contactList = gcnew ArrayList();
			…
				///必需的设计器变量。
				ArrayList^contactList;
		}

private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//添加
	String^ strText = this->textBox1->Text->Trim();
	if (String::IsNullOrEmpty(strText))
	{
		MessageBox::Show(L"姓名不能为空！", L"提示");
		return;
	}
	int nIndex = -1;
	nIndex = this->listBox1->FindString(strText);//FindStringExact( strText );
	if (nIndex >= 0)   // 有重复项
		MessageBox::Show(String::Format("列表项[{0}]已添加过了！", strText), L"提示");
	else
	{
		Contact^ contact = gcnew Contact();
		contact->contactName = this->textBox1->Text;          // 姓名
		contact->contactNick = this->textBox2->Text;          // 昵称
		contact->contactSex = this->radioButton1->Checked; // 性别,男为true
		contact->contactBirth = this->dateTimePicker1->Value;    // 出生日期
		contact->contactPhone = this->maskedTextBox1->Text;    // 联系电话
		contact->contactMobile = this->maskedTextBox2->Text;    // 移动电话
		contact->contactEmail = this->textBox3->Text;            // 电子邮件
		contact->contactAddress = this->textBox4->Text;           // 联系地址
		contact->companyName = this->textBox5->Text;            // 单位名称
		contact->companyPhone = this->maskedTextBox3->Text;      // 单位电话
		contact->companyPost = this->maskedTextBox4->Text;     // 邮编
		contact->companyAddress = this->textBox6->Text;          // 单位地址
		this->contactList->Add(contact);              //添加到ArrayList中
		intindex = this->listBox1->Items->Add(contact->contactName); // 添加到ListBox中
		this->listBox1->SelectedIndex = index;               // 设置为选中状态
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {            //删除
	if (this->listBox1->SelectedIndex == -1) return;           // 未选择联系人
	String^ contactName = listBox1->Items[listBox1->SelectedIndex]->ToString();
	for (int i = 0; i<contactList->Count; i++) {                 // 查找该联系人
		Contact^ contact = safe_cast<Contact^>(contactList[i]);
		if (contactName == contact->contactName) {
			contactList->RemoveAt(i); break;              // 删除该联系人
		}
	}
	this->listBox1->Items->RemoveAt(listBox1->SelectedIndex); // 从ListBox中删除该项
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {            //修改
	button1_Click(sender, e);                     // 删除原信息
	button2_Click(sender, e);                     // 重新添加该信息

}
};
}

