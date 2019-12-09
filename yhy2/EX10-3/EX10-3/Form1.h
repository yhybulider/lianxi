#pragma once

namespace EX103 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::NumericUpDown^  posYud;
	protected:

	private: System::Windows::Forms::NumericUpDown^  posXud;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->posYud = (gcnew System::Windows::Forms::NumericUpDown());
			this->posXud = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->posYud))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->posXud))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->posYud);
			this->splitContainer1->Panel1->Controls->Add(this->posXud);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::On_2Paint);
			this->splitContainer1->Panel2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::On_2MouseDown);
			this->splitContainer1->Size = System::Drawing::Size(674, 425);
			this->splitContainer1->SplitterDistance = 224;
			this->splitContainer1->TabIndex = 0;
			// 
			// posYud
			// 
			this->posYud->Location = System::Drawing::Point(97, 229);
			this->posYud->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->posYud->Name = L"posYud";
			this->posYud->Size = System::Drawing::Size(120, 25);
			this->posYud->TabIndex = 3;
			this->posYud->ValueChanged += gcnew System::EventHandler(this, &Form1::On_1ValueChanged);
			// 
			// posXud
			// 
			this->posXud->Location = System::Drawing::Point(97, 131);
			this->posXud->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->posXud->Name = L"posXud";
			this->posXud->Size = System::Drawing::Size(120, 25);
			this->posXud->TabIndex = 2;
			this->posXud->ValueChanged += gcnew System::EventHandler(this, &Form1::On_1ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 231);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Y坐标";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X坐标";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(674, 425);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"Form1";
			this->Text = L"切分窗口设计";
			this->Load += gcnew System::EventHandler(this, &Form1::On_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->posYud))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->posXud))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: Drawing::Point m_ptPos;
	private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
		m_ptPos = Drawing::Point(0, 0);	// 设置点位置坐标的初值

		// 设置左边窗格中控件的数值

		this->posXud->Value = (Decimal)m_ptPos.X;

		this->posYud->Value = (Decimal)m_ptPos.Y;

		// 更新右边窗格Panel2中的内容

		this->splitContainer1->Panel2->Invalidate();
	}
private: System::Void On_2Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	Graphics^ pGH = e->Graphics;

	Rectangle rc = Rectangle(m_ptPos.X - 4, m_ptPos.Y - 4, 8, 8);

	pGH->FillRectangle(Brushes::Blue, rc);
}
private: System::Void On_2MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	// 设置左边窗格中控件的数值	  

	this->posXud->Value = (Decimal)e->X;

	this->posYud->Value = (Decimal)e->Y;
}
private: System::Void On_1ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	m_ptPos.X = (int)posXud->Value;

	m_ptPos.Y = (int)posYud->Value;

	// 更新右边窗格Panel2中的内容

	this->splitContainer1->Panel2->Invalidate();
}
};
}

