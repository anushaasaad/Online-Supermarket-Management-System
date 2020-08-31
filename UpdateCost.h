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
	/// Summary for UpdateCost
	/// </summary>
	public ref class UpdateCost : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ otherform;
	public:
		UpdateCost(System::Windows::Forms::Form^ ob)
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
		~UpdateCost()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ID2Lbl;
	protected:
	private: System::Windows::Forms::Label^ NCLbl;
	private: System::Windows::Forms::TextBox^ ID2Txt;
	private: System::Windows::Forms::TextBox^ NCTxt;
	private: System::Windows::Forms::Button^ Update2Btn;
	private: System::Windows::Forms::Button^ BackBtn2;
	private: System::Windows::Forms::Button^ ClrBtn2;

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
			this->ID2Lbl = (gcnew System::Windows::Forms::Label());
			this->NCLbl = (gcnew System::Windows::Forms::Label());
			this->ID2Txt = (gcnew System::Windows::Forms::TextBox());
			this->NCTxt = (gcnew System::Windows::Forms::TextBox());
			this->Update2Btn = (gcnew System::Windows::Forms::Button());
			this->BackBtn2 = (gcnew System::Windows::Forms::Button());
			this->ClrBtn2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ID2Lbl
			// 
			this->ID2Lbl->AutoSize = true;
			this->ID2Lbl->Location = System::Drawing::Point(131, 60);
			this->ID2Lbl->Name = L"ID2Lbl";
			this->ID2Lbl->Size = System::Drawing::Size(72, 13);
			this->ID2Lbl->TabIndex = 0;
			this->ID2Lbl->Text = L"Enter Item ID:";
			// 
			// NCLbl
			// 
			this->NCLbl->AutoSize = true;
			this->NCLbl->Location = System::Drawing::Point(131, 111);
			this->NCLbl->Name = L"NCLbl";
			this->NCLbl->Size = System::Drawing::Size(84, 13);
			this->NCLbl->TabIndex = 1;
			this->NCLbl->Text = L"Enter New Cost:";
			// 
			// ID2Txt
			// 
			this->ID2Txt->Location = System::Drawing::Point(278, 53);
			this->ID2Txt->Name = L"ID2Txt";
			this->ID2Txt->Size = System::Drawing::Size(100, 20);
			this->ID2Txt->TabIndex = 2;
			this->ID2Txt->TextChanged += gcnew System::EventHandler(this, &UpdateCost::ID2Txt_TextChanged);
			// 
			// NCTxt
			// 
			this->NCTxt->Location = System::Drawing::Point(278, 104);
			this->NCTxt->Name = L"NCTxt";
			this->NCTxt->Size = System::Drawing::Size(100, 20);
			this->NCTxt->TabIndex = 3;
			this->NCTxt->TextChanged += gcnew System::EventHandler(this, &UpdateCost::NCTxt_TextChanged);
			// 
			// Update2Btn
			// 
			this->Update2Btn->Location = System::Drawing::Point(214, 157);
			this->Update2Btn->Name = L"Update2Btn";
			this->Update2Btn->Size = System::Drawing::Size(75, 23);
			this->Update2Btn->TabIndex = 4;
			this->Update2Btn->Text = L"Update";
			this->Update2Btn->UseVisualStyleBackColor = true;
			this->Update2Btn->Click += gcnew System::EventHandler(this, &UpdateCost::Update2Btn_Click);
			// 
			// BackBtn2
			// 
			this->BackBtn2->Location = System::Drawing::Point(145, 213);
			this->BackBtn2->Name = L"BackBtn2";
			this->BackBtn2->Size = System::Drawing::Size(75, 23);
			this->BackBtn2->TabIndex = 5;
			this->BackBtn2->Text = L"Back";
			this->BackBtn2->UseVisualStyleBackColor = true;
			this->BackBtn2->Click += gcnew System::EventHandler(this, &UpdateCost::BackBtn2_Click);
			// 
			// ClrBtn2
			// 
			this->ClrBtn2->Location = System::Drawing::Point(291, 213);
			this->ClrBtn2->Name = L"ClrBtn2";
			this->ClrBtn2->Size = System::Drawing::Size(75, 23);
			this->ClrBtn2->TabIndex = 6;
			this->ClrBtn2->Text = L"Clear";
			this->ClrBtn2->UseVisualStyleBackColor = true;
			this->ClrBtn2->Click += gcnew System::EventHandler(this, &UpdateCost::ClrBtn2_Click);
			// 
			// UpdateCost
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 261);
			this->Controls->Add(this->ClrBtn2);
			this->Controls->Add(this->BackBtn2);
			this->Controls->Add(this->Update2Btn);
			this->Controls->Add(this->NCTxt);
			this->Controls->Add(this->ID2Txt);
			this->Controls->Add(this->NCLbl);
			this->Controls->Add(this->ID2Lbl);
			this->Name = L"UpdateCost";
			this->Text = L"UpdateCost";
			this->Load += gcnew System::EventHandler(this, &UpdateCost::UpdateCost_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ID2Txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void NCTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Update2Btn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string id1 = msclr::interop::marshal_as<std::string>(ID2Txt->Text);
	int nc = Convert::ToInt32(NCTxt->Text);
	if (id1 == "" || nc <= 0)
	{
		MessageBox::Show("Type the correct ID and cost.");
	}
	else
	{
		if (id1 == "APP01")
		{
			Apple ap;
			fstream f("APP01.dat");
			f.read((char*)&ap, sizeof(ap));
			f.close();
			ap.updatecost(nc);
			ap.writeuser();
		}
		else if (id1 == "BAN01")
		{
			Banana ba;
			fstream f("BAN01.dat");
			f.read((char*)&ba, sizeof(ba));
			f.close();
			ba.updatecost(nc);
			ba.writeuser();
		}
		else if (id1 == "CAR01")
		{
			Carrots ca;
			fstream f("CAR01.dat");
			f.read((char*)&ca, sizeof(ca));
			f.close();
			ca.updatecost(nc);
			ca.writeuser();
		}
		else if (id1 == "POT01")
		{
			Potato pp;
			fstream f("POT01.dat");
			f.read((char*)&pp, sizeof(pp));
			f.close();
			pp.updatecost(nc);
			pp.writeuser();
		}
		else if (id1 == "LEN01")
		{
			Lentils ll;
			fstream f("LEN01.dat");
			f.read((char*)&ll, sizeof(ll));
			f.close();
			ll.updatecost(nc);
			ll.writeuser();

		}
		else if (id1 == "RIC01")
		{
			Rice rr;
			fstream f("RIC01.dat");
			f.read((char*)&rr, sizeof(rr));
			f.close();
			rr.updatecost(nc);
			rr.writeuser();
		}
		else if (id1 == "OIL01")
		{
			Oil oo;
			fstream f("OIL01.dat");
			f.read((char*)&oo, sizeof(oo));
			f.close();
			oo.updatecost(nc);
			oo.writeuser();
		}
		else if (id1 == "CHI01")
		{
			Chicken cc;
			fstream f("CHI01.dat");
			f.read((char*)&cc, sizeof(cc));
			f.close();
			cc.updatecost(nc);
			cc.writeuser();
		}
		else if (id1 == "FLO01")
		{
			Flour fl;
			fstream f("FLO01.dat");
			f.read((char*)&fl, sizeof(fl));
			f.close();
			fl.updatecost(nc);
			fl.writeuser();
		}
		else if (id1 == "SHA01")
		{
			Shampoo sp;
			fstream f("SHA01.dat");
			f.read((char*)&sp, sizeof(sp));
			f.close();
			sp.updatecost(nc);
			sp.writeuser();
		}
		else if (id1 == "SOA01")
		{
			Soap so;
			fstream f("SOA01.dat");
			f.read((char*)&so, sizeof(so));
			f.close();
			so.updatestock(nc);
			so.writeuser();
		}
		else if (id1 == "BRU01")
		{
			Toothbrush tb;
			fstream f("BRU01.dat");
			f.read((char*)&tb, sizeof(tb));
			f.close();
			tb.updatecost(nc);
			tb.writeuser();
		}
		else if (id1 == "PAS01")
		{
			Toothpaste tp;
			fstream f("PAS01.dat");
			f.read((char*)&tp, sizeof(tp));
			f.close();
			tp.updatecost(nc);
			tp.writeuser();
		}
		else if (id1 == "MIL01")
		{
			Milk mk;
			fstream f("MIL01.dat");
			f.read((char*)&mk, sizeof(mk));
			f.close();
			mk.updatecost(nc);
			mk.writeuser();
		}

		else if (id1 == "EGG01")
		{
			Egg eg1;
			fstream f("EGG01.dat");
			f.read((char*)&eg1, sizeof(eg1));
			f.close();
			eg1.updatecost(nc);
			eg1.writeuser();
		}
		else if (id1 == "BUT01")
		{
			Butter bt;
			fstream f("BUT01.dat");
			f.read((char*)&bt, sizeof(bt));
			f.close();
			bt.updatecost(nc);
			bt.writeuser();
		}
		else if (id1 == "CHE01")
		{
			Cheese ch;
			fstream f("CHE01.dat");
			f.read((char*)&ch, sizeof(ch));
			f.close();
			ch.updatecost(nc);
			ch.writeuser();
		}
		MessageBox::Show("Cost updated successfully.");
	}
	
}
private: System::Void BackBtn2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	otherform->Show(); 
}
private: System::Void ClrBtn2_Click(System::Object^ sender, System::EventArgs^ e) {
	ID2Txt->Text = ""; 
	NCTxt->Text = "";
}
private: System::Void UpdateCost_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
