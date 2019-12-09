// Ex_3.cpp: 主项目文件。

#include "stdafx.h"

using namespace System;
int max(int x, int y, int z = -10000)//定义max方法，使其可以变成比较两个数或者三个数的函数方法
{
	int m;
	m = x > y ? x : y;//比较两个数的大小，x大于y则取x
	m = m > z ? m : z;//拿第三个数和前两个数中最大的去比较，从而得出最大的数
	return m;
}

int main(array<System::String ^> ^args)
{
	int m, a, b, c;
	Console::WriteLine(L"请输入三个整数");
	Console::WriteLine(L"第一个整数a");//输出提醒信息，提醒输入整数

	a = Int32::Parse(Console::ReadLine());//类型转换，将获取的键盘输入的数值转换为整形int
	Console::WriteLine(L"第二个整数b");
	b = Int32::Parse(Console::ReadLine());//类型转换
	Console::WriteLine(L"第三个整数c");
	c = Int32::Parse(Console::ReadLine());//类型转换
	m = max(a, b, c);//调用max函数，取出最大值
	Console::WriteLine("({1},{2},{3}) 三个数中最大数为{0}", m, a, b, c);//输出最大的数
	m = max(a, b);
	Console::WriteLine("({0},{1}) 二个数中最大数为{2}\n", a, b, m);//输出最大的数
	m = max(b, c);
	Console::WriteLine("({1},{2}) 二个数中最大数为{0}\n", m, b, c);//输出最大的数
	Console::Read();
	return 0;
}

