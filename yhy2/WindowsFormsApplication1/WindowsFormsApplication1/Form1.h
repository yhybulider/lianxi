#pragma once

namespace WindowsFormsApplication1 {

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
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  DirectoryInfo;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  FileInfo;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;




	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;

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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->DirectoryInfo = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->FileInfo = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->DirectoryInfo->SuspendLayout();
			this->FileInfo->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			this->splitContainer1->Panel1->Controls->Add(this->DirectoryInfo);
			this->splitContainer1->Panel1->Controls->Add(this->FileInfo);
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::splitContainer1_Panel1_Paint);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->statusStrip1);
			this->splitContainer1->Panel2->Controls->Add(this->textBox2);
			this->splitContainer1->Size = System::Drawing::Size(993, 534);
			this->splitContainer1->SplitterDistance = 207;
			this->splitContainer1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(633, 25);
			this->textBox1->TabIndex = 2;
			// 
			// DirectoryInfo
			// 
			this->DirectoryInfo->Controls->Add(this->button7);
			this->DirectoryInfo->Controls->Add(this->button6);
			this->DirectoryInfo->Controls->Add(this->button5);
			this->DirectoryInfo->Controls->Add(this->button4);
			this->DirectoryInfo->Location = System::Drawing::Point(361, 37);
			this->DirectoryInfo->Name = L"DirectoryInfo";
			this->DirectoryInfo->Size = System::Drawing::Size(539, 100);
			this->DirectoryInfo->TabIndex = 1;
			this->DirectoryInfo->TabStop = false;
			this->DirectoryInfo->Text = L"DirectoryInfo";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(360, 49);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(150, 23);
			this->button7->TabIndex = 3;
			this->button7->Text = L"提取文件夹的文件";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::GetFileFromDir);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(248, 49);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 23);
			this->button6->TabIndex = 2;
			this->button6->Text = L"删除文件夹";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::Delete_Dir);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(136, 49);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 23);
			this->button5->TabIndex = 1;
			this->button5->Text = L"新建文件夹";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 49);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 23);
			this->button4->TabIndex = 0;
			this->button4->Text = L"浏览文件夹";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::FolderBroser);
			// 
			// FileInfo
			// 
			this->FileInfo->Controls->Add(this->button3);
			this->FileInfo->Controls->Add(this->button2);
			this->FileInfo->Controls->Add(this->button1);
			this->FileInfo->Location = System::Drawing::Point(12, 37);
			this->FileInfo->Name = L"FileInfo";
			this->FileInfo->Size = System::Drawing::Size(301, 100);
			this->FileInfo->TabIndex = 0;
			this->FileInfo->TabStop = false;
			this->FileInfo->Text = L"FileInfo";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(220, 49);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"删除文件";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::Del_File);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(112, 49);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"新建文件";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::CreateFile);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"浏览文件";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Select_File);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 298);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(993, 25);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(167, 20);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Location = System::Drawing::Point(0, 0);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(993, 25);
			this->textBox2->TabIndex = 1;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(993, 534);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::On_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->DirectoryInfo->ResumeLayout(false);
			this->FileInfo->ResumeLayout(false);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	
	}
	private: System::Void splitContainer1_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 String ^CurPath;
private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
	//获取当前目录（即该进程从中启动的目录）的完全限定路径。
	CurPath = System::Environment::CurrentDirectory->ToString();;
	toolStripStatusLabel1->Text = String::Concat("当前目录为【", CurPath, "】 ");// 在状态栏上显示信息
}
		 String ^filestr;
private: System::Void Select_File(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->InitialDirectory = CurPath;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName != "")
	{
		textBox1->Text = openFileDialog1->FileName;
		FileInfo^ filestr = gcnew FileInfo(openFileDialog1->FileName);
		CurPath = filestr->DirectoryName;
		textBox2->Text = String::Concat("文件名：", filestr->Name, "\r\n文件大小:", filestr->Length, "\r\n最后存取时间：", filestr->LastAccessTime);
		//CurPath = CurPath->Substring(0,CurPath->LastIndexOf("\\")); //去掉/后面的程序名
		//   CurPath =Directory::GetDirectories(openFileDialog1->FileName)->ToString();
		// 在状态栏上显示信息
		toolStripStatusLabel1->Text = String::Concat("当前目录为【", CurPath, "】 ");
	}
	else
	{
		MessageBox::Show(this, "对不起，没有选择文件或选择文件失败！", "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void CreateFile(System::Object^  sender, System::EventArgs^  e) {
	String ^filestr = textBox1->Text->Trim();
	if (textBox1->Text == "")
	{
		MessageBox::Show(this, "文件名不能为空！", "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		FileStream ^stream = nullptr;
		FileInfo ^fileInfo1 = gcnew FileInfo(filestr);
		if (fileInfo1->Exists)
		{
			MessageBox::Show(this, "该文件名已经存在！" + fileInfo1->FullName, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			stream = fileInfo1->Create();
			stream->Close();
			// 在状态栏上显示信息
			toolStripStatusLabel1->Text = String::Concat("当前目录为【", fileInfo1->DirectoryName, "】新建文件：", fileInfo1->Name);
			MessageBox::Show(this, "成功创建文件！" + fileInfo1->FullName, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}


private: System::Void Del_File(System::Object^  sender, System::EventArgs^  e) {
	String ^filestr = textBox1->Text->Trim();
	if (filestr == "")
	{
		MessageBox::Show(this, "文件路径及名称不能为空！", "信息提示", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		FileInfo^ fileInfo1 = gcnew FileInfo(filestr);
		if (!fileInfo1->Exists)
		{
			MessageBox::Show(this, "要删除的文件不存在！", "信息提示", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			fileInfo1->Delete();
			// 在状态栏上显示信息
			toolStripStatusLabel1->Text = String::Concat("当前目录为【", fileInfo1->DirectoryName, "】删除文件：", fileInfo1->Name);
			MessageBox::Show(this, "成功删除了文件！", "信息提示", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
private: System::Void FolderBroser(System::Object^  sender, System::EventArgs^  e) {
	folderBrowserDialog1->SelectedPath = CurPath;
	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		textBox1->Text = folderBrowserDialog1->SelectedPath;  //获取文件夹位置
		CurPath = textBox1->Text;
		// 在状态栏上显示信息
		toolStripStatusLabel1->Text = String::Concat("当前目录为【", textBox1->Text, "】 ");
	}
	else
		MessageBox::Show(this, "浏览文件夹错误！", "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void Create_Dir(System::Object^  sender, System::EventArgs^  e) {
	String ^Dirstr = textBox1->Text->Trim();
	if (Dirstr == "")
	{
		MessageBox::Show(this, "文件夹位置及名称不能为空！", "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		DirectoryInfo^ dirInfo1 = gcnew DirectoryInfo(Dirstr);
		if (!dirInfo1->Exists)  //判断文件夹是否存在
		{
			dirInfo1->Create();     //创建新文件夹
			CurPath = dirInfo1->Parent->FullName;
			MessageBox::Show(this, "成功创建文件夹！" + dirInfo1->FullName, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);
			// 在状态栏上显示信息
			toolStripStatusLabel1->Text = String::Concat("当前目录为【", dirInfo1->Parent->FullName, "】创建文件夹", dirInfo1->FullName);
		}
		else
			MessageBox::Show(this, "该文件夹已存在！" + dirInfo1->FullName, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void Delete_Dir(System::Object^  sender, System::EventArgs^  e) {
	String ^Dirstr = textBox1->Text->Trim();
	if (Dirstr == "")
	{
		MessageBox::Show(this, "文件夹位置及名称不能为空！", "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		DirectoryInfo^ dirInfo1 = gcnew DirectoryInfo(Dirstr);
		if (dirInfo1->Exists)  //判断文件夹是否存在
		{
			dirInfo1->Delete();     //删除文件夹
			CurPath = dirInfo1->Parent->FullName;
			MessageBox::Show(this, "成功删除文件夹！" + dirInfo1->FullName, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);
			// 在状态栏上显示信息
			toolStripStatusLabel1->Text = String::Concat("当前目录为【", dirInfo1->Parent->FullName, "】删除文件夹", dirInfo1->FullName);
		}
		else
			MessageBox::Show(this, "该文件夹不存在！" + dirInfo1->FullName, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}


private: System::Void GetFileFromDir(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "")
	{
		MessageBox::Show(this, "请选择文件夹！", "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		DirectoryInfo ^dir = gcnew DirectoryInfo(textBox1->Text);
		CurPath = dir->FullName;
		array <FileInfo ^> ^f = dir->GetFiles();
		textBox2->Text = String::Concat("当前目录为【", dir->FullName, "】 ", "\r\n");//显示完整目录
		for (int i = 0; i<f->Length; i++)
		{
			textBox2->Text += "\r\n";
			textBox2->Text += f[i]->FullName;//显示文件列表
		}
		// 在状态栏上显示信息
		toolStripStatusLabel1->Text = String::Concat("当前目录为【", dir->FullName, "】 ");
	}
}
};
}

