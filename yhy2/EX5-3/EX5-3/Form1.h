#pragma once
#include"HelpFrom.h"
#include"GameForm.h"
namespace EX53 {

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	protected:

	protected:

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(32, 269);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"游戏说明";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::On_Help);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(245, 269);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"开始游戏";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::On_Game);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 357);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"主窗体";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void On_Help(System::Object^  sender, System::EventArgs^  e) {
		HelpFrom^thefrm = gcnew HelpFrom();
		thefrm->ShowDialog();
	}
	private: System::Void On_Game(System::Object^  sender, System::EventArgs^  e) {
		GameForm^thefrm = gcnew GameForm();
		thefrm->ptMainForm = this->Location;
		thefrm->Show();
	}
	};
}

