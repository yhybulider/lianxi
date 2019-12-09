#pragma once

namespace EX133 {

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
			this->SuspendLayout();
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 486);
			this->Name = L"Form1";
			this->Text = L"�ɼ�ͳ��ͼ";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ScoreStatis(array<double>^ score, array<int>^ scoreNum) {

		for each (double s in score) {

			if (s >= 90) scoreNum[0]++;// ͳ�Ƹ������ε�����
			else if (s >= 80) scoreNum[1]++;
			else if (s >= 70) scoreNum[2]++;
			else if (s >= 60) scoreNum[3]++;
			else scoreNum[4]++; // С�ڷֵ�����

		}


	}
	private: System::Void DrawScore(System::Drawing::Graphics^ g, array<int>^ scoreNum, int Len) {
		FontFamily^ fontFamily = gcnew FontFamily(L"����"); 	// ��������
		Drawing::Font^ font =
			gcnew Drawing::Font(fontFamily, 10, FontStyle::Regular);
		SolidBrush^ brush1 = gcnew SolidBrush(Color::Black);
		/* ����ֱ������ϵ�����������߼����� */
		Pen^ pen1 = gcnew Pen(Color::Black);
		pen1->EndCap = LineCap::ArrowAnchor;                	// ĩ�˴���ͷ
		g->DrawLine(pen1, 20, 200, 20, 20);                   	// ��ֱ��
		g->DrawLine(pen1, 20, 200, 320, 200);                   	// ˮƽ��
		g->DrawString(L"����", font, brush1, 20, 20);
		g->DrawString(L"<60", font, brush1, 50, 210);
		g->DrawString(L"60-70", font, brush1, 90, 210);
		g->DrawString(L"70-80", font, brush1, 140, 210);
		g->DrawString(L"80-90", font, brush1, 190, 210);
		g->DrawString(L">=90", font, brush1, 240, 210);
		g->DrawString(L"������", font, brush1, 280, 210);
		array<Point>^ points = gcnew array<Point>{
			Point(60, 240 - 15 * scoreNum[4]),
				Point(110, 240 - 15 * scoreNum[3]),
				Point(160, 240 - 15 * scoreNum[2]),
				Point(210, 240 - 15 * scoreNum[1]),
				Point(260, 240 - 15 * scoreNum[0])
		};
		array<HatchBrush^>^ brushes = gcnew array<HatchBrush^>{
			gcnew HatchBrush(HatchStyle::LightVertical, Color::Red, Color::Gray),
				gcnew HatchBrush(HatchStyle::LightDownwardDiagonal, Color::Yellow, Color::Blue),
				gcnew HatchBrush(HatchStyle::LightHorizontal, Color::White, Color::Green),
				gcnew HatchBrush(HatchStyle::LightUpwardDiagonal, Color::Yellow, Color::Orange),
				gcnew HatchBrush(HatchStyle::OutlinedDiamond, Color::Blue, Color::Red),
		};
		/* ֱ��ͼ */
		for (int i = 4; i >= 0; i--) {
			g->FillRectangle(brushes[i], points[i].X - 25, points[i].Y,
				50, 200 - points[i].Y);
			g->DrawString(scoreNum[4 - i] + L"��", font, brush1,
				points[i].X - 10, points[i].Y - 15);
		}
		/* ����ͼ */
		Pen^ pen2 = gcnew Pen(Color::Blue, 2);
		g->DrawCurve(pen2, points);                         	// ��������
		/* ����ͼ */
		float startAngle = 0.0f, sweepAngle = 0.0f;
		for (int i = 4; i >= 0; i--) {
			startAngle = startAngle + sweepAngle;             	// ��ʼ�Ƕ�
			sweepAngle = (float)scoreNum[i] * 360 / Len; // ɨ��Ƕ�
			g->FillPie(brushes[i], Rectangle(340, 40, 180, 180),
				startAngle, sweepAngle);
		}
	}
	private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		array<double>^ score = gcnew array<double>{        // 40���ɼ�ֵ

			66, 82, 79, 74, 86, 67, 60, 45, 44, 77,

				98, 65, 90, 66, 76, 66, 62, 83, 84, 97,

				43, 67, 57, 60, 60, 71, 74, 60, 72, 81,

				69, 79, 91, 69, 71, 42, 82, 77, 69, 81,

		};
		array<int>^ scoreNum = gcnew array<int>(5){ 0 };

		ScoreStatis(score, scoreNum);
		DrawScore(e->Graphics, scoreNum,score->Length);        // ���Ƴɼ��ֲ�ͼ
	}
};
}

