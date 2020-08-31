#pragma once
#include "Code.h"
#include "EndS.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CIForm
	/// </summary>
	public ref class CIForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ backform;
	public:
		CIForm(System::Windows::Forms::Form^ ob)
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
		~CIForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ LentilsPic;
	private: System::Windows::Forms::PictureBox^ RicePic;
	private: System::Windows::Forms::PictureBox^ OilPic;
	private: System::Windows::Forms::PictureBox^ ChickenPic;
	protected:

	protected:



	private: System::Windows::Forms::PictureBox^ FlourPic;


	private: System::Windows::Forms::Label^ CILbl;
	private: System::Windows::Forms::Button^ RiceBtn;
	private: System::Windows::Forms::Button^ OilBtn;
	private: System::Windows::Forms::Button^ ChickenBtn;
	private: System::Windows::Forms::Button^ FlourBtn;
	private: System::Windows::Forms::Button^ Back3Btn;

	private: System::Windows::Forms::Button^ ESBtn3;







	private: System::Windows::Forms::Button^ LentilBtn;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CIForm::typeid));
			this->LentilsPic = (gcnew System::Windows::Forms::PictureBox());
			this->RicePic = (gcnew System::Windows::Forms::PictureBox());
			this->OilPic = (gcnew System::Windows::Forms::PictureBox());
			this->ChickenPic = (gcnew System::Windows::Forms::PictureBox());
			this->FlourPic = (gcnew System::Windows::Forms::PictureBox());
			this->CILbl = (gcnew System::Windows::Forms::Label());
			this->RiceBtn = (gcnew System::Windows::Forms::Button());
			this->OilBtn = (gcnew System::Windows::Forms::Button());
			this->ChickenBtn = (gcnew System::Windows::Forms::Button());
			this->FlourBtn = (gcnew System::Windows::Forms::Button());
			this->Back3Btn = (gcnew System::Windows::Forms::Button());
			this->ESBtn3 = (gcnew System::Windows::Forms::Button());
			this->LentilBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LentilsPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RicePic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OilPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChickenPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FlourPic))->BeginInit();
			this->SuspendLayout();
			// 
			// LentilsPic
			// 
			this->LentilsPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LentilsPic.Image")));
			this->LentilsPic->Location = System::Drawing::Point(24, 75);
			this->LentilsPic->Name = L"LentilsPic";
			this->LentilsPic->Size = System::Drawing::Size(124, 117);
			this->LentilsPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->LentilsPic->TabIndex = 0;
			this->LentilsPic->TabStop = false;
			this->LentilsPic->Click += gcnew System::EventHandler(this, &CIForm::LentilsPic_Click);
			// 
			// RicePic
			// 
			this->RicePic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RicePic.Image")));
			this->RicePic->Location = System::Drawing::Point(170, 75);
			this->RicePic->Name = L"RicePic";
			this->RicePic->Size = System::Drawing::Size(123, 117);
			this->RicePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->RicePic->TabIndex = 1;
			this->RicePic->TabStop = false;
			// 
			// OilPic
			// 
			this->OilPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OilPic.Image")));
			this->OilPic->Location = System::Drawing::Point(318, 75);
			this->OilPic->Name = L"OilPic";
			this->OilPic->Size = System::Drawing::Size(130, 117);
			this->OilPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->OilPic->TabIndex = 2;
			this->OilPic->TabStop = false;
			this->OilPic->Click += gcnew System::EventHandler(this, &CIForm::OilPic_Click);
			// 
			// ChickenPic
			// 
			this->ChickenPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ChickenPic.Image")));
			this->ChickenPic->Location = System::Drawing::Point(470, 75);
			this->ChickenPic->Name = L"ChickenPic";
			this->ChickenPic->Size = System::Drawing::Size(126, 117);
			this->ChickenPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ChickenPic->TabIndex = 3;
			this->ChickenPic->TabStop = false;
			// 
			// FlourPic
			// 
			this->FlourPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FlourPic.Image")));
			this->FlourPic->Location = System::Drawing::Point(623, 75);
			this->FlourPic->Name = L"FlourPic";
			this->FlourPic->Size = System::Drawing::Size(124, 117);
			this->FlourPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->FlourPic->TabIndex = 4;
			this->FlourPic->TabStop = false;
			// 
			// CILbl
			// 
			this->CILbl->AutoSize = true;
			this->CILbl->Font = (gcnew System::Drawing::Font(L"Mistral", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CILbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->CILbl->Location = System::Drawing::Point(298, 21);
			this->CILbl->Name = L"CILbl";
			this->CILbl->Size = System::Drawing::Size(163, 29);
			this->CILbl->TabIndex = 5;
			this->CILbl->Text = L"Cooking Ingredients";
			// 
			// RiceBtn
			// 
			this->RiceBtn->BackColor = System::Drawing::Color::Red;
			this->RiceBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RiceBtn->Location = System::Drawing::Point(188, 213);
			this->RiceBtn->Name = L"RiceBtn";
			this->RiceBtn->Size = System::Drawing::Size(90, 23);
			this->RiceBtn->TabIndex = 6;
			this->RiceBtn->Text = L"Add To Cart";
			this->RiceBtn->UseVisualStyleBackColor = false;
			this->RiceBtn->Click += gcnew System::EventHandler(this, &CIForm::RiceBtn_Click);
			// 
			// OilBtn
			// 
			this->OilBtn->BackColor = System::Drawing::Color::Red;
			this->OilBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OilBtn->Location = System::Drawing::Point(340, 213);
			this->OilBtn->Name = L"OilBtn";
			this->OilBtn->Size = System::Drawing::Size(86, 23);
			this->OilBtn->TabIndex = 7;
			this->OilBtn->Text = L"Add To Cart";
			this->OilBtn->UseVisualStyleBackColor = false;
			this->OilBtn->Click += gcnew System::EventHandler(this, &CIForm::OilBtn_Click);
			// 
			// ChickenBtn
			// 
			this->ChickenBtn->BackColor = System::Drawing::Color::Red;
			this->ChickenBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ChickenBtn->Location = System::Drawing::Point(490, 213);
			this->ChickenBtn->Name = L"ChickenBtn";
			this->ChickenBtn->Size = System::Drawing::Size(89, 23);
			this->ChickenBtn->TabIndex = 8;
			this->ChickenBtn->Text = L"Add To Cart";
			this->ChickenBtn->UseVisualStyleBackColor = false;
			this->ChickenBtn->Click += gcnew System::EventHandler(this, &CIForm::ChickenBtn_Click);
			// 
			// FlourBtn
			// 
			this->FlourBtn->BackColor = System::Drawing::Color::Red;
			this->FlourBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FlourBtn->Location = System::Drawing::Point(644, 213);
			this->FlourBtn->Name = L"FlourBtn";
			this->FlourBtn->Size = System::Drawing::Size(86, 23);
			this->FlourBtn->TabIndex = 9;
			this->FlourBtn->Text = L"Add To Cart";
			this->FlourBtn->UseVisualStyleBackColor = false;
			this->FlourBtn->Click += gcnew System::EventHandler(this, &CIForm::FlourBtn_Click);
			// 
			// Back3Btn
			// 
			this->Back3Btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Back3Btn->Location = System::Drawing::Point(237, 284);
			this->Back3Btn->Name = L"Back3Btn";
			this->Back3Btn->Size = System::Drawing::Size(115, 23);
			this->Back3Btn->TabIndex = 10;
			this->Back3Btn->Text = L"Back to Categories";
			this->Back3Btn->UseVisualStyleBackColor = false;
			this->Back3Btn->Click += gcnew System::EventHandler(this, &CIForm::Back3Btn_Click);
			// 
			// ESBtn3
			// 
			this->ESBtn3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ESBtn3->Location = System::Drawing::Point(428, 284);
			this->ESBtn3->Name = L"ESBtn3";
			this->ESBtn3->Size = System::Drawing::Size(101, 23);
			this->ESBtn3->TabIndex = 11;
			this->ESBtn3->Text = L"End Shopping";
			this->ESBtn3->UseVisualStyleBackColor = false;
			this->ESBtn3->Click += gcnew System::EventHandler(this, &CIForm::ESBtn3_Click);
			// 
			// LentilBtn
			// 
			this->LentilBtn->BackColor = System::Drawing::Color::Red;
			this->LentilBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LentilBtn->Location = System::Drawing::Point(45, 213);
			this->LentilBtn->Name = L"LentilBtn";
			this->LentilBtn->Size = System::Drawing::Size(86, 23);
			this->LentilBtn->TabIndex = 12;
			this->LentilBtn->Text = L"Add To Cart";
			this->LentilBtn->UseVisualStyleBackColor = false;
			this->LentilBtn->Click += gcnew System::EventHandler(this, &CIForm::LentilBtn_Click);
			// 
			// CIForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(759, 329);
			this->Controls->Add(this->LentilBtn);
			this->Controls->Add(this->ESBtn3);
			this->Controls->Add(this->Back3Btn);
			this->Controls->Add(this->FlourBtn);
			this->Controls->Add(this->ChickenBtn);
			this->Controls->Add(this->OilBtn);
			this->Controls->Add(this->RiceBtn);
			this->Controls->Add(this->CILbl);
			this->Controls->Add(this->FlourPic);
			this->Controls->Add(this->ChickenPic);
			this->Controls->Add(this->OilPic);
			this->Controls->Add(this->RicePic);
			this->Controls->Add(this->LentilsPic);
			this->Name = L"CIForm";
			this->Text = L"CIForm";
			this->Load += gcnew System::EventHandler(this, &CIForm::CIForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LentilsPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RicePic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OilPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChickenPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FlourPic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void LentilBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Lentils l;
	fstream f("LEN01.dat");

	f.read((char*)&l, sizeof(l));
	f.close();
	l.decrementstock();
	l.writeuser();
	l.UpdateBill(l.getcost());
	int b = l.GetBill();
	MessageBox::Show("Your bill is now Rs. " + b);
	
}

private: System::Void RiceBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Rice r;
	fstream f("RIC01.dat");

	f.read((char*)&r, sizeof(r));
	f.close();
	r.decrementstock();
	r.writeuser();
	r.UpdateBill(r.getcost());
	int b = r.GetBill();
	MessageBox::Show("Your bill is now Rs. " + b);
	
}
	private: System::Void OilBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Oil o;
		fstream f("OIL01.dat");

		f.read((char*)&o, sizeof(o));
		f.close();
		o.decrementstock();
		o.writeuser();
		o.UpdateBill(o.getcost());
		int b = o.GetBill();
		MessageBox::Show("Your bill is now Rs. " + b);
	}
private: System::Void ChickenBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Chicken ck;
	fstream f("CHI01.dat");

	f.read((char*)&ck, sizeof(ck));
	f.close();
	ck.decrementstock();
	ck.writeuser();
	ck.UpdateBill(ck.getcost());
	int b = ck.GetBill();
	MessageBox::Show("Your bill is now Rs. " + b);
}
	private: System::Void FlourBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Flour ff;
		fstream f("FLO01.dat");

		f.read((char*)&ff, sizeof(ff));
		f.close();
		ff.decrementstock();
		ff.writeuser();
		ff.UpdateBill(ff.getcost());
		int b = ff.GetBill();
		MessageBox::Show("Your bill is now Rs. " + b);
	}
private: System::Void Back3Btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	backform->Show();
}
private: System::Void ESBtn3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); 
	EndS^ es = gcnew EndS(); 
	es->Show(); 
}
private: System::Void OilPic_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CIForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LentilsPic_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
