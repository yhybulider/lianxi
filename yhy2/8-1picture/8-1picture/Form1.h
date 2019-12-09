#pragma once

namespace My81picture {

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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TabPage^  tabPage2;




	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private: System::Windows::Forms::TabPage^  tabPage3;

	private: System::Windows::Forms::PictureBox^  pictureBox3;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::HScrollBar^  hScrollBar1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(215, 39);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(681, 417);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->progressBar1);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(673, 388);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"进度条";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(82, 104);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 23);
			this->progressBar1->TabIndex = 1;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(480, 483);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 15);
			this->label3->TabIndex = 4;
			this->label3->Text = L"参长";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(275, 483);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"最大值";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(107, 483);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"最小值";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(26, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(240, 248);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->trackBar1);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(324, 388);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"滑动条";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(72, 85);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 56);
			this->trackBar1->TabIndex = 6;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(32, 18);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(221, 219);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->hScrollBar1);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(324, 388);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"滚动条";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Location = System::Drawing::Point(86, 101);
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(80, 21);
			this->hScrollBar1->TabIndex = 6;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(39, 27);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(153, 173);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12));
			this->label4->Location = System::Drawing::Point(316, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(189, 20);
			this->label4->TabIndex = 1;
			this->label4->Text = L"三个条子的联动控制";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(51, 519);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 25);
			this->numericUpDown1->TabIndex = 5;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(268, 521);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 25);
			this->numericUpDown2->TabIndex = 6;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(467, 521);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 25);
			this->numericUpDown3->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(683, 514);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"设置";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(832, 498);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 15);
			this->label5->TabIndex = 9;
			this->label5->Text = L"条值";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(890, 500);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 10;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1051, 581);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"                                                                                 "
				L"       条子的控制";
			this->Load += gcnew System::EventHandler(this, &Form1::On_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:System::Drawing::Size sizePicBox, sizeThumb;
	private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
		progressBar1->Minimum = 0;
		progressBar1->Maximum = 100;
		progressBar1->Step = 10;  // 设置步长
		hScrollBar1->Minimum = 0;
		hScrollBar1->Maximum = 100;
		hScrollBar1->LargeChange = 10;
		trackBar1->Minimum = 0;
		trackBar1->Maximum = 100;
		trackBar1->TickFrequency = 10;
		progressBar1->Value = 77;  //当前值应修改为你的座位号
		trackBar1->Value = 50;
		hScrollBar1->Value = 50;

	}
	private: System::Void On_ImageLoad(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ ofDlg = gcnew OpenFileDialog();
		ofDlg->Filter = "图像文件(*.BMP;*.JPG;*.GIF;*.PNG;*.ICO;*.WMF)\
																	                     |*.BMP;*.JPG;*.GIF;*.PNG;*.ICO;*.WMF|所有文件(*.*)|*.*";
		ofDlg->RestoreDirectory = true;
		if (ofDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->pictureBox1->Image = Image::FromFile(ofDlg->FileName);
			this->pictureBox2->Image = this->pictureBox1->Image;
			this->pictureBox3->Image = this->pictureBox1->Image;
			this->tabPage2->Enabled = true;
			this->tabPage3->Enabled = true;
		}
	}
	


	private: System::Void On_App(System::Object^  sender, System::EventArgs^  e) {
		if (this->tabControl1->SelectedTab == this->tabPage2)
		{
			this->pictureBox1->Size = this->sizePicBox;
			this->pictureBox1->SizeMode = this->pictureBox2->SizeMode;
		}
		else
			this->pictureBox1->BorderStyle = this->pictureBox3->BorderStyle;
	}

private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
