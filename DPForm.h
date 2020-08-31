#pragma once

#include "EndS.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DPForm
	/// </summary>
	public ref class DPForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ backform;
	public:
		DPForm(System::Windows::Forms::Form^ ob)
		{
			backform = ob;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DPForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ DPLbl;
	protected:
	private: System::Windows::Forms::PictureBox^ MilkPic;
	private: System::Windows::Forms::PictureBox^ EggsPic;
	private: System::Windows::Forms::PictureBox^ ButterPic;
	private: System::Windows::Forms::PictureBox^ CheesePic;
	private: System::Windows::Forms::Button^ MilkBtn;
	private: System::Windows::Forms::Button^ EggBtn;
	private: System::Windows::Forms::Button^ ButterBtn;
	private: System::Windows::Forms::Button^ CheeseBtn;
	private: System::Windows::Forms::Button^ Back2Btn;
	private: System::Windows::Forms::Button^ ESBtn4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DPForm::typeid));
			this->DPLbl = (gcnew System::Windows::Forms::Label());
			this->MilkPic = (gcnew System::Windows::Forms::PictureBox());
			this->EggsPic = (gcnew System::Windows::Forms::PictureBox());
			this->ButterPic = (gcnew System::Windows::Forms::PictureBox());
			this->CheesePic = (gcnew System::Windows::Forms::PictureBox());
			this->MilkBtn = (gcnew System::Windows::Forms::Button());
			this->EggBtn = (gcnew System::Windows::Forms::Button());
			this->ButterBtn = (gcnew System::Windows::Forms::Button());
			this->CheeseBtn = (gcnew System::Windows::Forms::Button());
			this->Back2Btn = (gcnew System::Windows::Forms::Button());
			this->ESBtn4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MilkPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EggsPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButterPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CheesePic))->BeginInit();
			this->SuspendLayout();
			// 
			// DPLbl
			// 
			this->DPLbl->AutoSize = true;
			this->DPLbl->Font = (gcnew System::Drawing::Font(L"Mistral", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DPLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->DPLbl->Location = System::Drawing::Point(280, 21);
			this->DPLbl->Name = L"DPLbl";
			this->DPLbl->Size = System::Drawing::Size(132, 29);
			this->DPLbl->TabIndex = 0;
			this->DPLbl->Text = L"Dairy Products";
			// 
			// MilkPic
			// 
			this->MilkPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MilkPic.Image")));
			this->MilkPic->Location = System::Drawing::Point(39, 79);
			this->MilkPic->Name = L"MilkPic";
			this->MilkPic->Size = System::Drawing::Size(130, 133);
			this->MilkPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->MilkPic->TabIndex = 1;
			this->MilkPic->TabStop = false;
			this->MilkPic->Click += gcnew System::EventHandler(this, &DPForm::MilkPic_Click);
			// 
			// EggsPic
			// 
			this->EggsPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EggsPic.Image")));
			this->EggsPic->Location = System::Drawing::Point(200, 79);
			this->EggsPic->Name = L"EggsPic";
			this->EggsPic->Size = System::Drawing::Size(130, 133);
			this->EggsPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->EggsPic->TabIndex = 2;
			this->EggsPic->TabStop = false;
			this->EggsPic->Click += gcnew System::EventHandler(this, &DPForm::EggsPic_Click);
			// 
			// ButterPic
			// 
			this->ButterPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButterPic.Image")));
			this->ButterPic->Location = System::Drawing::Point(366, 79);
			this->ButterPic->Name = L"ButterPic";
			this->ButterPic->Size = System::Drawing::Size(129, 133);
			this->ButterPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ButterPic->TabIndex = 3;
			this->ButterPic->TabStop = false;
			this->ButterPic->Click += gcnew System::EventHandler(this, &DPForm::ButterPic_Click);
			// 
			// CheesePic
			// 
			this->CheesePic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CheesePic.Image")));
			this->CheesePic->Location = System::Drawing::Point(533, 79);
			this->CheesePic->Name = L"CheesePic";
			this->CheesePic->Size = System::Drawing::Size(128, 133);
			this->CheesePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->CheesePic->TabIndex = 4;
			this->CheesePic->TabStop = false;
			this->CheesePic->Click += gcnew System::EventHandler(this, &DPForm::CheesePic_Click);
			// 
			// MilkBtn
			// 
			this->MilkBtn->BackColor = System::Drawing::Color::Red;
			this->MilkBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MilkBtn->Location = System::Drawing::Point(58, 230);
			this->MilkBtn->Name = L"MilkBtn";
			this->MilkBtn->Size = System::Drawing::Size(84, 23);
			this->MilkBtn->TabIndex = 5;
			this->MilkBtn->Text = L"Add To Cart";
			this->MilkBtn->UseVisualStyleBackColor = false;
			this->MilkBtn->Click += gcnew System::EventHandler(this, &DPForm::MilkBtn_Click);
			// 
			// EggBtn
			// 
			this->EggBtn->BackColor = System::Drawing::Color::Red;
			this->EggBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EggBtn->Location = System::Drawing::Point(221, 230);
			this->EggBtn->Name = L"EggBtn";
			this->EggBtn->Size = System::Drawing::Size(85, 23);
			this->EggBtn->TabIndex = 6;
			this->EggBtn->Text = L"Add To Cart";
			this->EggBtn->UseVisualStyleBackColor = false;
			this->EggBtn->Click += gcnew System::EventHandler(this, &DPForm::EggBtn_Click);
			// 
			// ButterBtn
			// 
			this->ButterBtn->BackColor = System::Drawing::Color::Red;
			this->ButterBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButterBtn->Location = System::Drawing::Point(386, 230);
			this->ButterBtn->Name = L"ButterBtn";
			this->ButterBtn->Size = System::Drawing::Size(86, 23);
			this->ButterBtn->TabIndex = 7;
			this->ButterBtn->Text = L"Add To Cart";
			this->ButterBtn->UseVisualStyleBackColor = false;
			this->ButterBtn->Click += gcnew System::EventHandler(this, &DPForm::ButterBtn_Click);
			// 
			// CheeseBtn
			// 
			this->CheeseBtn->BackColor = System::Drawing::Color::Red;
			this->CheeseBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheeseBtn->Location = System::Drawing::Point(560, 230);
			this->CheeseBtn->Name = L"CheeseBtn";
			this->CheeseBtn->Size = System::Drawing::Size(83, 23);
			this->CheeseBtn->TabIndex = 8;
			this->CheeseBtn->Text = L"Add To Cart";
			this->CheeseBtn->UseVisualStyleBackColor = false;
			this->CheeseBtn->Click += gcnew System::EventHandler(this, &DPForm::CheeseBtn_Click);
			// 
			// Back2Btn
			// 
			this->Back2Btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Back2Btn->Location = System::Drawing::Point(165, 302);
			this->Back2Btn->Name = L"Back2Btn";
			this->Back2Btn->Size = System::Drawing::Size(109, 23);
			this->Back2Btn->TabIndex = 9;
			this->Back2Btn->Text = L"Back to Categories";
			this->Back2Btn->UseVisualStyleBackColor = false;
			this->Back2Btn->Click += gcnew System::EventHandler(this, &DPForm::Back4Btn_Click);
			// 
			// ESBtn4
			// 
			this->ESBtn4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ESBtn4->Location = System::Drawing::Point(430, 302);
			this->ESBtn4->Name = L"ESBtn4";
			this->ESBtn4->Size = System::Drawing::Size(92, 23);
			this->ESBtn4->TabIndex = 10;
			this->ESBtn4->Text = L"End Shopping";
			this->ESBtn4->UseVisualStyleBackColor = false;
			this->ESBtn4->Click += gcnew System::EventHandler(this, &DPForm::ESBtn4_Click);
			// 
			// DPForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 351);
			this->Controls->Add(this->ESBtn4);
			this->Controls->Add(this->Back2Btn);
			this->Controls->Add(this->CheeseBtn);
			this->Controls->Add(this->ButterBtn);
			this->Controls->Add(this->EggBtn);
			this->Controls->Add(this->MilkBtn);
			this->Controls->Add(this->CheesePic);
			this->Controls->Add(this->ButterPic);
			this->Controls->Add(this->EggsPic);
			this->Controls->Add(this->MilkPic);
			this->Controls->Add(this->DPLbl);
			this->Name = L"DPForm";
			this->Text = L"DPForm";
			this->Load += gcnew System::EventHandler(this, &DPForm::DPForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MilkPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EggsPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButterPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CheesePic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MilkBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Milk mk;
		fstream f("MIL01.dat");

		f.read((char*)&mk, sizeof(mk));
		f.close();
		mk.decrementstock();
		mk.writeuser();
		mk.UpdateBill(mk.getcost());
		int b = mk.GetBill();
		MessageBox::Show("Your bill is now Rs. " + b);
		
	}
private: System::Void EggBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Egg eg;
	fstream f("EGG01.dat");

	f.read((char*)&eg, sizeof(eg));
	f.close();
	eg.decrementstock();
	eg.writeuser();
	eg.UpdateBill(eg.getcost());
	int b = eg.GetBill();
	MessageBox::Show("Your bill is now Rs. " + b);
	
}
private: System::Void ButterBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Butter bb;
	fstream f("BUT01.dat");

	f.read((char*)&bb, sizeof(bb));
	f.close();
	bb.decrementstock();
	bb.writeuser();
	bb.UpdateBill(bb.getcost());
	int b = bb.GetBill();
	MessageBox::Show("Your bill is now Rs. " + b);
	
}
private: System::Void CheeseBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Cheese ch;
	fstream f("CHE01.dat");

	f.read((char*)&ch, sizeof(ch));
	f.close();
	ch.decrementstock();
	ch.writeuser();
	ch.UpdateBill(ch.getcost());
	int b = ch.GetBill();
	MessageBox::Show("Your bill is now Rs. " + b);
	
}
private: System::Void Back4Btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	backform->Show();
}
private: System::Void ESBtn4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); 
	EndS^ es = gcnew EndS(); 
	es->Show(); 
}
private: System::Void ButterPic_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CheesePic_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void DPForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MilkPic_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EggsPic_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
