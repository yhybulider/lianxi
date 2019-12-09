#pragma once
#include "Form2.h"
#include "WordForm.h"
#include "ImageForm.h"
namespace My101final {

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
	private: System::Windows::Forms::ToolStripMenuItem^  文件ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  新建ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  导入ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  文本窗体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  图像窗体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  窗体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  编辑ToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;

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
			this->文件ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->新建ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->导入ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->文本窗体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->图像窗体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->窗体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->编辑ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->文件ToolStripMenuItem,
					this->窗体ToolStripMenuItem, this->编辑ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->窗体ToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(588, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文件ToolStripMenuItem
			// 
			this->文件ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->新建ToolStripMenuItem,
					this->导入ToolStripMenuItem, this->退出ToolStripMenuItem
			});
			this->文件ToolStripMenuItem->Name = L"文件ToolStripMenuItem";
			this->文件ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->文件ToolStripMenuItem->Text = L"文件";
			// 
			// 新建ToolStripMenuItem
			// 
			this->新建ToolStripMenuItem->Name = L"新建ToolStripMenuItem";
			this->新建ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->新建ToolStripMenuItem->Text = L"新建";
			this->新建ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newMenuClick);
			// 
			// 导入ToolStripMenuItem
			// 
			this->导入ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->文本窗体ToolStripMenuItem,
					this->图像窗体ToolStripMenuItem
			});
			this->导入ToolStripMenuItem->Name = L"导入ToolStripMenuItem";
			this->导入ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->导入ToolStripMenuItem->Text = L"导入";
			// 
			// 文本窗体ToolStripMenuItem
			// 
			this->文本窗体ToolStripMenuItem->Name = L"文本窗体ToolStripMenuItem";
			this->文本窗体ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->文本窗体ToolStripMenuItem->Text = L"文本窗体";
			this->文本窗体ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::On_WordFile);
			// 
			// 图像窗体ToolStripMenuItem
			// 
			this->图像窗体ToolStripMenuItem->Name = L"图像窗体ToolStripMenuItem";
			this->图像窗体ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->图像窗体ToolStripMenuItem->Text = L"图像窗体";
			this->图像窗体ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::On_ImageFile);
			// 
			// 退出ToolStripMenuItem
			// 
			this->退出ToolStripMenuItem->Name = L"退出ToolStripMenuItem";
			this->退出ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->退出ToolStripMenuItem->Text = L"退出";
			// 
			// 窗体ToolStripMenuItem
			// 
			this->窗体ToolStripMenuItem->Name = L"窗体ToolStripMenuItem";
			this->窗体ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->窗体ToolStripMenuItem->Text = L"窗体";
			// 
			// 编辑ToolStripMenuItem
			// 
			this->编辑ToolStripMenuItem->Name = L"编辑ToolStripMenuItem";
			this->编辑ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->编辑ToolStripMenuItem->Text = L"编辑";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton1,
					this->toolStripDropDownButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(588, 27);
			this->toolStrip1->TabIndex = 4;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(24, 24);
			this->toolStripButton1->Text = L"toolStripButton1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(34, 24);
			this->toolStripDropDownButton1->Text = L"toolStripDropDownButton1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(588, 365);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"MDI主窗体";
			this->MdiChildActivate += gcnew System::EventHandler(this, &Form1::form1MidChildActive);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void newMenuClick(System::Object^  sender, System::EventArgs^  e) {
	Form2^ childForm = gcnew Form2();   // 创建子窗体对象
	childForm->MdiParent = this;               // 设置子窗体的父窗体
	childForm->Show();                               // 显示子窗体
}
private: System::Void On_WordFile(System::Object^  sender, System::EventArgs^  e) {
	WordForm^ doc = gcnew WordForm;
	doc->MdiParent = this;
	doc->Show();
}
private: System::Void On_ImageFile(System::Object^  sender, System::EventArgs^  e) {
	ImageForm^ doc = gcnew ImageForm;
	doc->MdiParent = this;
	doc->Show();
}
private: System::Void form1MidChildActive(System::Object^  sender, System::EventArgs^  e) {
	ToolStripManager::RevertMerge(toolStrip1);    // 撤销上次的合并操作
	if (this->ActiveMdiChild == nullptr) return;   // 是否为激活MDI子窗体
		Form2^ childForm = safe_cast<Form2^>(this->ActiveMdiChild); // 子窗体对象 这里报错是为什么。
	ToolStripManager::Merge(childForm->MergeToolStrip, toolStrip1); // 合并工具条
	
	
}
};
}

