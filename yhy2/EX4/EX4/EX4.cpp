// EX4.cpp: ����Ŀ�ļ���

#include "stdafx.h"//ͷ�ļ�

using namespace System;


double volume(double r)
{   //�����Բ��������
	double volume1;
	volume1 = Math::PI * r * r * r * 4.0/ 3.0;//Բ��ļ��㹫ʽ
	return volume1;
}
double volume(double r,double h)//������������r��h

{   //�����Բ���������
	double volume2;
	volume2 = Math::PI * r * r * h;//Բ���ļ��㹫ʽ
	return volume2;
}
int main(array<System::String ^> ^args)

{
	double r, h, dResult;//�������
	Console::WriteLine("������Բ�İ뾶r:");//�����ʾ����
	r = Double::Parse(Console::ReadLine());//�����������ת��
	Console::WriteLine("������Բ���ĸ߶�h:");//�����ʾ����
	h = Double::Parse(Console::ReadLine());//double�ͱ�ʾ�������븡����������int��ᱨ��
	dResult = volume(r);//�����ú�����ֵ����dResult
	Console::WriteLine("Բ������Ϊ:{0}", dResult.ToString());//�����������
	dResult = volume(r, h);
	Console::WriteLine("Բ�������Ϊ:{0}", dResult.ToString());//�����������
	Console::Read();//��ͣ
	return 0;
}


