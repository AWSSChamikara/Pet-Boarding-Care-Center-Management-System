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
	/// Summary for PBMS_Update_Form
	/// </summary>
	public ref class PBMS_Update_Form : public System::Windows::Forms::Form
	{
	public:
		PBMS_Update_Form(void)
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
		~PBMS_Update_Form()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ labelTitle;
	private: System::Windows::Forms::Label^ labelPick;
	private: System::Windows::Forms::Label^ labelOwner;
	private: System::Windows::Forms::Label^ labelPet;
	private: System::Windows::Forms::Label^ labelType;
	private: System::Windows::Forms::Label^ labelDays;
	private: System::Windows::Forms::Label^ labelContact;
	private: System::Windows::Forms::Label^ labelBill;
	private: System::Windows::Forms::ComboBox^ comboPets;
	private: System::Windows::Forms::ComboBox^ comboType;
	private: System::Windows::Forms::TextBox^ textOwner;
	private: System::Windows::Forms::TextBox^ textPet;
	private: System::Windows::Forms::TextBox^ textDays;
	private: System::Windows::Forms::TextBox^ textContact;
	private: System::Windows::Forms::Button^ buttonDash;
	private: System::Windows::Forms::Button^ buttonUpdate;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PBMS_Update_Form::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->labelPick = (gcnew System::Windows::Forms::Label());
			this->labelOwner = (gcnew System::Windows::Forms::Label());
			this->labelPet = (gcnew System::Windows::Forms::Label());
			this->labelType = (gcnew System::Windows::Forms::Label());
			this->labelDays = (gcnew System::Windows::Forms::Label());
			this->labelContact = (gcnew System::Windows::Forms::Label());
			this->labelBill = (gcnew System::Windows::Forms::Label());
			this->comboPets = (gcnew System::Windows::Forms::ComboBox());
			this->comboType = (gcnew System::Windows::Forms::ComboBox());
			this->textOwner = (gcnew System::Windows::Forms::TextBox());
			this->textPet = (gcnew System::Windows::Forms::TextBox());
			this->textDays = (gcnew System::Windows::Forms::TextBox());
			this->textContact = (gcnew System::Windows::Forms::TextBox());
			this->buttonDash = (gcnew System::Windows::Forms::Button());
			this->buttonUpdate = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->panel1->TabIndex = 0;
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitle->ForeColor = System::Drawing::Color::DarkCyan;
			this->labelTitle->Location = System::Drawing::Point(226, 12);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(257, 37);
			this->labelTitle->TabIndex = 1;
			this->labelTitle->Text = L"Update Pet Details";
			// 
			// labelPick
			// 
			this->labelPick->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->labelPick->Location = System::Drawing::Point(238, 70);
			this->labelPick->Name = L"labelPick";
			this->labelPick->Size = System::Drawing::Size(154, 20);
			this->labelPick->TabIndex = 2;
			this->labelPick->Text = L"Select Pet :";
			this->labelPick->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelOwner
			// 
			this->labelOwner->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->labelOwner->Location = System::Drawing::Point(238, 110);
			this->labelOwner->Name = L"labelOwner";
			this->labelOwner->Size = System::Drawing::Size(154, 20);
			this->labelOwner->TabIndex = 3;
			this->labelOwner->Text = L"Owner Name :";
			this->labelOwner->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelPet
			// 
			this->labelPet->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->labelPet->Location = System::Drawing::Point(238, 150);
			this->labelPet->Name = L"labelPet";
			this->labelPet->Size = System::Drawing::Size(154, 20);
			this->labelPet->TabIndex = 4;
			this->labelPet->Text = L"Pet Name :";
			this->labelPet->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelType
			// 
			this->labelType->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->labelType->Location = System::Drawing::Point(238, 190);
			this->labelType->Name = L"labelType";
			this->labelType->Size = System::Drawing::Size(154, 20);
			this->labelType->TabIndex = 5;
			this->labelType->Text = L"Type :";
			this->labelType->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelDays
			// 
			this->labelDays->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->labelDays->Location = System::Drawing::Point(238, 230);
			this->labelDays->Name = L"labelDays";
			this->labelDays->Size = System::Drawing::Size(154, 20);
			this->labelDays->TabIndex = 6;
			this->labelDays->Text = L"Days Boarded :";
			this->labelDays->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelContact
			// 
			this->labelContact->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->labelContact->Location = System::Drawing::Point(238, 270);
			this->labelContact->Name = L"labelContact";
			this->labelContact->Size = System::Drawing::Size(154, 20);
			this->labelContact->TabIndex = 7;
			this->labelContact->Text = L"Contact Number :";
			this->labelContact->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelBill
			// 
			this->labelBill->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBill->ForeColor = System::Drawing::Color::Navy;
			this->labelBill->Location = System::Drawing::Point(237, 330);
			this->labelBill->Name = L"labelBill";
			this->labelBill->Size = System::Drawing::Size(420, 30);
			this->labelBill->TabIndex = 8;
			// 
			// comboPets
			// 
			this->comboPets->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboPets->DropDownWidth = 430;
			this->comboPets->FormattingEnabled = true;
			this->comboPets->Location = System::Drawing::Point(398, 69);
			this->comboPets->Name = L"comboPets";
			this->comboPets->Size = System::Drawing::Size(260, 21);
			this->comboPets->TabIndex = 9;
			this->comboPets->SelectedIndexChanged += gcnew System::EventHandler(this, &PBMS_Update_Form::comboPets_SelectedIndexChanged);
			// 
			// comboType
			// 
			this->comboType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboType->FormattingEnabled = true;
			this->comboType->Location = System::Drawing::Point(398, 189);
			this->comboType->Name = L"comboType";
			this->comboType->Size = System::Drawing::Size(145, 21);
			this->comboType->TabIndex = 12;
			// 
			// textOwner
			// 
			this->textOwner->Location = System::Drawing::Point(398, 110);
			this->textOwner->MaxLength = 20;
			this->textOwner->Name = L"textOwner";
			this->textOwner->Size = System::Drawing::Size(145, 20);
			this->textOwner->TabIndex = 10;
			// 
			// textPet
			// 
			this->textPet->Location = System::Drawing::Point(398, 150);
			this->textPet->MaxLength = 20;
			this->textPet->Name = L"textPet";
			this->textPet->Size = System::Drawing::Size(145, 20);
			this->textPet->TabIndex = 11;
			// 
			// textDays
			// 
			this->textDays->Location = System::Drawing::Point(398, 230);
			this->textDays->MaxLength = 3;
			this->textDays->Name = L"textDays";
			this->textDays->Size = System::Drawing::Size(145, 20);
			this->textDays->TabIndex = 13;
			// 
			// textContact
			// 
			this->textContact->Location = System::Drawing::Point(398, 270);
			this->textContact->MaxLength = 10;
			this->textContact->Name = L"textContact";
			this->textContact->Size = System::Drawing::Size(145, 20);
			this->textContact->TabIndex = 14;
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
			this->buttonDash->TabIndex = 15;
			this->buttonDash->Text = L"Dashboard";
			this->buttonDash->UseVisualStyleBackColor = false;
			this->buttonDash->Click += gcnew System::EventHandler(this, &PBMS_Update_Form::buttonDash_Click);
			// 
			// buttonUpdate
			// 
			this->buttonUpdate->BackColor = System::Drawing::Color::Navy;
			this->buttonUpdate->Font = (gcnew System::Drawing::Font(L"SimSun", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonUpdate->ForeColor = System::Drawing::Color::White;
			this->buttonUpdate->Location = System::Drawing::Point(562, 394);
			this->buttonUpdate->Name = L"buttonUpdate";
			this->buttonUpdate->Size = System::Drawing::Size(93, 36);
			this->buttonUpdate->TabIndex = 16;
			this->buttonUpdate->Text = L"Update";
			this->buttonUpdate->UseVisualStyleBackColor = false;
			this->buttonUpdate->Click += gcnew System::EventHandler(this, &PBMS_Update_Form::buttonUpdate_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(196, 461);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// PBMS_Update_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(694, 461);
			this->Controls->Add(this->buttonUpdate);
			this->Controls->Add(this->buttonDash);
			this->Controls->Add(this->textContact);
			this->Controls->Add(this->textDays);
			this->Controls->Add(this->comboType);
			this->Controls->Add(this->textPet);
			this->Controls->Add(this->textOwner);
			this->Controls->Add(this->comboPets);
			this->Controls->Add(this->labelBill);
			this->Controls->Add(this->labelContact);
			this->Controls->Add(this->labelDays);
			this->Controls->Add(this->labelType);
			this->Controls->Add(this->labelPet);
			this->Controls->Add(this->labelOwner);
			this->Controls->Add(this->labelPick);
			this->Controls->Add(this->labelTitle);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PBMS_Update_Form";
			this->Text = L"Update Pet Details";
			this->Load += gcnew System::EventHandler(this, &PBMS_Update_Form::PBMS_Update_Form_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void LoadPets(int selectId)
	{
		comboPets->Items->Clear();
		try
		{
			List<Animal^>^ pets = DatabaseHelper::GetAllAnimals();
			for each (Animal ^ pet in pets)
			{
				int index = comboPets->Items->Add(pet);    // shows pet->ToString()
				if (pet->PetId == selectId)
					comboPets->SelectedIndex = index;
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Could not load pets: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (comboPets->SelectedIndex < 0)
			ClearFields();
	}

	private: void ClearFields()
	{
		textOwner->Clear();
		textPet->Clear();
		textDays->Clear();
		textContact->Clear();
		comboType->SelectedIndex = -1;
		labelBill->Text = "";
	}

	private: System::Void PBMS_Update_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		comboType->Items->Add("Dog");
		comboType->Items->Add("Cat");
		comboType->Items->Add("Rabbit");
		comboType->Items->Add("Parrot");
		LoadPets(-1);
	}

	private: System::Void comboPets_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Animal^ pet = dynamic_cast<Animal^>(comboPets->SelectedItem);
		if (pet == nullptr)
		{
			ClearFields();
			return;
		}
		textOwner->Text = pet->OwnerName;
		textPet->Text = pet->PetName;
		comboType->SelectedItem = pet->GetAnimalType();
		textDays->Text = pet->DaysBoarded.ToString();
		textContact->Text = pet->ContactNo;

		double bill = pet->CalculateBill();
		labelBill->Text = "Current bill: Rs. " + bill.ToString("N2");
	}

	private: System::Void buttonUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		Animal^ selected = dynamic_cast<Animal^>(comboPets->SelectedItem);
		if (selected == nullptr)
		{
			MessageBox::Show("Please select a pet first.", "No Pet Selected", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		int days;
		if (!Int32::TryParse(textDays->Text, days))
		{
			MessageBox::Show("Number of days must be a whole number.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			textDays->Focus();
			return;
		}

		try
		{

			Animal^ pet = AnimalFactory::Create(comboType->Text, textPet->Text, textOwner->Text, textContact->Text, days);
			pet->PetId = selected->PetId;
			pet->OwnerId = selected->OwnerId;

			DatabaseHelper::UpdateAnimal(pet);

			MessageBox::Show("Pet details updated successfully!", "Updated", MessageBoxButtons::OK, MessageBoxIcon::Information);
			LoadPets(pet->PetId);
		}
		catch (ArgumentException^ ex)
		{
			MessageBox::Show(ex->Message, "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Could not update the pet: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void buttonDash_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
