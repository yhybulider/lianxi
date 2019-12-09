#pragma once
#include "Note.h"
#include "AboutDlg.h"
namespace My102MEdit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace	System::IO;

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
	private: System::Windows::Forms::ToolStripMenuItem^  文件FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  新建NToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;





	private: System::Windows::Forms::ToolStripMenuItem^  退出XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  窗口ToolStripMenuItem;



	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;



	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  层叠ToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^  帮助HToolStripMenuItem;



	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripMenuItem^  关于AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  水平平铺ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  垂直平铺ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打开OToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->新建NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->窗口ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->层叠ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->水平平铺ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->垂直平铺ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->关于AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打开OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->文件FToolStripMenuItem,
					this->窗口ToolStripMenuItem, this->帮助HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->窗口ToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(432, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->新建NToolStripMenuItem,
					this->打开OToolStripMenuItem, this->toolStripSeparator, this->退出XToolStripMenuItem
			});
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(69, 24);
			this->文件FToolStripMenuItem->Text = L"文件(&F)";
			// 
			// 新建NToolStripMenuItem
			// 
			this->新建NToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"新建NToolStripMenuItem.Image")));
			this->新建NToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->新建NToolStripMenuItem->Name = L"新建NToolStripMenuItem";
			this->新建NToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->新建NToolStripMenuItem->Size = System::Drawing::Size(194, 26);
			this->新建NToolStripMenuItem->Text = L"新建(&N)";
			this->新建NToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::新建NToolStripMenuItem_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(191, 6);
			// 
			// 退出XToolStripMenuItem
			// 
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(194, 26);
			this->退出XToolStripMenuItem->Text = L"退出(&X)";
			this->退出XToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::退出XToolStripMenuItem_Click);
			// 
			// 窗口ToolStripMenuItem
			// 
			this->窗口ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripSeparator3,
					this->toolStripSeparator4, this->层叠ToolStripMenuItem, this->水平平铺ToolStripMenuItem, this->垂直平铺ToolStripMenuItem
			});
			this->窗口ToolStripMenuItem->Name = L"窗口ToolStripMenuItem";
			this->窗口ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->窗口ToolStripMenuItem->Text = L"窗口";
			this->窗口ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::窗口ToolStripMenuItem_DropDownItemClicked);
			this->窗口ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::编辑EToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(141, 6);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(141, 6);
			// 
			// 层叠ToolStripMenuItem
			// 
			this->层叠ToolStripMenuItem->Name = L"层叠ToolStripMenuItem";
			this->层叠ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->层叠ToolStripMenuItem->Text = L"层叠";
			this->层叠ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::全选AToolStripMenuItem_Click);
			// 
			// 水平平铺ToolStripMenuItem
			// 
			this->水平平铺ToolStripMenuItem->Name = L"水平平铺ToolStripMenuItem";
			this->水平平铺ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->水平平铺ToolStripMenuItem->Text = L"水平平铺";
			// 
			// 垂直平铺ToolStripMenuItem
			// 
			this->垂直平铺ToolStripMenuItem->Name = L"垂直平铺ToolStripMenuItem";
			this->垂直平铺ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->垂直平铺ToolStripMenuItem->Text = L"垂直平铺";
			// 
			// 帮助HToolStripMenuItem
			// 
			this->帮助HToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripSeparator5,
					this->关于AToolStripMenuItem
			});
			this->帮助HToolStripMenuItem->Name = L"帮助HToolStripMenuItem";
			this->帮助HToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->帮助HToolStripMenuItem->Text = L"帮助(&H)";
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(144, 6);
			// 
			// 关于AToolStripMenuItem
			// 
			this->关于AToolStripMenuItem->Name = L"关于AToolStripMenuItem";
			this->关于AToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->关于AToolStripMenuItem->Text = L"关于(&A)...";
			this->关于AToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::关于AToolStripMenuItem_Click);
			// 
			// 打开OToolStripMenuItem
			// 
			this->打开OToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打开OToolStripMenuItem.Image")));
			this->打开OToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打开OToolStripMenuItem->Name = L"打开OToolStripMenuItem";
			this->打开OToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->打开OToolStripMenuItem->Size = System::Drawing::Size(194, 26);
			this->打开OToolStripMenuItem->Text = L"打开(&O)";
			this->打开OToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::打开OToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 375);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->Name = L"Form1";
			this->Text = L"编辑器";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 新建ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void 打开ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void 编辑EToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void 全选AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
	 private: static int FormCount = 1;
private: System::Void 窗口ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	ToolStripMenuItem^ item;
	if (e == nullptr)
		item = safe_cast<ToolStripMenuItem^>(sender);
	else
		item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
	if (item == 层叠ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::Cascade);	//层叠
	else if (item == 水平平铺ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::TileHorizontal); //水平平铺
	else if (item == 垂直平铺ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::TileVertical); //垂直平铺
}
private: System::Void 新建NToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Note ^newMDIChild = gcnew Note();
	newMDIChild->MdiParent = this;
	newMDIChild->Text = "文档" + FormCount.ToString();
	FormCount++;

	newMDIChild->Show();//显示子窗口
}
private: System::Void 退出XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void 关于AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AboutDlg^ dlg = gcnew AboutDlg;
	dlg->ShowDialog();
}
private: System::Void 打开OToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^filename;
	System::Windows::Forms::DialogResult dlg;   //获取通用对话框的输入

	openFileDialog1->InitialDirectory = "E:\\C++\\VCPP\\";

	openFileDialog1->Filter = "我的文档(*.mtxt)|*.mtxt|Rtf files(*.rtf)|*.rtf|文本文件(*.txt)|*.txt";

	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;
	openFileDialog1->FileName = "";
	dlg = openFileDialog1->ShowDialog();
	try{
		if (dlg == System::Windows::Forms::DialogResult::OK)
		{
			if (Path::GetExtension(openFileDialog1->FileName) == ".rtf"

				|| Path::GetExtension(openFileDialog1->FileName) == ".mtxt"

				|| Path::GetExtension(openFileDialog1->FileName) == ".txt"){  //使用Path类需在前面添加using namespace System::IO;

				filename = openFileDialog1->FileName;

				Note ^newMDIChild = gcnew Note();

				newMDIChild->MdiParent = this;

				newMDIChild->FileName = filename;

				newMDIChild->Show();

			}

			else MessageBox::Show(L"选择的不是mtxt、RTF或TXT格式的文件！无效", "错误", MessageBoxButtons::OK);

		}

	}

	catch (System::ArgumentException ^e){

		MessageBox::Show(L"打开文件出错！", "错误", MessageBoxButtons::OK);

	}
}
};
}

