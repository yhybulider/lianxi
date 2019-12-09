#pragma once

namespace EX51 {

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
				delete components;//退出前释放容器中的组件
			}
		}

	protected:

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 19));
			this->label3->Location = System::Drawing::Point(508, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(271, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"欢迎来到我的窗口";
			this->label3->UseWaitCursor = true;
			this->label3->TextAlignChanged += gcnew System::EventHandler(this, &Form1::label3_TextAlignChanged);
			this->label3->SizeChanged += gcnew System::EventHandler(this, &Form1::label3_SizeChanged);
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(424, 96);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(474, 479);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Normal;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->UseWaitCursor = true;
			this->pictureBox1->SizeModeChanged += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			this->pictureBox1->SizeChanged += gcnew System::EventHandler(this, &Form1::pictureBox1_SizeChanged);
			this->pictureBox1->VisibleChanged += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			this->pictureBox1->Layout += gcnew System::Windows::Forms::LayoutEventHandler(this, &Form1::pictureBox1_Layout);
			this->pictureBox1->Resize += gcnew System::EventHandler(this, &Form1::pictureBox1_Resize);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 19));
			this->button1->Location = System::Drawing::Point(166, 576);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(272, 63);
			this->button1->TabIndex = 4;
			this->button1->Text = L"点击了解";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 19));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(858, 576);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(261, 63);
			this->button2->TabIndex = 5;
			this->button2->Text = L"退出";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->UseWaitCursor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1199, 677);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->ForeColor = System::Drawing::SystemColors::Highlight;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Opacity = 0.9;
			this->Text = L"My Windows";
			this->UseWaitCursor = true;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void label1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_TextAlignChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(L"你好，我是kobe！ ");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void pictureBox1_Layout(System::Object^  sender, System::Windows::Forms::LayoutEventArgs^  e) {
}
private: System::Void pictureBox1_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Resize(System::Object^  sender, System::EventArgs^  e) {
}
};
}

