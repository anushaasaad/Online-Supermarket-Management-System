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
	/// Summary for BAForm
	/// </summary>
	public ref class BAForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ backform;
	public:
		BAForm(System::Windows::Forms::Form^ ob)
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
		~BAForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ ShampooPic;
	private: System::Windows::Forms::PictureBox^ SoapPic;
	private: System::Windows::Forms::PictureBox^ BrushPic;
	private: System::Windows::Forms::PictureBox^ PastePic;
	protected:

	protected:



	private: System::Windows::Forms::Label^ BALbl;
	private: System::Windows::Forms::Button^ ShampooBtn;
	private: System::Windows::Forms::Button^ SoapBtn;
	private: System::Windows::Forms::Button^ ToothbrushBtn;
	private: System::Windows::Forms::Button^ PasteBtn;

	private: System::Windows::Forms::Button^ Back2Btn;
	private: System::Windows::Forms::Button^ ESBtn2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BAForm::typeid));
			this->ShampooPic = (gcnew System::Windows::Forms::PictureBox());
			this->SoapPic = (gcnew System::Windows::Forms::PictureBox());
			this->BrushPic = (gcnew System::Windows::Forms::PictureBox());
			this->PastePic = (gcnew System::Windows::Forms::PictureBox());
			this->BALbl = (gcnew System::Windows::Forms::Label());
			this->ShampooBtn = (gcnew System::Windows::Forms::Button());
			this->SoapBtn = (gcnew System::Windows::Forms::Button());
			this->ToothbrushBtn = (gcnew System::Windows::Forms::Button());
			this->PasteBtn = (gcnew System::Windows::Forms::Button());
			this->Back2Btn = (gcnew System::Windows::Forms::Button());
			this->ESBtn2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ShampooPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SoapPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrushPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PastePic))->BeginInit();
			this->SuspendLayout();
			// 
			// ShampooPic
			// 
			this->ShampooPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ShampooPic.Image")));
			this->ShampooPic->Location = System::Drawing::Point(29, 61);
			this->ShampooPic->Name = L"ShampooPic";
			this->ShampooPic->Size = System::Drawing::Size(116, 117);
			this->ShampooPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ShampooPic->TabIndex = 0;
			this->ShampooPic->TabStop = false;
			this->ShampooPic->Click += gcnew System::EventHandler(this, &BAForm::ShampooPic_Click);
			// 
			// SoapPic
			// 
			this->SoapPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SoapPic.Image")));
			this->SoapPic->Location = System::Drawing::Point(170, 61);
			this->SoapPic->Name = L"SoapPic";
			this->SoapPic->Size = System::Drawing::Size(125, 117);
			this->SoapPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->SoapPic->TabIndex = 1;
			this->SoapPic->TabStop = false;
			this->SoapPic->Click += gcnew System::EventHandler(this, &BAForm::SoapPic_Click);
			// 
			// BrushPic
			// 
			this->BrushPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BrushPic.Image")));
			this->BrushPic->Location = System::Drawing::Point(321, 61);
			this->BrushPic->Name = L"BrushPic";
			this->BrushPic->Size = System::Drawing::Size(119, 117);
			this->BrushPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->BrushPic->TabIndex = 2;
			this->BrushPic->TabStop = false;
			// 
			// PastePic
			// 
			this->PastePic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PastePic.Image")));
			this->PastePic->Location = System::Drawing::Point(474, 61);
			this->PastePic->Name = L"PastePic";
			this->PastePic->Size = System::Drawing::Size(126, 117);
			this->PastePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PastePic->TabIndex = 3;
			this->PastePic->TabStop = false;
			this->PastePic->Click += gcnew System::EventHandler(this, &BAForm::PastePic_Click);
			// 
			// BALbl
			// 
			this->BALbl->AutoSize = true;
			this->BALbl->Font = (gcnew System::Drawing::Font(L"Mistral", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BALbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->BALbl->Location = System::Drawing::Point(208, 19);
			this->BALbl->Name = L"BALbl";
			this->BALbl->Size = System::Drawing::Size(180, 29);
			this->BALbl->TabIndex = 4;
			this->BALbl->Text = L"Bathroom Accessories ";
			// 
			// ShampooBtn
			// 
			this->ShampooBtn->BackColor = System::Drawing::Color::Red;
			this->ShampooBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ShampooBtn->Location = System::Drawing::Point(47, 200);
			this->ShampooBtn->Name = L"ShampooBtn";
			this->ShampooBtn->Size = System::Drawing::Size(83, 23);
			this->ShampooBtn->TabIndex = 5;
			this->ShampooBtn->Text = L"Add To Cart";
			this->ShampooBtn->UseVisualStyleBackColor = false;
			this->ShampooBtn->Click += gcnew System::EventHandler(this, &BAForm::ShampooBtn_Click);
			// 
			// SoapBtn
			// 
			this->SoapBtn->BackColor = System::Drawing::Color::Red;
			this->SoapBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SoapBtn->Location = System::Drawing::Point(188, 200);
			this->SoapBtn->Name = L"SoapBtn";
			this->SoapBtn->Size = System::Drawing::Size(85, 23);
			this->SoapBtn->TabIndex = 6;
			this->SoapBtn->Text = L"Add To Cart";
			this->SoapBtn->UseVisualStyleBackColor = false;
			this->SoapBtn->Click += gcnew System::EventHandler(this, &BAForm::SoapBtn_Click);
			// 
			// ToothbrushBtn
			// 
			this->ToothbrushBtn->BackColor = System::Drawing::Color::Red;
			this->ToothbrushBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToothbrushBtn->Location = System::Drawing::Point(342, 200);
			this->ToothbrushBtn->Name = L"ToothbrushBtn";
			this->ToothbrushBtn->Size = System::Drawing::Size(85, 23);
			this->ToothbrushBtn->TabIndex = 7;
			this->ToothbrushBtn->Text = L"Add To Cart";
			this->ToothbrushBtn->UseVisualStyleBackColor = false;
			this->ToothbrushBtn->Click += gcnew System::EventHandler(this, &BAForm::ToothbrushBtn_Click);
			// 
			// PasteBtn
			// 
			this->PasteBtn->BackColor = System::Drawing::Color::Red;
			this->PasteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasteBtn->Location = System::Drawing::Point(494, 200);
			this->PasteBtn->Name = L"PasteBtn";
			this->PasteBtn->Size = System::Drawing::Size(84, 23);
			this->PasteBtn->TabIndex = 8;
			this->PasteBtn->Text = L"Add To Cart";
			this->PasteBtn->UseVisualStyleBackColor = false;
			this->PasteBtn->Click += gcnew System::EventHandler(this, &BAForm::PasteBtn_Click);
			// 
			// Back2Btn
			// 
			this->Back2Btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Back2Btn->Location = System::Drawing::Point(98, 264);
			this->Back2Btn->Name = L"Back2Btn";
			this->Back2Btn->Size = System::Drawing::Size(111, 23);
			this->Back2Btn->TabIndex = 9;
			this->Back2Btn->Text = L"Back to Categories";
			this->Back2Btn->UseVisualStyleBackColor = false;
			this->Back2Btn->Click += gcnew System::EventHandler(this, &BAForm::Back2Btn_Click);
			// 
			// ESBtn2
			// 
			this->ESBtn2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ESBtn2->Location = System::Drawing::Point(421, 264);
			this->ESBtn2->Name = L"ESBtn2";
			this->ESBtn2->Size = System::Drawing::Size(101, 23);
			this->ESBtn2->TabIndex = 10;
			this->ESBtn2->Text = L"End Shopping";
			this->ESBtn2->UseVisualStyleBackColor = false;
			this->ESBtn2->Click += gcnew System::EventHandler(this, &BAForm::ESBtn2_Click);
			// 
			// BAForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(625, 299);
			this->Controls->Add(this->ESBtn2);
			this->Controls->Add(this->Back2Btn);
			this->Controls->Add(this->PasteBtn);
			this->Controls->Add(this->ToothbrushBtn);
			this->Controls->Add(this->SoapBtn);
			this->Controls->Add(this->ShampooBtn);
			this->Controls->Add(this->BALbl);
			this->Controls->Add(this->PastePic);
			this->Controls->Add(this->BrushPic);
			this->Controls->Add(this->SoapPic);
			this->Controls->Add(this->ShampooPic);
			this->Name = L"BAForm";
			this->Text = L"BAForm";
			this->Load += gcnew System::EventHandler(this, &BAForm::BAForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ShampooPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SoapPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrushPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PastePic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Back2Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		backform->Show();
	}
private: System::Void BAForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ShampooBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Shampoo sh;
	fstream f("SHA01.dat");

	f.read((char*)&sh, sizeof(sh));
	f.close();
	sh.decrementstock();
	sh.writeuser();
	sh.UpdateBill(sh.getcost());
	int b = sh.GetBill();
	MessageBox::Show("Your bill is now Rs. " + b);
	
}
private: System::Void SoapBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Soap sp;
	fstream f("SOA01.dat");

	f.read((char*)&sp, sizeof(sp));
	f.close();
	sp.decrementstock();
	sp.writeuser();
	sp.UpdateBill(sp.getcost());
	int b = sp.GetBill();
	MessageBox::Show("Your bill is now Rs. " + b);
}
private: System::Void ToothbrushBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Toothbrush tb;
	fstream f("BRU01.dat");

	f.read((char*)&tb, sizeof(tb));
	f.close();
	tb.decrementstock();
	tb.writeuser();
	tb.UpdateBill(tb.getcost());
	int b = tb.GetBill();
	MessageBox::Show("Your bill is now Rs. " + b);
	
}
private: System::Void PasteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Toothpaste tp;
	fstream f("PAS01.dat");
f.read((char*)&tp, sizeof(tp));
	f.close();
	tp.decrementstock();
	tp.writeuser();
	tp.UpdateBill(tp.getcost());
	int b = tp.GetBill();
	MessageBox::Show("Your bill is now Rs. " + b);
	
}
private: System::Void ESBtn2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	EndS^ es = gcnew EndS();
	es->Show();
}
private: System::Void SoapPic_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void PastePic_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ShampooPic_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
