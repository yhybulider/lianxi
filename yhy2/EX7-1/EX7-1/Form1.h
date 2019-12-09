#pragma once
#include "StuScore.h"
#include "InputDlg.h"
namespace EX71 {

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"学号";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"学生成绩记录";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(228, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 64);
			this->button1->TabIndex = 2;
			this->button1->Text = L"添加";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::On_Add);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(226, 134);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 63);
			this->button2->TabIndex = 3;
			this->button2->Text = L"删除";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::On_Del);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(226, 236);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"修改";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::On_Mod);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(29, 181);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(150, 139);
			this->listBox1->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(32, 72);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 23);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::On_SelChange);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(375, 396);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"学生成绩操作";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	} 
private:ArrayList^ theStudents;
private: System::Void On_Add(System::Object^  sender, System::EventArgs^  e) {
	if (theStudents == nullptr)
		theStudents = gcnew ArrayList();
	InputDlg ^dlg = gcnew InputDlg;
	if (Windows::Forms::DialogResult::OK == dlg->ShowDialog())
	{
		String^ strText = dlg->textBox1->Text;
		strText = strText->Trim();
		if (String::IsNullOrEmpty(strText))
		{
			MessageBox::Show(L"姓名不能为空！", L"提示");
			return;
		}
		int nIndex = -1;
		strText = dlg->textBox2->Text;
		strText = strText->Trim();
		nIndex = this->comboBox1->FindString(strText);
		if (nIndex >= 0)   // 有重复项
			MessageBox::Show(String::Format("列表项[{0}]已添加过了！", strText), L"提示");
		else
		{
			StuScore ^stu = dlg->theScore;
		//StuScore类的类对象取得InputDlg窗口中的姓名、学号、成绩
			theStudents->Add(stu);//添加姓名、学号、成绩
			int nIndex = comboBox1->Items->Add(stu->strID);
			comboBox1->SelectedIndex = nIndex;//选中添加的学号
		}
		}
}
private: System::Void On_SelChange(System::Object^  sender, System::EventArgs^  e) {
	int nIndex = comboBox1->SelectedIndex;
	if (nIndex<0)return;
	StuScore ^stu = safe_cast<StuScore^>(theStudents[nIndex]);
	listBox1->Items->Clear();
	listBox1->Items->Add("姓名：" + stu->strName);
	listBox1->Items->Add("学号：" + stu->strID);
	for (int i = 0; i<3; i++)
	{
		String ^str = String::Format("成绩{0}:{1}", i + 1, stu->fScore[i]);
		listBox1->Items->Add(str);
	}
	if (comboBox1->SelectedIndex < 0)   // 没有任何选择项
		this->button2->Enabled = false;
	else
		this->button2->Enabled = true;
}
private: System::Void On_Del(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex < 0) // 没有任何选择项
		this->button2->Enabled = false;//禁用
	else
		this->button2->Enabled = true;
	int nIndex = this->comboBox1->SelectedIndex;//选中项的索引
	if (nIndex >= 0)//组合框非空
	{
		comboBox1->Items->RemoveAt(nIndex);//删除
		comboBox1->SelectedIndex = -1;
		// 取消选择
		listBox1->Items->Clear(); //清空对应的列表框的内容
		theStudents->RemoveAt(nIndex);//删除存在数组中的信息
		comboBox1->Text = "";//清空组合框中选中显示的学号
	}
}
private: System::Void On_Mod(System::Object^  sender, System::EventArgs^  e) {
	int nIndex = comboBox1->SelectedIndex;//选择要修改项的学号

	InputDlg ^dlg = gcnew InputDlg;//调用InputDlg 窗口

	dlg->theScore = safe_cast<StuScore^>(theStudents[nIndex]);//获得选中项的所有信息

	dlg->textBox1->Text = dlg->theScore->strName;//在InputDlg中依次获得：名字

	dlg->textBox2->Text = dlg->theScore->strID;//学号
	dlg->numericUpDown1->Value = (int)(dlg->theScore->fScore[0]);//成绩1
	dlg->numericUpDown2->Value = (int)(dlg->theScore->fScore[1]);//成绩2
	dlg->numericUpDown3->Value = (int)(dlg->theScore->fScore[2]);//成绩3
	if (Windows::Forms::DialogResult::OK == dlg->ShowDialog())//显示调用的窗口
	{
		theStudents->RemoveAt(nIndex);//
		comboBox1->Items->RemoveAt(nIndex);//删除组合框中选中的学号
		listBox1->Items->Clear();//清空列表框
		theStudents->Insert(nIndex, dlg->theScore);//插入修改后的信息
		comboBox1->Items->Add(dlg->theScore->strID);//组合框中添加修改的学号
		comboBox1->SelectedIndex = nIndex;//选中修改的学号;

	}

}
};
}

