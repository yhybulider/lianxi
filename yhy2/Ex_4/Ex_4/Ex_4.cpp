// Ex_4.cpp: ����Ŀ�ļ���

#include "stdafx.h"

using namespace System;


	double volume(double r)
	{   //�����Բ��������
		volume  =  Math::PI * r * r * r * 4.0 / 3.0;
		return volume;
	}

	double volume(��)

	{   //�����Բ���������

		��

	}

	int main(array<System::String ^> ^args)

	{
		double r, h, dResult;
		Console::WriteLine("������Բ�İ뾶r��");

		r = Int32::Parse(Console::ReadLine());

		Console::WriteLine("������Բ���ĸ߶�h��");

		h = Int32::Parse(Console::ReadLine());

		dResult = volume(r);

		Console::WriteLine("Բ������Ϊ: {0}", dResult.ToString());

		dResult = volume(r, h);

		Console::WriteLine("Բ�������Ϊ: {0}", dResult.ToString());

		Console::Read();//��ͣ

		return 0;
	}

