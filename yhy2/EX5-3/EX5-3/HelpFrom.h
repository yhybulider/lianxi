#pragma once

namespace EX53 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// HelpFrom 摘要
	/// </summary>
	public ref class HelpFrom : public System::Windows::Forms::Form
	{
	public:
		HelpFrom(void)
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
		~HelpFrom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 7));
			this->label1->Location = System::Drawing::Point(13, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"用鼠标拖动游戏窗体使其与主窗体的左上角重合";
			// 
			// HelpFrom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 103);
			this->Controls->Add(this->label1);
			this->Name = L"HelpFrom";
			this->Text = L"游戏说明窗体";
			this->Load += gcnew System::EventHandler(this, &HelpFrom::HelpFrom_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HelpFrom_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
