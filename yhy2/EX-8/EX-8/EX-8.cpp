// EX-8.cpp: 主项目文件。

#include"stdafx.h"
#include "stdlib.h"

using namespace System;

int main(array<System::String ^> ^args)
{

	String^ delimStr = " ,";//以空格或逗号分隔

	array<Char>^delimiter = delimStr->ToCharArray();//转换为单个字符

	String^words;// 一组用符号分隔num个数值

	array<String^>^split = nullptr;

	array <double>^ data = gcnew array<double>(10);

	int num, i;

	while (1)
	{

		Console::WriteLine(L"请输入数据的个数:");

		num = int::Parse(Console::ReadLine());

		if (num == 0) break;

		Console::WriteLine(L"请输入{0}个数,中间用逗号或空格分隔:", num);

		words = Console::ReadLine();

		split = words->Split(delimiter, num);//拆分为num个子串

		i = 0;

		for each(String ^s in split)

		{
			Console::WriteLine("[{0}]", s);  //输出分隔好的字符串

			data[i++] = Convert::ToDouble(s);
		}
		for (i = 0; i<num; i++)
			Console::WriteLine("{0}", data[i]);
	}
	system("pause");

	return 0;

}
