// EX4-1.cpp: 主项目文件。

#include "stdafx.h"
using namespace System;
public enum class COLORS{ Green, Red, Blue, Yellow, White };//使用枚举来定义这个颜色
 class circle
{
	double radius;
public:
	circle(double r) :radius(r)
	{
		Console::WriteLine("圆的构造函数，R={0}", radius);//输出语句
	}
	~circle()
	{
		Console::WriteLine("圆的析构函数，R={0}", radius);
	}

	double area()

	{
		return Math::PI*radius*radius;//圆的面积计算公式
	}

};

 class table  //定义桌子类
{
	double height;//高度
public:
	table(double h) :height(h)
	{
		Console::WriteLine("桌子的构造函数，H={0}", height);//输出语句
	}
	~table()

	{
		Console::WriteLine("桌子的析构函数，H={0}", height);//输出语句
	}

	double get_height()

	{
		return height;
	}

};

class roundtable :public circle, public table//派生类roundtable
{ //私有数据成员
	COLORS color;
public:
	roundtable(double r, double h, COLORS c) :circle(r), table(h)
	{
		color = c;
		Console::WriteLine(L"圆桌的构造函数，C={0}", safe_cast<int>(color));
	}
	~roundtable()
	{
		Console::WriteLine(L"圆桌的析构函数，C={0}", safe_cast<int>(color));
	}
	void show();
};
void roundtable::show()
{
	Console::WriteLine("圆桌的高度＝{0}，面积＝{1:F5}，颜色是：{2}",
		get_height(), area(), color.ToString("g"));
}

//使用下面的主函数进行测试
int main(array<System::String^> ^args)//主函数
{
	roundtable rtable1(1, 3, COLORS::Red);
	roundtable rtable2(2, 5, COLORS::Green);
	roundtable rtable3(3, 6, COLORS::Blue);
	rtable1.show();
	rtable2.show();
	rtable3.show();
	return 0;
}
