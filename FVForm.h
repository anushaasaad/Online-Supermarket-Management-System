#pragma once
#include "Code.h"
#include "EndS.h"
extern Item demo; 
extern int bill; 

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FVForm
	/// </summary>
	public ref class FVForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ backform;
	public:
		FVForm(System::Windows::Forms::Form^ ob)
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
		~FVForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ ApplePic;
	protected:
	private: System::Windows::Forms::PictureBox^ BananasPic;
	private: System::Windows::Forms::PictureBox^ CarrotPic;

	private: System::Windows::Forms::PictureBox^ PotatoesPic;
	private: System::Windows::Forms::Button^ AppleBtn;
	private: System::Windows::Forms::Button^ BananaBtn;
	private: System::Windows::Forms::Button^ CarrotBtn;

	private: System::Windows::Forms::Button^ PotatoBtn;
	private: System::Windows::Forms::Button^ Back1Btn;
	private: System::Windows::Forms::Button^ ESBtn1;
	private: System::Windows::Forms::Label^ FVLbl;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FVForm::typeid));
			this->ApplePic = (gcnew System::Windows::Forms::PictureBox());
			this->BananasPic = (gcnew System::Windows::Forms::PictureBox());
			this->CarrotPic = (gcnew System::Windows::Forms::PictureBox());
			this->PotatoesPic = (gcnew System::Windows::Forms::PictureBox());
			this->AppleBtn = (gcnew System::Windows::Forms::Button());
			this->BananaBtn = (gcnew System::Windows::Forms::Button());
			this->CarrotBtn = (gcnew System::Windows::Forms::Button());
			this->PotatoBtn = (gcnew System::Windows::Forms::Button());
			this->Back1Btn = (gcnew System::Windows::Forms::Button());
			this->ESBtn1 = (gcnew System::Windows::Forms::Button());
			this->FVLbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ApplePic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BananasPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CarrotPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PotatoesPic))->BeginInit();
			this->SuspendLayout();
			// 
			// ApplePic
			// 
			this->ApplePic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ApplePic.Image")));
			this->ApplePic->Location = System::Drawing::Point(32, 52);
			this->ApplePic->Name = L"ApplePic";
			this->ApplePic->Size = System::Drawing::Size(129, 106);
			this->ApplePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ApplePic->TabIndex = 0;
			this->ApplePic->TabStop = false;
			this->ApplePic->Click += gcnew System::EventHandler(this, &FVForm::ApplePic_Click);
			// 
			// BananasPic
			// 
			this->BananasPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BananasPic.Image")));
			this->BananasPic->Location = System::Drawing::Point(200, 52);
			this->BananasPic->Name = L"BananasPic";
			this->BananasPic->Size = System::Drawing::Size(129, 106);
			this->BananasPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->BananasPic->TabIndex = 1;
			this->BananasPic->TabStop = false;
			this->BananasPic->Click += gcnew System::EventHandler(this, &FVForm::BananasPic_Click);
			// 
			// CarrotPic
			// 
			this->CarrotPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CarrotPic.Image")));
			this->CarrotPic->Location = System::Drawing::Point(368, 52);
			this->CarrotPic->Name = L"CarrotPic";
			this->CarrotPic->Size = System::Drawing::Size(129, 106);
			this->CarrotPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->CarrotPic->TabIndex = 2;
			this->CarrotPic->TabStop = false;
			this->CarrotPic->Click += gcnew System::EventHandler(this, &FVForm::CarrotPic_Click);
			// 
			// PotatoesPic
			// 
			this->PotatoesPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PotatoesPic.Image")));
			this->PotatoesPic->Location = System::Drawing::Point(532, 52);
			this->PotatoesPic->Name = L"PotatoesPic";
			this->PotatoesPic->Size = System::Drawing::Size(129, 106);
			this->PotatoesPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PotatoesPic->TabIndex = 3;
			this->PotatoesPic->TabStop = false;
			this->PotatoesPic->Click += gcnew System::EventHandler(this, &FVForm::PotatoesPic_Click);
			// 
			// AppleBtn
			// 
			this->AppleBtn->BackColor = System::Drawing::Color::Red;
			this->AppleBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AppleBtn->Location = System::Drawing::Point(50, 181);
			this->AppleBtn->Name = L"AppleBtn";
			this->AppleBtn->Size = System::Drawing::Size(88, 23);
			this->AppleBtn->TabIndex = 4;
			this->AppleBtn->Text = L"Add To Cart";
			this->AppleBtn->UseVisualStyleBackColor = false;
			this->AppleBtn->Click += gcnew System::EventHandler(this, &FVForm::AppleBtn_Click);
			// 
			// BananaBtn
			// 
			this->BananaBtn->BackColor = System::Drawing::Color::Red;
			this->BananaBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BananaBtn->Location = System::Drawing::Point(219, 181);
			this->BananaBtn->Name = L"BananaBtn";
			this->BananaBtn->Size = System::Drawing::Size(85, 23);
			this->BananaBtn->TabIndex = 5;
			this->BananaBtn->Text = L"Add To Cart";
			this->BananaBtn->UseVisualStyleBackColor = false;
			this->BananaBtn->Click += gcnew System::EventHandler(this, &FVForm::BananaBtn_Click);
			// 
			// CarrotBtn
			// 
			this->CarrotBtn->BackColor = System::Drawing::Color::Red;
			this->CarrotBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CarrotBtn->Location = System::Drawing::Point(392, 181);
			this->CarrotBtn->Name = L"CarrotBtn";
			this->CarrotBtn->Size = System::Drawing::Size(87, 23);
			this->CarrotBtn->TabIndex = 6;
			this->CarrotBtn->Text = L"Add To Cart";
			this->CarrotBtn->UseVisualStyleBackColor = false;
			this->CarrotBtn->Click += gcnew System::EventHandler(this, &FVForm::CarrotBtn_Click);
			// 
			// PotatoBtn
			// 
			this->PotatoBtn->BackColor = System::Drawing::Color::Red;
			this->PotatoBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PotatoBtn->Location = System::Drawing::Point(554, 181);
			this->PotatoBtn->Name = L"PotatoBtn";
			this->PotatoBtn->Size = System::Drawing::Size(86, 23);
			this->PotatoBtn->TabIndex = 7;
			this->PotatoBtn->Text = L"Add To Cart";
			this->PotatoBtn->UseVisualStyleBackColor = false;
			this->PotatoBtn->Click += gcnew System::EventHandler(this, &FVForm::PotatoBtn_Click);
			// 
			// Back1Btn
			// 
			this->Back1Btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Back1Btn->Location = System::Drawing::Point(130, 257);
			this->Back1Btn->Name = L"Back1Btn";
			this->Back1Btn->Size = System::Drawing::Size(113, 23);
			this->Back1Btn->TabIndex = 8;
			this->Back1Btn->Text = L"Back To Categories";
			this->Back1Btn->UseVisualStyleBackColor = false;
			this->Back1Btn->Click += gcnew System::EventHandler(this, &FVForm::Back1Btn_Click);
			// 
			// ESBtn1
			// 
			this->ESBtn1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ESBtn1->Location = System::Drawing::Point(469, 257);
			this->ESBtn1->Name = L"ESBtn1";
			this->ESBtn1->Size = System::Drawing::Size(104, 23);
			this->ESBtn1->TabIndex = 9;
			this->ESBtn1->Text = L"End Shopping";
			this->ESBtn1->UseVisualStyleBackColor = false;
			this->ESBtn1->Click += gcnew System::EventHandler(this, &FVForm::ESBtn1_Click);
			// 
			// FVLbl
			// 
			this->FVLbl->AutoSize = true;
			this->FVLbl->Font = (gcnew System::Drawing::Font(L"Mistral", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FVLbl->ForeColor = System::Drawing::Color::Red;
			this->FVLbl->Location = System::Drawing::Point(256, 9);
			this->FVLbl->Name = L"FVLbl";
			this->FVLbl->Size = System::Drawing::Size(173, 29);
			this->FVLbl->TabIndex = 10;
			this->FVLbl->Text = L"Fruits and Vegetables";
			this->FVLbl->Click += gcnew System::EventHandler(this, &FVForm::FVLbl_Click);
			// 
			// FVForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 302);
			this->Controls->Add(this->FVLbl);
			this->Controls->Add(this->ESBtn1);
			this->Controls->Add(this->Back1Btn);
			this->Controls->Add(this->PotatoBtn);
			this->Controls->Add(this->CarrotBtn);
			this->Controls->Add(this->BananaBtn);
			this->Controls->Add(this->AppleBtn);
			this->Controls->Add(this->PotatoesPic);
			this->Controls->Add(this->CarrotPic);
			this->Controls->Add(this->BananasPic);
			this->Controls->Add(this->ApplePic);
			this->Name = L"FVForm";
			this->Text = L"FVForm";
			this->Load += gcnew System::EventHandler(this, &FVForm::FVForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ApplePic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BananasPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CarrotPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PotatoesPic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ApplePic_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BananasPic_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CarrotPic_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PotatoesPic_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AppleBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Apple a; 
	fstream f("APP01.dat"); 
	
		f.read((char*)&a, sizeof(a));
		f.close(); 
		a.decrementstock(); 
		a.writeuser(); 
	a.UpdateBill(a.getcost()); 
	int b= a.GetBill();
	MessageBox::Show("Your bill is now Rs. " +b );





}
private: System::Void BananaBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Banana ba;
	fstream f("BAN01.dat");

	f.read((char*)&ba, sizeof(ba));
	f.close();
	ba.decrementstock();
	ba.writeuser();
	ba.UpdateBill(ba.getcost());
	int b = ba.GetBill();
	MessageBox::Show("Your bill is now Rs. " + b);
	

}
	private: System::Void CarrotBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Carrots ct;
		fstream f("CAR01.dat");

		f.read((char*)&ct, sizeof(ct));
		f.close();
		ct.decrementstock();
		ct.writeuser();
		ct.UpdateBill(ct.getcost());
		int b = ct.GetBill();
		MessageBox::Show("Your bill is now Rs. " + b);
	}
private: System::Void PotatoBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Potato p;
	fstream f("POT01.dat");

	f.read((char*)&p, sizeof(p));
	f.close();
	p.decrementstock();
	p.writeuser();
	p.UpdateBill(p.getcost());
	int b = p.GetBill();
	MessageBox::Show("Your bill is now Rs. " + b);

}
	private: System::Void Back1Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide(); 
		backform->Show(); 
	}
private: System::Void ESBtn1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	EndS^ es = gcnew EndS();
	es->Show();
}
private: System::Void FVLbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FVForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
