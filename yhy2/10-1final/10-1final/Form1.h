#pragma once
#include "Form2.h"
#include "WordForm.h"
#include "ImageForm.h"
namespace My101final {

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
	private: System::Windows::Forms::ToolStripMenuItem^  �ļ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �½�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ı�����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ͼ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �༭ToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;

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
			this->�ļ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�½�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ı�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ͼ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�༭ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�ļ�ToolStripMenuItem,
					this->����ToolStripMenuItem, this->�༭ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->����ToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(588, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �ļ�ToolStripMenuItem
			// 
			this->�ļ�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�½�ToolStripMenuItem,
					this->����ToolStripMenuItem, this->�˳�ToolStripMenuItem
			});
			this->�ļ�ToolStripMenuItem->Name = L"�ļ�ToolStripMenuItem";
			this->�ļ�ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->�ļ�ToolStripMenuItem->Text = L"�ļ�";
			// 
			// �½�ToolStripMenuItem
			// 
			this->�½�ToolStripMenuItem->Name = L"�½�ToolStripMenuItem";
			this->�½�ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�½�ToolStripMenuItem->Text = L"�½�";
			this->�½�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newMenuClick);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�ı�����ToolStripMenuItem,
					this->ͼ����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �ı�����ToolStripMenuItem
			// 
			this->�ı�����ToolStripMenuItem->Name = L"�ı�����ToolStripMenuItem";
			this->�ı�����ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->�ı�����ToolStripMenuItem->Text = L"�ı�����";
			this->�ı�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::On_WordFile);
			// 
			// ͼ����ToolStripMenuItem
			// 
			this->ͼ����ToolStripMenuItem->Name = L"ͼ����ToolStripMenuItem";
			this->ͼ����ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->ͼ����ToolStripMenuItem->Text = L"ͼ����";
			this->ͼ����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::On_ImageFile);
			// 
			// �˳�ToolStripMenuItem
			// 
			this->�˳�ToolStripMenuItem->Name = L"�˳�ToolStripMenuItem";
			this->�˳�ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�˳�ToolStripMenuItem->Text = L"�˳�";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �༭ToolStripMenuItem
			// 
			this->�༭ToolStripMenuItem->Name = L"�༭ToolStripMenuItem";
			this->�༭ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->�༭ToolStripMenuItem->Text = L"�༭";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton1,
					this->toolStripDropDownButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(588, 27);
			this->toolStrip1->TabIndex = 4;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(24, 24);
			this->toolStripButton1->Text = L"toolStripButton1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(34, 24);
			this->toolStripDropDownButton1->Text = L"toolStripDropDownButton1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(588, 365);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"MDI������";
			this->MdiChildActivate += gcnew System::EventHandler(this, &Form1::form1MidChildActive);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void newMenuClick(System::Object^  sender, System::EventArgs^  e) {
	Form2^ childForm = gcnew Form2();   // �����Ӵ������
	childForm->MdiParent = this;               // �����Ӵ���ĸ�����
	childForm->Show();                               // ��ʾ�Ӵ���
}
private: System::Void On_WordFile(System::Object^  sender, System::EventArgs^  e) {
	WordForm^ doc = gcnew WordForm;
	doc->MdiParent = this;
	doc->Show();
}
private: System::Void On_ImageFile(System::Object^  sender, System::EventArgs^  e) {
	ImageForm^ doc = gcnew ImageForm;
	doc->MdiParent = this;
	doc->Show();
}
private: System::Void form1MidChildActive(System::Object^  sender, System::EventArgs^  e) {
	ToolStripManager::RevertMerge(toolStrip1);    // �����ϴεĺϲ�����
	if (this->ActiveMdiChild == nullptr) return;   // �Ƿ�Ϊ����MDI�Ӵ���
		Form2^ childForm = safe_cast<Form2^>(this->ActiveMdiChild); // �Ӵ������ ���ﱨ����Ϊʲô��
	ToolStripManager::Merge(childForm->MergeToolStrip, toolStrip1); // �ϲ�������
	
	
}
};
}

