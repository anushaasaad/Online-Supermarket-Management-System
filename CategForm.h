#pragma once
#include "FVForm.h"
#include "BAForm.h"
#include "CIForm.h"
#include "DPForm.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CategForm
	/// </summary>
	public ref class CategForm : public System::Windows::Forms::Form
	{
	public:
		CategForm(void)
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
		~CategForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ C11;
	
	private: System::Windows::Forms::Panel^ C12;
	private: System::Windows::Forms::Panel^ C13;
	private: System::Windows::Forms::Label^ CtgLbl;
	private: System::Windows::Forms::Button^ FVBtn;
	private: System::Windows::Forms::Button^ BABtn;
	private: System::Windows::Forms::Button^ CIBtn;
	private: System::Windows::Forms::Button^ DPBtn;
	private: System::Windows::Forms::Label^ ChooseLbl;
	protected:


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
			this->C11 = (gcnew System::Windows::Forms::Panel());
			this->C12 = (gcnew System::Windows::Forms::Panel());
			this->C13 = (gcnew System::Windows::Forms::Panel());
			this->CtgLbl = (gcnew System::Windows::Forms::Label());
			this->FVBtn = (gcnew System::Windows::Forms::Button());
			this->BABtn = (gcnew System::Windows::Forms::Button());
			this->CIBtn = (gcnew System::Windows::Forms::Button());
			this->DPBtn = (gcnew System::Windows::Forms::Button());
			this->ChooseLbl = (gcnew System::Windows::Forms::Label());
			this->C13->SuspendLayout();
			this->SuspendLayout();
			this->FVBtn->SuspendLayout(); 
			// 
			// C11
			// 
			this->C11->BackColor = System::Drawing::Color::Red;
			this->C11->Location = System::Drawing::Point(0, 0);
			this->C11->Name = L"C11";
			this->C11->Size = System::Drawing::Size(116, 311);
			this->C11->TabIndex = 0;
			this->C11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CategForm::C11_Paint);
			// 
			// C12
			// 
			this->C12->BackColor = System::Drawing::Color::Red;
			this->C12->Location = System::Drawing::Point(441, 0);
			this->C12->Name = L"C12";
			this->C12->Size = System::Drawing::Size(117, 311);
			this->C12->TabIndex = 1;
			this->C12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CategForm::C12_Paint);
			// 
			// C13
			// 
			this->C13->BackColor = System::Drawing::Color::Black;
			this->C13->Controls->Add(this->CtgLbl);
			this->C13->Location = System::Drawing::Point(116, 0);
			this->C13->Name = L"C13";
			this->C13->Size = System::Drawing::Size(326, 50);
			this->C13->TabIndex = 2;
			// 
			// CtgLbl
			// 
			this->CtgLbl->AutoSize = true;
			this->CtgLbl->Font = (gcnew System::Drawing::Font(L"Mistral", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CtgLbl->ForeColor = System::Drawing::Color::White;
			this->CtgLbl->Location = System::Drawing::Point(123, 9);
			this->CtgLbl->Name = L"CtgLbl";
			this->CtgLbl->Size = System::Drawing::Size(87, 29);
			this->CtgLbl->TabIndex = 3;
			this->CtgLbl->Text = L"Categories";
			// 
			// FVBtn
			// 
			this->FVBtn->Location = System::Drawing::Point(212, 114);
			this->FVBtn->Name = L"FVBtn";
			this->FVBtn->Size = System::Drawing::Size(142, 23);
			this->FVBtn->TabIndex = 3;
			this->FVBtn->Text = L"Fruits/Vegetables";
			this->FVBtn->UseVisualStyleBackColor = true;
			this->FVBtn->Click += gcnew System::EventHandler(this, &CategForm::FVBtn_Click);
			// 
			// BABtn
			// 
			this->BABtn->Location = System::Drawing::Point(212, 155);
			this->BABtn->Name = L"BABtn";
			this->BABtn->Size = System::Drawing::Size(142, 23);
			this->BABtn->TabIndex = 4;
			this->BABtn->Text = L"Bathroom Accessories";
			this->BABtn->UseVisualStyleBackColor = true;
			this->BABtn->Click += gcnew System::EventHandler(this, &CategForm::BABtn_Click);
			// 
			// CIBtn
			// 
			this->CIBtn->Location = System::Drawing::Point(212, 199);
			this->CIBtn->Name = L"CIBtn";
			this->CIBtn->Size = System::Drawing::Size(142, 23);
			this->CIBtn->TabIndex = 5;
			this->CIBtn->Text = L"Cooking Ingredients";
			this->CIBtn->UseVisualStyleBackColor = true;
			this->CIBtn->Click += gcnew System::EventHandler(this, &CategForm::CIBtn_Click);
			// 
			// DPBtn
			// 
			this->DPBtn->Location = System::Drawing::Point(212, 240);
			this->DPBtn->Name = L"DPBtn";
			this->DPBtn->Size = System::Drawing::Size(142, 23);
			this->DPBtn->TabIndex = 6;
			this->DPBtn->Text = L"Dairy Products";
			this->DPBtn->UseVisualStyleBackColor = true;
			this->DPBtn->Click += gcnew System::EventHandler(this, &CategForm::DPBtn_Click);
			// 
			// ChooseLbl
			// 
			this->ChooseLbl->AutoSize = true;
			this->ChooseLbl->Location = System::Drawing::Point(178, 70);
			this->ChooseLbl->Name = L"ChooseLbl";
			this->ChooseLbl->Size = System::Drawing::Size(218, 13);
			this->ChooseLbl->TabIndex = 7;
			this->ChooseLbl->Text = L"Click on any category below and shop away!";
			this->ChooseLbl->Click += gcnew System::EventHandler(this, &CategForm::ChooseLbl_Click);
			// 
			// CategForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 309);
			this->Controls->Add(this->ChooseLbl);
			this->Controls->Add(this->DPBtn);
			this->Controls->Add(this->CIBtn);
			this->Controls->Add(this->BABtn);
			this->Controls->Add(this->FVBtn);
			this->Controls->Add(this->C13);
			this->Controls->Add(this->C12);
			this->Controls->Add(this->C11);
			this->Name = L"CategForm";
			this->Text = L"CategForm";
			this->Load += gcnew System::EventHandler(this, &CategForm::CategForm_Load);
			this->C13->ResumeLayout(false);
			this->C13->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void C11_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void FVBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	FVForm^ fv = gcnew FVForm(this);  
	fv->Show();
	this->Hide();
}
private: System::Void CategForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void CIBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	CIForm^ ci = gcnew CIForm(this);  
	ci->Show(); 
	this->Hide();
	
}
private: System::Void BABtn_Click(System::Object^ sender, System::EventArgs^ e) {
	 
	BAForm^ ba = gcnew BAForm(this);
	ba->Show(); 
	this->Hide();
}
private: System::Void DPBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	DPForm^ dp = gcnew DPForm(this);
	 
	dp->Show(); 
	this->Hide();
}
private: System::Void ChooseLbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void C12_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
