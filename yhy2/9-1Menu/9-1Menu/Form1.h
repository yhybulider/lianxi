#pragma once
#include "SerialDlg.h"
namespace My91Menu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 ժҪ
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
	private: System::Windows::Forms::ToolStripMenuItem^  ϵͳToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ͨ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uSBToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ƵToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �¶�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʪ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ѹToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �鿴ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ״̬��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �Զ�����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

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
			this->ϵͳToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ͨ������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSBToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ƵToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�¶�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʪ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ѹToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�鿴ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->״̬��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�Զ�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ϵͳToolStripMenuItem,
					this->ͨ������ToolStripMenuItem, this->��������ToolStripMenuItem, this->�鿴ToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(697, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ϵͳToolStripMenuItem
			// 
			this->ϵͳToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��ToolStripMenuItem,
					this->�˳�ToolStripMenuItem
			});
			this->ϵͳToolStripMenuItem->Name = L"ϵͳToolStripMenuItem";
			this->ϵͳToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->ϵͳToolStripMenuItem->Text = L"ϵͳ";
			this->ϵͳToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::On_DoSystemMenu);
			// 
			// ��ToolStripMenuItem
			// 
			this->��ToolStripMenuItem->Name = L"��ToolStripMenuItem";
			this->��ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->��ToolStripMenuItem->Text = L"��";
			// 
			// �˳�ToolStripMenuItem
			// 
			this->�˳�ToolStripMenuItem->Name = L"�˳�ToolStripMenuItem";
			this->�˳�ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�˳�ToolStripMenuItem->Text = L"�˳�";
			// 
			// ͨ������ToolStripMenuItem
			// 
			this->ͨ������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->����ToolStripMenuItem,
					this->����ToolStripMenuItem, this->uSBToolStripMenuItem, this->����ToolStripMenuItem
			});
			this->ͨ������ToolStripMenuItem->Name = L"ͨ������ToolStripMenuItem";
			this->ͨ������ToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->ͨ������ToolStripMenuItem->Text = L"ͨ������";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::serialToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// uSBToolStripMenuItem
			// 
			this->uSBToolStripMenuItem->Name = L"uSBToolStripMenuItem";
			this->uSBToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->uSBToolStripMenuItem->Text = L"USB";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��ƵToolStripMenuItem,
					this->����ToolStripMenuItem, this->����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ��ƵToolStripMenuItem
			// 
			this->��ƵToolStripMenuItem->Name = L"��ƵToolStripMenuItem";
			this->��ƵToolStripMenuItem->Size = System::Drawing::Size(114, 26);
			this->��ƵToolStripMenuItem->Text = L"��Ƶ";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(114, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(114, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�¶�ToolStripMenuItem,
					this->ʪ��ToolStripMenuItem, this->��ѹToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// �¶�ToolStripMenuItem
			// 
			this->�¶�ToolStripMenuItem->Name = L"�¶�ToolStripMenuItem";
			this->�¶�ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�¶�ToolStripMenuItem->Text = L"�¶�";
			// 
			// ʪ��ToolStripMenuItem
			// 
			this->ʪ��ToolStripMenuItem->Name = L"ʪ��ToolStripMenuItem";
			this->ʪ��ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->ʪ��ToolStripMenuItem->Text = L"ʪ��";
			// 
			// ��ѹToolStripMenuItem
			// 
			this->��ѹToolStripMenuItem->Name = L"��ѹToolStripMenuItem";
			this->��ѹToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->��ѹToolStripMenuItem->Text = L"��ѹ";
			// 
			// �鿴ToolStripMenuItem
			// 
			this->�鿴ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->������ToolStripMenuItem,
					this->״̬��ToolStripMenuItem, this->����ToolStripMenuItem, this->�Զ�����ToolStripMenuItem
			});
			this->�鿴ToolStripMenuItem->Name = L"�鿴ToolStripMenuItem";
			this->�鿴ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->�鿴ToolStripMenuItem->Text = L"�鿴";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ״̬��ToolStripMenuItem
			// 
			this->״̬��ToolStripMenuItem->Name = L"״̬��ToolStripMenuItem";
			this->״̬��ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->״̬��ToolStripMenuItem->Text = L"״̬��";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �Զ�����ToolStripMenuItem
			// 
			this->�Զ�����ToolStripMenuItem->Name = L"�Զ�����ToolStripMenuItem";
			this->�Զ�����ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->�Զ�����ToolStripMenuItem->Text = L"�Զ�����";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->helpToolStripMenuItem->Text = L"����";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(152, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"���";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(271, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(29, 117);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(605, 276);
			this->textBox2->TabIndex = 3;
			this->textBox2->WordWrap = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 465);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
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
		private: System::Void On_DoMenuItem(System::Object^  sender, System::EventArgs^  e) {
			System::Windows::Forms::ToolStripMenuItem^  tempItem;
			tempItem = static_cast<System::Windows::Forms::ToolStripMenuItem^>(sender);
			if (tempItem != nullptr)	 {
				String^ strText = tempItem->Text->Trim();
				if ((strText->Length >= 2) && (strText->Substring(0, 2)->Equals("�˳�")))
					this->Close();//����ӵĲ˵���Ϊ���˳���
				else
					MessageBox::Show(String::Concat("ѡ��Ĳ˵����ǣ�", strText), "��ʾ");

			}

		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ strText = this->textBox1->Text->Trim();

		if (String::IsNullOrEmpty(strText))

		{
			MessageBox::Show("�˵����ı�����Ϊ�գ�", "��ʾ");

			return;

		}

		for (int i = 0; i<helpToolStripMenuItem->DropDownItems->Count; i++)

		{
			if (strText->Equals(helpToolStripMenuItem->DropDownItems[i]->Text->Trim()))

			{
				MessageBox::Show("�ò˵�������ӹ��������ظ���ӣ�", "��ʾ");
				return;
			}

		}

		System::Windows::Forms::ToolStripMenuItem^  tempItem;

		tempItem = gcnew System::Windows::Forms::ToolStripMenuItem(strText);

		tempItem->Click += gcnew System::EventHandler(this, &Form1::On_DoMenuItem);

		this->helpToolStripMenuItem->DropDownItems->Add(tempItem);
	}
private: System::Void On_DoSystemMenu(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	ToolStripMenuItem^ item;

	if (e == nullptr)

		item = safe_cast<ToolStripMenuItem^>(sender);

	else

		item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);

	if (item == ��ToolStripMenuItem)

	{

		OpenFileDialog^ pOFD = gcnew OpenFileDialog();

		pOFD->Filter = "�ı��ļ�(*.txt)|*.txt|�����ļ�(*.*)|*.*";

		pOFD->DefaultExt = "txt";

		if (pOFD->ShowDialog() == Windows::Forms::DialogResult::OK)

		{

			System::IO::StreamReader ^pReader = gcnew System::IO::StreamReader(pOFD->FileName, System::Text::Encoding::Default);

			textBox2->Text = pReader->ReadToEnd();

			textBox2->Select(0, 0);

			pReader->Close();

			// ��״̬������ʾ��Ϣ

			//statusStrip1->Items[3]->Text = "����";

			//statusStrip1->Items[3]->Text = pOFD->FileName;

		}

	}
	else if (item == �˳�ToolStripMenuItem)

		this->Close();
}
private: System::Void serialToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SerialDlg ^dlg = gcnew SerialDlg();

	dlg->ShowDialog();
}
};
}

