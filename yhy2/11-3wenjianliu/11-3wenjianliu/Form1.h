#pragma once

namespace My113wenjianliu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Diagnostics;//调用系统的功能

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

	private: System::Windows::Forms::ToolStrip^  toolStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^  工具TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  自动换行CToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  字体CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  计算器ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripButton^  新建NToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  打开OToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  保存SToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  打印PToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^  剪切UToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  复制CToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  粘贴PToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  帮助LToolStripButton;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  文件FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  新建NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打开OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  保存SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  另存为AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  打印PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打印预览VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  退出XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  编辑EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  撤消UToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  重复RToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripMenuItem^  剪切TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  复制CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  粘贴PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator6;
	private: System::Windows::Forms::ToolStripMenuItem^  全选AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助HToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  内容CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  索引IToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  搜索SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator7;
	private: System::Windows::Forms::ToolStripMenuItem^  关于AToolStripMenuItem;

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
			this->打开OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->保存SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->另存为AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->打印PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印预览VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->编辑EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->撤消UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->重复RToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->剪切TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->复制CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->粘贴PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->全选AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->工具TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->自动换行CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->字体CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->计算器ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助HToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->内容CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->索引IToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->搜索SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->关于AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->新建NToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->打开OToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->保存SToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->打印PToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->剪切UToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->复制CToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->粘贴PToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->帮助LToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->文件FToolStripMenuItem,
					this->编辑EToolStripMenuItem, this->工具TToolStripMenuItem, this->帮助HToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(621, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->新建NToolStripMenuItem,
					this->打开OToolStripMenuItem, this->toolStripSeparator2, this->保存SToolStripMenuItem, this->另存为AToolStripMenuItem, this->toolStripSeparator3,
					this->打印PToolStripMenuItem, this->打印预览VToolStripMenuItem, this->toolStripSeparator4, this->退出XToolStripMenuItem
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
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(191, 6);
			// 
			// 保存SToolStripMenuItem
			// 
			this->保存SToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"保存SToolStripMenuItem.Image")));
			this->保存SToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->保存SToolStripMenuItem->Name = L"保存SToolStripMenuItem";
			this->保存SToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->保存SToolStripMenuItem->Size = System::Drawing::Size(194, 26);
			this->保存SToolStripMenuItem->Text = L"保存(&S)";
			this->保存SToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveMenu_Click);
			// 
			// 另存为AToolStripMenuItem
			// 
			this->另存为AToolStripMenuItem->Name = L"另存为AToolStripMenuItem";
			this->另存为AToolStripMenuItem->Size = System::Drawing::Size(194, 26);
			this->另存为AToolStripMenuItem->Text = L"另存为(&A)";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(191, 6);
			// 
			// 打印PToolStripMenuItem
			// 
			this->打印PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印PToolStripMenuItem.Image")));
			this->打印PToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印PToolStripMenuItem->Name = L"打印PToolStripMenuItem";
			this->打印PToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->打印PToolStripMenuItem->Size = System::Drawing::Size(194, 26);
			this->打印PToolStripMenuItem->Text = L"打印(&P)";
			// 
			// 打印预览VToolStripMenuItem
			// 
			this->打印预览VToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印预览VToolStripMenuItem.Image")));
			this->打印预览VToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印预览VToolStripMenuItem->Name = L"打印预览VToolStripMenuItem";
			this->打印预览VToolStripMenuItem->Size = System::Drawing::Size(194, 26);
			this->打印预览VToolStripMenuItem->Text = L"打印预览(&V)";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(191, 6);
			// 
			// 退出XToolStripMenuItem
			// 
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(194, 26);
			this->退出XToolStripMenuItem->Text = L"退出(&X)";
			// 
			// 编辑EToolStripMenuItem
			// 
			this->编辑EToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->撤消UToolStripMenuItem,
					this->重复RToolStripMenuItem, this->toolStripSeparator5, this->剪切TToolStripMenuItem, this->复制CToolStripMenuItem, this->粘贴PToolStripMenuItem,
					this->toolStripSeparator6, this->全选AToolStripMenuItem
			});
			this->编辑EToolStripMenuItem->Name = L"编辑EToolStripMenuItem";
			this->编辑EToolStripMenuItem->Size = System::Drawing::Size(69, 24);
			this->编辑EToolStripMenuItem->Text = L"编辑(&E)";
			// 
			// 撤消UToolStripMenuItem
			// 
			this->撤消UToolStripMenuItem->Name = L"撤消UToolStripMenuItem";
			this->撤消UToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->撤消UToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->撤消UToolStripMenuItem->Text = L"撤消(&U)";
			// 
			// 重复RToolStripMenuItem
			// 
			this->重复RToolStripMenuItem->Name = L"重复RToolStripMenuItem";
			this->重复RToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->重复RToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->重复RToolStripMenuItem->Text = L"重复(&R)";
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(187, 6);
			// 
			// 剪切TToolStripMenuItem
			// 
			this->剪切TToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"剪切TToolStripMenuItem.Image")));
			this->剪切TToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->剪切TToolStripMenuItem->Name = L"剪切TToolStripMenuItem";
			this->剪切TToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->剪切TToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->剪切TToolStripMenuItem->Text = L"剪切(&T)";
			this->剪切TToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cutMenu_Click);
			// 
			// 复制CToolStripMenuItem
			// 
			this->复制CToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"复制CToolStripMenuItem.Image")));
			this->复制CToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->复制CToolStripMenuItem->Name = L"复制CToolStripMenuItem";
			this->复制CToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->复制CToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->复制CToolStripMenuItem->Text = L"复制(&C)";
			this->复制CToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::copyMenu_Click);
			// 
			// 粘贴PToolStripMenuItem
			// 
			this->粘贴PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"粘贴PToolStripMenuItem.Image")));
			this->粘贴PToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->粘贴PToolStripMenuItem->Name = L"粘贴PToolStripMenuItem";
			this->粘贴PToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->粘贴PToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->粘贴PToolStripMenuItem->Text = L"粘贴(&P)";
			this->粘贴PToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pasteMenu_Click);
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(187, 6);
			// 
			// 全选AToolStripMenuItem
			// 
			this->全选AToolStripMenuItem->Name = L"全选AToolStripMenuItem";
			this->全选AToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->全选AToolStripMenuItem->Text = L"全选(&A)";
			// 
			// 工具TToolStripMenuItem
			// 
			this->工具TToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->自动换行CToolStripMenuItem,
					this->字体CToolStripMenuItem, this->计算器ToolStripMenuItem
			});
			this->工具TToolStripMenuItem->Name = L"工具TToolStripMenuItem";
			this->工具TToolStripMenuItem->Size = System::Drawing::Size(70, 24);
			this->工具TToolStripMenuItem->Text = L"工具(&T)";
			// 
			// 自动换行CToolStripMenuItem
			// 
			this->自动换行CToolStripMenuItem->Name = L"自动换行CToolStripMenuItem";
			this->自动换行CToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->自动换行CToolStripMenuItem->Text = L"自动换行(&C)";
			this->自动换行CToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::On_AutoLine);
			// 
			// 字体CToolStripMenuItem
			// 
			this->字体CToolStripMenuItem->Name = L"字体CToolStripMenuItem";
			this->字体CToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->字体CToolStripMenuItem->Text = L"字体(&C)";
			this->字体CToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::On_Font);
			// 
			// 计算器ToolStripMenuItem
			// 
			this->计算器ToolStripMenuItem->Name = L"计算器ToolStripMenuItem";
			this->计算器ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->计算器ToolStripMenuItem->Text = L"计算器";
			this->计算器ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::On_Calc);
			// 
			// 帮助HToolStripMenuItem1
			// 
			this->帮助HToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->内容CToolStripMenuItem,
					this->索引IToolStripMenuItem, this->搜索SToolStripMenuItem, this->toolStripSeparator7, this->关于AToolStripMenuItem
			});
			this->帮助HToolStripMenuItem1->Name = L"帮助HToolStripMenuItem1";
			this->帮助HToolStripMenuItem1->Size = System::Drawing::Size(73, 24);
			this->帮助HToolStripMenuItem1->Text = L"帮助(&H)";
			// 
			// 内容CToolStripMenuItem
			// 
			this->内容CToolStripMenuItem->Name = L"内容CToolStripMenuItem";
			this->内容CToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->内容CToolStripMenuItem->Text = L"内容(&C)";
			// 
			// 索引IToolStripMenuItem
			// 
			this->索引IToolStripMenuItem->Name = L"索引IToolStripMenuItem";
			this->索引IToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->索引IToolStripMenuItem->Text = L"索引(&I)";
			// 
			// 搜索SToolStripMenuItem
			// 
			this->搜索SToolStripMenuItem->Name = L"搜索SToolStripMenuItem";
			this->搜索SToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->搜索SToolStripMenuItem->Text = L"搜索(&S)";
			// 
			// toolStripSeparator7
			// 
			this->toolStripSeparator7->Name = L"toolStripSeparator7";
			this->toolStripSeparator7->Size = System::Drawing::Size(144, 6);
			// 
			// 关于AToolStripMenuItem
			// 
			this->关于AToolStripMenuItem->Name = L"关于AToolStripMenuItem";
			this->关于AToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->关于AToolStripMenuItem->Text = L"关于(&A)...";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->新建NToolStripButton,
					this->打开OToolStripButton, this->保存SToolStripButton, this->打印PToolStripButton, this->toolStripSeparator, this->剪切UToolStripButton,
					this->复制CToolStripButton, this->粘贴PToolStripButton, this->toolStripSeparator1, this->帮助LToolStripButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(621, 27);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// 新建NToolStripButton
			// 
			this->新建NToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->新建NToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"新建NToolStripButton.Image")));
			this->新建NToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->新建NToolStripButton->Name = L"新建NToolStripButton";
			this->新建NToolStripButton->Size = System::Drawing::Size(24, 24);
			this->新建NToolStripButton->Text = L"新建(&N)";
			// 
			// 打开OToolStripButton
			// 
			this->打开OToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->打开OToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打开OToolStripButton.Image")));
			this->打开OToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打开OToolStripButton->Name = L"打开OToolStripButton";
			this->打开OToolStripButton->Size = System::Drawing::Size(24, 24);
			this->打开OToolStripButton->Text = L"打开(&O)";
			// 
			// 保存SToolStripButton
			// 
			this->保存SToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->保存SToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"保存SToolStripButton.Image")));
			this->保存SToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->保存SToolStripButton->Name = L"保存SToolStripButton";
			this->保存SToolStripButton->Size = System::Drawing::Size(24, 24);
			this->保存SToolStripButton->Text = L"保存(&S)";
			// 
			// 打印PToolStripButton
			// 
			this->打印PToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->打印PToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印PToolStripButton.Image")));
			this->打印PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印PToolStripButton->Name = L"打印PToolStripButton";
			this->打印PToolStripButton->Size = System::Drawing::Size(24, 24);
			this->打印PToolStripButton->Text = L"打印(&P)";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 27);
			// 
			// 剪切UToolStripButton
			// 
			this->剪切UToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->剪切UToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"剪切UToolStripButton.Image")));
			this->剪切UToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->剪切UToolStripButton->Name = L"剪切UToolStripButton";
			this->剪切UToolStripButton->Size = System::Drawing::Size(24, 24);
			this->剪切UToolStripButton->Text = L"剪切(&U)";
			// 
			// 复制CToolStripButton
			// 
			this->复制CToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->复制CToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"复制CToolStripButton.Image")));
			this->复制CToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->复制CToolStripButton->Name = L"复制CToolStripButton";
			this->复制CToolStripButton->Size = System::Drawing::Size(24, 24);
			this->复制CToolStripButton->Text = L"复制(&C)";
			// 
			// 粘贴PToolStripButton
			// 
			this->粘贴PToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->粘贴PToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"粘贴PToolStripButton.Image")));
			this->粘贴PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->粘贴PToolStripButton->Name = L"粘贴PToolStripButton";
			this->粘贴PToolStripButton->Size = System::Drawing::Size(24, 24);
			this->粘贴PToolStripButton->Text = L"粘贴(&P)";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 27);
			// 
			// 帮助LToolStripButton
			// 
			this->帮助LToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->帮助LToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"帮助LToolStripButton.Image")));
			this->帮助LToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->帮助LToolStripButton->Name = L"帮助LToolStripButton";
			this->帮助LToolStripButton->Size = System::Drawing::Size(24, 24);
			this->帮助LToolStripButton->Text = L"帮助(&L)";
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->AcceptsTab = true;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(0, 55);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(621, 392);
			this->textBox1->TabIndex = 2;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(621, 447);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"无标题—记事本";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 文件ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void  新建NToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (1 == this->textBox1->Modified)
		{
			String ^strFileName = this->Text->Replace("- 记事本", "")->Trim();
			String ^strText = String::Format("文件{0}的文字已更改，\n\n想保存文件吗？", strFileName);
			System::Windows::Forms::DialogResult res = MessageBox::Show(strText, "记事本", System::Windows::Forms::MessageBoxButtons::YesNo, System::Windows::Forms::MessageBoxIcon::Exclamation);
			if (res == System::Windows::Forms::DialogResult::Yes)
				saveMenu_Click(nullptr, nullptr); // 调用保存命令
		}
		this->textBox1->Text = nullptr;                // 清空TextBox中的内容
		this->Text = "无标题- 记事本";                //重新设置窗体的标题
		this->textBox1->Modified = false;           // 清除更新标志
	}
private: System::Void  打开OToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ dlg = gcnew OpenFileDialog();
	dlg->FileName = L"*.txt";                        // 缺省文件名
	dlg->Filter = L"文本文档(*.txt)|*.txt|所有文件(*.*)|*.*";  // 过滤字符串
	if (dlg->ShowDialog() != System::Windows::Forms::DialogResult::OK)
		return;                                 // 未选择文件, 退出
	try {
		String^ readText;
		this->textBox1->Text = nullptr;
		FileInfo^  fileInfo = gcnew FileInfo(dlg->FileName);
		FileStream^  stream = fileInfo->Open(FileMode::OpenOrCreate, FileAccess::Read);
		StreamReader^ reader = gcnew StreamReader(stream, Encoding::UTF8);
		//System::IO::StreamReader^ reader = gcnew  System::IO::StreamReader(
		// dlg->FileName,System::Text::Encoding::Default );
		while ((readText = reader->ReadLine()) != nullptr) // 读取一行文本
			this->textBox1->Text += readText + "\r\n";// 添加到TextBox中
		reader->Close();             // 关闭StreamReader
		stream->Close();             // 关闭FileStream
		this->Text = fileInfo->Name + L" - 记事本"; // 设置窗体的标题
	}
	catch (IOException^ e) {              // 打开失败,或其他异常
		MessageBox::Show(e->ToString());
	}
}
private: System::Void saveMenu_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^ dlg = gcnew SaveFileDialog();// 保存文件对话框
	dlg->FileName = L"*.txt";              // 缺省文件名
	dlg->Filter = L"文本文档(*.txt)|*.txt|所有文件(*.*)|*.*"; // 过滤字符串
	if (dlg->ShowDialog() != System::Windows::Forms::DialogResult::OK)
		return;             // 未选择文件,退出
	try {
		FileInfo^   fileInfo = gcnew FileInfo(dlg->FileName);
		FileStream^   stream = fileInfo->Open(FileMode::OpenOrCreate, FileAccess::Write);
		StreamWriter^writer = gcnew StreamWriter(stream, Encoding::UTF8); // UTF8编码
		//System::IO::StreamWriter^ writer = gcnewSystem::IO::StreamWriter(dlg->FileName );
		for each (String^lineText in this->textBox1->Lines)  // TextBox所有行的数据
			writer->WriteLine(lineText);  // 写入所有行数据
		writer->Close();              // 关闭StreamWriter
		stream->Close();                 // 关闭FileStream
		this->textBox1->Modified = false;  // 取消设置修改标记
		this->Text = fileInfo->Name + L" - 记事本";          // 设置窗体的标题
	}
	catch (IOException^ e){        // 打开失败,或其他异常
		MessageBox::Show(e->ToString());
	}
}
private: System::Void cutMenu_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Cut();                             // 剪切内容
}
private: System::Void copyMenu_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Copy();
}
private: System::Void pasteMenu_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Paste();                           // 粘贴内容
}
private: System::Void On_AutoLine(System::Object^  sender, System::EventArgs^  e) {
	bool bAutoLine = this->自动换行CToolStripMenuItem->Checked;
	this->自动换行CToolStripMenuItem->Checked = !bAutoLine;
	this->textBox1->WordWrap = !bAutoLine;
		
}
private: System::Void On_Font(System::Object^  sender, System::EventArgs^  e) {
	FontDialog^ dlg = gcnew FontDialog();              // 字体对话框
	dlg->Font = this->textBox1->Font;                  // 原TextBox的字体
	dlg->ShowColor = true;
	dlg->ShowEffects = true;

	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox1->Font = dlg->Font;              // 重新设置字体
		this->textBox1->ForeColor = dlg->Color;
	}
}
private: System::Void On_Calc(System::Object^  sender, System::EventArgs^  e) {
	ProcessStartInfo ^info = gcnew ProcessStartInfo();
	info->FileName = L"calc.exe";//调用系统的“计算器”
	//info->FileName = L"notepad.exe";//调用系统的“记事本”
	info->Arguments = "";
	info->WorkingDirectory = L"C:||Windows\\";
	Process::Start(info);
}
};
}

