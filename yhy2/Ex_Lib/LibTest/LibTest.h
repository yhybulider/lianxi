// LibTest.h

#pragma once

using namespace System;

namespace LibTest {
	public ref class Cube      {
	public:   Cube() : Length(0), Width(0), Heigt(0) // ��ʽĬ�Ϲ��캯��
	{
		Volume = Length * Width * Heigt;
		Console::WriteLine(L"Ĭ�Ϲ��캯�������Ϊ��{0}", Volume);
	}
			  Cube(double l, double w, double h) :Length(l), Width(w), Heigt(h)
			  {
				  Volume = Length * Width * Heigt;
				  Console::WriteLine(L"�вι��캯�������Ϊ��{0}", Volume);

			  }
			  void ShowRes(void)
			  {
				  Console::WriteLine("�������������Ϊ��{0}", Volume);
			  }
	private:
		double  Length, Heigt, Width, Volume;   // ��,��,������
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