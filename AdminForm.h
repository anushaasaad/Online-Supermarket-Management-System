#pragma once
#include <msclr\marshal_cppstd.h>
#include "Options.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ UNTxt;
	protected:
	private: System::Windows::Forms::TextBox^ PWTxt;
	private: System::Windows::Forms::Label^ ALLbl;
	private: System::Windows::Forms::Label^ UnLbl;
	private: System::Windows::Forms::Label^ PWLbl;
	private: System::Windows::Forms::Button^ LoginBtn;

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
			this->UNTxt = (gcnew System::Windows::Forms::TextBox());
			this->PWTxt = (gcnew System::Windows::Forms::TextBox());
			this->ALLbl = (gcnew System::Windows::Forms::Label());
			this->UnLbl = (gcnew System::Windows::Forms::Label());
			this->PWLbl = (gcnew System::Windows::Forms::Label());
			this->LoginBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// UNTxt
			// 
			this->UNTxt->Location = System::Drawing::Point(283, 100);
			this->UNTxt->Name = L"UNTxt";
			this->UNTxt->Size = System::Drawing::Size(135, 20);
			this->UNTxt->TabIndex = 0;
			this->UNTxt->TextChanged += gcnew System::EventHandler(this, &AdminForm::UNTxt_TextChanged);
			// 
			// PWTxt
			// 
			this->PWTxt->Location = System::Drawing::Point(283, 142);
			this->PWTxt->Name = L"PWTxt";
			this->PWTxt->Size = System::Drawing::Size(135, 20);
			this->PWTxt->TabIndex = 1;
			this->PWTxt->TextChanged += gcnew System::EventHandler(this, &AdminForm::PWTxt_TextChanged);
			// 
			// ALLbl
			// 
			this->ALLbl->AutoSize = true;
			this->ALLbl->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ALLbl->Location = System::Drawing::Point(201, 26);
			this->ALLbl->Name = L"ALLbl";
			this->ALLbl->Size = System::Drawing::Size(155, 29);
			this->ALLbl->TabIndex = 2;
			this->ALLbl->Text = L"Admin Login ";
			this->ALLbl->Click += gcnew System::EventHandler(this, &AdminForm::ALLbl_Click);
			// 
			// UnLbl
			// 
			this->UnLbl->AutoSize = true;
			this->UnLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UnLbl->Location = System::Drawing::Point(134, 104);
			this->UnLbl->Name = L"UnLbl";
			this->UnLbl->Size = System::Drawing::Size(108, 16);
			this->UnLbl->TabIndex = 3;
			this->UnLbl->Text = L"Enter Username:";
			// 
			// PWLbl
			// 
			this->PWLbl->AutoSize = true;
			this->PWLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PWLbl->Location = System::Drawing::Point(134, 146);
			this->PWLbl->Name = L"PWLbl";
			this->PWLbl->Size = System::Drawing::Size(108, 16);
			this->PWLbl->TabIndex = 4;
			this->PWLbl->Text = L"Enter Password: ";
			// 
			// LoginBtn
			// 
			this->LoginBtn->Location = System::Drawing::Point(229, 206);
			this->LoginBtn->Name = L"LoginBtn";
			this->LoginBtn->Size = System::Drawing::Size(75, 23);
			this->LoginBtn->TabIndex = 5;
			this->LoginBtn->Text = L"Login ";
			this->LoginBtn->UseVisualStyleBackColor = true;
			this->LoginBtn->Click += gcnew System::EventHandler(this, &AdminForm::LoginBtn_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(555, 288);
			this->Controls->Add(this->LoginBtn);
			this->Controls->Add(this->PWLbl);
			this->Controls->Add(this->UnLbl);
			this->Controls->Add(this->ALLbl);
			this->Controls->Add(this->PWTxt);
			this->Controls->Add(this->UNTxt);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ALLbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void UNTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PWTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LoginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string username = msclr::interop::marshal_as<std::string>(UNTxt->Text);
	std::string pw = msclr::interop::marshal_as<std::string>(PWTxt->Text);
	if (username=="admin" && pw=="12345")
	{
		this->Hide(); 
		Options^ ob = gcnew Options(); 
		ob->Show(); 

	}
	else
	{
		MessageBox::Show("Enter correct username and password."); 
	}
}
private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
