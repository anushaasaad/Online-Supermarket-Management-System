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
	/// Summary for CheckItem
	/// </summary>
	public ref class CheckItem : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ otherform;
	public:
		CheckItem(System::Windows::Forms::Form^ ob)
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
		~CheckItem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ChkBtn;
	protected:
	private: System::Windows::Forms::Label^ CLbl1;
	private: System::Windows::Forms::Label^ CLbl2;
	private: System::Windows::Forms::Label^ CLbl3;
	private: System::Windows::Forms::Button^ BackBtn3;
	private: System::Windows::Forms::Button^ ClrBtn3;
	private: System::Windows::Forms::TextBox^ IDTxt;
	private: System::Windows::Forms::TextBox^ STxt;
	private: System::Windows::Forms::TextBox^ CTxt;




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
			this->ChkBtn = (gcnew System::Windows::Forms::Button());
			this->CLbl1 = (gcnew System::Windows::Forms::Label());
			this->CLbl2 = (gcnew System::Windows::Forms::Label());
			this->CLbl3 = (gcnew System::Windows::Forms::Label());
			this->BackBtn3 = (gcnew System::Windows::Forms::Button());
			this->ClrBtn3 = (gcnew System::Windows::Forms::Button());
			this->IDTxt = (gcnew System::Windows::Forms::TextBox());
			this->STxt = (gcnew System::Windows::Forms::TextBox());
			this->CTxt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// ChkBtn
			// 
			this->ChkBtn->Location = System::Drawing::Point(261, 199);
			this->ChkBtn->Name = L"ChkBtn";
			this->ChkBtn->Size = System::Drawing::Size(75, 23);
			this->ChkBtn->TabIndex = 0;
			this->ChkBtn->Text = L"Check";
			this->ChkBtn->UseVisualStyleBackColor = true;
			this->ChkBtn->Click += gcnew System::EventHandler(this, &CheckItem::ChkBtn_Click);
			// 
			// CLbl1
			// 
			this->CLbl1->AutoSize = true;
			this->CLbl1->Location = System::Drawing::Point(111, 70);
			this->CLbl1->Name = L"CLbl1";
			this->CLbl1->Size = System::Drawing::Size(193, 13);
			this->CLbl1->TabIndex = 1;
			this->CLbl1->Text = L"Enter ID of the item you wish to check: ";
			// 
			// CLbl2
			// 
			this->CLbl2->AutoSize = true;
			this->CLbl2->Location = System::Drawing::Point(111, 110);
			this->CLbl2->Name = L"CLbl2";
			this->CLbl2->Size = System::Drawing::Size(69, 13);
			this->CLbl2->TabIndex = 2;
			this->CLbl2->Text = L"Stock Count:";
			// 
			// CLbl3
			// 
			this->CLbl3->AutoSize = true;
			this->CLbl3->Location = System::Drawing::Point(114, 151);
			this->CLbl3->Name = L"CLbl3";
			this->CLbl3->Size = System::Drawing::Size(69, 13);
			this->CLbl3->TabIndex = 3;
			this->CLbl3->Text = L"Cost per unit:";
			// 
			// BackBtn3
			// 
			this->BackBtn3->Location = System::Drawing::Point(181, 255);
			this->BackBtn3->Name = L"BackBtn3";
			this->BackBtn3->Size = System::Drawing::Size(75, 23);
			this->BackBtn3->TabIndex = 4;
			this->BackBtn3->Text = L"Back";
			this->BackBtn3->UseVisualStyleBackColor = true;
			this->BackBtn3->Click += gcnew System::EventHandler(this, &CheckItem::BackBtn3_Click);
			// 
			// ClrBtn3
			// 
			this->ClrBtn3->Location = System::Drawing::Point(344, 255);
			this->ClrBtn3->Name = L"ClrBtn3";
			this->ClrBtn3->Size = System::Drawing::Size(75, 23);
			this->ClrBtn3->TabIndex = 5;
			this->ClrBtn3->Text = L"Clear";
			this->ClrBtn3->UseVisualStyleBackColor = true;
			this->ClrBtn3->Click += gcnew System::EventHandler(this, &CheckItem::ClrBtn3_Click);
			// 
			// IDTxt
			// 
			this->IDTxt->Location = System::Drawing::Point(353, 63);
			this->IDTxt->Name = L"IDTxt";
			this->IDTxt->Size = System::Drawing::Size(100, 20);
			this->IDTxt->TabIndex = 6;
			this->IDTxt->TextChanged += gcnew System::EventHandler(this, &CheckItem::IDTxt_TextChanged);
			// 
			// STxt
			// 
			this->STxt->Location = System::Drawing::Point(353, 103);
			this->STxt->Name = L"STxt";
			this->STxt->Size = System::Drawing::Size(100, 20);
			this->STxt->TabIndex = 7;
			this->STxt->TextChanged += gcnew System::EventHandler(this, &CheckItem::STxt_TextChanged);
			// 
			// CTxt
			// 
			this->CTxt->Location = System::Drawing::Point(353, 151);
			this->CTxt->Name = L"CTxt";
			this->CTxt->Size = System::Drawing::Size(100, 20);
			this->CTxt->TabIndex = 8;
			this->CTxt->TextChanged += gcnew System::EventHandler(this, &CheckItem::CTxt_TextChanged);
			// 
			// CheckItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(636, 290);
			this->Controls->Add(this->CTxt);
			this->Controls->Add(this->STxt);
			this->Controls->Add(this->IDTxt);
			this->Controls->Add(this->ClrBtn3);
			this->Controls->Add(this->BackBtn3);
			this->Controls->Add(this->CLbl3);
			this->Controls->Add(this->CLbl2);
			this->Controls->Add(this->CLbl1);
			this->Controls->Add(this->ChkBtn);
			this->Name = L"CheckItem";
			this->Text = L"CheckItem";
			this->Load += gcnew System::EventHandler(this, &CheckItem::CheckItem_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void IDTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void STxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ChkBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string ID = msclr::interop::marshal_as<std::string>(IDTxt->Text);
	if (ID == "")
	{
		MessageBox::Show("Cannot proceed with the field being blank."); 
	}
	else
	{
		if (ID == "APP01")
		{
			Apple a; 
			fstream f("APP01.dat"); 
			f.read((char*)&a, sizeof(a));
			f.close();
			int s = a.getstock();
				int c = a.getcost(); 
				System::String^ str1 = s.ToString();
				System::String^ str2 = c.ToString();
				STxt->Text = str1; 
				CTxt->Text = str2;
		}
		else if (ID == "BAN01")
		{
			Banana b;
			fstream f("BAN01.dat");
			f.read((char*)&b, sizeof(b));
			f.close();

			int s = b.getstock();
			int c = b.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "CAR01")
		{
			Carrots cr;
			fstream f("CAR01.dat");
			f.read((char*)&cr, sizeof(cr));
			f.close();

			int s = cr.getstock();
			int c = cr.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "POT01")
		{
			Potato p;
			fstream f("POT01.dat");
			f.read((char*)&p, sizeof(p));
			f.close();

			int s = p.getstock();
			int c = p.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "SHA01")
		{
			Shampoo sh;
			fstream f("SHA01.dat");
			f.read((char*)&sh, sizeof(sh));
			f.close();
			int s = sh.getstock();
			int c = sh.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "SOA01")
		{
			Soap so;
			fstream f("SOA01.dat");
			f.read((char*)&so, sizeof(so));
			f.close();
			int s = so.getstock();
			int c = so.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "BRU01")
		{
			Toothbrush tb;
			fstream f("BRU01.dat");
			f.read((char*)&tb, sizeof(tb));
			f.close();
			int s = tb.getstock();
			int c = tb.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "PAS01")
		{
			Toothpaste tp;
			fstream f("PAS01.dat");
			f.read((char*)&tp, sizeof(tp));
			f.close();
			int s = tp.getstock();
			int c = tp.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "LEN01")
		{
			Lentils l;
			fstream f("LEN01.dat");
			f.read((char*)&l, sizeof(l));
			f.close();
			int s = l.getstock();
			int c = l.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "RIC01")
		{
			Rice r;
			fstream f("RIC01.dat");
			f.read((char*)&r, sizeof(r));
			f.close();
			int s = r.getstock();
			int c = r.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "OIL01")
		{
			Oil o;
			fstream f("OIL01.dat");
			f.read((char*)&o, sizeof(o));
			f.close();
			int s = o.getstock();
			int c = o.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "CHI01")
		{
			Chicken ch;
			fstream f("CHI01.dat");
			f.read((char*)&ch, sizeof(ch));
			f.close();
			int s = ch.getstock();
			int c = ch.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "FLO01")
		{
			Flour fl;
			fstream f("FLO01.dat");
			f.read((char*)&fl, sizeof(fl));
			f.close();
			int s = fl.getstock();
			int c = fl.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "MIL01")
		{
			Milk mk;
			fstream f("MIL01.dat");
			f.read((char*)&mk, sizeof(mk));
			f.close();
			int s = mk.getstock();
			int c = mk.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "EGG01")
		{
			Egg eg;
			fstream f("EGG01.dat");
			f.read((char*)&eg, sizeof(eg));
			f.close();
			int s = eg.getstock();
			int c = eg.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "BUT01")
		{
			Butter bu;
			fstream f("BUT01.dat");
			f.read((char*)&bu, sizeof(bu));
			f.close();
			int s = bu.getstock();
			int c = bu.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
		else if (ID == "CHE01")
		{
			Cheese cee;
			fstream f("CHE01.dat");
			f.read((char*)&cee, sizeof(cee));
			f.close();
			int s = cee.getstock();
			int c = cee.getcost();
			System::String^ str1 = s.ToString();
			System::String^ str2 = c.ToString();
			STxt->Text = str1;
			CTxt->Text = str2;
		}
	}
}
private: System::Void BackBtn3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); 
	otherform->Show(); 
}
private: System::Void ClrBtn3_Click(System::Object^ sender, System::EventArgs^ e) {
	IDTxt->Text = ""; 
	STxt->Text = ""; 
	CTxt->Text = ""; 
}
private: System::Void CheckItem_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
