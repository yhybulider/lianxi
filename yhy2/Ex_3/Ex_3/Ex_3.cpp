// Ex_3.cpp: ����Ŀ�ļ���

#include "stdafx.h"

using namespace System;
int max(int x, int y, int z = -10000)//����max������ʹ����Ա�ɱȽ������������������ĺ�������
{
	int m;
	m = x > y ? x : y;//�Ƚ��������Ĵ�С��x����y��ȡx
	m = m > z ? m : z;//�õ���������ǰ������������ȥ�Ƚϣ��Ӷ��ó�������
	return m;
}

int main(array<System::String ^> ^args)
{
	int m, a, b, c;
	Console::WriteLine(L"��������������");
	Console::WriteLine(L"��һ������a");//���������Ϣ��������������

	a = Int32::Parse(Console::ReadLine());//����ת��������ȡ�ļ����������ֵת��Ϊ����int
	Console::WriteLine(L"�ڶ�������b");
	b = Int32::Parse(Console::ReadLine());//����ת��
	Console::WriteLine(L"����������c");
	c = Int32::Parse(Console::ReadLine());//����ת��
	m = max(a, b, c);//����max������ȡ�����ֵ
	Console::WriteLine("({1},{2},{3}) �������������Ϊ{0}", m, a, b, c);//���������
	m = max(a, b);
	Console::WriteLine("({0},{1}) �������������Ϊ{2}\n", a, b, m);//���������
	m = max(b, c);
	Console::WriteLine("({1},{2}) �������������Ϊ{0}\n", m, b, c);//���������
	Console::Read();
	return 0;
}

