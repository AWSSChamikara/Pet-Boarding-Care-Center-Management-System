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
	/// Summary for PBMS_Deatails
	/// </summary>
	public ref class PBMS_Deatails : public System::Windows::Forms::Form
	{
	public:
		PBMS_Deatails(void)
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
		~PBMS_Deatails()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ labelTitle;
	private: System::Windows::Forms::ListBox^ listPets;
	private: System::Windows::Forms::Label^ labelSummary;
	private: System::Windows::Forms::Button^ buttonDash;
	private: System::Windows::Forms::Button^ buttonRefresh;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PBMS_Deatails::typeid));
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->listPets = (gcnew System::Windows::Forms::ListBox());
			this->labelSummary = (gcnew System::Windows::Forms::Label());
			this->buttonDash = (gcnew System::Windows::Forms::Button());
			this->buttonRefresh = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitle->ForeColor = System::Drawing::Color::DarkCyan;
			this->labelTitle->Location = System::Drawing::Point(20, 15);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(253, 37);
			this->labelTitle->TabIndex = 0;
			this->labelTitle->Text = L"Pets At The Centre";
			// 
			// listPets
			// 
			this->listPets->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->listPets->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F));
			this->listPets->FormattingEnabled = true;
			this->listPets->HorizontalScrollbar = true;
			this->listPets->ItemHeight = 17;
			this->listPets->Location = System::Drawing::Point(20, 70);
			this->listPets->Name = L"listPets";
			this->listPets->Size = System::Drawing::Size(654, 259);
			this->listPets->TabIndex = 1;
			this->listPets->SelectedIndexChanged += gcnew System::EventHandler(this, &PBMS_Deatails::listPets_SelectedIndexChanged);
			// 
			// labelSummary
			// 
			this->labelSummary->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSummary->ForeColor = System::Drawing::Color::Navy;
			this->labelSummary->Location = System::Drawing::Point(20, 345);
			this->labelSummary->Name = L"labelSummary";
			this->labelSummary->Size = System::Drawing::Size(654, 28);
			this->labelSummary->TabIndex = 2;
			// 
			// buttonDash
			// 
			this->buttonDash->BackColor = System::Drawing::Color::Navy;
			this->buttonDash->Font = (gcnew System::Drawing::Font(L"SimSun", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDash->ForeColor = System::Drawing::Color::White;
			this->buttonDash->Location = System::Drawing::Point(20, 394);
			this->buttonDash->Name = L"buttonDash";
			this->buttonDash->Size = System::Drawing::Size(93, 36);
			this->buttonDash->TabIndex = 3;
			this->buttonDash->Text = L"Dashboard";
			this->buttonDash->UseVisualStyleBackColor = false;
			this->buttonDash->Click += gcnew System::EventHandler(this, &PBMS_Deatails::buttonDash_Click);
			// 
			// buttonRefresh
			// 
			this->buttonRefresh->BackColor = System::Drawing::Color::Navy;
			this->buttonRefresh->Font = (gcnew System::Drawing::Font(L"SimSun", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRefresh->ForeColor = System::Drawing::Color::White;
			this->buttonRefresh->Location = System::Drawing::Point(581, 394);
			this->buttonRefresh->Name = L"buttonRefresh";
			this->buttonRefresh->Size = System::Drawing::Size(93, 36);
			this->buttonRefresh->TabIndex = 4;
			this->buttonRefresh->Text = L"Refresh";
			this->buttonRefresh->UseVisualStyleBackColor = false;
			this->buttonRefresh->Click += gcnew System::EventHandler(this, &PBMS_Deatails::buttonRefresh_Click);
			// 
			// PBMS_Deatails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->ClientSize = System::Drawing::Size(694, 461);
			this->Controls->Add(this->buttonRefresh);
			this->Controls->Add(this->buttonDash);
			this->Controls->Add(this->labelSummary);
			this->Controls->Add(this->listPets);
			this->Controls->Add(this->labelTitle);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PBMS_Deatails";
			this->Text = L"Pet Details";
			this->Load += gcnew System::EventHandler(this, &PBMS_Deatails::PBMS_Deatails_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void LoadPets()
	{
		listPets->Items->Clear();
		double totalDue = 0;
		try
		{
			List<Animal^>^ pets = DatabaseHelper::GetAllAnimals();

			if (pets->Count == 0)
				listPets->Items->Add("No pets are currently boarded.");

			for each (Animal ^ pet in pets)
			{
				listPets->Items->Add(pet);            // ListBox shows pet->ToString()
				totalDue += pet->CalculateBill();     // polymorphic call
			}

			int count = pets->Count;
			labelSummary->Text = "Pets at the centre: " + count.ToString() + "      Total amount due: Rs. " + totalDue.ToString("N2");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Could not load pets: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void PBMS_Deatails_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadPets();
	}

	private: System::Void buttonRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
		LoadPets();
	}

	private: System::Void buttonDash_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void listPets_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
