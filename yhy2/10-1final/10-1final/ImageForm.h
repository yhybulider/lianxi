#pragma once

namespace My101final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ImageForm ժҪ
	/// </summary>
	public ref class ImageForm : public System::Windows::Forms::Form
	{
	public:
		ImageForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
	private: System::Windows::Forms::ToolStripMenuItem^  ����OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��תToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��תToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����OToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(312, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����OToolStripMenuItem
			// 
			this->����OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��תToolStripMenuItem,
					this->����ToolStripMenuItem
			});
			this->����OToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->����OToolStripMenuItem->MergeIndex = 2;
			this->����OToolStripMenuItem->Name = L"����OToolStripMenuItem";
			this->����OToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->����OToolStripMenuItem->Text = L"����(&O)";
			// 
			// ��תToolStripMenuItem
			// 
			this->��תToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->��תToolStripMenuItem->MergeIndex = 1;
			this->��תToolStripMenuItem->Name = L"��תToolStripMenuItem";
			this->��תToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->��תToolStripMenuItem->Text = L"��ת(&R)";
			this->��תToolStripMenuItem->Click += gcnew System::EventHandler(this, &ImageForm::��תToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->����ToolStripMenuItem->MergeIndex = 2;
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->����ToolStripMenuItem->Text = L"����(&S)";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ImageForm::����ToolStripMenuItem_Click);
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
	private: System::Void ��תToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
		menuStrip1->Visible = !this->IsMdiChild;  // ��ΪMDI�Ӵ���ʱ���ز˵���
	}
};
}
