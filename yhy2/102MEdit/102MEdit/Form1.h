#pragma once
#include "Note.h"
#include "AboutDlg.h"
namespace My102MEdit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace	System::IO;

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
	private: System::Windows::Forms::ToolStripMenuItem^  �ļ�FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �½�NToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;





	private: System::Windows::Forms::ToolStripMenuItem^  �˳�XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;



	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;



	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^  ����HToolStripMenuItem;



	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripMenuItem^  ����AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ˮƽƽ��ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  ��ֱƽ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��OToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�ļ�FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�½�NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�˳�XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ˮƽƽ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ֱƽ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�ļ�FToolStripMenuItem,
					this->����ToolStripMenuItem, this->����HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->����ToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(432, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �ļ�FToolStripMenuItem
			// 
			this->�ļ�FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�½�NToolStripMenuItem,
					this->��OToolStripMenuItem, this->toolStripSeparator, this->�˳�XToolStripMenuItem
			});
			this->�ļ�FToolStripMenuItem->Name = L"�ļ�FToolStripMenuItem";
			this->�ļ�FToolStripMenuItem->Size = System::Drawing::Size(69, 24);
			this->�ļ�FToolStripMenuItem->Text = L"�ļ�(&F)";
			// 
			// �½�NToolStripMenuItem
			// 
			this->�½�NToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�½�NToolStripMenuItem.Image")));
			this->�½�NToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�½�NToolStripMenuItem->Name = L"�½�NToolStripMenuItem";
			this->�½�NToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->�½�NToolStripMenuItem->Size = System::Drawing::Size(194, 26);
			this->�½�NToolStripMenuItem->Text = L"�½�(&N)";
			this->�½�NToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�½�NToolStripMenuItem_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(191, 6);
			// 
			// �˳�XToolStripMenuItem
			// 
			this->�˳�XToolStripMenuItem->Name = L"�˳�XToolStripMenuItem";
			this->�˳�XToolStripMenuItem->Size = System::Drawing::Size(194, 26);
			this->�˳�XToolStripMenuItem->Text = L"�˳�(&X)";
			this->�˳�XToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�˳�XToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripSeparator3,
					this->toolStripSeparator4, this->���ToolStripMenuItem, this->ˮƽƽ��ToolStripMenuItem, this->��ֱƽ��ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::����ToolStripMenuItem_DropDownItemClicked);
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�༭EToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(141, 6);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(141, 6);
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->���ToolStripMenuItem->Text = L"���";
			this->���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ȫѡAToolStripMenuItem_Click);
			// 
			// ˮƽƽ��ToolStripMenuItem
			// 
			this->ˮƽƽ��ToolStripMenuItem->Name = L"ˮƽƽ��ToolStripMenuItem";
			this->ˮƽƽ��ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->ˮƽƽ��ToolStripMenuItem->Text = L"ˮƽƽ��";
			// 
			// ��ֱƽ��ToolStripMenuItem
			// 
			this->��ֱƽ��ToolStripMenuItem->Name = L"��ֱƽ��ToolStripMenuItem";
			this->��ֱƽ��ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->��ֱƽ��ToolStripMenuItem->Text = L"��ֱƽ��";
			// 
			// ����HToolStripMenuItem
			// 
			this->����HToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripSeparator5,
					this->����AToolStripMenuItem
			});
			this->����HToolStripMenuItem->Name = L"����HToolStripMenuItem";
			this->����HToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->����HToolStripMenuItem->Text = L"����(&H)";
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(144, 6);
			// 
			// ����AToolStripMenuItem
			// 
			this->����AToolStripMenuItem->Name = L"����AToolStripMenuItem";
			this->����AToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->����AToolStripMenuItem->Text = L"����(&A)...";
			this->����AToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����AToolStripMenuItem_Click);
			// 
			// ��OToolStripMenuItem
			// 
			this->��OToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��OToolStripMenuItem.Image")));
			this->��OToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��OToolStripMenuItem->Name = L"��OToolStripMenuItem";
			this->��OToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->��OToolStripMenuItem->Size = System::Drawing::Size(194, 26);
			this->��OToolStripMenuItem->Text = L"��(&O)";
			this->��OToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��OToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 375);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->Name = L"Form1";
			this->Text = L"�༭��";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void �½�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void �༭EToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ȫѡAToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
	 private: static int FormCount = 1;
private: System::Void ����ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	ToolStripMenuItem^ item;
	if (e == nullptr)
		item = safe_cast<ToolStripMenuItem^>(sender);
	else
		item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
	if (item == ���ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::Cascade);	//���
	else if (item == ˮƽƽ��ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::TileHorizontal); //ˮƽƽ��
	else if (item == ��ֱƽ��ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::TileVertical); //��ֱƽ��
}
private: System::Void �½�NToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Note ^newMDIChild = gcnew Note();
	newMDIChild->MdiParent = this;
	newMDIChild->Text = "�ĵ�" + FormCount.ToString();
	FormCount++;

	newMDIChild->Show();//��ʾ�Ӵ���
}
private: System::Void �˳�XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void ����AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AboutDlg^ dlg = gcnew AboutDlg;
	dlg->ShowDialog();
}
private: System::Void ��OToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^filename;
	System::Windows::Forms::DialogResult dlg;   //��ȡͨ�öԻ��������

	openFileDialog1->InitialDirectory = "E:\\C++\\VCPP\\";

	openFileDialog1->Filter = "�ҵ��ĵ�(*.mtxt)|*.mtxt|Rtf files(*.rtf)|*.rtf|�ı��ļ�(*.txt)|*.txt";

	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;
	openFileDialog1->FileName = "";
	dlg = openFileDialog1->ShowDialog();
	try{
		if (dlg == System::Windows::Forms::DialogResult::OK)
		{
			if (Path::GetExtension(openFileDialog1->FileName) == ".rtf"

				|| Path::GetExtension(openFileDialog1->FileName) == ".mtxt"

				|| Path::GetExtension(openFileDialog1->FileName) == ".txt"){  //ʹ��Path������ǰ�����using namespace System::IO;

				filename = openFileDialog1->FileName;

				Note ^newMDIChild = gcnew Note();

				newMDIChild->MdiParent = this;

				newMDIChild->FileName = filename;

				newMDIChild->Show();

			}

			else MessageBox::Show(L"ѡ��Ĳ���mtxt��RTF��TXT��ʽ���ļ�����Ч", "����", MessageBoxButtons::OK);

		}

	}

	catch (System::ArgumentException ^e){

		MessageBox::Show(L"���ļ�����", "����", MessageBoxButtons::OK);

	}
}
};
}

