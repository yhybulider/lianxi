// EX-6.cpp: ����Ŀ�ļ���

#include "stdafx.h"

using namespace System;
void inputdata(array<int>^ Heighs,array<String^>^ Names)
{
	for (int i = 0; i<Names->Length; i++)
	{
		Console::Write(L"�������{0}��������", i + 1);
		Names[i] = Console::ReadLine();//�������������ݸ�ֵ������names
		Console::Write(L"�������{0}����ߣ�", i + 1);
		Heighs[i] = int::Parse(Console::ReadLine());
	}
}
void outdata(array<int>^ Heighs1, array<String^>^ &Names)//���庯��outdata�ķ���

{
	Console::WriteLine(L"\n�������������߼�ѧԱ����:");//�����������
	for each (int Heigh in Heighs1) 
	Console::Write(L"\t{0}", Heigh);//��������
	Console::WriteLine();
	for each (String^ name in Names)
	Console::Write(L"\t{0}", name);//��������
	Console::WriteLine();
}

int main(array<System::String ^> ^args)
{
	array<String^>^ Names=gcnew array<String^>(9);//����names����
	array<int>^ Heighs = gcnew array<int>(9);//����heights����
	inputdata(Heighs, Names);  //���ݵ�����
	Array::Sort(Heighs, Names);  // �����鰴��һ�������������� 
	outdata(Heighs, Names);  //�����������
	return 0;
}
