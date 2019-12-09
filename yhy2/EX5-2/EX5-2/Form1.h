#pragma once

namespace EX52 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->MouseWheel += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseWheel);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		int nXStep = 0, nYStep = 0;

		System::Drawing::Point pt = this->Location;

		String ^str, ^strShift, ^strCtrl, ^strAlt;

		switch (e->KeyData) {
		case System::Windows::Forms::Keys::Up:      //向上  
			nYStep = -1;    break;
		case System::Windows::Forms::Keys::Down: //向下
			nYStep = 1;           break;
		case System::Windows::Forms::Keys::Left:    //向左
			nXStep = -1; break;
		case System::Windows::Forms::Keys::Right: // 向右
			nXStep = 1;           break;
		default:
			if (e->Shift) strShift = L"Shift + ";      else strShift = L"";
			if (e->Control) strCtrl = L"Ctrl + ";     else strCtrl = L"";
			if (e->Alt) strAlt = L"Alt + ";      else strAlt = L"";
			str = String::Concat(L"KeyDown: ", strShift, strCtrl, strAlt, e->KeyCode);
			this->Text = str;
			break;
		}

		if ((nXStep != 0) || (nYStep != 0))

		{
			pt.X += nXStep;             pt.Y += nYStep;
			this->StartPosition = FormStartPosition::Manual;
			this->Location = pt;
		}
	}
	private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (wchar_t)(System::Windows::Forms::Keys::Escape))
			this->Close();
		else {
			String^ str = String::Concat(L"KeyPress: ", e->KeyChar.ToString());
			//this->Text = str; //测试使 用和注释这条语句所产生的效果
			MessageBox::Show(str);
		}
	}
private: System::Void Form1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	double scale = 1.0;
	String ^str = "鼠标";//增加一个字符串变量句柄str
	str += "左键按下,坐标为";//判断左右键时同时修改str的内容
	str += "右键按下,坐标为";//弹出边框显示坐标，点击确定之后才可以进行鼠标的缩放
	str += Point(e->X, e->Y);//添加了鼠标的X、Y坐标，最后用显示字符串内容
	MessageBox::Show(str);
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
		scale = 0.9;
	if (e->Button == System::Windows::Forms::MouseButtons::Right)
		scale = 1.1;
	System::Drawing::Size size = this->Size;

	if (scale != 1.0) {
		int w = (int)(size.Width * scale);
		int h = (int)(size.Height * scale);
		this->Size = System::Drawing::Size(w, h);
	}
}
private: System::Void Form1_MouseWheel(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->StartPosition = FormStartPosition::Manual;

	System::Drawing::Point pt = this->Location;

	pt.X-= e->Delta / 10;//更换xy便可以切换水平或者竖直,
	pt.Y -= e->Delta / 10;//增加多一行代码，即XY同时运动，Delta是返回鼠标轮动转动的方向值，正值为向前转动，负值为向后转动
	this->Location = pt;
}
};
}

