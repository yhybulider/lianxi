#pragma once

namespace My101final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// WordForm ժҪ
	/// </summary>
	public ref class WordForm : public System::Windows::Forms::Form
	{
	public:
		WordForm(void)
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
		~WordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����IToolStripMenuItem;
	protected:

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
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����IToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����OToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(282, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����OToolStripMenuItem
			// 
			this->����OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->����IToolStripMenuItem
			});
			this->����OToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->����OToolStripMenuItem->MergeIndex = 2;
			this->����OToolStripMenuItem->Name = L"����OToolStripMenuItem";
			this->����OToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->����OToolStripMenuItem->Text = L"����(&O)";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->����ToolStripMenuItem->MergeIndex = 1;
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->����ToolStripMenuItem->Text = L"����(&F)";
			// 
			// ����IToolStripMenuItem
			// 
			this->����IToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->����IToolStripMenuItem->MergeIndex = 2;
			this->����IToolStripMenuItem->Name = L"����IToolStripMenuItem";
			this->����IToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->����IToolStripMenuItem->Text = L"����(&I)";
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
		menuStrip1->Visible = !this->IsMdiChild;  // ��ΪMDI�Ӵ���ʱ���ز˵���
	}
};
}
