#pragma once

namespace EX53 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// GameForm ժҪ
	/// </summary>

	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
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
			this->Text = L"��Ϸ����";
			this->Load += gcnew System::EventHandler(this, &GameForm::GameForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GameForm::GameForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GameForm::GameForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &GameForm::GameForm_MouseUp);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GameForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private:bool    bIsMouseDown;     // ����Ƿ��Ѱ���

	private: Point  ptMouse;        // ���λ��

	public: Point   ptMainForm;         // �������λ��
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

		// �������λ��ƫ�����ƶ�����

		Point pt = this->Location;
		this->StartPosition = FormStartPosition::Manual;
		pt.X += e->X - ptMouse.X;
		pt.Y += e->Y - ptMouse.Y;
		this->Location = pt;
	}
	private: System::Void GameForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		bIsMouseDown = false;

		// �����жϷ���CheckIt

		if (CheckIt())

			MessageBox::Show("��ɹ��ˣ�", "�ɹ�");

		else

			MessageBox::Show("��������ʼ����ť�����¿�ʼ��", "ʧ��");

		this->Close();              // �رմ���
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
