#pragma once
#include "SerialDlg.h"
namespace My91Menu {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  系统ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打开ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  通信设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  串口ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  网络ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uSBToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  无线ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  射频ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  蓝牙ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  红外ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  空气参数ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  温度ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  湿度ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  气压ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查看ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  工具栏ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  状态栏ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  字体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  自动换行ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->系统ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打开ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->通信设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->串口ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->网络ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSBToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->无线ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->射频ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->蓝牙ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->红外ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->空气参数ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->温度ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->湿度ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->气压ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查看ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->工具栏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->状态栏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->字体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->自动换行ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->系统ToolStripMenuItem,
					this->通信设置ToolStripMenuItem, this->空气参数ToolStripMenuItem, this->查看ToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(697, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 系统ToolStripMenuItem
			// 
			this->系统ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->打开ToolStripMenuItem,
					this->退出ToolStripMenuItem
			});
			this->系统ToolStripMenuItem->Name = L"系统ToolStripMenuItem";
			this->系统ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->系统ToolStripMenuItem->Text = L"系统";
			this->系统ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::On_DoSystemMenu);
			// 
			// 打开ToolStripMenuItem
			// 
			this->打开ToolStripMenuItem->Name = L"打开ToolStripMenuItem";
			this->打开ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->打开ToolStripMenuItem->Text = L"打开";
			// 
			// 退出ToolStripMenuItem
			// 
			this->退出ToolStripMenuItem->Name = L"退出ToolStripMenuItem";
			this->退出ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->退出ToolStripMenuItem->Text = L"退出";
			// 
			// 通信设置ToolStripMenuItem
			// 
			this->通信设置ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->串口ToolStripMenuItem,
					this->网络ToolStripMenuItem, this->uSBToolStripMenuItem, this->无线ToolStripMenuItem
			});
			this->通信设置ToolStripMenuItem->Name = L"通信设置ToolStripMenuItem";
			this->通信设置ToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->通信设置ToolStripMenuItem->Text = L"通信设置";
			// 
			// 串口ToolStripMenuItem
			// 
			this->串口ToolStripMenuItem->Name = L"串口ToolStripMenuItem";
			this->串口ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->串口ToolStripMenuItem->Text = L"串口";
			this->串口ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::serialToolStripMenuItem_Click);
			// 
			// 网络ToolStripMenuItem
			// 
			this->网络ToolStripMenuItem->Name = L"网络ToolStripMenuItem";
			this->网络ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->网络ToolStripMenuItem->Text = L"网络";
			// 
			// uSBToolStripMenuItem
			// 
			this->uSBToolStripMenuItem->Name = L"uSBToolStripMenuItem";
			this->uSBToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->uSBToolStripMenuItem->Text = L"USB";
			// 
			// 无线ToolStripMenuItem
			// 
			this->无线ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->射频ToolStripMenuItem,
					this->蓝牙ToolStripMenuItem, this->红外ToolStripMenuItem
			});
			this->无线ToolStripMenuItem->Name = L"无线ToolStripMenuItem";
			this->无线ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->无线ToolStripMenuItem->Text = L"无线";
			// 
			// 射频ToolStripMenuItem
			// 
			this->射频ToolStripMenuItem->Name = L"射频ToolStripMenuItem";
			this->射频ToolStripMenuItem->Size = System::Drawing::Size(114, 26);
			this->射频ToolStripMenuItem->Text = L"射频";
			// 
			// 蓝牙ToolStripMenuItem
			// 
			this->蓝牙ToolStripMenuItem->Name = L"蓝牙ToolStripMenuItem";
			this->蓝牙ToolStripMenuItem->Size = System::Drawing::Size(114, 26);
			this->蓝牙ToolStripMenuItem->Text = L"蓝牙";
			// 
			// 红外ToolStripMenuItem
			// 
			this->红外ToolStripMenuItem->Name = L"红外ToolStripMenuItem";
			this->红外ToolStripMenuItem->Size = System::Drawing::Size(114, 26);
			this->红外ToolStripMenuItem->Text = L"红外";
			// 
			// 空气参数ToolStripMenuItem
			// 
			this->空气参数ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->温度ToolStripMenuItem,
					this->湿度ToolStripMenuItem, this->气压ToolStripMenuItem
			});
			this->空气参数ToolStripMenuItem->Name = L"空气参数ToolStripMenuItem";
			this->空气参数ToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->空气参数ToolStripMenuItem->Text = L"空气参数";
			// 
			// 温度ToolStripMenuItem
			// 
			this->温度ToolStripMenuItem->Name = L"温度ToolStripMenuItem";
			this->温度ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->温度ToolStripMenuItem->Text = L"温度";
			// 
			// 湿度ToolStripMenuItem
			// 
			this->湿度ToolStripMenuItem->Name = L"湿度ToolStripMenuItem";
			this->湿度ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->湿度ToolStripMenuItem->Text = L"湿度";
			// 
			// 气压ToolStripMenuItem
			// 
			this->气压ToolStripMenuItem->Name = L"气压ToolStripMenuItem";
			this->气压ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->气压ToolStripMenuItem->Text = L"气压";
			// 
			// 查看ToolStripMenuItem
			// 
			this->查看ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->工具栏ToolStripMenuItem,
					this->状态栏ToolStripMenuItem, this->字体ToolStripMenuItem, this->自动换行ToolStripMenuItem
			});
			this->查看ToolStripMenuItem->Name = L"查看ToolStripMenuItem";
			this->查看ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->查看ToolStripMenuItem->Text = L"查看";
			// 
			// 工具栏ToolStripMenuItem
			// 
			this->工具栏ToolStripMenuItem->Name = L"工具栏ToolStripMenuItem";
			this->工具栏ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->工具栏ToolStripMenuItem->Text = L"工具栏";
			// 
			// 状态栏ToolStripMenuItem
			// 
			this->状态栏ToolStripMenuItem->Name = L"状态栏ToolStripMenuItem";
			this->状态栏ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->状态栏ToolStripMenuItem->Text = L"状态栏";
			// 
			// 字体ToolStripMenuItem
			// 
			this->字体ToolStripMenuItem->Name = L"字体ToolStripMenuItem";
			this->字体ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->字体ToolStripMenuItem->Text = L"字体";
			// 
			// 自动换行ToolStripMenuItem
			// 
			this->自动换行ToolStripMenuItem->Name = L"自动换行ToolStripMenuItem";
			this->自动换行ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->自动换行ToolStripMenuItem->Text = L"自动换行";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->helpToolStripMenuItem->Text = L"帮助";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(152, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"添加";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(271, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(29, 117);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(605, 276);
			this->textBox2->TabIndex = 3;
			this->textBox2->WordWrap = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 465);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void On_DoMenuItem(System::Object^  sender, System::EventArgs^  e) {
			System::Windows::Forms::ToolStripMenuItem^  tempItem;
			tempItem = static_cast<System::Windows::Forms::ToolStripMenuItem^>(sender);
			if (tempItem != nullptr)	 {
				String^ strText = tempItem->Text->Trim();
				if ((strText->Length >= 2) && (strText->Substring(0, 2)->Equals("退出")))
					this->Close();//若添加的菜单项为“退出”
				else
					MessageBox::Show(String::Concat("选择的菜单项是：", strText), "提示");

			}

		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ strText = this->textBox1->Text->Trim();

		if (String::IsNullOrEmpty(strText))

		{
			MessageBox::Show("菜单项文本不能为空！", "提示");

			return;

		}

		for (int i = 0; i<helpToolStripMenuItem->DropDownItems->Count; i++)

		{
			if (strText->Equals(helpToolStripMenuItem->DropDownItems[i]->Text->Trim()))

			{
				MessageBox::Show("该菜单项已添加过，不能重复添加！", "提示");
				return;
			}

		}

		System::Windows::Forms::ToolStripMenuItem^  tempItem;

		tempItem = gcnew System::Windows::Forms::ToolStripMenuItem(strText);

		tempItem->Click += gcnew System::EventHandler(this, &Form1::On_DoMenuItem);

		this->helpToolStripMenuItem->DropDownItems->Add(tempItem);
	}
private: System::Void On_DoSystemMenu(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	ToolStripMenuItem^ item;

	if (e == nullptr)

		item = safe_cast<ToolStripMenuItem^>(sender);

	else

		item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);

	if (item == 打开ToolStripMenuItem)

	{

		OpenFileDialog^ pOFD = gcnew OpenFileDialog();

		pOFD->Filter = "文本文件(*.txt)|*.txt|所有文件(*.*)|*.*";

		pOFD->DefaultExt = "txt";

		if (pOFD->ShowDialog() == Windows::Forms::DialogResult::OK)

		{

			System::IO::StreamReader ^pReader = gcnew System::IO::StreamReader(pOFD->FileName, System::Text::Encoding::Default);

			textBox2->Text = pReader->ReadToEnd();

			textBox2->Select(0, 0);

			pReader->Close();

			// 在状态栏上显示信息

			//statusStrip1->Items[3]->Text = "就绪";

			//statusStrip1->Items[3]->Text = pOFD->FileName;

		}

	}
	else if (item == 退出ToolStripMenuItem)

		this->Close();
}
private: System::Void serialToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SerialDlg ^dlg = gcnew SerialDlg();

	dlg->ShowDialog();
}
};
}

