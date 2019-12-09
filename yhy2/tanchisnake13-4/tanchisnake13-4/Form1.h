#pragma once

#include "snake.h"


namespace tanchisnake134 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
#define ROWS 40  //行
#define COLUMNS 40
#define FOODCOUNT 3
	enum direction{ UP = 0, DOWN, LEFT, RIGHT };
	enum gameState{ GAMESTART, GAMERUN, GAMEPAUSE };
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
			array <System::Int32, 2>^ table;
			System::Int32 x0, y0;
			System::Int32 width;
			System::Int32 score;
			System::Random^ ranX, ^ranY, ^ranF;
			array<System::Drawing::Color>^ foodColor;
			gameState gamestate;

			tanchisnake134^ snake;

			direction dirt;
			table = gcnew array<System::Int32, 2>(40, 40);

			width = 12;

			score = 0;

			ranX = gcnew System::Random((int)System::DateTime::Now.ToBinary());

			ranY = gcnew System::Random((int)System::DateTime::Now.ToBinary() + 1);

			ranF = gcnew System::Random((int)System::DateTime::Now.ToBinary() + 2);

			foodColor = gcnew array<System::Drawing::Color>(FOODCOUNT);

			foodColor[0] = System::Drawing::Color::Red;

			foodColor[1] = System::Drawing::Color::Blue;

			foodColor[2] = System::Drawing::Color::Yellow;

			snake = gcnew Snake;

			gamestate = GAMESTART;    //游戏开始状态

			dirt = UP;
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Timer^  timer1;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(33, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(490, 467);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(612, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"暂停游戏";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(619, 302);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"游戏说明";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(616, 165);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"得分：";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(619, 404);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"退出";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::OnTick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 476);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::On_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void OnTick(System::Object^  sender, System::EventArgs^  e) {
	if (gamestate == GAMERUN){   //游戏正在运行
		int x, y;
		x = snake->snakeBody[0]->X;
		y = snake->snakeBody[0]->Y;

		switch (dirt){

		case UP:y--; break;

		case DOWN:y++; break;

		case LEFT:x--; break;

		case RIGHT:x++; break;
}

};
}

