#pragma once

namespace EX54 {

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
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"颜色对话框";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::On_ColorDlg);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(151, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"打开文件对话框";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::On_OpenDlg);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(277, 30);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"文件浏览对话框";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::On_FolderDlg);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(151, 104);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(94, 44);
			this->button4->TabIndex = 3;
			this->button4->Text = L"保存文件对话框";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::On_SaveDlg);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(28, 104);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 44);
			this->button5->TabIndex = 4;
			this->button5->Text = L"字体对话框";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::On_FontDlg);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(277, 104);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(110, 44);
			this->button6->TabIndex = 5;
			this->button6->Text = L"打印设置对话框";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::On_PrintDlg);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(408, 67);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(58, 45);
			this->button7->TabIndex = 6;
			this->button7->Text = L"退出";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(52, 67);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(501, 192);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"通用对话框";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 400);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"通用对话框示例";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void On_ColorDlg(System::Object^  sender, System::EventArgs^  e) {
		ColorDialog^ dlg = gcnew ColorDialog();
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MessageBox::Show(L"选定的颜色为" + dlg->Color);
		}
	}
	private: System::Void On_FontDlg(System::Object^  sender, System::EventArgs^  e) {
		FontDialog^ dlg = gcnew FontDialog();
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MessageBox::Show(L"选定的字体为" + dlg->Font->Name);
		}
	}
	private: System::Void On_OpenDlg(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ dlg = gcnew OpenFileDialog();
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MessageBox::Show(L"选定打开的文件为" + dlg->FileName);
		}
	}
	private: System::Void On_SaveDlg(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog^ dlg = gcnew SaveFileDialog();
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MessageBox::Show(L"选定保存的文件为" + dlg->FileName);
		}
	}
	private: System::Void On_FolderDlg(System::Object^  sender, System::EventArgs^  e) {
		FolderBrowserDialog^ dlg = gcnew FolderBrowserDialog();
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MessageBox::Show(L"选定的路径为" + dlg->SelectedPath);
		}
	}
	private: System::Void On_PrintDlg(System::Object^  sender, System::EventArgs^  e) {
		PrintDialog^ dlg = gcnew PrintDialog();

		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MessageBox::Show(L"选定打印机设备名为" + dlg->PrinterSettings->PrinterName);
			//MessageBox::Show( L"选定保存的文件为" + dlg-> DeviceName);
		}
	}
	
			}
