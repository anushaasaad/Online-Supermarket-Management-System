#pragma once
#include "CustomerForm.h"
#include "AdminForm.h"


namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AdminBtn;
	protected:
	private: System::Windows::Forms::Button^ CustBtn;
	private: System::Windows::Forms::Panel^ C1;
	private: System::Windows::Forms::Panel^ C2;
	private: System::Windows::Forms::Panel^ C3;
	private: System::Windows::Forms::Label^ WlcmLbl;
	private: System::Windows::Forms::Label^ AdminLbl;
	private: System::Windows::Forms::Label^ CustLbl;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->AdminBtn = (gcnew System::Windows::Forms::Button());
			this->CustBtn = (gcnew System::Windows::Forms::Button());
			this->C1 = (gcnew System::Windows::Forms::Panel());
			this->C2 = (gcnew System::Windows::Forms::Panel());
			this->C3 = (gcnew System::Windows::Forms::Panel());
			this->WlcmLbl = (gcnew System::Windows::Forms::Label());
			this->AdminLbl = (gcnew System::Windows::Forms::Label());
			this->CustLbl = (gcnew System::Windows::Forms::Label());
			this->C3->SuspendLayout();
			this->SuspendLayout();
			// 
			// AdminBtn
			// 
			this->AdminBtn->Location = System::Drawing::Point(299, 105);
			this->AdminBtn->Name = L"AdminBtn";
			this->AdminBtn->Size = System::Drawing::Size(75, 23);
			this->AdminBtn->TabIndex = 0;
			this->AdminBtn->Text = L"Click Here";
			this->AdminBtn->UseVisualStyleBackColor = true;
			this->AdminBtn->Click += gcnew System::EventHandler(this, &MyForm::AdminBtn_Click);
			// 
			// CustBtn
			// 
			this->CustBtn->Location = System::Drawing::Point(299, 160);
			this->CustBtn->Name = L"CustBtn";
			this->CustBtn->Size = System::Drawing::Size(75, 23);
			this->CustBtn->TabIndex = 1;
			this->CustBtn->Text = L"Click Here";
			this->CustBtn->UseVisualStyleBackColor = true;
			this->CustBtn->Click += gcnew System::EventHandler(this, &MyForm::CustBtn_Click);
			// 
			// C1
			// 
			this->C1->BackColor = System::Drawing::Color::Red;
			this->C1->Location = System::Drawing::Point(0, 0);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(103, 260);
			this->C1->TabIndex = 2;
			// 
			// C2
			// 
			this->C2->BackColor = System::Drawing::Color::Red;
			this->C2->Location = System::Drawing::Point(453, 0);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(103, 260);
			this->C2->TabIndex = 0;
			this->C2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::C2_Paint);
			// 
			// C3
			// 
			this->C3->BackColor = System::Drawing::Color::Black;
			this->C3->Controls->Add(this->WlcmLbl);
			this->C3->Location = System::Drawing::Point(0, 0);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(556, 69);
			this->C3->TabIndex = 3;
			// 
			// WlcmLbl
			// 
			this->WlcmLbl->AutoSize = true;
			this->WlcmLbl->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WlcmLbl->ForeColor = System::Drawing::Color::White;
			this->WlcmLbl->Location = System::Drawing::Point(97, 9);
			this->WlcmLbl->Name = L"WlcmLbl";
			this->WlcmLbl->Size = System::Drawing::Size(366, 57);
			this->WlcmLbl->TabIndex = 4;
			this->WlcmLbl->Text = L"Welcome to SuperMart";
			// 
			// AdminLbl
			// 
			this->AdminLbl->AutoSize = true;
			this->AdminLbl->Location = System::Drawing::Point(149, 115);
			this->AdminLbl->Name = L"AdminLbl";
			this->AdminLbl->Size = System::Drawing::Size(90, 13);
			this->AdminLbl->TabIndex = 4;
			this->AdminLbl->Text = L"To login as admin";
			this->AdminLbl->Click += gcnew System::EventHandler(this, &MyForm::AdminLbl_Click);
			// 
			// CustLbl
			// 
			this->CustLbl->AutoSize = true;
			this->CustLbl->Location = System::Drawing::Point(149, 170);
			this->CustLbl->Name = L"CustLbl";
			this->CustLbl->Size = System::Drawing::Size(105, 13);
			this->CustLbl->TabIndex = 5;
			this->CustLbl->Text = L"To login as customer";
			this->CustLbl->Click += gcnew System::EventHandler(this, &MyForm::CustLbl_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(557, 261);
			this->Controls->Add(this->CustLbl);
			this->Controls->Add(this->AdminLbl);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->CustBtn);
			this->Controls->Add(this->AdminBtn);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->C3->ResumeLayout(false);
			this->C3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 
	private: System::Void AdminBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide(); 
		AdminForm^ af = gcnew AdminForm();
		af->Show(); 
	}
	private: System::Void CustBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide(); 
		CustomerForm ^ CF = gcnew CustomerForm(); 
		CF->ShowDialog(); 
	}
	private: System::Void CustLbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void AdminLbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void C2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
