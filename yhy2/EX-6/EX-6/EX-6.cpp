// EX-6.cpp: 主项目文件。

#include "stdafx.h"

using namespace System;
void inputdata(array<int>^ Heighs,array<String^>^ Names)
{
	for (int i = 0; i<Names->Length; i++)
	{
		Console::Write(L"请输入第{0}个姓名：", i + 1);
		Names[i] = Console::ReadLine();//将键盘输入内容赋值给数组names
		Console::Write(L"请输入第{0}个身高：", i + 1);
		Heighs[i] = int::Parse(Console::ReadLine());
	}
}
void outdata(array<int>^ Heighs1, array<String^>^ &Names)//定义函数outdata的方法

{
	Console::WriteLine(L"\n按身高排序后的身高及学员姓名:");//提醒输出内容
	for each (int Heigh in Heighs1) 
	Console::Write(L"\t{0}", Heigh);//遍历数组
	Console::WriteLine();
	for each (String^ name in Names)
	Console::Write(L"\t{0}", name);//遍历数组
	Console::WriteLine();
}

int main(array<System::String ^> ^args)
{
	array<String^>^ Names=gcnew array<String^>(9);//定义names数组
	array<int>^ Heighs = gcnew array<int>(9);//定义heights数组
	inputdata(Heighs, Names);  //数据的输入
	Array::Sort(Heighs, Names);  // 对数组按第一个参数进行排序 
	outdata(Heighs, Names);  //排序后输出结果
	return 0;
}
