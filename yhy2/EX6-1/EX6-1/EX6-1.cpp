// EX6-1.cpp: 主项目文件。

#include "stdafx.h"
#include "Form1.h"
#include "LoginForm.h"
using namespace EX61;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// 在创建任何控件之前启用 Windows XP 可视化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// 创建主窗口并运行它
	Application::Run(gcnew Form1());
	Application::Run(gcnew LoginForm());
	return 0;
}
