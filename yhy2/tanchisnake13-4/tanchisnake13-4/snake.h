#define ROWS 40
#define COLUMNS 40
enum direction{	UP=0,DOWN,LEFT,RIGHT};
namespace Snake{
    using namespace System;
	using namespace System::Drawing;
public ref class Snake
	{
	protected:
		array<Point^>^ snakebody;
		System::Int32 numbers;
		System::Drawing::Color sideColor;
		System::Drawing::Color bodyColor;
	public:
		Snake(){
			snakebody=gcnew array<Point^>(ROWS*COLUMNS);
			//int n=ROWS*COLUMNS;
			//MessageBox::Show(L""+n.ToString());
			numbers=4;
			sideColor=System::Drawing::Color::Yellow;
			bodyColor=System::Drawing::Color::Green;
		}
		property array<Point^>^ snakeBody{
			array<Point^>^ get(){return snakebody;}
		}
		void clearSnake(int sx0,int sy0)
		{
			numbers=4;
			snakebody[0]=System::Drawing::Point(sx0,sy0);
			for(int i=1;i<numbers;i++)
				snakebody[i]=System::Drawing::Point(snakebody[i-1]->X,snakebody[i-1]->Y+1);
			
		}
		void DrawSnake(Graphics^ g,int x0,int y0,int width,int dirt){
            Pen^ pen=gcnew Pen(sideColor,1);
			SolidBrush^ brush=gcnew SolidBrush(bodyColor);
			SolidBrush^ brush1=gcnew SolidBrush(System::Drawing::Color::Black);
			int x,y;
			for(int i=0;i<numbers;i++){
				Rectangle rect=Rectangle(x0+this->snakebody[i]->X*width,y0+this->snakebody[i]->Y*width,width,width);
				if(i==0){
					g->FillEllipse(brush,rect);
					if(dirt==UP){
						x=x0+this->snakebody[i]->X*width;
			            y=y0+this->snakebody[i]->Y*width+width/2;
						rect=Rectangle(x,y,width,width/2);
					}
					if(dirt==DOWN){
						x=x0+this->snakebody[i]->X*width;
			            y=y0+this->snakebody[i]->Y*width;
						rect=Rectangle(x,y,width,width/2);
					}
					if(dirt==LEFT){
						x=x0+this->snakebody[i]->X*width+width/2;
			            y=y0+this->snakebody[i]->Y*width;
						rect=Rectangle(x,y,width/2,width);
					}
					if(dirt==RIGHT){
						x=x0+this->snakebody[i]->X*width;
			            y=y0+this->snakebody[i]->Y*width;
						rect=Rectangle(x,y,width/2,width);
					}
					g->FillRectangle(brush,rect);	
			        x=x0+this->snakebody[i]->X*width+width/2-2;
					y=y0+this->snakebody[i]->Y*width+width/2-2;
					rect=Rectangle(x,y,5,5);
					g->FillEllipse(brush1,rect);
				}
				else
				    g->FillRectangle(brush,rect);				
			}

		}
		void move(int x,int y){
			int i;
			for(i=numbers-1;i>0;i--)snakebody[i]=snakebody[i-1];
			snakebody[i]=System::Drawing::Point(x,y);
		}
		void eatFood(int x,int y){
			numbers++;
			move(x,y);
		}
		bool IsEatself(int x,int y){
			for(int i=0;i<numbers;i++)
				if(snakebody[i]->X==x&&snakebody[i]->Y==y)return true;
			return false;
		}

	};
}