#pragma once

namespace My102MEdit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Note ժҪ
	/// </summary>
	public ref class Note : public System::Windows::Forms::Form
	{
	public:
		Note(void)
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
		~Note()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  �ļ�FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ΪAToolStripMenuItem;


	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ӡPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ӡԤ��VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �༭EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����UToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ظ�RToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  ����TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ճ��PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  ȫѡAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �Զ���CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ѡ��OToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Note::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�ļ�FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ΪAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->��ӡPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ӡԤ��VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�˳�XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�༭EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ظ�RToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ճ��PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ȫѡAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�Զ���CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ѡ��OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�ļ�FToolStripMenuItem,
					this->�༭EToolStripMenuItem, this->����TToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(282, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			// 
			// �ļ�FToolStripMenuItem
			// 
			this->�ļ�FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->����SToolStripMenuItem,
					this->���ΪAToolStripMenuItem, this->toolStripSeparator, this->toolStripSeparator1, this->��ӡPToolStripMenuItem, this->��ӡԤ��VToolStripMenuItem,
					this->toolStripSeparator2, this->�˳�XToolStripMenuItem
			});
			this->�ļ�FToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->�ļ�FToolStripMenuItem->MergeIndex = 0;
			this->�ļ�FToolStripMenuItem->Name = L"�ļ�FToolStripMenuItem";
			this->�ļ�FToolStripMenuItem->Size = System::Drawing::Size(69, 24);
			this->�ļ�FToolStripMenuItem->Text = L"�ļ�(&F)";
			// 
			// ����SToolStripMenuItem
			// 
			this->����SToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����SToolStripMenuItem.Image")));
			this->����SToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����SToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->����SToolStripMenuItem->MergeIndex = 3;
			this->����SToolStripMenuItem->Name = L"����SToolStripMenuItem";
			this->����SToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->����SToolStripMenuItem->Size = System::Drawing::Size(188, 26);
			this->����SToolStripMenuItem->Text = L"����(&S)";
			// 
			// ���ΪAToolStripMenuItem
			// 
			this->���ΪAToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->���ΪAToolStripMenuItem->MergeIndex = 4;
			this->���ΪAToolStripMenuItem->Name = L"���ΪAToolStripMenuItem";
			this->���ΪAToolStripMenuItem->Size = System::Drawing::Size(188, 26);
			this->���ΪAToolStripMenuItem->Text = L"���Ϊ(&A)";
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
			// ��ӡPToolStripMenuItem
			// 
			this->��ӡPToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡPToolStripMenuItem.Image")));
			this->��ӡPToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��ӡPToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->��ӡPToolStripMenuItem->MergeIndex = 6;
			this->��ӡPToolStripMenuItem->Name = L"��ӡPToolStripMenuItem";
			this->��ӡPToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->��ӡPToolStripMenuItem->Size = System::Drawing::Size(188, 26);
			this->��ӡPToolStripMenuItem->Text = L"��ӡ(&P)";
			// 
			// ��ӡԤ��VToolStripMenuItem
			// 
			this->��ӡԤ��VToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡԤ��VToolStripMenuItem.Image")));
			this->��ӡԤ��VToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��ӡԤ��VToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->��ӡԤ��VToolStripMenuItem->MergeIndex = 7;
			this->��ӡԤ��VToolStripMenuItem->Name = L"��ӡԤ��VToolStripMenuItem";
			this->��ӡԤ��VToolStripMenuItem->Size = System::Drawing::Size(188, 26);
			this->��ӡԤ��VToolStripMenuItem->Text = L"��ӡԤ��(&V)";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->toolStripSeparator2->MergeIndex = 8;
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(185, 6);
			// 
			// �˳�XToolStripMenuItem
			// 
			this->�˳�XToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->�˳�XToolStripMenuItem->MergeIndex = 9;
			this->�˳�XToolStripMenuItem->Name = L"�˳�XToolStripMenuItem";
			this->�˳�XToolStripMenuItem->Size = System::Drawing::Size(188, 26);
			this->�˳�XToolStripMenuItem->Text = L"�ر�(&C)";
			// 
			// �༭EToolStripMenuItem
			// 
			this->�༭EToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->����UToolStripMenuItem,
					this->�ظ�RToolStripMenuItem, this->toolStripSeparator3, this->����TToolStripMenuItem, this->����CToolStripMenuItem, this->ճ��PToolStripMenuItem,
					this->toolStripSeparator4, this->ȫѡAToolStripMenuItem
			});
			this->�༭EToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->�༭EToolStripMenuItem->MergeIndex = 2;
			this->�༭EToolStripMenuItem->Name = L"�༭EToolStripMenuItem";
			this->�༭EToolStripMenuItem->Size = System::Drawing::Size(69, 24);
			this->�༭EToolStripMenuItem->Text = L"�༭(&E)";
			// 
			// ����UToolStripMenuItem
			// 
			this->����UToolStripMenuItem->Name = L"����UToolStripMenuItem";
			this->����UToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->����UToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->����UToolStripMenuItem->Text = L"����(&U)";
			// 
			// �ظ�RToolStripMenuItem
			// 
			this->�ظ�RToolStripMenuItem->Name = L"�ظ�RToolStripMenuItem";
			this->�ظ�RToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->�ظ�RToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->�ظ�RToolStripMenuItem->Text = L"�ظ�(&R)";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(187, 6);
			// 
			// ����TToolStripMenuItem
			// 
			this->����TToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����TToolStripMenuItem.Image")));
			this->����TToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����TToolStripMenuItem->Name = L"����TToolStripMenuItem";
			this->����TToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->����TToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->����TToolStripMenuItem->Text = L"����(&T)";
			// 
			// ����CToolStripMenuItem
			// 
			this->����CToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����CToolStripMenuItem.Image")));
			this->����CToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����CToolStripMenuItem->Name = L"����CToolStripMenuItem";
			this->����CToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->����CToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->����CToolStripMenuItem->Text = L"����(&C)";
			// 
			// ճ��PToolStripMenuItem
			// 
			this->ճ��PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ճ��PToolStripMenuItem.Image")));
			this->ճ��PToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ճ��PToolStripMenuItem->Name = L"ճ��PToolStripMenuItem";
			this->ճ��PToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->ճ��PToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->ճ��PToolStripMenuItem->Text = L"ճ��(&P)";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(187, 6);
			// 
			// ȫѡAToolStripMenuItem
			// 
			this->ȫѡAToolStripMenuItem->Name = L"ȫѡAToolStripMenuItem";
			this->ȫѡAToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->ȫѡAToolStripMenuItem->Text = L"ȫѡ(&A)";
			// 
			// ����TToolStripMenuItem
			// 
			this->����TToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�Զ���CToolStripMenuItem,
					this->ѡ��OToolStripMenuItem
			});
			this->����TToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->����TToolStripMenuItem->MergeIndex = 3;
			this->����TToolStripMenuItem->Name = L"����TToolStripMenuItem";
			this->����TToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->����TToolStripMenuItem->Text = L"��ʽ";
			// 
			// �Զ���CToolStripMenuItem
			// 
			this->�Զ���CToolStripMenuItem->Name = L"�Զ���CToolStripMenuItem";
			this->�Զ���CToolStripMenuItem->Size = System::Drawing::Size(114, 26);
			this->�Զ���CToolStripMenuItem->Text = L"����";
			// 
			// ѡ��OToolStripMenuItem
			// 
			this->ѡ��OToolStripMenuItem->Name = L"ѡ��OToolStripMenuItem";
			this->ѡ��OToolStripMenuItem->Size = System::Drawing::Size(114, 26);
			this->ѡ��OToolStripMenuItem->Text = L"��ɫ";
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
	private: System::Void �½�NToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
	menuStrip1->Visible = !this->IsMdiChild;  // ��ΪMDI�Ӵ���ʱ���ز˵���


}
		 private: String ^filename;//�༭���ļ���

public: property String ^FileName//���ԣ����ڶ�д�ļ����ֶΣ�������������ʹ��

{	//�޸��ļ���ʱ��Ҫͬʱ����������Ӧ�ļ���richTextBox�У����Ҹ��ı���

	void set(String ^name)

	{

		filename = name;

		if (Path::GetExtension(filename) == ".rtf"

			|| Path::GetExtension(filename) == ".mtxt"){

			//����������Ӧ�ļ���richTextBox��

			this->richTextBox1->LoadFile(filename, RichTextBoxStreamType::RichText);

		}

		else if (Path::GetExtension(filename) == ".txt"){
			//����������Ӧ�ļ���richTextBox��
			this->richTextBox1->LoadFile(filename, RichTextBoxStreamType::PlainText);
		}
		this->Text = filename + "���༭��";	//���ı���
	}
	String^ get()
	{
		return filename;
	}

}
};
}
