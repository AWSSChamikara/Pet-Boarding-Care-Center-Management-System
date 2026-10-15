#pragma once

#include "PBMS_Board_Form.h"
#include "PBMS_Reclaim.h"
#include "PBMS_Update_Form.h"
#include "PBMS_Deatails.h"

namespace PetBoadingManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PBMS_Dashboard
	/// </summary>
	public ref class PBMS_Dashboard : public System::Windows::Forms::Form
	{
	public:
		PBMS_Dashboard(void)
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
		~PBMS_Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ buttonBorad;
	private: System::Windows::Forms::Button^ buttonReclaim;
	private: System::Windows::Forms::Button^ buttonUpdate;
	private: System::Windows::Forms::Button^ buttonDeatail;
	private: System::Windows::Forms::Button^ buttonLogout;





	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PBMS_Dashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonLogout = (gcnew System::Windows::Forms::Button());
			this->buttonBorad = (gcnew System::Windows::Forms::Button());
			this->buttonReclaim = (gcnew System::Windows::Forms::Button());
			this->buttonUpdate = (gcnew System::Windows::Forms::Button());
			this->buttonDeatail = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->buttonLogout);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(260, 461);
			this->panel1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Gabriola", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(26, 33);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(210, 306);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"\r\n\" The greatness of a nation and its moral progress can be judged by the way its"
				L" animals are treated. \"\r\n\r\n               ~Mahatma Gandhi~";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// buttonLogout
			// 
			this->buttonLogout->BackColor = System::Drawing::Color::Navy;
			this->buttonLogout->Font = (gcnew System::Drawing::Font(L"SimSun", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogout->ForeColor = System::Drawing::Color::White;
			this->buttonLogout->Location = System::Drawing::Point(161, 401);
			this->buttonLogout->Name = L"buttonLogout";
			this->buttonLogout->Size = System::Drawing::Size(75, 38);
			this->buttonLogout->TabIndex = 5;
			this->buttonLogout->Text = L"Logout";
			this->buttonLogout->UseVisualStyleBackColor = false;
			this->buttonLogout->Click += gcnew System::EventHandler(this, &PBMS_Dashboard::buttonLogout_Click);
			// 
			// buttonBorad
			// 
			this->buttonBorad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonBorad->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBorad->ForeColor = System::Drawing::Color::DimGray;
			this->buttonBorad->Location = System::Drawing::Point(406, 110);
			this->buttonBorad->Name = L"buttonBorad";
			this->buttonBorad->Size = System::Drawing::Size(150, 30);
			this->buttonBorad->TabIndex = 1;
			this->buttonBorad->Text = L"Board A Pet";
			this->buttonBorad->UseVisualStyleBackColor = false;
			this->buttonBorad->Click += gcnew System::EventHandler(this, &PBMS_Dashboard::buttonBorad_Click);
			// 
			// buttonReclaim
			// 
			this->buttonReclaim->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonReclaim->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonReclaim->ForeColor = System::Drawing::Color::Gray;
			this->buttonReclaim->Location = System::Drawing::Point(406, 160);
			this->buttonReclaim->Name = L"buttonReclaim";
			this->buttonReclaim->Size = System::Drawing::Size(150, 30);
			this->buttonReclaim->TabIndex = 2;
			this->buttonReclaim->Text = L"Reclaim A Pet";
			this->buttonReclaim->UseVisualStyleBackColor = false;
			this->buttonReclaim->Click += gcnew System::EventHandler(this, &PBMS_Dashboard::buttonReclaim_Click);
			// 
			// buttonUpdate
			// 
			this->buttonUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonUpdate->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonUpdate->ForeColor = System::Drawing::Color::Gray;
			this->buttonUpdate->Location = System::Drawing::Point(406, 210);
			this->buttonUpdate->Name = L"buttonUpdate";
			this->buttonUpdate->Size = System::Drawing::Size(150, 30);
			this->buttonUpdate->TabIndex = 3;
			this->buttonUpdate->Text = L"Update Details";
			this->buttonUpdate->UseVisualStyleBackColor = false;
			this->buttonUpdate->Click += gcnew System::EventHandler(this, &PBMS_Dashboard::buttonUpdate_Click);
			// 
			// buttonDeatail
			// 
			this->buttonDeatail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonDeatail->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDeatail->ForeColor = System::Drawing::Color::Gray;
			this->buttonDeatail->Location = System::Drawing::Point(406, 260);
			this->buttonDeatail->Name = L"buttonDeatail";
			this->buttonDeatail->Size = System::Drawing::Size(150, 30);
			this->buttonDeatail->TabIndex = 4;
			this->buttonDeatail->Text = L"View Details";
			this->buttonDeatail->UseVisualStyleBackColor = false;
			this->buttonDeatail->Click += gcnew System::EventHandler(this, &PBMS_Dashboard::buttonDeatail_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkCyan;
			this->label1->Location = System::Drawing::Point(295, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 40);
			this->label1->TabIndex = 6;
			this->label1->Text = L"WELCOME";
			this->label1->Click += gcnew System::EventHandler(this, &PBMS_Dashboard::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(260, 260);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(434, 201);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// PBMS_Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(694, 461);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonDeatail);
			this->Controls->Add(this->buttonUpdate);
			this->Controls->Add(this->buttonReclaim);
			this->Controls->Add(this->buttonBorad);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PBMS_Dashboard";
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &PBMS_Dashboard::PBMS_Dashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PBMS_Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void buttonBorad_Click(System::Object^ sender, System::EventArgs^ e) {
		PBMS_Board_Form^ boardForm = gcnew PBMS_Board_Form();
		this->Hide();
		boardForm->ShowDialog();
		this->Show();
	}
	private: System::Void buttonReclaim_Click(System::Object^ sender, System::EventArgs^ e) {
		PBMS_Reclaim^ reclaimForm = gcnew PBMS_Reclaim();
		this->Hide();
		reclaimForm->ShowDialog();
		this->Show();
	}
	private: System::Void buttonUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		PBMS_Update_Form^ updateForm = gcnew PBMS_Update_Form();
		this->Hide();
		updateForm->ShowDialog();
		this->Show();
	}
	private: System::Void buttonDeatail_Click(System::Object^ sender, System::EventArgs^ e) {
		PBMS_Deatails^ detailsForm = gcnew PBMS_Deatails();
		this->Hide();
		detailsForm->ShowDialog();
		this->Show();
	}
	};
}