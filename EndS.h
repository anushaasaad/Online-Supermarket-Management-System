#pragma once
#include <msclr\marshal_cppstd.h>
#include "Code.h"
 

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EndS
	/// </summary>
	public ref class EndS : public System::Windows::Forms::Form
	{
	public:
		EndS(void)
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
		~EndS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ billLbl1;
	protected:
	private: System::Windows::Forms::Label^ billLbl2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ TULbl;
	private: System::Windows::Forms::Panel^ LastLbl;
	private: System::Windows::Forms::Button^ EBtn;
	private: System::Windows::Forms::Label^ TBLbl;
	private: System::Windows::Forms::Label^ PCLbl;
	private: System::Windows::Forms::TextBox^ PCTxt;
	private: System::Windows::Forms::Button^ GBBtn;

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
			this->billLbl1 = (gcnew System::Windows::Forms::Label());
			this->billLbl2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TULbl = (gcnew System::Windows::Forms::Label());
			this->LastLbl = (gcnew System::Windows::Forms::Panel());
			this->EBtn = (gcnew System::Windows::Forms::Button());
			this->TBLbl = (gcnew System::Windows::Forms::Label());
			this->PCLbl = (gcnew System::Windows::Forms::Label());
			this->PCTxt = (gcnew System::Windows::Forms::TextBox());
			this->GBBtn = (gcnew System::Windows::Forms::Button());
			this->LastLbl->SuspendLayout();
			this->SuspendLayout();
			// 
			// billLbl1
			// 
			this->billLbl1->AutoSize = true;
			this->billLbl1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billLbl1->Location = System::Drawing::Point(218, 155);
			this->billLbl1->Name = L"billLbl1";
			this->billLbl1->Size = System::Drawing::Size(185, 29);
			this->billLbl1->TabIndex = 0;
			this->billLbl1->Text = L"Your total bill is: ";
			// 
			// billLbl2
			// 
			this->billLbl2->AutoSize = true;
			this->billLbl2->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billLbl2->Location = System::Drawing::Point(233, 213);
			this->billLbl2->Name = L"billLbl2";
			this->billLbl2->Size = System::Drawing::Size(35, 21);
			this->billLbl2->TabIndex = 1;
			this->billLbl2->Text = L"Rs. ";
			this->billLbl2->Click += gcnew System::EventHandler(this, &EndS::billLbl2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(268, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 21);
			this->label1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 6;
			// 
			// TULbl
			// 
			this->TULbl->AutoSize = true;
			this->TULbl->Font = (gcnew System::Drawing::Font(L"Mistral", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TULbl->Location = System::Drawing::Point(139, 19);
			this->TULbl->Name = L"TULbl";
			this->TULbl->Size = System::Drawing::Size(320, 34);
			this->TULbl->TabIndex = 4;
			this->TULbl->Text = L"Thank you for shopping with us! ";
			this->TULbl->Click += gcnew System::EventHandler(this, &EndS::TULbl_Click);
			// 
			// LastLbl
			// 
			this->LastLbl->BackColor = System::Drawing::Color::Red;
			this->LastLbl->Controls->Add(this->TULbl);
			this->LastLbl->Location = System::Drawing::Point(0, 0);
			this->LastLbl->Name = L"LastLbl";
			this->LastLbl->Size = System::Drawing::Size(609, 69);
			this->LastLbl->TabIndex = 5;
			// 
			// EBtn
			// 
			this->EBtn->Location = System::Drawing::Point(262, 258);
			this->EBtn->Name = L"EBtn";
			this->EBtn->Size = System::Drawing::Size(75, 23);
			this->EBtn->TabIndex = 7;
			this->EBtn->Text = L"Exit";
			this->EBtn->UseVisualStyleBackColor = true;
			this->EBtn->Click += gcnew System::EventHandler(this, &EndS::EBtn_Click);
			// 
			// TBLbl
			// 
			this->TBLbl->AutoSize = true;
			this->TBLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TBLbl->Location = System::Drawing::Point(303, 213);
			this->TBLbl->Name = L"TBLbl";
			this->TBLbl->Size = System::Drawing::Size(0, 25);
			this->TBLbl->TabIndex = 5;
			// 
			// PCLbl
			// 
			this->PCLbl->AutoSize = true;
			this->PCLbl->Location = System::Drawing::Point(71, 102);
			this->PCLbl->Name = L"PCLbl";
			this->PCLbl->Size = System::Drawing::Size(153, 13);
			this->PCLbl->TabIndex = 8;
			this->PCLbl->Text = L"Enter Promo Code for Discount";
			// 
			// PCTxt
			// 
			this->PCTxt->Location = System::Drawing::Point(285, 102);
			this->PCTxt->Name = L"PCTxt";
			this->PCTxt->Size = System::Drawing::Size(100, 20);
			this->PCTxt->TabIndex = 9;
			this->PCTxt->TextChanged += gcnew System::EventHandler(this, &EndS::PCTxt_TextChanged);
			// 
			// GBBtn
			// 
			this->GBBtn->Location = System::Drawing::Point(473, 99);
			this->GBBtn->Name = L"GBBtn";
			this->GBBtn->Size = System::Drawing::Size(89, 23);
			this->GBBtn->TabIndex = 10;
			this->GBBtn->Text = L"Generate Bill";
			this->GBBtn->UseVisualStyleBackColor = true;
			this->GBBtn->Click += gcnew System::EventHandler(this, &EndS::GBBtn_Click);
			// 
			// EndS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 303);
			this->Controls->Add(this->GBBtn);
			this->Controls->Add(this->PCTxt);
			this->Controls->Add(this->PCLbl);
			this->Controls->Add(this->TBLbl);
			this->Controls->Add(this->EBtn);
			this->Controls->Add(this->LastLbl);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->billLbl2);
			this->Controls->Add(this->billLbl1);
			this->Name = L"EndS";
			this->Text = L"EndS";
			this->Load += gcnew System::EventHandler(this, &EndS::EndS_Load);
			this->LastLbl->ResumeLayout(false);
			this->LastLbl->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 



	private: System::Void TULbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void billLbl2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void EndS_Load(System::Object^ sender, System::EventArgs^ e) {
	} 
private: System::Void EBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit(); 
}
private: System::Void PCTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GBBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string pc = msclr::interop::marshal_as<std::string>(PCTxt->Text);
	if (pc == "")
	{
		Apple a;
		int tbill = a.GetBill();
		System::String^ str = tbill.ToString();
		TBLbl->Text = str;
	}
	else if (pc == "promo01")
	{
		Apple a;
		int tbill = a.GetBill();
		tbill = tbill - 100; 
		System::String^ str = tbill.ToString();
		TBLbl->Text = str;
	}
	else
	{
		MessageBox::Show("Enter a valid promo code to avail discount."); 
	}


}
};
}
