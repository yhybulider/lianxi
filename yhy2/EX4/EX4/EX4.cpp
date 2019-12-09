// EX4.cpp: 主项目文件。

#include "stdafx.h"//头文件

using namespace System;


double volume(double r)
{   //计算出圆球的体积。
	double volume1;
	volume1 = Math::PI * r * r * r * 4.0/ 3.0;//圆球的计算公式
	return volume1;
}
double volume(double r,double h)//定义两个变量r和h

{   //计算出圆柱的体积。
	double volume2;
	volume2 = Math::PI * r * r * h;//圆柱的计算公式
	return volume2;
}
int main(array<System::String ^> ^args)

{
	double r, h, dResult;//定义变量
	Console::WriteLine("请输入圆的半径r:");//输出提示内容
	r = Double::Parse(Console::ReadLine());//将键盘输入的转换
	Console::WriteLine("再输入圆柱的高度h:");//输出提示内容
	h = Double::Parse(Console::ReadLine());//double型表示可以输入浮点数，若是int则会报错
	dResult = volume(r);//将调用函数的值赋予dResult
	Console::WriteLine("圆球的体积为:{0}", dResult.ToString());//输出提醒内容
	dResult = volume(r, h);
	Console::WriteLine("圆柱的体积为:{0}", dResult.ToString());//输出提醒内容
	Console::Read();//暂停
	return 0;
}


