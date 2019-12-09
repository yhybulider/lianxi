#pragma once

namespace My111时钟精灵 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static const int s_pinlen = 100;        //时针

	static const int m_pinlen = 75;         //分针

	static const int h_pinlen = 50;         //秒针
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
	private: System::Windows::Forms::Timer^  timer1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(223, 139);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(305, 218);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(332, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"12";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(604, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(349, 391);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"6";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(114, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 15);
			this->label4->TabIndex = 4;
			this->label4->Text = L"9";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 451);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		int h = (int)DateTime::Now.Hour;

		int m = DateTime::Now.Minute;

		int s = DateTime::Now.Second;

		myClock(h, m, s);

		this->Text = "现在的时间是：" + h.ToString() + "：" + m.ToString() + "：" + s.ToString();
	}
			 private:void myClock(int h, int m, int s)

			 {

				 Graphics ^myGraphics = pictureBox1->CreateGraphics();          //创建Graphics对象实例

				 myGraphics->Clear(Color::White);                       //设置背景色为白色

				 Pen ^myPen = gcnew Pen(Color::Black, 1);                //设置画笔的颜色和宽度

				 myGraphics->DrawEllipse(myPen, pictureBox1->ClientRectangle);    //绘制椭圆

				 Point CPoint = Point(pictureBox1->ClientRectangle.Width / 2, pictureBox1->ClientRectangle.Height / 2);

				 Point SPoint = Point((int)(CPoint.X + (Math::Sin(6 * s* Math::PI / 180)) * s_pinlen), (int)(CPoint.Y - (Math::Cos(6 * s * Math::PI / 180)) * s_pinlen));

				 Point MPoint = Point((int)(CPoint.X + (Math::Sin(6 * m* Math::PI / 180)) * m_pinlen), (int)(CPoint.Y - (Math::Cos(6 * m * Math::PI / 180)) * m_pinlen));

				 Point HPoint = Point((int)(CPoint.X + (Math::Sin(((30 * h) + (m / 2)) * Math::PI / 180)) * h_pinlen), (int)(CPoint.Y - (Math::Cos(((30 * h) + (m / 2)) * Math::PI / 180)) * h_pinlen));

				 myGraphics->DrawLine(myPen, CPoint, SPoint);//绘制直线

				 myPen = gcnew Pen(Color::Black, 2);

				 myGraphics->DrawLine(myPen, CPoint, MPoint);

				 myPen = gcnew Pen(Color::Black, 4);

				 myGraphics->DrawLine(myPen, CPoint, HPoint);

			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	this->timer1->Enabled = true;
}
};
}

