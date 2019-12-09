#pragma once

namespace My101final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// WordForm 摘要
	/// </summary>
	public ref class WordForm : public System::Windows::Forms::Form
	{
	public:
		WordForm(void)
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
		~WordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  操作OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查找ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  插入IToolStripMenuItem;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->操作OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查找ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->查找ToolStripMenuItem,
					this->插入IToolStripMenuItem
			});
			this->操作OToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->操作OToolStripMenuItem->MergeIndex = 2;
			this->操作OToolStripMenuItem->Name = L"操作OToolStripMenuItem";
			this->操作OToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->操作OToolStripMenuItem->Text = L"操作(&O)";
			// 
			// 查找ToolStripMenuItem
			// 
			this->查找ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->查找ToolStripMenuItem->MergeIndex = 1;
			this->查找ToolStripMenuItem->Name = L"查找ToolStripMenuItem";
			this->查找ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->查找ToolStripMenuItem->Text = L"查找(&F)";
			// 
			// 插入IToolStripMenuItem
			// 
			this->插入IToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->插入IToolStripMenuItem->MergeIndex = 2;
			this->插入IToolStripMenuItem->Name = L"插入IToolStripMenuItem";
			this->插入IToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->插入IToolStripMenuItem->Text = L"插入(&I)";
			// 
			// WordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"WordForm";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &WordForm::On_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
		menuStrip1->Visible = !this->IsMdiChild;  // 作为MDI子窗体时隐藏菜单栏
	}
};
}
