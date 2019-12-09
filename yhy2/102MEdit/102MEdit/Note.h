#pragma once

namespace My102MEdit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Note 摘要
	/// </summary>
	public ref class Note : public System::Windows::Forms::Form
	{
	public:
		Note(void)
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
		~Note()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  文件FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  保存SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  另存为AToolStripMenuItem;


	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  打印PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打印预览VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  退出XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  编辑EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  撤消UToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  重复RToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  剪切TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  复制CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  粘贴PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  全选AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  工具TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  自定义CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  选项OToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Note::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->保存SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->另存为AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->打印PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印预览VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->编辑EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->撤消UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->重复RToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->剪切TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->复制CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->粘贴PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->全选AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->工具TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->自定义CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->选项OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->文件FToolStripMenuItem,
					this->编辑EToolStripMenuItem, this->工具TToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(282, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->保存SToolStripMenuItem,
					this->另存为AToolStripMenuItem, this->toolStripSeparator, this->toolStripSeparator1, this->打印PToolStripMenuItem, this->打印预览VToolStripMenuItem,
					this->toolStripSeparator2, this->退出XToolStripMenuItem
			});
			this->文件FToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->文件FToolStripMenuItem->MergeIndex = 0;
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(69, 24);
			this->文件FToolStripMenuItem->Text = L"文件(&F)";
			// 
			// 保存SToolStripMenuItem
			// 
			this->保存SToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"保存SToolStripMenuItem.Image")));
			this->保存SToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->保存SToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->保存SToolStripMenuItem->MergeIndex = 3;
			this->保存SToolStripMenuItem->Name = L"保存SToolStripMenuItem";
			this->保存SToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->保存SToolStripMenuItem->Size = System::Drawing::Size(188, 26);
			this->保存SToolStripMenuItem->Text = L"保存(&S)";
			// 
			// 另存为AToolStripMenuItem
			// 
			this->另存为AToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->另存为AToolStripMenuItem->MergeIndex = 4;
			this->另存为AToolStripMenuItem->Name = L"另存为AToolStripMenuItem";
			this->另存为AToolStripMenuItem->Size = System::Drawing::Size(188, 26);
			this->另存为AToolStripMenuItem->Text = L"另存为(&A)";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->toolStripSeparator->MergeIndex = 5;
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(185, 6);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(185, 6);
			// 
			// 打印PToolStripMenuItem
			// 
			this->打印PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印PToolStripMenuItem.Image")));
			this->打印PToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印PToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->打印PToolStripMenuItem->MergeIndex = 6;
			this->打印PToolStripMenuItem->Name = L"打印PToolStripMenuItem";
			this->打印PToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->打印PToolStripMenuItem->Size = System::Drawing::Size(188, 26);
			this->打印PToolStripMenuItem->Text = L"打印(&P)";
			// 
			// 打印预览VToolStripMenuItem
			// 
			this->打印预览VToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印预览VToolStripMenuItem.Image")));
			this->打印预览VToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印预览VToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->打印预览VToolStripMenuItem->MergeIndex = 7;
			this->打印预览VToolStripMenuItem->Name = L"打印预览VToolStripMenuItem";
			this->打印预览VToolStripMenuItem->Size = System::Drawing::Size(188, 26);
			this->打印预览VToolStripMenuItem->Text = L"打印预览(&V)";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->toolStripSeparator2->MergeIndex = 8;
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(185, 6);
			// 
			// 退出XToolStripMenuItem
			// 
			this->退出XToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->退出XToolStripMenuItem->MergeIndex = 9;
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(188, 26);
			this->退出XToolStripMenuItem->Text = L"关闭(&C)";
			// 
			// 编辑EToolStripMenuItem
			// 
			this->编辑EToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->撤消UToolStripMenuItem,
					this->重复RToolStripMenuItem, this->toolStripSeparator3, this->剪切TToolStripMenuItem, this->复制CToolStripMenuItem, this->粘贴PToolStripMenuItem,
					this->toolStripSeparator4, this->全选AToolStripMenuItem
			});
			this->编辑EToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->编辑EToolStripMenuItem->MergeIndex = 2;
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
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(187, 6);
			// 
			// 剪切TToolStripMenuItem
			// 
			this->剪切TToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"剪切TToolStripMenuItem.Image")));
			this->剪切TToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->剪切TToolStripMenuItem->Name = L"剪切TToolStripMenuItem";
			this->剪切TToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->剪切TToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->剪切TToolStripMenuItem->Text = L"剪切(&T)";
			// 
			// 复制CToolStripMenuItem
			// 
			this->复制CToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"复制CToolStripMenuItem.Image")));
			this->复制CToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->复制CToolStripMenuItem->Name = L"复制CToolStripMenuItem";
			this->复制CToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->复制CToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->复制CToolStripMenuItem->Text = L"复制(&C)";
			// 
			// 粘贴PToolStripMenuItem
			// 
			this->粘贴PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"粘贴PToolStripMenuItem.Image")));
			this->粘贴PToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->粘贴PToolStripMenuItem->Name = L"粘贴PToolStripMenuItem";
			this->粘贴PToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->粘贴PToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->粘贴PToolStripMenuItem->Text = L"粘贴(&P)";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(187, 6);
			// 
			// 全选AToolStripMenuItem
			// 
			this->全选AToolStripMenuItem->Name = L"全选AToolStripMenuItem";
			this->全选AToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->全选AToolStripMenuItem->Text = L"全选(&A)";
			// 
			// 工具TToolStripMenuItem
			// 
			this->工具TToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->自定义CToolStripMenuItem,
					this->选项OToolStripMenuItem
			});
			this->工具TToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->工具TToolStripMenuItem->MergeIndex = 3;
			this->工具TToolStripMenuItem->Name = L"工具TToolStripMenuItem";
			this->工具TToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->工具TToolStripMenuItem->Text = L"格式";
			// 
			// 自定义CToolStripMenuItem
			// 
			this->自定义CToolStripMenuItem->Name = L"自定义CToolStripMenuItem";
			this->自定义CToolStripMenuItem->Size = System::Drawing::Size(114, 26);
			this->自定义CToolStripMenuItem->Text = L"字体";
			// 
			// 选项OToolStripMenuItem
			// 
			this->选项OToolStripMenuItem->Name = L"选项OToolStripMenuItem";
			this->选项OToolStripMenuItem->Size = System::Drawing::Size(114, 26);
			this->选项OToolStripMenuItem->Text = L"颜色";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(409, 302);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// Note
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 302);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Note";
			this->Text = L"Note";
			this->Load += gcnew System::EventHandler(this, &Note::On_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 新建NToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
	menuStrip1->Visible = !this->IsMdiChild;  // 作为MDI子窗体时隐藏菜单栏


}
		 private: String ^filename;//编辑的文件名

public: property String ^FileName//属性：用于读写文件名字段，公开给其他类使用

{	//修改文件名时，要同时重新载入相应文件到richTextBox中，并且更改标题

	void set(String ^name)

	{

		filename = name;

		if (Path::GetExtension(filename) == ".rtf"

			|| Path::GetExtension(filename) == ".mtxt"){

			//重新载入相应文件到richTextBox中

			this->richTextBox1->LoadFile(filename, RichTextBoxStreamType::RichText);

		}

		else if (Path::GetExtension(filename) == ".txt"){
			//重新载入相应文件到richTextBox中
			this->richTextBox1->LoadFile(filename, RichTextBoxStreamType::PlainText);
		}
		this->Text = filename + "—编辑器";	//更改标题
	}
	String^ get()
	{
		return filename;
	}

}
};
}
