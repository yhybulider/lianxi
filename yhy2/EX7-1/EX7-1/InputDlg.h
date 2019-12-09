#pragma once
#include "StuScore.h"
namespace EX71 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// InputDlg 摘要
	/// </summary>
	public ref class InputDlg : public System::Windows::Forms::Form
	{
	public:
		InputDlg(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~InputDlg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::TextBox^  textBox1;
	private:
	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	public: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	public: System::Windows::Forms::NumericUpDown^  numericUpDown3;





	private: System::Windows::Forms::Label^  label6;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(32, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"姓名：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(32, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"学号：";
			this->label2->Click += gcnew System::EventHandler(this, &InputDlg::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(32, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"成绩1：";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(32, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"成绩2：";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(32, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 15);
			this->label5->TabIndex = 4;
			this->label5->Text = L"成绩3：";
			this->label5->Click += gcnew System::EventHandler(this, &InputDlg::label5_Click);
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Location = System::Drawing::Point(56, 316);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 47);
			this->button1->TabIndex = 5;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InputDlg::On_OK);
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Location = System::Drawing::Point(234, 316);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 47);
			this->button2->TabIndex = 6;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(118, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 25);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(118, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 25);
			this->textBox2->TabIndex = 9;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(118, 131);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 25);
			this->numericUpDown1->TabIndex = 10;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(118, 177);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 25);
			this->numericUpDown2->TabIndex = 11;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(118, 219);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 25);
			this->numericUpDown3->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Location = System::Drawing::Point(32, 282);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(300, 2);
			this->label6->TabIndex = 13;
			// 
			// InputDlg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(367, 388);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"InputDlg";
			this->Text = L"学生成绩输入";
			this->Load += gcnew System::EventHandler(this, &InputDlg::On_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}

public: StuScore ^theScore;
private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
	theScore = gcnew StuScore;
}
private: System::Void On_OK(System::Object^  sender, System::EventArgs^  e) {
	theScore->strName = this->textBox1->Text->Trim();
	theScore->strID = this->textBox2->Text->Trim();
	theScore->fScore[0] = Single::Parse(this->numericUpDown1->Text);
	theScore->fScore[1] = Single::Parse(this->numericUpDown2->Text);
	theScore->fScore[2] = Single::Parse(this->numericUpDown3->Text);
}
};
}
