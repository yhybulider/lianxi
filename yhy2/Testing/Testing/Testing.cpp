// Testing.cpp: ����Ŀ�ļ���

#include "stdafx.h"

using namespace System;
using namespace System::Collections;

int main(array<System::String ^> ^args)
{
	array<int> ^num = { 1, 3, 5, 4, 2 };

	Array::Reverse(num);

	for each (int i in num)

		Console::Write("{0}", i);

	Console::WriteLine();

    return 0;
}
