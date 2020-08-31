#pragma once
#include "UpdateStock.h"
#include "UpdateCost.h" 
#include "CheckItem.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Options
	/// </summary>
	public ref class Options : public System::Windows::Forms::Form
	{
	public:
		Options(void)
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
		~Options()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ StockBtn;
	protected:
	private: System::Windows::Forms::Button^ CostBtn;
	private: System::Windows::Forms::Button^ checkBtn;
	private: System::Windows::Forms::Button^ NotifBtn;
	private: System::Windows::Forms::Button^ HistBtn;
	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Label^ OPLbl;
	private: System::Windows::Forms::Panel^ Op2;
	private: System::Windows::Forms::Panel^ Op1;

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
			this->StockBtn = (gcnew System::Windows::Forms::Button());
			this->CostBtn = (gcnew System::Windows::Forms::Button());
			this->checkBtn = (gcnew System::Windows::Forms::Button());
			this->NotifBtn = (gcnew System::Windows::Forms::Button());
			this->HistBtn = (gcnew System::Windows::Forms::Button());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->OPLbl = (gcnew System::Windows::Forms::Label());
			this->Op2 = (gcnew System::Windows::Forms::Panel());
			this->Op1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// StockBtn
			// 
			this->StockBtn->Location = System::Drawing::Point(248, 76);
			this->StockBtn->Name = L"StockBtn";
			this->StockBtn->Size = System::Drawing::Size(100, 23);
			this->StockBtn->TabIndex = 0;
			this->StockBtn->Text = L"Update Stock";
			this->StockBtn->UseVisualStyleBackColor = true;
			this->StockBtn->Click += gcnew System::EventHandler(this, &Options::StockBtn_Click);
			// 
			// CostBtn
			// 
			this->CostBtn->Location = System::Drawing::Point(248, 114);
			this->CostBtn->Name = L"CostBtn";
			this->CostBtn->Size = System::Drawing::Size(100, 23);
			this->CostBtn->TabIndex = 1;
			this->CostBtn->Text = L"Update Cost";
			this->CostBtn->UseVisualStyleBackColor = true;
			this->CostBtn->Click += gcnew System::EventHandler(this, &Options::CostBtn_Click);
			// 
			// checkBtn
			// 
			this->checkBtn->Location = System::Drawing::Point(248, 155);
			this->checkBtn->Name = L"checkBtn";
			this->checkBtn->Size = System::Drawing::Size(100, 23);
			this->checkBtn->TabIndex = 2;
			this->checkBtn->Text = L"Check Item";
			this->checkBtn->UseVisualStyleBackColor = true;
			this->checkBtn->Click += gcnew System::EventHandler(this, &Options::checkBtn_Click);
			// 
			// NotifBtn
			// 
			this->NotifBtn->Location = System::Drawing::Point(248, 196);
			this->NotifBtn->Name = L"NotifBtn";
			this->NotifBtn->Size = System::Drawing::Size(100, 23);
			this->NotifBtn->TabIndex = 3;
			this->NotifBtn->Text = L"Notifications";
			this->NotifBtn->UseVisualStyleBackColor = true;
			this->NotifBtn->Click += gcnew System::EventHandler(this, &Options::NotifBtn_Click);
			// 
			// HistBtn
			// 
			this->HistBtn->Location = System::Drawing::Point(248, 235);
			this->HistBtn->Name = L"HistBtn";
			this->HistBtn->Size = System::Drawing::Size(100, 23);
			this->HistBtn->TabIndex = 4;
			this->HistBtn->Text = L"Customer History";
			this->HistBtn->UseVisualStyleBackColor = true;
			this->HistBtn->Click += gcnew System::EventHandler(this, &Options::HistBtn_Click);
			// 
			// ExitBtn
			// 
			this->ExitBtn->Location = System::Drawing::Point(248, 273);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(100, 22);
			this->ExitBtn->TabIndex = 5;
			this->ExitBtn->Text = L"Exit";
			this->ExitBtn->UseVisualStyleBackColor = true;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &Options::ExitBtn_Click);
			// 
			// OPLbl
			// 
			this->OPLbl->AutoSize = true;
			this->OPLbl->Location = System::Drawing::Point(166, 33);
			this->OPLbl->Name = L"OPLbl";
			this->OPLbl->Size = System::Drawing::Size(267, 13);
			this->OPLbl->TabIndex = 6;
			this->OPLbl->Text = L"Choose any action to perform by clicking buttons below";
			// 
			// Op2
			// 
			this->Op2->BackColor = System::Drawing::Color::Red;
			this->Op2->Location = System::Drawing::Point(0, 0);
			this->Op2->Name = L"Op2";
			this->Op2->Size = System::Drawing::Size(134, 333);
			this->Op2->TabIndex = 7;
			// 
			// Op1
			// 
			this->Op1->BackColor = System::Drawing::Color::Red;
			this->Op1->Location = System::Drawing::Point(466, 0);
			this->Op1->Name = L"Op1";
			this->Op1->Size = System::Drawing::Size(139, 333);
			this->Op1->TabIndex = 8;
			this->Op1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Options::Op1_Paint);
			// 
			// Options
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 332);
			this->Controls->Add(this->checkBtn);
			this->Controls->Add(this->Op1);
			this->Controls->Add(this->Op2);
			this->Controls->Add(this->OPLbl);
			this->Controls->Add(this->ExitBtn);
			this->Controls->Add(this->HistBtn);
			this->Controls->Add(this->NotifBtn);
			this->Controls->Add(this->CostBtn);
			this->Controls->Add(this->StockBtn);
			this->Name = L"Options";
			this->Text = L"Options";
			this->Load += gcnew System::EventHandler(this, &Options::Options_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StockBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide(); 
		UpdateStock^ us = gcnew UpdateStock(this); 
		us->Show(); 
	}
private: System::Void CostBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); 
	UpdateCost^ uc = gcnew UpdateCost(this); 
	uc->Show();
}
private: System::Void NotifBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Apple a;
	fstream f("APP01.dat");
	f.read((char*)&a, sizeof(a));
	f.close();
	if (a.getstock() < 25)
	{
		int s= a.getstock();
		char* s2 = a.getID(); 
		System::String^ str = s.ToString();
		String^ str2 = gcnew String(s2);
		MessageBox::Show("Item " + str2 + " has only " + str + " stock left."); 
	}
	Banana bn;
	fstream f2("BAN01.dat");
	f2.read((char*)&bn, sizeof(bn));
	f2.close();
	if (bn.getstock() < 25)
	{
		int s2 = bn.getstock();
		char* s22 = bn.getID();
		System::String^ str2 = s2.ToString();
		String^ str22 = gcnew String(s22);
		MessageBox::Show("Item " + str22 + " has only " + str2 + " stock left.");
	}
	Carrots ct;
	fstream f1("CAR01.dat");
	f1.read((char*)&ct, sizeof(ct));
	f1.close();
	if (ct.getstock() < 25)
	{
		int s1 = ct.getstock();
		char* s21 = ct.getID();
		System::String^ str1 = s1.ToString();
		String^ str21 = gcnew String(s21);
		MessageBox::Show("Item " + str21 + " has only " + str1 + " stock left.");
	}
	Potato pt;
	fstream f3("POT01.dat");
	f3.read((char*)&pt, sizeof(pt));
	f3.close();
	if (pt.getstock() < 25)
	{
		int s3 = pt.getstock();
		char* s23 = pt.getID();
		System::String^ str3 = s3.ToString();
		String^ str23 = gcnew String(s23);
		MessageBox::Show("Item " + str23 + " has only " + str3 + " stock left.");
	}
	Shampoo shp;
	fstream f4("SHA01.dat");
	f4.read((char*)&shp, sizeof(shp));
	f4.close();
	if (shp.getstock() < 25)
	{
		int s4 = shp.getstock();
		char* s24 = shp.getID();
		System::String^ str4 = s4.ToString();
		String^ str24 = gcnew String(s24);
		MessageBox::Show("Item " + str24 + " has only " + str4 + " stock left.");
	}
	Soap so;
	fstream f5("SOA01.dat");
	f5.read((char*)&so, sizeof(so));
	f5.close();
	if (so.getstock() < 25)
	{
		int s5 = so.getstock();
		char* s25 = so.getID();
		System::String^ str5 = s5.ToString();
		String^ str25 = gcnew String(s25);
		MessageBox::Show("Item " + str25 + " has only " + str5 + " stock left.");
	}
	Toothbrush ttb;
	fstream f6("BRU01.dat");
	f6.read((char*)&ttb, sizeof(ttb));
	f6.close();
	if (ttb.getstock() < 25)
	{
		int s6 = ttb.getstock();
		char* s26 = ttb.getID();
		System::String^ str6 = s6.ToString();
		String^ str26 = gcnew String(s26);
		MessageBox::Show("Item " + str26 + " has only " + str6 + " stock left.");
	}
	Toothpaste ttp;
	fstream f7("PAS01.dat");
	f7.read((char*)&shp, sizeof(shp));
	f7.close();
	if (ttp.getstock() < 25)
	{
		int s7 = ttp.getstock();
		char* s27 = ttp.getID();
		System::String^ str7 = s7.ToString();
		String^ str27 = gcnew String(s27);
		MessageBox::Show("Item " + str27 + " has only " + str7 + " stock left.");
	}
	Lentils len;
	fstream f8("LEN01.dat");
	f8.read((char*)&len, sizeof(len));
	f8.close();
	if (len.getstock() < 25)
	{
		int s8 = len.getstock();
		char* s28 = len.getID();
		System::String^ str8 = s8.ToString();
		String^ str28 = gcnew String(s28);
		MessageBox::Show("Item " + str28 + " has only " + str8 + " stock left.");
	}
	Rice ric;
	fstream f9("RIC01.dat");
	f9.read((char*)&ric, sizeof(ric));
	f9.close();
	if (ric.getstock() < 25)
	{
		int s9 = ric.getstock();
		char* s29 = ric.getID();
		System::String^ str9 = s9.ToString();
		String^ str29 = gcnew String(s29);
		MessageBox::Show("Item " + str29 + " has only " + str9 + " stock left.");
	}
	Oil ol;
	fstream f10("OIL01.dat");
	f10.read((char*)&ol, sizeof(ol));
	f10.close();
	if (ol.getstock() < 25)
	{
		int s10 = ol.getstock();
		char* s210 = ol.getID();
		System::String^ str10 = s10.ToString();
		String^ str210 = gcnew String(s210);
		MessageBox::Show("Item " + str210 + " has only " + str10 + " stock left.");
	}
	Chicken chk;
	fstream f11("CHI01.dat");
	f11.read((char*)&chk, sizeof(chk));
	f11.close();
	if (chk.getstock() < 25)
	{
		int s11 = chk.getstock();
		char* s211 = chk.getID();
		System::String^ str11 = s11.ToString();
		String^ str211 = gcnew String(s211);
		MessageBox::Show("Item " + str211 + " has only " + str11 + " stock left.");
	}
	Flour flo;
	fstream f12("FLO01.dat");
	f12.read((char*)&flo, sizeof(flo));
	f12.close();
	if (flo.getstock() < 25)
	{
		int s12 = flo.getstock();
		char* s212 = flo.getID();
		System::String^ str12 = s12.ToString();
		String^ str212 = gcnew String(s212);
		MessageBox::Show("Item " + str212 + " has only " + str12 + " stock left.");
	}
	Milk mi;
	fstream f13("MIL01.dat");
	f13.read((char*)&mi, sizeof(mi));
	f13.close();
	if (mi.getstock() < 25)
	{
		int s13 = mi.getstock();
		char* s213 = mi.getID();
		System::String^ str13 = s13.ToString();
		String^ str213 = gcnew String(s213);
		MessageBox::Show("Item " + str213 + " has only " + str13 + " stock left.");
	}
	Egg eg;
	fstream f14("EGG01.dat");
	f14.read((char*)&eg, sizeof(eg));
	f14.close();
	if (eg.getstock() < 25)
	{
		int s14 = eg.getstock();
		char* s214 = eg.getID();
		System::String^ str14 = s14.ToString();
		String^ str214 = gcnew String(s214);
		MessageBox::Show("Item " + str214 + " has only " + str14 + " stock left.");
	}
	Butter btt;
	fstream f15("BUT01.dat");
	f15.read((char*)&btt, sizeof(btt));
	f15.close();
	if (btt.getstock() < 25)
	{
		int s15 = btt.getstock();
		char* s215 = btt.getID();
		System::String^ str15 = s15.ToString();
		String^ str215 = gcnew String(s215);
		MessageBox::Show("Item " + str215 + " has only " + str15 + " stock left.");
	}
	Cheese che;
	fstream f16("CHE01.dat");
	f16.read((char*)&che, sizeof(che));
	f16.close();
	if (che.getstock() < 25)
	{
		int s16 = che.getstock();
		char* s216 = che.getID();
		System::String^ str16 = s16.ToString();
		String^ str216 = gcnew String(s216);
		MessageBox::Show("Item " + str216 + " has only " + str16 + " stock left.");
	}
	


	 
}
private: System::Void HistBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	 
}
private: System::Void Op1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Options_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit(); 
}
private: System::Void checkBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); 
	CheckItem^ ct = gcnew CheckItem(this); 
	ct->Show(); 
}
};
}
