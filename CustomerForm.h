#pragma once
#include "Code.h"
#include "CategForm.h"
#include <msclr\marshal_cppstd.h>


namespace Project2 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CustomerForm
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		CustomerForm(void)
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
		~CustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ MainDetLbl;
	protected:
	private: System::Windows::Forms::Label^ NameLbl;
	private: System::Windows::Forms::Label^ CNICLbl;
	private: System::Windows::Forms::Label^ AddLbl;
	private: System::Windows::Forms::Label^ MobileLbl;
	private: System::Windows::Forms::Label^ EmailLbl;
	private: System::Windows::Forms::TextBox^ NameTxt;
	private: System::Windows::Forms::TextBox^ CNICTxt;
	private: System::Windows::Forms::TextBox^ AddTxt;
	private: System::Windows::Forms::TextBox^ MobTxt;
	private: System::Windows::Forms::TextBox^ EmailTxt;
	private: System::Windows::Forms::Button^ EndDetBtn;


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
			this->MainDetLbl = (gcnew System::Windows::Forms::Label());
			this->NameLbl = (gcnew System::Windows::Forms::Label());
			this->CNICLbl = (gcnew System::Windows::Forms::Label());
			this->AddLbl = (gcnew System::Windows::Forms::Label());
			this->MobileLbl = (gcnew System::Windows::Forms::Label());
			this->EmailLbl = (gcnew System::Windows::Forms::Label());
			this->NameTxt = (gcnew System::Windows::Forms::TextBox());
			this->CNICTxt = (gcnew System::Windows::Forms::TextBox());
			this->AddTxt = (gcnew System::Windows::Forms::TextBox());
			this->MobTxt = (gcnew System::Windows::Forms::TextBox());
			this->EmailTxt = (gcnew System::Windows::Forms::TextBox());
			this->EndDetBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// MainDetLbl
			// 
			this->MainDetLbl->AutoSize = true;
			this->MainDetLbl->Location = System::Drawing::Point(217, 31);
			this->MainDetLbl->Name = L"MainDetLbl";
			this->MainDetLbl->Size = System::Drawing::Size(168, 13);
			this->MainDetLbl->TabIndex = 0;
			this->MainDetLbl->Text = L"Enter the details below to proceed";
			this->MainDetLbl->Click += gcnew System::EventHandler(this, &CustomerForm::MainDetLbl_Click);
			// 
			// NameLbl
			// 
			this->NameLbl->AutoSize = true;
			this->NameLbl->Location = System::Drawing::Point(119, 82);
			this->NameLbl->Name = L"NameLbl";
			this->NameLbl->Size = System::Drawing::Size(150, 13);
			this->NameLbl->TabIndex = 1;
			this->NameLbl->Text = L"Name (as it appears on CNIC) ";
			this->NameLbl->Click += gcnew System::EventHandler(this, &CustomerForm::NameLbl_Click);
			// 
			// CNICLbl
			// 
			this->CNICLbl->AutoSize = true;
			this->CNICLbl->Location = System::Drawing::Point(119, 119);
			this->CNICLbl->Name = L"CNICLbl";
			this->CNICLbl->Size = System::Drawing::Size(72, 13);
			this->CNICLbl->TabIndex = 2;
			this->CNICLbl->Text = L"CNIC Number";
			this->CNICLbl->Click += gcnew System::EventHandler(this, &CustomerForm::CNICLbl_Click);
			// 
			// AddLbl
			// 
			this->AddLbl->AutoSize = true;
			this->AddLbl->Location = System::Drawing::Point(119, 156);
			this->AddLbl->Name = L"AddLbl";
			this->AddLbl->Size = System::Drawing::Size(45, 13);
			this->AddLbl->TabIndex = 3;
			this->AddLbl->Text = L"Address";
			this->AddLbl->Click += gcnew System::EventHandler(this, &CustomerForm::AddLbl_Click);
			// 
			// MobileLbl
			// 
			this->MobileLbl->AutoSize = true;
			this->MobileLbl->Location = System::Drawing::Point(119, 193);
			this->MobileLbl->Name = L"MobileLbl";
			this->MobileLbl->Size = System::Drawing::Size(78, 13);
			this->MobileLbl->TabIndex = 4;
			this->MobileLbl->Text = L"Mobile Number";
			this->MobileLbl->Click += gcnew System::EventHandler(this, &CustomerForm::MobileLbl_Click);
			// 
			// EmailLbl
			// 
			this->EmailLbl->AutoSize = true;
			this->EmailLbl->Location = System::Drawing::Point(119, 231);
			this->EmailLbl->Name = L"EmailLbl";
			this->EmailLbl->Size = System::Drawing::Size(73, 13);
			this->EmailLbl->TabIndex = 5;
			this->EmailLbl->Text = L"Email Address";
			this->EmailLbl->Click += gcnew System::EventHandler(this, &CustomerForm::EmailLbl_Click);
			// 
			// NameTxt
			// 
			this->NameTxt->Location = System::Drawing::Point(301, 75);
			this->NameTxt->Name = L"NameTxt";
			this->NameTxt->Size = System::Drawing::Size(223, 20);
			this->NameTxt->TabIndex = 6;
			this->NameTxt->TextChanged += gcnew System::EventHandler(this, &CustomerForm::NameTxt_TextChanged);
			// 
			// CNICTxt
			// 
			this->CNICTxt->Location = System::Drawing::Point(301, 112);
			this->CNICTxt->Name = L"CNICTxt";
			this->CNICTxt->Size = System::Drawing::Size(223, 20);
			this->CNICTxt->TabIndex = 7;
			this->CNICTxt->TextChanged += gcnew System::EventHandler(this, &CustomerForm::CNICTxt_TextChanged);
			// 
			// AddTxt
			// 
			this->AddTxt->Location = System::Drawing::Point(301, 149);
			this->AddTxt->Name = L"AddTxt";
			this->AddTxt->Size = System::Drawing::Size(223, 20);
			this->AddTxt->TabIndex = 8;
			this->AddTxt->TextChanged += gcnew System::EventHandler(this, &CustomerForm::AddTxt_TextChanged);
			// 
			// MobTxt
			// 
			this->MobTxt->Location = System::Drawing::Point(301, 186);
			this->MobTxt->Name = L"MobTxt";
			this->MobTxt->Size = System::Drawing::Size(223, 20);
			this->MobTxt->TabIndex = 9;
			this->MobTxt->TextChanged += gcnew System::EventHandler(this, &CustomerForm::MobTxt_TextChanged);
			// 
			// EmailTxt
			// 
			this->EmailTxt->Location = System::Drawing::Point(301, 224);
			this->EmailTxt->Name = L"EmailTxt";
			this->EmailTxt->Size = System::Drawing::Size(223, 20);
			this->EmailTxt->TabIndex = 10;
			this->EmailTxt->TextChanged += gcnew System::EventHandler(this, &CustomerForm::EmailTxt_TextChanged);
			// 
			// EndDetBtn
			// 
			this->EndDetBtn->Location = System::Drawing::Point(271, 261);
			this->EndDetBtn->Name = L"EndDetBtn";
			this->EndDetBtn->Size = System::Drawing::Size(75, 23);
			this->EndDetBtn->TabIndex = 11;
			this->EndDetBtn->Text = L"Finish";
			this->EndDetBtn->UseVisualStyleBackColor = true;
			this->EndDetBtn->Click += gcnew System::EventHandler(this, &CustomerForm::EndDetBtn_Click);
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 296);
			this->Controls->Add(this->EndDetBtn);
			this->Controls->Add(this->EmailTxt);
			this->Controls->Add(this->MobTxt);
			this->Controls->Add(this->AddTxt);
			this->Controls->Add(this->CNICTxt);
			this->Controls->Add(this->NameTxt);
			this->Controls->Add(this->EmailLbl);
			this->Controls->Add(this->MobileLbl);
			this->Controls->Add(this->AddLbl);
			this->Controls->Add(this->CNICLbl);
			this->Controls->Add(this->NameLbl);
			this->Controls->Add(this->MainDetLbl);
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			this->Load += gcnew System::EventHandler(this, &CustomerForm::CustomerForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
        
		

	
	private: System::Void NameLbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void CNICLbl_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void CustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EmailLbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MobileLbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   private: System::Void AddLbl_Click(System::Object^ sender, System::EventArgs^ e) {
	   }
private: System::Void MainDetLbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EndDetBtn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
	std::string name = msclr::interop::marshal_as<std::string>(NameTxt->Text);
	std::string cnic = msclr::interop::marshal_as<std::string>(CNICTxt->Text);
	std::string add = msclr::interop::marshal_as<std::string>(AddTxt->Text);
	std::string em = msclr::interop::marshal_as<std::string>(EmailTxt->Text);
	std::string mob = msclr::interop::marshal_as<std::string>(MobTxt->Text);
	if (name == "" || cnic == "" || add == "" || em == "" || mob == "")
	{
		MessageBox::Show("Enter data in all fields to proceed ahead.");
	}
	else
	{
		Customer cc(name, cnic, add, em, mob);
		cc.writedetails();
		this->Hide();
		CategForm^ CF2 = gcnew CategForm();
		CF2->ShowDialog();
	}
}
private: System::Void NameTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CNICTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MobTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EmailTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	  
};
}
