#pragma once

namespace EX53 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// GameForm 摘要
	/// </summary>

	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~GameForm()
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
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 153);
			this->Name = L"GameForm";
			this->Opacity = 0.7;
			this->Text = L"游戏窗体";
			this->Load += gcnew System::EventHandler(this, &GameForm::GameForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GameForm::GameForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GameForm::GameForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &GameForm::GameForm_MouseUp);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GameForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private:bool    bIsMouseDown;     // 鼠标是否已按下

	private: Point  ptMouse;        // 鼠标位置

	public: Point   ptMainForm;         // 主窗体的位置
	private: System::Void GameForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == Windows::Forms::MouseButtons::Left) {
			ptMouse = Point(e->X, e->Y);
			bIsMouseDown = true;
		}
		else
			bIsMouseDown = false;
	}
	private: System::Void GameForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (!bIsMouseDown) return;

		// 根据鼠标位置偏移量移动窗体

		Point pt = this->Location;
		this->StartPosition = FormStartPosition::Manual;
		pt.X += e->X - ptMouse.X;
		pt.Y += e->Y - ptMouse.Y;
		this->Location = pt;
	}
	private: System::Void GameForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		bIsMouseDown = false;

		// 调用判断方法CheckIt

		if (CheckIt())

			MessageBox::Show("你成功了！", "成功");

		else

			MessageBox::Show("单击【开始】按钮，重新开始！", "失败");

		this->Close();              // 关闭窗口
	}
	private:bool CheckIt()

	{
		if (ptMainForm == this->Location)
			return true;
		else
			return false;

	}
	};
}
