#pragma once

namespace WordForm {

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
	private: System::Windows::Forms::ToolStripMenuItem^  操作OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查找FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  插入IToolStripMenuItem;

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
			this->操作OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查找FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->插入IToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->操作OToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(282, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 操作OToolStripMenuItem
			// 
			this->操作OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->查找FToolStripMenuItem,
					this->插入IToolStripMenuItem
			});
			this->操作OToolStripMenuItem->Name = L"操作OToolStripMenuItem";
			this->操作OToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->操作OToolStripMenuItem->Text = L"操作(&O)";
			// 
			// 查找FToolStripMenuItem
			// 
			this->查找FToolStripMenuItem->Name = L"查找FToolStripMenuItem";
			this->查找FToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->查找FToolStripMenuItem->Text = L"查找(&F)";
			// 
			// 插入IToolStripMenuItem
			// 
			this->插入IToolStripMenuItem->Name = L"插入IToolStripMenuItem";
			this->插入IToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->插入IToolStripMenuItem->Text = L"插入(&I)";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
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
	};
}

