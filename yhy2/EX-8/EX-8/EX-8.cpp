// EX-8.cpp: ����Ŀ�ļ���

#include"stdafx.h"
#include "stdlib.h"

using namespace System;

int main(array<System::String ^> ^args)
{

	String^ delimStr = " ,";//�Կո�򶺺ŷָ�

	array<Char>^delimiter = delimStr->ToCharArray();//ת��Ϊ�����ַ�

	String^words;// һ���÷��ŷָ�num����ֵ

	array<String^>^split = nullptr;

	array <double>^ data = gcnew array<double>(10);

	int num, i;

	while (1)
	{

		Console::WriteLine(L"���������ݵĸ���:");

		num = int::Parse(Console::ReadLine());

		if (num == 0) break;

		Console::WriteLine(L"������{0}����,�м��ö��Ż�ո�ָ�:", num);

		words = Console::ReadLine();

		split = words->Split(delimiter, num);//���Ϊnum���Ӵ�

		i = 0;

		for each(String ^s in split)

		{
			Console::WriteLine("[{0}]", s);  //����ָ��õ��ַ���

			data[i++] = Convert::ToDouble(s);
		}
		for (i = 0; i<num; i++)
			Console::WriteLine("{0}", data[i]);
	}
	system("pause");

	return 0;

}
