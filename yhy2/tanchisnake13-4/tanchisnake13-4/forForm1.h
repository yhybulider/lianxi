#pragma once

#include "snake.h"
namespace Snake {
	//...
#pragma endregion
	//��������ӵ��¼����������Զ���ĺ�������
	private: System::Void OnLoad(System::Object^  sender, System::EventArgs^  e) {
				 x0 = (this->pictureBox1->Width - width*COLUMNS) / 2;
				 y0 = (this->pictureBox1->Height - width*ROWS) / 2;
				 this->timer1->Interval = 200;
	}
	private: System::Void OnTick(System::Object^  sender, System::EventArgs^  e) {
				 if (gamestate == GAMERUN){   //��Ϸ��������
					 int x, y;
					 x = snake->snakeBody[0]->X;
					 y = snake->snakeBody[0]->Y;
					 switch (dirt){
					 case UP:y--; break;
					 case DOWN:y++; break;
					 case LEFT:x--; break;
					 case RIGHT:x++; break;
					 }
					 if (x<0 || y<0 || x >= COLUMNS || y >= ROWS || snake->IsEatself(x, y)){
						 this->timer1->Stop();
						 MessageBox::Show(L"��Ϸ����!", "̰����", MessageBoxButtons::OK);
						 gamestate = GAMESTART;
						 this->button1->Text = "��ʼ��Ϸ";
						 this->button2->Enabled = true;
					 }
					 else if (table[y, x]){
						 snake->eatFood(x, y);
						 score += table[y, x];
						 this->label2->Text = score.ToString();
						 table[y, x] = 0;
						 createFood();
					 }
					 else snake->move(x, y);
					 this->pictureBox1->Invalidate();
				 }
	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 if (gamestate == GAMERUN){
					 drawFood(e->Graphics);
					 snake->DrawSnake(e->Graphics, x0, y0, width, dirt);
				 }
				 drawTable(e->Graphics);

	}
	System::Void drawFood(Graphics^ g){
				 SolidBrush^ brush1 = gcnew SolidBrush(foodColor[0]);
				 SolidBrush^ brush2 = gcnew SolidBrush(foodColor[1]);
				 SolidBrush^ brush3 = gcnew SolidBrush(foodColor[2]);
				 for (int i = 0; i<ROWS; i++){
					 for (int j = 0; j<COLUMNS; j++){
						 if (table[i, j] == 1)
							 g->FillEllipse(brush1, Rectangle(x0 + j*width, y0 + i*width, width, width));
						 if (table[i, j] == 2)
							 g->FillEllipse(brush2, Rectangle(x0 + j*width, y0 + i*width, width, width));
						 if (table[i, j] == 3)
							 g->FillEllipse(brush3, Rectangle(x0 + j*width, y0 + i*width, width, width));
					 }
				 }

			 }
	System::Void drawTable(Graphics^ g){
				 int i;

				 Pen^ pen = gcnew Pen(System::Drawing::Color::Gray, 1);

				 Point beginPoint, endPoint;
				 for (i = 0; i <= ROWS; i++){
					 beginPoint = Point(x0, y0 + i*width);
					 endPoint = Point(x0 + COLUMNS*width, y0 + i*width);
					 g->DrawLine(pen, beginPoint, endPoint);
				 }
				 for (i = 0; i <= COLUMNS; i++){
					 beginPoint = Point(x0 + i*width, y0);
					 endPoint = Point(x0 + i*width, y0 + ROWS*width);
					 g->DrawLine(pen, beginPoint, endPoint);
				 }
			 }
	private: System::Void Form1_Resize(System::Object^  sender, System::EventArgs^  e) {
				 if (gamestate == GAMESTART){
					 this->pictureBox1->Size = System::Drawing::Size(this->ClientSize.Width - this->button1->Width - 40,
						 this->ClientSize.Height);
					 int w, h, d;
					 w = this->ClientSize.Width - this->button1->Width - 40;
					 h = this->ClientSize.Height;
					 d = w>h ? w : h;
					 width = (d - 20) / ROWS;

					 if (width>18)width = 18;
					 x0 = (this->pictureBox1->Width - width*COLUMNS) / 2;
					 y0 = (this->pictureBox1->Height - width*ROWS) / 2;
					 this->pictureBox1->Invalidate();
				 }
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (gamestate == GAMESTART){
					 for (int i = 0; i<ROWS; i++)
					 for (int j = 0; j<COLUMNS; j++)table[i, j] = 0;
					 snake->clearSnake(COLUMNS / 2, (ROWS - 4) / 2);
					 for (int i = 0; i<FOODCOUNT; i++)
						 createFood();
					 dirt = UP;
					 score = 0;
					 this->label2->Text = score.ToString();
					 gamestate = GAMERUN;
					 this->pictureBox1->Invalidate();
					 this->timer1->Start();
					 this->button1->Text = "��ͣ��Ϸ";
					 this->button2->Enabled = false;

				 }
				 else if (gamestate == GAMERUN){
					 gamestate = GAMEPAUSE;
					 this->timer1->Stop();
					 this->button1->Text = "������Ϸ";
					 this->button2->Enabled = true;
				 }
				 else if (gamestate == GAMEPAUSE){
					 gamestate = GAMERUN;
					 this->timer1->Start();
					 this->button1->Text = "��ͣ��Ϸ";
					 this->button2->Enabled = false;
				 }
	}
	void createFood(){
				 int fx, fy;         //���ӵ�x,y�����Ӧ�����x�е�y��
				 fx = ranX->Next(COLUMNS - 2);//?-1
				 fy = ranY->Next(ROWS - 2);//?-1
				 if (table[fy + 1, fx + 1]>0){
					 createFood();
					 return;
				 }
				 else table[fy + 1, fx + 1] = ranF->Next(FOODCOUNT) + 1;
			 }
	private: System::Void Form1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 if (gamestate == GAMERUN){
					 switch (e->KeyValue){
					 case 38:if (dirt != DOWN)dirt = UP; break;  //�������Ϸ����
					 case 40:if (dirt != UP)dirt = DOWN; break;   //�������·����
					 case 37:if (dirt != RIGHT)dirt = LEFT; break;//�����������
					 case 39:if (dirt != LEFT)dirt = RIGHT; break;//�������ҷ����
					 }
				 }
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (gamestate != GAMERUN)MessageBox::Show(L"��Ϸ����:\n        ��������ı����˶�����,�Ե���ɫʳ���1��,\n�Ե���ɫʳ���2��,�Ե���ɫʳ���3�֡�ÿ�Ե�һ��\nʳ��,��������һ��,���������߿����������Ϸ������", "̰����", MessageBoxButtons::OK);
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}

	private: System::Void OnClose(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 e->Cancel = !IsQuit();
	}
	private: bool IsQuit() {
				 if (gamestate != GAMERUN)
					 return true;
				 else{
					 if (gamestate == GAMERUN)this->timer1->Stop();
					 System::Windows::Forms::DialogResult dlg;
					 dlg = MessageBox::Show(L"��Ϸ��δ������ȷ���˳���", "̰����", MessageBoxButtons::YesNo);
					 if (dlg == System::Windows::Forms::DialogResult::Yes)
						 return true;
					 else  if (dlg == System::Windows::Forms::DialogResult::No){
						 if (gamestate == GAMERUN)this->timer1->Start();
						 return false;
					 }
				 }
				 return false;
	}

	};
}

