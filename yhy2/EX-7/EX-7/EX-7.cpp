// EX-7.cpp: 主项目文件。
#include"stdafx.h"//头文件
#include"stdlib.h"
#include<time.h>


using namespace System;

void shuffle(int wDeck[4][13])//洗牌
{  //洗牌

	int r;
	int card, row, column;
	for (card = 1; card <= 52; card++)
	{

		r = rand();
		row = r % 4;
		r = rand();
		column = r % 13;
		while (wDeck[row][column] != 0)//随机打乱52张牌的顺序
		{  //已发牌，再产生
			r = rand();
			row = r % 4;
			r = rand();
			column = r % 13;
		}
		wDeck[row][column] = card;
	}
}


//实现发牌的函数
void deal(int wDeck[4][13], array<String^>^ wFace, array<String^>^ wSuit, array<String^, 2>^ wPai)     //发牌
{  //发牌

	int card, row, column;//定义三个变量
	Console::WriteLine(L"       A                      B                       C                       D");//输出格式，分成了四组
	for (card = 1; card <= 52; card++)
	{
		for (row = 0; row <= 3; row++)
		{
			for (column = 0; column <= 12; column++)
			{
				if (wDeck[row][column] == card)
				{
					wPai[(card - 1) % 4, (card - 1) % 13] = wFace[column] + " of " + wSuit[row];
					if ((card - 1) % 4 == 3)
					{
						Console::WriteLine(L"{0,5} of {1,-8}", wFace[column], wSuit[row]);
					}
					else
						Console::Write(L"{0,5} of {1,-8}\t", wFace[column], wSuit[row]);
				}
			}
		}
	}

}
void sort(array<String^, 2>^ wPai)//整理排序
{
	int card, row, column;//定义变量
	array<String^>^ sPai = gcnew array<String^>(52);//创建新的数组
	for (row = 0; row <= 3; row++)
	{
		for (column = 0; column <= 12; column++)
			sPai[row * 13 + column] = wPai[row, column];
	}
	for (row = 0; row <= 3; row++)
	{
		Array::Sort(sPai, row * 13, 13);
	}
	Console::WriteLine(L"       A                      B                       C                       D");
	for (column = 0; column <= 12; column++)
		Console::WriteLine(L"    {0,-19},    {1,-19},    {2,-19},    {3,-19}",
		sPai[column], sPai[13 + column], sPai[26 + column], sPai[39 + column]);
}//整理排序及输出

int main(array<System::String ^> ^args)

{
	array<String^>^ wSuit = { "Hearts", "Diamonds", "Clubs", "Spades" };
	array<String^>^ wFace = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	array<String^, 2>^ wPai = gcnew  array<String^, 2>(4, 13);   //定义二维数组
	int wDeck[4][13] = { 0 };
	Console::WriteLine(L"发牌如下：");
	srand(unsigned(time(NULL)));
	shuffle(wDeck);    //洗牌
	deal(wDeck, wFace, wSuit, wPai);  //发牌
	Console::WriteLine(L"排序整理后的牌如下：");
	sort(wPai);  //整理排序及输出
	return 0;
}