#pragma once
#include "Database_Link.h"

namespace PetBoadingManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PBMS_Board_Form
	/// </summary>
	public ref class PBMS_Board_Form : public System::Windows::Forms::Form
	{
	public:
		PBMS_Board_Form(void)
		{
			InitializeComponent();
			//
			clearTimer = gcnew System::Windows::Forms::Timer();
			clearTimer->Interval = 5000;
			clearTimer->Tick += gcnew System::EventHandler(this, &PBMS_Board_Form::clearTimer_Tick);
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PBMS_Board_Form()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Timer^ clearTimer;

	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ radioDog;
	private: System::Windows::Forms::RadioButton^ radioCat;
	private: System::Windows::Forms::RadioButton^ radioRabbit;
	private: System::Windows::Forms::RadioButton^ radioParrot;



	private: System::Windows::Forms::TextBox^ textOwner;
	private: System::Windows::Forms::TextBox^ textPet;
	private: System::Windows::Forms::TextBox^ textDays;
	private: System::Windows::Forms::TextBox^ textPN;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonDash;
	private: System::Windows::Forms::Label^ labelBoardDis;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PBMS_Board_Form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->radioDog = (gcnew System::Windows::Forms::RadioButton());
			this->radioCat = (gcnew System::Windows::Forms::RadioButton());
			this->radioRabbit = (gcnew System::Windows::Forms::RadioButton());
			this->radioParrot = (gcnew System::Windows::Forms::RadioButton());
			this->textOwner = (gcnew System::Windows::Forms::TextBox());
			this->textPet = (gcnew System::Windows::Forms::TextBox());
			this->textDays = (gcnew System::Windows::Forms::TextBox());
			this->textPN = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDash = (gcnew System::Windows::Forms::Button());
			this->labelBoardDis = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(303, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Owner Name :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(319, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Pet Name :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(349, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 17);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Type :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(238, 278);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 17);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Number of Days Board :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(276, 318);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 17);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Contact Number :";
			// 
			// radioDog
			// 
			this->radioDog->AutoSize = true;
			this->radioDog->Location = System::Drawing::Point(398, 148);
			this->radioDog->Name = L"radioDog";
			this->radioDog->Size = System::Drawing::Size(45, 17);
			this->radioDog->TabIndex = 0;
			this->radioDog->TabStop = true;
			this->radioDog->Text = L"Dog";
			this->radioDog->UseVisualStyleBackColor = true;
			// 
			// radioCat
			// 
			this->radioCat->AutoSize = true;
			this->radioCat->Location = System::Drawing::Point(398, 178);
			this->radioCat->Name = L"radioCat";
			this->radioCat->Size = System::Drawing::Size(41, 17);
			this->radioCat->TabIndex = 1;
			this->radioCat->TabStop = true;
			this->radioCat->Text = L"Cat";
			this->radioCat->UseVisualStyleBackColor = true;
			// 
			// radioRabbit
			// 
			this->radioRabbit->AutoSize = true;
			this->radioRabbit->Location = System::Drawing::Point(398, 208);
			this->radioRabbit->Name = L"radioRabbit";
			this->radioRabbit->Size = System::Drawing::Size(56, 17);
			this->radioRabbit->TabIndex = 2;
			this->radioRabbit->TabStop = true;
			this->radioRabbit->Text = L"Rabbit";
			this->radioRabbit->UseVisualStyleBackColor = true;
			// 
			// radioParrot
			// 
			this->radioParrot->AutoSize = true;
			this->radioParrot->Location = System::Drawing::Point(398, 238);
			this->radioParrot->Name = L"radioParrot";
			this->radioParrot->Size = System::Drawing::Size(53, 17);
			this->radioParrot->TabIndex = 3;
			this->radioParrot->TabStop = true;
			this->radioParrot->Text = L"Parrot";
			this->radioParrot->UseVisualStyleBackColor = true;
			// 
			// textOwner
			// 
			this->textOwner->Location = System::Drawing::Point(398, 68);
			this->textOwner->MaxLength = 20;
			this->textOwner->Name = L"textOwner";
			this->textOwner->Size = System::Drawing::Size(145, 20);
			this->textOwner->TabIndex = 2;
			// 
			// textPet
			// 
			this->textPet->Location = System::Drawing::Point(398, 108);
			this->textPet->MaxLength = 20;
			this->textPet->Name = L"textPet";
			this->textPet->Size = System::Drawing::Size(145, 20);
			this->textPet->TabIndex = 2;
			// 
			// textDays
			// 
			this->textDays->Location = System::Drawing::Point(398, 278);
			this->textDays->MaxLength = 3;
			this->textDays->Name = L"textDays";
			this->textDays->Size = System::Drawing::Size(145, 20);
			this->textDays->TabIndex = 2;
			// 
			// textPN
			// 
			this->textPN->Location = System::Drawing::Point(398, 318);
			this->textPN->MaxLength = 10;
			this->textPN->Name = L"textPN";
			this->textPN->Size = System::Drawing::Size(145, 20);
			this->textPN->TabIndex = 2;
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
			this->panel1->TabIndex = 3;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PBMS_Board_Form::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-45, 115);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(247, 346);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkCyan;
			this->label5->Location = System::Drawing::Point(226, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(169, 37);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Board A Pet";
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::Navy;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"SimSun", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd->ForeColor = System::Drawing::Color::White;
			this->buttonAdd->Location = System::Drawing::Point(562, 394);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(93, 36);
			this->buttonAdd->TabIndex = 4;
			this->buttonAdd->Text = L"ADD Pet";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &PBMS_Board_Form::buttonAdd_Click);
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
			this->buttonDash->TabIndex = 4;
			this->buttonDash->Text = L"Dashboard";
			this->buttonDash->UseVisualStyleBackColor = false;
			this->buttonDash->Click += gcnew System::EventHandler(this, &PBMS_Board_Form::buttonDash_Click);
			// 
			// labelBoardDis
			// 
			this->labelBoardDis->AutoSize = true;
			this->labelBoardDis->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBoardDis->Location = System::Drawing::Point(358, 364);
			this->labelBoardDis->Name = L"labelBoardDis";
			this->labelBoardDis->Size = System::Drawing::Size(14, 21);
			this->labelBoardDis->TabIndex = 0;
			this->labelBoardDis->Text = L" ";
			// 
			// PBMS_Board_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(694, 461);
			this->Controls->Add(this->buttonDash);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textPN);
			this->Controls->Add(this->textDays);
			this->Controls->Add(this->textPet);
			this->Controls->Add(this->textOwner);
			this->Controls->Add(this->radioParrot);
			this->Controls->Add(this->radioRabbit);
			this->Controls->Add(this->radioCat);
			this->Controls->Add(this->radioDog);
			this->Controls->Add(this->labelBoardDis);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PBMS_Board_Form";
			this->Text = L"Pet Board Form";
			this->Load += gcnew System::EventHandler(this, &PBMS_Board_Form::PBMS_Board_Form_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		// 1. which animal type is ticked?
		String^ type = "";
		if (radioDog->Checked)         type = "Dog";
		else if (radioCat->Checked)    type = "Cat";
		else if (radioRabbit->Checked) type = "Rabbit";
		else if (radioParrot->Checked) type = "Parrot";

		int days;
		if (!Int32::TryParse(textDays->Text, days))
		{
			MessageBox::Show("Number of days must be a whole number.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			textDays->Focus();
			return;
		}

		try
		{
			Animal^ pet = AnimalFactory::Create(type, textPet->Text, textOwner->Text, textPN->Text, days);

			DatabaseHelper::AddAnimal(pet);

			double bill = pet->CalculateBill();
			labelBoardDis->Text = "Pet Added! Bill: Rs. " + bill.ToString("N2");
			clearTimer->Stop();
			clearTimer->Start();
			ClearForm();
		}
		catch (ArgumentException^ ex)
		{
			MessageBox::Show(ex->Message, "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Could not save the pet: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: void ClearForm()
	{
		textOwner->Clear();
		textPet->Clear();
		textDays->Clear();
		textPN->Clear();
		radioDog->Checked = false;
		radioCat->Checked = false;
		radioRabbit->Checked = false;
		radioParrot->Checked = false;
		textOwner->Focus();
	}

	private: System::Void buttonDash_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void clearTimer_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		labelBoardDis->Text = "";
		clearTimer->Stop();
	}
	private: System::Void PBMS_Board_Form_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}
