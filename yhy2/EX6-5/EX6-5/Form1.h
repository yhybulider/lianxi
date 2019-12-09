#pragma once

namespace EX65 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Net;
	using namespace System::Text;
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
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::GroupBox^  groupBox1;



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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(246, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"天时地利人和";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(101, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(101, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 15);
			this->label5->TabIndex = 4;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(205, 67);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 15);
			this->label6->TabIndex = 5;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 111);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 15);
			this->label7->TabIndex = 6;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(101, 111);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 15);
			this->label8->TabIndex = 7;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(205, 111);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 15);
			this->label9->TabIndex = 8;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(295, 111);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 15);
			this->label10->TabIndex = 9;
			this->label10->Text = L"label10";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkArea = System::Windows::Forms::LinkArea(2, 5);
			this->linkLabel1->Location = System::Drawing::Point(177, 292);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(83, 22);
			this->linkLabel1->TabIndex = 10;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"中国气象局";
			this->linkLabel1->UseCompatibleTextRendering = true;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->LinkArea = System::Windows::Forms::LinkArea(2, 7);
			this->linkLabel2->Location = System::Drawing::Point(365, 292);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(145, 22);
			this->linkLabel2->TabIndex = 11;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"中国旅游天气网链接";
			this->linkLabel2->UseCompatibleTextRendering = true;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel2_LinkClicked);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(12, 335);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(882, 312);
			this->webBrowser1->TabIndex = 12;
			this->webBrowser1->Url = (gcnew System::Uri(L"http://www.weather.com.cn/", System::UriKind::Absolute));
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(29, 292);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"天气";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::click_tianqi);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(622, 47);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 14;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Form1::monthCalendar1_DateChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(694, 292);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 25);
			this->dateTimePicker1->TabIndex = 15;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Form1::dateTimePicker1_ValueChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->groupBox1->Location = System::Drawing::Point(24, 47);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(454, 190);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"天气";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(939, 659);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"                                                                               天气"
				L"预报天时地利人和";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	this->linkLabel1->LinkVisited = true;
	System::Diagnostics::Process::Start("https://www.tianqi.com/");
}
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	this->linkLabel1->LinkVisited = true;
	System::Diagnostics::Process::Start("IExplore.exe", "http://www.tourweather.com.cn/");
}
private: System::Void click_tianqi(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		WebRequest^request = WebRequest::Create("https://www.tianqi.com/guangzhou/");
		WebResponse^response = request->GetResponse();

		StreamReader^reader = gcnew StreamReader(response->GetResponseStream(),

			Encoding::GetEncoding("UTF-8"));

		String^webHtmlStr = reader->ReadToEnd();

		reader->Close();
		response->Close();

		String^buff1 = webHtmlStr->Substring(webHtmlStr->IndexOf("<dt><img src=\"http://content.pic.tianqistatic.com/content/20170919/307c11c79e3d08e0abdf9cb57b731ea5.jpg\" alt=\"广州天气预报\"></dt>"));

		String^buff2 = webHtmlStr->Substring(webHtmlStr->IndexOf("</i></p>"));

		String^buff3 = webHtmlStr->Substring(webHtmlStr->IndexOf("<dd class=\"shidu\">"));

		String^buff4 = webHtmlStr->Substring(webHtmlStr->IndexOf("<dd class=\"kongqi\">"));

		label2->Text = buff1->Substring(buff1->IndexOf("<h2>"), buff1->IndexOf("</h2>") - buff1->IndexOf("<h2>"))->Split('>')[1];

		String^s = buff1->Substring(buff1->IndexOf("<dd class=\"week\">"), buff1->IndexOf("<dd class=\"weather\">") - buff1->IndexOf("<dd class =\"week\">"))->Split('>')[1];

		label3->Text = s = s->Substring(0, s->Length - 4);

		label4->Text = "当前温度：" + buff1->Substring(buff1->IndexOf("<b>"), buff1->IndexOf("</b>") - buff1->IndexOf("<b>"))->Split('>')[1] + "℃";

		label5->Text = "天气状况：" + buff2->Substring(buff2->IndexOf("<b>"), buff2->IndexOf("</b>") - buff2->IndexOf("<b>"))->Split('>')[1];

		label6->Text = "当天温度范围：" + buff2->Substring(buff2->IndexOf("</b>"), buff2->IndexOf("</span>") - buff2->IndexOf("</b>"))->Split('>')[1];

		label7->Text = "当前" + buff3->Substring(buff3->IndexOf("<b>"), buff3->IndexOf("</b>") - buff3->IndexOf("<b>"))->Split('>')[1];

		label8->Text = buff4->Substring(buff4->IndexOf("<h6>"), buff4->IndexOf("</h6>") - buff4->IndexOf("<h6>"))->Split('>')[1];

		label9->Text = buff4->Substring(buff4->IndexOf("<span>"), buff4->IndexOf("<br />") - buff4->IndexOf("<span>"))->Split('>')[1];

		label10->Text = buff4->Substring(buff4->IndexOf("<br />"), buff4->IndexOf("</span>") - buff4->IndexOf("<br />"))->Split('>')[1];
	}

	catch (Exception ^e){
		MessageBox::Show(e->Message);

}
}
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	this->dateTimePicker1->Value = e->Start;
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	monthCalendar1->SelectionStart = dateTimePicker1->Value;
	monthCalendar1->SelectionEnd = dateTimePicker1->Value;
}
private: System::Void Form1_load(System::Object^  sender, System::EventArgs^  e) {
	this->linkLabel2->LinkColor = Color::Blue;
	this->linkLabel2->ActiveLinkColor = Color::Green;
	click_tianqi(sender, e);
}
private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
};
}

