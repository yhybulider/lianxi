#pragma once
#include "math.h"
namespace My134 {
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Timer^  timer1;
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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(151, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(194, 37);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(76, 25);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(710, 427);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"��ת�ķ���";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Fan_Paint);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		literal float Pi = 3.1415926;
		static int nNum, nMaxNum;//nNum�ۼӱ�����nMaxNumԲ�����ֵĿ���
		

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		nNum = 0, nMaxNum = 20;
		this->timer1->Enabled = true;
		m_bDraw = false;   //����ֵ�����δ����
		m_ptOrigin = Point(0, 0);//Ϊ����ԭ�㡣
	}
	private: System::Void Fan_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ pGH = e->Graphics;
		Pen ^pPen = gcnew Pen(Color::Black, 2);
		pGH->DrawEllipse(pPen, 100 - 3, 50 - 3, 200 + 3, 200 + 3);//��Բ��
		SolidBrush^ brush1 = gcnew SolidBrush(Color::LawnGreen);//������
		pGH->DrawRectangle(pPen, 180, 250, 40, 100);
		pGH->FillRectangle(brush1, 180, 250, 40, 100);
		pGH->DrawRectangle(pPen, 100, 350, 200, 50);
		pGH->FillRectangle(brush1, 100, 350, 200, 50);
	}
			 private: System::Void DrawAnimated(System::Object^  sender, System::EventArgs^  e, int drawflag){

				 Pen ^pPen;
				 SolidBrush^ brush1, ^ brush2, ^ brush3;
				 double fAngle = (2 * Pi) / nMaxNum*nNum;
				 Graphics ^pGH = this->CreateGraphics();
				 if (drawflag == 1)
				 {
					 pPen = gcnew Pen(Color::Black, 2);
					 brush1 = gcnew SolidBrush(Color::Red);//����ɫ��ҶƬ.
					 brush2 = gcnew SolidBrush(Color::Blue);
					 brush3 = gcnew SolidBrush(Color::Yellow);//����ɫ��ҶƬ.
				 }
				 else
				 {
					 pPen = gcnew Pen(this->BackColor);
					 brush1 = gcnew SolidBrush(this->BackColor);//����ɫ��ҶƬ.
					 brush2 = gcnew SolidBrush(this->BackColor);
					 brush3 = gcnew SolidBrush(this->BackColor);//����ɫ��ҶƬ.
				 }
				 //red color
				 int nCenterX = (int)(200 + 50 * cos(fAngle));
				 int nCenterY = (int)(150 + 50 * sin(fAngle));
				 int startAngle = 18 * nNum;//fAngle;
				 int sweepAngle = 180;
				 // pGH->DrawPie(pPen,nCenterX-50,nCenterY-50,100,100,startAngle,sweepAngle);
				 pGH->FillPie(brush1, nCenterX - 50, nCenterY - 50, 100, 100, startAngle, sweepAngle);

				 //blue color

				 nCenterX = (int)(200 + 50 * cos(fAngle + 2 * Pi / 3));//Math::PI
				 nCenterY = (int)(150 + 50 * sin(fAngle + 2 * Pi / 3));
				 startAngle = 18 * nNum + 120;
				 sweepAngle = 180;
				 // pGH->DrawPie(pPen,nCenterX-50,nCenterY-50,100,100,startAngle,sweepAngle);
				 pGH->FillPie(brush2, nCenterX - 50, nCenterY - 50, 100, 100, startAngle, sweepAngle);
				 //yello color

				 nCenterX = (int)(200 + 50 * cos(fAngle + 4 * Pi / 3));
				 nCenterY = (int)(150 + 50 * sin(fAngle + 4 * Pi / 3));
				 startAngle = 18 * nNum + 240;;
				 sweepAngle = 180;

				 // pGH->DrawPie(pPen,nCenterX-50,nCenterY-50,100,100,startAngle,sweepAngle);
				 pGH->FillPie(brush3, nCenterX - 50, nCenterY - 50, 100, 100, startAngle, sweepAngle);
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		DrawAnimated(sender, e, 0);	//����ԭ����
		nNum++;			//��ǰ������1.
		DrawAnimated(sender, e, 1);	//�����µ�
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	this->timer1->Enabled = false;
	int v = Convert::ToInt32(this->numericUpDown1->Text);
	this->timer1->Interval = v;
	this->timer1->Enabled = true;
}
		 bool m_bDraw;		//����Ƿ���
		 Point m_ptOrigin;	//��¼���ߵ���ʼ������

	 

				  
 
private: System::Void Form1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	m_bDraw = true;    //OnLButtionDown������Ѱ���
	m_ptOrigin = Point(e->X, e->Y);   //OnLButtionDown

}
private: System::Void Form1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Graphics ^pGH = this->CreateGraphics();
	Point point(e->X, e->Y);
	Pen ^pPen = gcnew Pen(Color::Black, 2);
	if (m_bDraw)
	{
		pGH->DrawLine(pPen, m_ptOrigin, point);
		m_ptOrigin = point;//�޸��´λ��ߵ�ʼ��
	}
}
private: System::Void Form1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	m_bDraw = false;   //�ڹ��캯����OnLButtonUp�����и�ֵ�����δ����
}
};
}

