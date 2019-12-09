// EX-7.cpp: ����Ŀ�ļ���
#include"stdafx.h"//ͷ�ļ�
#include"stdlib.h"
#include<time.h>


using namespace System;

void shuffle(int wDeck[4][13])//ϴ��
{  //ϴ��

	int r;
	int card, row, column;
	for (card = 1; card <= 52; card++)
	{

		r = rand();
		row = r % 4;
		r = rand();
		column = r % 13;
		while (wDeck[row][column] != 0)//�������52���Ƶ�˳��
		{  //�ѷ��ƣ��ٲ���
			r = rand();
			row = r % 4;
			r = rand();
			column = r % 13;
		}
		wDeck[row][column] = card;
	}
}


//ʵ�ַ��Ƶĺ���
void deal(int wDeck[4][13], array<String^>^ wFace, array<String^>^ wSuit, array<String^, 2>^ wPai)     //����
{  //����

	int card, row, column;//������������
	Console::WriteLine(L"       A                      B                       C                       D");//�����ʽ���ֳ�������
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
void sort(array<String^, 2>^ wPai)//��������
{
	int card, row, column;//�������
	array<String^>^ sPai = gcnew array<String^>(52);//�����µ�����
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
}//�����������

int main(array<System::String ^> ^args)

{
	array<String^>^ wSuit = { "Hearts", "Diamonds", "Clubs", "Spades" };
	array<String^>^ wFace = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	array<String^, 2>^ wPai = gcnew  array<String^, 2>(4, 13);   //�����ά����
	int wDeck[4][13] = { 0 };
	Console::WriteLine(L"�������£�");
	srand(unsigned(time(NULL)));
	shuffle(wDeck);    //ϴ��
	deal(wDeck, wFace, wSuit, wPai);  //����
	Console::WriteLine(L"���������������£�");
	sort(wPai);  //�����������
	return 0;
}