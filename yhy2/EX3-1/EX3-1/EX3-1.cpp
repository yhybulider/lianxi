// EX3-1.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "stdlib.h"
using namespace System;
ref class Cube
{
private:
	double Length, Heigt, Width, Volume;// ��,��,������

public:

	Cube() : Length(0), Width(0), Heigt(0)// ��ʽĬ�Ϲ��캯��

	{

		Volume = Length * Width * Heigt;

		Console::WriteLine(L"Ĭ�Ϲ��캯�������Ϊ��{0}", Volume);

	}

	Cube(double l, double w, double h) : Length(l), Width(w), Heigt(h)

	{

		Volume = Length * Width * Heigt;

		Console::WriteLine(L"�вι��캯�������Ϊ��{0}", Volume);

	}

	void ShowRes(void)

	{

		Console::WriteLine("�������������Ϊ��{0}", Volume);

	}

};

int main(array<System::String ^> ^args)
{
	Cube^ cube1 = gcnew Cube;// A:�����޲ι��캯��
	Cube^ cube2 = gcnew Cube(4, 5, 6);// B:�����вι��캯��
	cube2->ShowRes();
	system("pause");//��ͣ�ڴ���
	return 0;
}