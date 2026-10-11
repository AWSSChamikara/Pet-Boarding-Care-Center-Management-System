#pragma once
#include "Database_Link.h"

namespace PetBoadingManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PBMS_Reclaim
	/// </summary>
	public ref class PBMS_Reclaim : public System::Windows::Forms::Form
	{
	public:
		PBMS_Reclaim(void)
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
		~PBMS_Reclaim()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelPets;
	private: System::Windows::Forms::ListBox^ listPets;
	private: System::Windows::Forms::Label^ labelBill;
	private: System::Windows::Forms::Button^ buttonDash;
	private: System::Windows::Forms::Button^ buttonReclaim;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PBMS_Reclaim::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelPets = (gcnew System::Windows::Forms::Label());
			this->listPets = (gcnew System::Windows::Forms::ListBox());
			this->labelBill = (gcnew System::Windows::Forms::Label());
			this->buttonDash = (gcnew System::Windows::Forms::Button());
			this->buttonReclaim = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-39, 112);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(247, 346);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(211, 461);
			this->panel1->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkCyan;
			this->label5->Location = System::Drawing::Point(231, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 37);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Reclaim A Pet";
			// 
			// labelPets
			// 
			this->labelPets->AutoSize = true;
			this->labelPets->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->labelPets->Location = System::Drawing::Point(231, 72);
			this->labelPets->Name = L"labelPets";
			this->labelPets->Size = System::Drawing::Size(190, 17);
			this->labelPets->TabIndex = 8;
			this->labelPets->Text = L"Pets currently at the centre :";
			// 
			// listPets
			// 
			this->listPets->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->listPets->FormattingEnabled = true;
			this->listPets->HorizontalScrollbar = true;
			this->listPets->ItemHeight = 15;
			this->listPets->Location = System::Drawing::Point(231, 96);
			this->listPets->Name = L"listPets";
			this->listPets->Size = System::Drawing::Size(440, 214);
			this->listPets->TabIndex = 9;
			this->listPets->SelectedIndexChanged += gcnew System::EventHandler(this, &PBMS_Reclaim::listPets_SelectedIndexChanged);
			// 
			// labelBill
			// 
			this->labelBill->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBill->ForeColor = System::Drawing::Color::Navy;
			this->labelBill->Location = System::Drawing::Point(231, 325);
			this->labelBill->Name = L"labelBill";
			this->labelBill->Size = System::Drawing::Size(440, 48);
			this->labelBill->TabIndex = 10;
			this->labelBill->Text = L"Select a pet to see the amount due.";
			// 
			// buttonDash
			// 
			this->buttonDash->BackColor = System::Drawing::Color::Navy;
			this->buttonDash->Font = (gcnew System::Drawing::Font(L"SimSun", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDash->ForeColor = System::Drawing::Color::White;
			this->buttonDash->Location = System::Drawing::Point(250, 394);
			this->buttonDash->Name = L"buttonDash";
			this->buttonDash->Size = System::Drawing::Size(93, 36);
			this->buttonDash->TabIndex = 6;
			this->buttonDash->Text = L"Dashboard";
			this->buttonDash->UseVisualStyleBackColor = false;
			this->buttonDash->Click += gcnew System::EventHandler(this, &PBMS_Reclaim::buttonDash_Click);
			// 
			// buttonReclaim
			// 
			this->buttonReclaim->BackColor = System::Drawing::Color::Navy;
			this->buttonReclaim->Font = (gcnew System::Drawing::Font(L"SimSun", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonReclaim->ForeColor = System::Drawing::Color::White;
			this->buttonReclaim->Location = System::Drawing::Point(562, 394);
			this->buttonReclaim->Name = L"buttonReclaim";
			this->buttonReclaim->Size = System::Drawing::Size(93, 36);
			this->buttonReclaim->TabIndex = 7;
			this->buttonReclaim->Text = L"Reclaim";
			this->buttonReclaim->UseVisualStyleBackColor = false;
			this->buttonReclaim->Click += gcnew System::EventHandler(this, &PBMS_Reclaim::buttonReclaim_Click);
			// 
			// PBMS_Reclaim
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(694, 461);
			this->Controls->Add(this->labelBill);
			this->Controls->Add(this->listPets);
			this->Controls->Add(this->labelPets);
			this->Controls->Add(this->buttonReclaim);
			this->Controls->Add(this->buttonDash);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Name = L"PBMS_Reclaim";
			this->Text = L"Reclaim A Pet";
			this->Load += gcnew System::EventHandler(this, &PBMS_Reclaim::PBMS_Reclaim_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void LoadPets()
	{
		listPets->Items->Clear();
		labelBill->Text = "Select a pet to see the amount due.";
		try
		{
			List<Animal^>^ pets = DatabaseHelper::GetAllAnimals();
			for each (Animal ^ pet in pets)
				listPets->Items->Add(pet);     // ListBox shows pet->ToString()
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Could not load pets: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void PBMS_Reclaim_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadPets();
	}

	private: System::Void listPets_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Animal^ pet = dynamic_cast<Animal^>(listPets->SelectedItem);
		if (pet == nullptr) return;

		// Polymorphism: rate and bill depend on the real type (Dog, Cat ...)
		double rate = pet->GetDailyRate();
		double bill = pet->CalculateBill();
		int days = pet->DaysBoarded;
		labelBill->Text = pet->PetName + ":  " + days.ToString() + " day(s) x Rs. " + rate.ToString("N2") +
			"  =  Rs. " + bill.ToString("N2");
	}

	private: System::Void buttonReclaim_Click(System::Object^ sender, System::EventArgs^ e) {
		Animal^ pet = dynamic_cast<Animal^>(listPets->SelectedItem);
		if (pet == nullptr)
		{
			MessageBox::Show("Please select a pet to reclaim.", "No Pet Selected", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		double bill = pet->CalculateBill();
		String^ question = "Hand " + pet->PetName + " back to " + pet->OwnerName + "?" + Environment::NewLine +
			Environment::NewLine + "Total amount due: Rs. " + bill.ToString("N2");

		if (MessageBox::Show(question, "Confirm Reclaim", MessageBoxButtons::YesNo, MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
			return;

		try
		{
			DatabaseHelper::DeleteAnimal(pet->PetId);
			MessageBox::Show("Pet reclaimed successfully. Amount collected: Rs. " + bill.ToString("N2"),
				"Reclaim Complete", MessageBoxButtons::OK, MessageBoxIcon::Information);
			LoadPets();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Could not reclaim the pet: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void buttonDash_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
