// Ex_Lib.cpp: ����Ŀ�ļ���
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
	Console::WriteLine("��������ε����Ϊ��{0}", sq1->Area()); // B
	return 0;

}