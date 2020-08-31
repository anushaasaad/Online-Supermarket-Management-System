#pragma once
#include "Code.h"
#include <msclr\marshal_cppstd.h>


namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateStock
	/// </summary>
	public ref class UpdateStock : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ otherform;
	public:
		UpdateStock(System::Windows::Forms::Form^ ob)
		{
			otherform = ob;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Lbl1;
	protected:
	private: System::Windows::Forms::Label^ Lbl2;
	private: System::Windows::Forms::TextBox^ IDTxt;

	private: System::Windows::Forms::TextBox^ newTxt;

	private: System::Windows::Forms::Button^ UpdateBtn;
	private: System::Windows::Forms::Button^ BackBtn1;
	private: System::Windows::Forms::Button^ ClrBtn1;

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
			this->Lbl1 = (gcnew System::Windows::Forms::Label());
			this->Lbl2 = (gcnew System::Windows::Forms::Label());
			this->IDTxt = (gcnew System::Windows::Forms::TextBox());
			this->newTxt = (gcnew System::Windows::Forms::TextBox());
			this->UpdateBtn = (gcnew System::Windows::Forms::Button());
			this->BackBtn1 = (gcnew System::Windows::Forms::Button());
			this->ClrBtn1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Lbl1
			// 
			this->Lbl1->AutoSize = true;
			this->Lbl1->Location = System::Drawing::Point(108, 73);
			this->Lbl1->Name = L"Lbl1";
			this->Lbl1->Size = System::Drawing::Size(72, 13);
			this->Lbl1->TabIndex = 0;
			this->Lbl1->Text = L"Enter Item ID:";
			// 
			// Lbl2
			// 
			this->Lbl2->AutoSize = true;
			this->Lbl2->Location = System::Drawing::Point(108, 130);
			this->Lbl2->Name = L"Lbl2";
			this->Lbl2->Size = System::Drawing::Size(119, 13);
			this->Lbl2->TabIndex = 1;
			this->Lbl2->Text = L"Enter New Stock Count";
			// 
			// IDTxt
			// 
			this->IDTxt->Location = System::Drawing::Point(283, 66);
			this->IDTxt->Name = L"IDTxt";
			this->IDTxt->Size = System::Drawing::Size(100, 20);
			this->IDTxt->TabIndex = 2;
			this->IDTxt->TextChanged += gcnew System::EventHandler(this, &UpdateStock::IDTxt_TextChanged);
			// 
			// newTxt
			// 
			this->newTxt->Location = System::Drawing::Point(283, 123);
			this->newTxt->Name = L"newTxt";
			this->newTxt->Size = System::Drawing::Size(100, 20);
			this->newTxt->TabIndex = 3;
			this->newTxt->TextChanged += gcnew System::EventHandler(this, &UpdateStock::newTxt_TextChanged);
			// 
			// UpdateBtn
			// 
			this->UpdateBtn->Location = System::Drawing::Point(219, 169);
			this->UpdateBtn->Name = L"UpdateBtn";
			this->UpdateBtn->Size = System::Drawing::Size(75, 23);
			this->UpdateBtn->TabIndex = 4;
			this->UpdateBtn->Text = L"Update";
			this->UpdateBtn->UseVisualStyleBackColor = true;
			this->UpdateBtn->Click += gcnew System::EventHandler(this, &UpdateStock::UpdateBtn_Click);
			// 
			// BackBtn1
			// 
			this->BackBtn1->Location = System::Drawing::Point(152, 221);
			this->BackBtn1->Name = L"BackBtn1";
			this->BackBtn1->Size = System::Drawing::Size(75, 23);
			this->BackBtn1->TabIndex = 5;
			this->BackBtn1->Text = L"Back ";
			this->BackBtn1->UseVisualStyleBackColor = true;
			this->BackBtn1->Click += gcnew System::EventHandler(this, &UpdateStock::BackBtn1_Click);
			// 
			// ClrBtn1
			// 
			this->ClrBtn1->Location = System::Drawing::Point(297, 221);
			this->ClrBtn1->Name = L"ClrBtn1";
			this->ClrBtn1->Size = System::Drawing::Size(75, 23);
			this->ClrBtn1->TabIndex = 6;
			this->ClrBtn1->Text = L"Clear";
			this->ClrBtn1->UseVisualStyleBackColor = true;
			this->ClrBtn1->Click += gcnew System::EventHandler(this, &UpdateStock::ClrBtn1_Click);
			// 
			// UpdateStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(509, 273);
			this->Controls->Add(this->ClrBtn1);
			this->Controls->Add(this->BackBtn1);
			this->Controls->Add(this->UpdateBtn);
			this->Controls->Add(this->newTxt);
			this->Controls->Add(this->IDTxt);
			this->Controls->Add(this->Lbl2);
			this->Controls->Add(this->Lbl1);
			this->Name = L"UpdateStock";
			this->Text = L"UpdateStock";
			this->Load += gcnew System::EventHandler(this, &UpdateStock::UpdateStock_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void IDTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BackBtn1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	otherform->Show();
}
private: System::Void newTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ClrBtn1_Click(System::Object^ sender, System::EventArgs^ e) {
	IDTxt->Text = ""; 
	newTxt->Text = "";
}
	private: System::Void UpdateBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string id2 = msclr::interop::marshal_as<std::string>(IDTxt->Text);
		int ns = Convert::ToInt32(newTxt->Text);
		if (id2 == "" || ns < 0)
		{
			MessageBox::Show("Type the correct ID and cost");
		}
		else
		{
			if (id2 == "APP01")
			{
				Apple ap;
				fstream f("APP01.dat");
				f.read((char*)&ap, sizeof(ap));
				f.close();
				ap.updatestock(ns); 
				ap.writeuser(); 
			}
			else if (id2 == "BAN01")
			{
					Banana ba;
					fstream f("BAN01.dat");
					f.read((char*)&ba, sizeof(ba));
					f.close();
					ba.updatestock(ns);
					ba.writeuser();
			}
			else if (id2 == "CAR01")
			{
				Carrots ca;
				fstream f("CAR01.dat");
				f.read((char*)&ca, sizeof(ca));
				f.close();
				ca.updatestock(ns);
				ca.writeuser();
			}
			else if (id2 == "POT01")
			{
				Potato pp;
				fstream f("POT01.dat");
				f.read((char*)&pp, sizeof(pp));
				f.close();
				pp.updatestock(ns);
				pp.writeuser();
			}
			else if (id2 == "LEN01")
			{
				Lentils ll;
				fstream f("LEN01.dat");
				f.read((char*)&ll, sizeof(ll));
				f.close();
				ll.updatestock(ns);
				ll.writeuser();

			}
			else if (id2 == "RIC01")
			{
				Rice rr;
				fstream f("RIC01.dat");
				f.read((char*)&rr, sizeof(rr));
				f.close();
				rr.updatestock(ns);
				rr.writeuser();
			}
			else if (id2 == "OIL01")
			{
				Oil oo;
				fstream f("OIL01.dat");
				f.read((char*)&oo, sizeof(oo));
				f.close();
				oo.updatestock(ns);
				oo.writeuser();
			}
			else if (id2 == "CHI01")
			{
				Chicken cc;
				fstream f("CHI01.dat");
				f.read((char*)&cc, sizeof(cc));
				f.close();
				cc.updatestock(ns);
				cc.writeuser();
			}
			else if (id2 == "FLO01")
			{
				Flour fl;
				fstream f("FLO01.dat");
				f.read((char*)&fl, sizeof(fl));
				f.close();
				fl.updatestock(ns);
				fl.writeuser();
			}
			else if (id2 == "SHA01")
			{
				Shampoo sp;
				fstream f("SHA01.dat");
				f.read((char*)&sp, sizeof(sp));
				f.close();
				sp.updatestock(ns);
				sp.writeuser();
			}
			else if (id2 == "SOA01")
			{
				Soap so;
				fstream f("SOA01.dat");
				f.read((char*)&so, sizeof(so));
				f.close();
				so.updatestock(ns);
				so.writeuser();
			}
			else if (id2 == "BRU01")
			{
				Toothbrush tb;
				fstream f("BRU01.dat");
				f.read((char*)&tb, sizeof(tb));
				f.close();
				tb.updatestock(ns);
				tb.writeuser();
			}
			else if (id2 == "PAS01")
			{
				Toothpaste tp;
				fstream f("PAS01.dat");
				f.read((char*)&tp, sizeof(tp));
				f.close();
				tp.updatestock(ns);
				tp.writeuser();
			}
			else if (id2 == "MIL01")
			{
			Milk mk;
			fstream f("MIL01.dat");
			f.read((char*)&mk, sizeof(mk));
			f.close();
			mk.updatestock(ns);
			mk.writeuser();
			}

			else if (id2 == "EGG01")
			{
			Egg eg1;
			fstream f("EGG01.dat");
			f.read((char*)&eg1, sizeof(eg1));
			f.close();
			eg1.updatestock(ns);
			eg1.writeuser();
			}
			else if (id2 == "BUT01")
			{
			Butter bt;
			fstream f("BUT01.dat");
			f.read((char*)&bt, sizeof(bt));
			f.close();
			bt.updatestock(ns);
			bt.writeuser();
			}
			else if (id2 == "CHE01")
			{
			Cheese ch;
			fstream f("CHE01.dat");
			f.read((char*)&ch, sizeof(ch));
			f.close();
			ch.updatestock(ns);
			ch.writeuser();
			}
			MessageBox::Show("Stock updated successfully."); 
         }
		
	}
private: System::Void UpdateStock_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}