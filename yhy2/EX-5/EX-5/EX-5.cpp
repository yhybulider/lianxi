// EX-5.cpp: 主项目文件。

#include "stdafx.h"//标准系统包含文件的包含文件
#include<iostream>//添加好头文件，否则报错，这个包含一系列的I/O口

using namespace System;//标准命名空间

void alter(double &a, double &b) //使用本地引用的方式实现放大器的函数

{
	double z = a;      //按规则进行放大
	a = a + b;
	b = z * b;
}

	void Swap(Double &a, Double &b)    //交换器的函数   如果是跟踪引用，用“%变量名”的跟踪引用形式操作目标数据
	{
		Double t = a;//定义t变量
		a = b;
		b = t;//交换两个数

	}
	int main(array<System::String ^> ^args)
{
	{
		double x, y;
		Console::WriteLine("请输入数据");//添加一行提醒语句
		x = Double::Parse(Console::ReadLine());//读入x数据
		y = Double::Parse(Console::ReadLine());//读入y数据

		while (x != 0.0&& y != 0.0)  //当两个数同时为0时就退出  

		{
			alter(x, y);    //使用放大器，放大x与y
			Swap(x, y);    //使用交换器，将x、y交换
			Console::WriteLine("x = {0}, y = {1}", x, y);  //输出经交换器后的数值

			x = Double::Parse(Console::ReadLine());//读入x数据
			y = Double::Parse(Console::ReadLine());//读入y数据
		}
		system("pause");//暂停黑窗口
		return 0;
	}
}
