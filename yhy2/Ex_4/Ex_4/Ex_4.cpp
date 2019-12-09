// Ex_4.cpp: 主项目文件。

#include "stdafx.h"

using namespace System;


	double volume(double r)
	{   //计算出圆球的体积。
		volume  =  Math::PI * r * r * r * 4.0 / 3.0;
		return volume;
	}

	double volume(…)

	{   //计算出圆柱的体积。

		…

	}

	int main(array<System::String ^> ^args)

	{
		double r, h, dResult;
		Console::WriteLine("请输入圆的半径r：");

		r = Int32::Parse(Console::ReadLine());

		Console::WriteLine("再输入圆柱的高度h：");

		h = Int32::Parse(Console::ReadLine());

		dResult = volume(r);

		Console::WriteLine("圆球的体积为: {0}", dResult.ToString());

		dResult = volume(r, h);

		Console::WriteLine("圆柱的体积为: {0}", dResult.ToString());

		Console::Read();//暂停

		return 0;
	}

