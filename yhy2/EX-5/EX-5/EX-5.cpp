// EX-5.cpp: ����Ŀ�ļ���

#include "stdafx.h"//��׼ϵͳ�����ļ��İ����ļ�
#include<iostream>//��Ӻ�ͷ�ļ������򱨴��������һϵ�е�I/O��

using namespace System;//��׼�����ռ�

void alter(double &a, double &b) //ʹ�ñ������õķ�ʽʵ�ַŴ����ĺ���

{
	double z = a;      //��������зŴ�
	a = a + b;
	b = z * b;
}

	void Swap(Double &a, Double &b)    //�������ĺ���   ����Ǹ������ã��á�%���������ĸ���������ʽ����Ŀ������
	{
		Double t = a;//����t����
		a = b;
		b = t;//����������

	}
	int main(array<System::String ^> ^args)
{
	{
		double x, y;
		Console::WriteLine("����������");//���һ���������
		x = Double::Parse(Console::ReadLine());//����x����
		y = Double::Parse(Console::ReadLine());//����y����

		while (x != 0.0&& y != 0.0)  //��������ͬʱΪ0ʱ���˳�  

		{
			alter(x, y);    //ʹ�÷Ŵ������Ŵ�x��y
			Swap(x, y);    //ʹ�ý���������x��y����
			Console::WriteLine("x = {0}, y = {1}", x, y);  //����������������ֵ

			x = Double::Parse(Console::ReadLine());//����x����
			y = Double::Parse(Console::ReadLine());//����y����
		}
		system("pause");//��ͣ�ڴ���
		return 0;
	}
}
