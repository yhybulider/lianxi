#pragma once

namespace My101final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ImageForm 摘要
	/// </summary>
	public ref class ImageForm : public System::Windows::Forms::Form
	{
	public:
		ImageForm(void)
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
		~ImageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  操作OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  旋转ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  缩放ToolStripMenuItem;

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
			this->旋转ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->缩放ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->操作OToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(312, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 操作OToolStripMenuItem
			// 
			this->操作OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->旋转ToolStripMenuItem,
					this->缩放ToolStripMenuItem
			});
			this->操作OToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->操作OToolStripMenuItem->MergeIndex = 2;
			this->操作OToolStripMenuItem->Name = L"操作OToolStripMenuItem";
			this->操作OToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->操作OToolStripMenuItem->Text = L"操作(&O)";
			// 
			// 旋转ToolStripMenuItem
			// 
			this->旋转ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->旋转ToolStripMenuItem->MergeIndex = 1;
			this->旋转ToolStripMenuItem->Name = L"旋转ToolStripMenuItem";
			this->旋转ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->旋转ToolStripMenuItem->Text = L"旋转(&R)";
			this->旋转ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ImageForm::旋转ToolStripMenuItem_Click);
			// 
			// 缩放ToolStripMenuItem
			// 
			this->缩放ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->缩放ToolStripMenuItem->MergeIndex = 2;
			this->缩放ToolStripMenuItem->Name = L"缩放ToolStripMenuItem";
			this->缩放ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->缩放ToolStripMenuItem->Text = L"缩放(&S)";
			this->缩放ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ImageForm::缩放ToolStripMenuItem_Click);
			// 
			// ImageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 286);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ImageForm";
			this->Text = L"ImageForm";
			this->Load += gcnew System::EventHandler(this, &ImageForm::On_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 旋转ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void 缩放ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
		menuStrip1->Visible = !this->IsMdiChild;  // 作为MDI子窗体时隐藏菜单栏
	}
};
}
