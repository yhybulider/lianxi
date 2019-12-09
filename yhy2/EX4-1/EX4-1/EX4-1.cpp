// EX4-1.cpp: ����Ŀ�ļ���

#include "stdafx.h"
using namespace System;
public enum class COLORS{ Green, Red, Blue, Yellow, White };//ʹ��ö�������������ɫ
 class circle
{
	double radius;
public:
	circle(double r) :radius(r)
	{
		Console::WriteLine("Բ�Ĺ��캯����R={0}", radius);//������
	}
	~circle()
	{
		Console::WriteLine("Բ������������R={0}", radius);
	}

	double area()

	{
		return Math::PI*radius*radius;//Բ��������㹫ʽ
	}

};

 class table  //����������
{
	double height;//�߶�
public:
	table(double h) :height(h)
	{
		Console::WriteLine("���ӵĹ��캯����H={0}", height);//������
	}
	~table()

	{
		Console::WriteLine("���ӵ�����������H={0}", height);//������
	}

	double get_height()

	{
		return height;
	}

};

class roundtable :public circle, public table//������roundtable
{ //˽�����ݳ�Ա
	COLORS color;
public:
	roundtable(double r, double h, COLORS c) :circle(r), table(h)
	{
		color = c;
		Console::WriteLine(L"Բ���Ĺ��캯����C={0}", safe_cast<int>(color));
	}
	~roundtable()
	{
		Console::WriteLine(L"Բ��������������C={0}", safe_cast<int>(color));
	}
	void show();
};
void roundtable::show()
{
	Console::WriteLine("Բ���ĸ߶ȣ�{0}�������{1:F5}����ɫ�ǣ�{2}",
		get_height(), area(), color.ToString("g"));
}

//ʹ����������������в���
int main(array<System::String^> ^args)//������
{
	roundtable rtable1(1, 3, COLORS::Red);
	roundtable rtable2(2, 5, COLORS::Green);
	roundtable rtable3(3, 6, COLORS::Blue);
	rtable1.show();
	rtable2.show();
	rtable3.show();
	return 0;
}
