// EX3-1.cpp: 主项目文件。

#include "stdafx.h"
#include "stdlib.h"
using namespace System;
ref class Cube
{
private:
	double Length, Heigt, Width, Volume;// 长,高,宽和体积

public:

	Cube() : Length(0), Width(0), Heigt(0)// 显式默认构造函数

	{

		Volume = Length * Width * Heigt;

		Console::WriteLine(L"默认构造函数，体积为：{0}", Volume);

	}

	Cube(double l, double w, double h) : Length(l), Width(w), Heigt(h)

	{

		Volume = Length * Width * Heigt;

		Console::WriteLine(L"有参构造函数，体积为：{0}", Volume);

	}

	void ShowRes(void)

	{

		Console::WriteLine("这个立方体的体积为：{0}", Volume);

	}

};

int main(array<System::String ^> ^args)
{
	Cube^ cube1 = gcnew Cube;// A:调用无参构造函数
	Cube^ cube2 = gcnew Cube(4, 5, 6);// B:调用有参构造函数
	cube2->ShowRes();
	system("pause");//暂停黑窗口
	return 0;
}