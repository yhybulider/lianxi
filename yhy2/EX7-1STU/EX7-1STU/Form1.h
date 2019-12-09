#pragma once

namespace EX71STU {

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  ListBox1;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ListBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"学号";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(25, 58);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(134, 23);
			this->comboBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"学生成绩记录";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// ListBox1
			// 
			this->ListBox1->FormattingEnabled = true;
			this->ListBox1->ItemHeight = 15;
			this->ListBox1->Location = System::Drawing::Point(25, 206);
			this->ListBox1->Name = L"ListBox1";
			this->ListBox1->Size = System::Drawing::Size(197, 184);
			this->ListBox1->TabIndex = 4;
			this->ListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::姓名_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Location = System::Drawing::Point(420, 131);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 78);
			this->button1->TabIndex = 5;
			this->button1->Text = L"添加";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Location = System::Drawing::Point(420, 255);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 75);
			this->button2->TabIndex = 6;
			this->button2->Text = L"删除";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->Location = System::Drawing::Point(420, 375);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 77);
			this->button3->TabIndex = 7;
			this->button3->Text = L"修改";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(570, 523);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ListBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"学生成绩操作";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 姓名_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

