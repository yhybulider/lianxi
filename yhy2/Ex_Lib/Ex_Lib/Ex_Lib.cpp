// Ex_Lib.cpp: 主项目文件。
//Ex3-2
#include "stdafx.h"
#include"..//LibTest//LibTest.h"
#using <LibTest.dll>
using namespace System;
using namespace LibTest;

int main(array<System::String^> ^args)
{

	Cube^ cube1 = gcnew Cube;
	Cube^ cube2 = gcnew Cube(4, 5, 6);
	cube2->ShowRes();
	Square^sq1 = gcnew Square(8);                      //A
	Console::WriteLine("这个正方形的面积为：{0}", sq1->Area()); // B
	return 0;

}