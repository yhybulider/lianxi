#pragma once
#include "LoginForm.h"
namespace EX61 {

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
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	protected:
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(12, 22);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(67, 15);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"暨南大学";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			this->linkLabel1->Click += gcnew System::EventHandler(this, &Form1::L1_OnClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->LinkArea = System::Windows::Forms::LinkArea(0, 4);
			this->linkLabel2->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel2->Location = System::Drawing::Point(85, 23);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(271, 25);
			this->linkLabel2->TabIndex = 1;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"珠海校区 电气工程学院 电气自动化";
			this->linkLabel2->UseCompatibleTextRendering = true;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::L2_OnClicked);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(32, 102);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(1044, 441);
			this->webBrowser1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(375, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 25);
			this->button1->TabIndex = 3;
			this->button1->Text = L"刷新";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(453, 23);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 25);
			this->button2->TabIndex = 4;
			this->button2->Text = L"后退";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(532, 22);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(71, 26);
			this->button3->TabIndex = 5;
			this->button3->Text = L"前进";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Onclick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(609, 23);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(73, 25);
			this->button4->TabIndex = 6;
			this->button4->Text = L"主页";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1121, 577);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Name = L"Form1";
			this->Text = L" 网页链接";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void webBrowser1_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	}
private: System::Void L1_OnClicked(System::Object^  sender, System::EventArgs^  e) {
	this->linkLabel1->LinkVisited = true;

	//System::Diagnostics::Process::Start("IExplore.exe" );

	System::Diagnostics::Process::Start("IExplore.exe", "www.jnu.edu.cn");
}
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
}
private: System::Void L2_OnClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	int i = this->linkLabel2->Links->IndexOf(e->Link);
	this->linkLabel2->Links[i]->Visited = true;
	// 获取当前用户点击的超级链接内容
	String^ target = dynamic_cast<String^>(e->Link->LinkData);

	if (!String::IsNullOrEmpty(target))

	{
		target = target->Trim();
		// 如果是一个URL，则打开IE并访问它，否则弹出一个消息对话框
		if (target->StartsWith(L"zh") || target->StartsWith(L"eic")){
			//System::Diagnostics::Process::Start( "IExplore.exe" );
			System::Diagnostics::Process::Start("IExplore.exe", target);
		}
		else {
			MessageBox::Show(target, target);
		}
	}
}
private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
	LoginForm^theform = gcnew LoginForm;
	if (theform->ShowDialog() != System::Windows::Forms::DialogResult::OK)
	{
		this->Close();
	}
	this->linkLabel2->Links[0]->LinkData = "zh.jnu.edu.cn";
	this->linkLabel2->Links->Add(5, 6, "zh.jnu.edu.cn");
	this->linkLabel2->Links->Add(12, 5, "电气自动化");
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	webBrowser1->GoBack();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	webBrowser1->Refresh();
}
private: System::Void button3_Onclick(System::Object^  sender, System::EventArgs^  e) {
	webBrowser1->GoForward();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	webBrowser1->GoHome();
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

