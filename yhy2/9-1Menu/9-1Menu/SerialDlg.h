#pragma once

namespace My91Menu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SerialDlg ժҪ
	/// </summary>
	public ref class SerialDlg : public System::Windows::Forms::Form
	{
	public:
		SerialDlg(void)
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
		~SerialDlg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  serialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  baudrateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  databitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stopbitToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->serialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->baudrateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->databitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stopbitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(55, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"����λ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(55, 249);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ֹͣλ";
			// 
			// comboBox1
			// 
			this->comboBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(176, 68);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(128, 23);
			this->comboBox1->TabIndex = 4;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->serialToolStripMenuItem,
					this->baudrateToolStripMenuItem, this->databitToolStripMenuItem, this->stopbitToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(144, 100);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &SerialDlg::On_Opening);
			// 
			// serialToolStripMenuItem
			// 
			this->serialToolStripMenuItem->Name = L"serialToolStripMenuItem";
			this->serialToolStripMenuItem->Size = System::Drawing::Size(143, 24);
			this->serialToolStripMenuItem->Text = L"Serial";
			this->serialToolStripMenuItem->Click += gcnew System::EventHandler(this, &SerialDlg::serialToolStripMenuItem_Click);
			// 
			// baudrateToolStripMenuItem
			// 
			this->baudrateToolStripMenuItem->Name = L"baudrateToolStripMenuItem";
			this->baudrateToolStripMenuItem->Size = System::Drawing::Size(143, 24);
			this->baudrateToolStripMenuItem->Text = L"Baudrate";
			this->baudrateToolStripMenuItem->Click += gcnew System::EventHandler(this, &SerialDlg::baudrateToolStripMenuItem_Click);
			// 
			// databitToolStripMenuItem
			// 
			this->databitToolStripMenuItem->Name = L"databitToolStripMenuItem";
			this->databitToolStripMenuItem->Size = System::Drawing::Size(143, 24);
			this->databitToolStripMenuItem->Text = L"databit";
			this->databitToolStripMenuItem->Click += gcnew System::EventHandler(this, &SerialDlg::databitToolStripMenuItem_Click);
			// 
			// stopbitToolStripMenuItem
			// 
			this->stopbitToolStripMenuItem->Name = L"stopbitToolStripMenuItem";
			this->stopbitToolStripMenuItem->Size = System::Drawing::Size(143, 24);
			this->stopbitToolStripMenuItem->Text = L"stopbit";
			this->stopbitToolStripMenuItem->Click += gcnew System::EventHandler(this, &SerialDlg::stopbitToolStripMenuItem_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->ContextMenuStrip = this->contextMenuStrip1;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(176, 136);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(128, 23);
			this->comboBox2->TabIndex = 5;
			// 
			// comboBox3
			// 
			this->comboBox3->ContextMenuStrip = this->contextMenuStrip1;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(176, 196);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(128, 23);
			this->comboBox3->TabIndex = 6;
			// 
			// comboBox4
			// 
			this->comboBox4->ContextMenuStrip = this->contextMenuStrip1;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(176, 246);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(128, 23);
			this->comboBox4->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(58, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 31);
			this->button1->TabIndex = 8;
			this->button1->Text = L"ȷ��";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SerialDlg::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(245, 339);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 31);
			this->button2->TabIndex = 9;
			this->button2->Text = L"ȡ��";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// SerialDlg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(456, 393);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"SerialDlg";
			this->Text = L"��������";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SerialDlg::On_MouseDown);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^str = "���ڲ�������Ϊ��";
		str = str + "\n���ڣ�" + this->comboBox1->Text;
		str = str + "\n�����ʣ�" + this->comboBox2->Text;
		str = str + "\n����λ��" + this->comboBox3->Text;
		str = str + "\nֹͣλ��" + this->comboBox4->Text;

		MessageBox::Show(str, "���ڲ�������");
	}
private: System::Void On_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	for(int i = 0; i<contextMenuStrip1->Items->Count; i++)
		contextMenuStrip1->Items[i]->Enabled = true;
	if (contextMenuStrip1->SourceControl == this->comboBox1)
		contextMenuStrip1->Items[0]->Enabled = false;
	if (contextMenuStrip1->SourceControl == this->comboBox2)
		contextMenuStrip1->Items[1]->Enabled = false;
	if (contextMenuStrip1->SourceControl == this->comboBox3)
		contextMenuStrip1->Items[2]->Enabled = false;
	if (contextMenuStrip1->SourceControl == this->comboBox4)

		contextMenuStrip1->Items[3]->Enabled = false;
}
private: System::Void On_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	// �ж��Ƿ��һ����
	if (e->Button == System::Windows::Forms::MouseButtons::Right)
	{

		this->contextMenuStrip1->Show(this, e->Location);

	}
}
private: System::Void serialToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(L"��ʾ���ڲ���");
}
private: System::Void baudrateToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(L"��ʾ�����ʲ���");
}
private: System::Void databitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(L"��ʾ����λ����");
}
private: System::Void stopbitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(L"��ʾֹͣλ����");
}
};
}
