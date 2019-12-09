#pragma once

namespace My114 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

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
	private: System::Windows::Forms::ListBox^  listBox1;
	protected:
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(59, 74);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 229);
			this->listBox1->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(253, 74);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(247, 229);
			this->listBox2->TabIndex = 1;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 15;
			this->listBox3->Location = System::Drawing::Point(555, 77);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(134, 229);
			this->listBox3->TabIndex = 2;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->HorizontalScrollbar = true;
			this->listBox4->ItemHeight = 15;
			this->listBox4->Location = System::Drawing::Point(59, 375);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(630, 124);
			this->listBox4->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(776, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"打开文件";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(776, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 38);
			this->button2->TabIndex = 5;
			this->button2->Text = L"保存文件";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(776, 280);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 43);
			this->button3->TabIndex = 6;
			this->button3->Text = L"更新数据";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(776, 512);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 31);
			this->button4->TabIndex = 7;
			this->button4->Text = L"修改数据";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 15);
			this->label1->TabIndex = 8;
			this->label1->Text = L"偏移量：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(250, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"十六进制数据：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(564, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 15);
			this->label3->TabIndex = 10;
			this->label3->Text = L"ASC码值";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(56, 357);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 15);
			this->label4->TabIndex = 11;
			this->label4->Text = L"二进制数值";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(122, 525);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 15);
			this->label5->TabIndex = 12;
			this->label5->Text = L"偏移地址：";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(510, 528);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 15);
			this->label6->TabIndex = 13;
			this->label6->Text = L"十六进制数值：";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(210, 521);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 25);
			this->textBox1->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(638, 525);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 25);
			this->textBox2->TabIndex = 15;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 597);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Name = L"Form1";
			this->Text = L"无标题-二进制计时器";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: array<unsigned char>^ buffer;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ dlg = gcnew OpenFileDialog();      // 打开文件对话框
		dlg->FileName = L"*.*";                // 缺省文件名
		dlg->Filter = L"所有文件(*.*)|*.*";        // 文件过滤字符串
		if (dlg->ShowDialog() != System::Windows::Forms::DialogResult::OK)
			return;                              // 未选择文件,退出
		try {
			FileInfo^   fileInfo = gcnew FileInfo(dlg->FileName);
			FileStream^   stream = fileInfo->Open(FileMode::Open, FileAccess::Read);
			BinaryReader^ reader = gcnew BinaryReader(stream);
			this->Text = fileInfo->Name + L" - 二进制编辑器"; // 打开的文件
			this->buffer = reader->ReadBytes((int)fileInfo->Length);//读取字节数据
			reader->Close();                  // 关闭BinaryReader
			stream->Close();                 // 关闭FileStream
			button3_Click(sender, e);   // 更新数据的处理方法, 注意！
			this->button2->Enabled = true;    // 启用“保存文件”按钮
			this->button3->Enabled = true;     // 启用“更新数据”按钮
			this->button4->Enabled = true;     // 启用“修改数据”按钮
		}
		catch (IOException^ e) {          // 打开文件或读取数据失败
			this->buffer = nullptr;                        // 缓冲区无效
			MessageBox::Show(e->ToString());           // 弹出错误提示
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^ dlg = gcnew SaveFileDialog();// 保存文件对话框
	dlg->FileName = L"*.*";                // 缺省文件名
	dlg->Filter = L"所有文件(*.*)|*.*";        // 文件过滤字符串
	if (dlg->ShowDialog() != System::Windows::Forms::DialogResult::OK)
		return;                           // 未选择文件,退出
	try {
		FileInfo^   fileInfo = gcnew FileInfo(dlg->FileName);
		FileStream^   stream = fileInfo->Open(FileMode::OpenOrCreate, FileAccess::Write);
		BinaryWriter^writer = gcnew BinaryWriter(stream);
		writer->Write(this->buffer, 0, this->buffer->Length); // 写入数据
		writer->Close();
		stream->Close();
	}
	catch (IOException^ e){       // 打开文件或读取数据失败
		MessageBox::Show(e->ToString()); // 弹出错误提示
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->buffer == nullptr) return;
	this->listBox1->Items->Clear();         // 清空“偏移量”列表框
	this->listBox2->Items->Clear();       // 清空“十六进制”列表框
	this->listBox3->Items->Clear();       // 清空“ASC码”列表框
	this->listBox4->Items->Clear();        // 清空“二进制”列表框
	String ^hexAddr, ^binData, ^hexData, ^ascData;
	hexAddr = binData = hexData = ascData = String::Empty;     // 清空
	for (int i = 0; i < this->buffer->Length; i++) { // 读取字节数据中的所有字节
		hexAddr = i.ToString(L"X6");  // 偏移量,6位的十六进制表示
		if (i % 8 == 0)                             // 起始偏移量
			this->listBox1->Items->Add(hexAddr);
		if (i && (i % 8 == 0)){                         // 每行8字节
			this->listBox2->Items->Add(hexData);       // 十六进制
			this->listBox3->Items->Add(ascData);       // ASC码
			this->listBox4->Items->Add(binData);       // 二进制
			hexData = binData = ascData = String::Empty;//清空后再记录下一行
		}
		ascData += System::Char(this->buffer[i]);     //ASCII字符
		hexData += this->buffer[i].ToString(L"X2") + L"  "; // 2位定长的十六进制
		binData += Convert::ToString(this->buffer[i], 2)->PadLeft(8, '0') + L" ";
		// 转换为二进制, 8位定长
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->buffer == nullptr) return;
	if (this->textBox1->Text == String::Empty) return;        //偏移量地址
	if (this->textBox2->Text == String::Empty) return;        //十六进制数值
	try{
		int address = Convert::ToInt32(this->textBox1->Text, 16);
		unsigned char value = Convert::ToByte(this->textBox2->Text, 16);
		this->buffer[address] = value;                  //修改数据
		button3_Click(sender, e);                      // 更新数据
	}
	catch (Exception^ e) {                             // 字符串转换错误
		MessageBox::Show(L"请输入正确的数值!\n\n" + e->ToString());
	}
}
};
}

