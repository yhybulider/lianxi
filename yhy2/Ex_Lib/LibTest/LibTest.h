// LibTest.h

#pragma once

using namespace System;

namespace LibTest {
	public ref class Cube      {
	public:   Cube() : Length(0), Width(0), Heigt(0) // 显式默认构造函数
	{
		Volume = Length * Width * Heigt;
		Console::WriteLine(L"默认构造函数，体积为：{0}", Volume);
	}
			  Cube(double l, double w, double h) :Length(l), Width(w), Heigt(h)
			  {
				  Volume = Length * Width * Heigt;
				  Console::WriteLine(L"有参构造函数，体积为：{0}", Volume);

			  }
			  void ShowRes(void)
			  {
				  Console::WriteLine("这个立方体的体积为：{0}", Volume);
			  }
	private:
		double  Length, Heigt, Width, Volume;   // 长,高,宽和体积
	};
	public ref class Square  {
	public:    Square() : Dims(0.0){}
			   Square(double d)
			   {
				   Dims = d;
			   }
			   double Area()
			   {
				   return Dims * Dims;
			   }
	private:
		double Dims;

	};

}