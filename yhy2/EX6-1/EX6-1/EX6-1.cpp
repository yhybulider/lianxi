// EX6-1.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "Form1.h"
#include "LoginForm.h"
using namespace EX61;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// ���������ڲ�������
	Application::Run(gcnew Form1());
	Application::Run(gcnew LoginForm());
	return 0;
}
