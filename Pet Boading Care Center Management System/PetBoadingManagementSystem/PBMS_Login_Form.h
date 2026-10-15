#pragma once

#include "PBMS_Dashboard.h"

namespace PetBoadingManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for PBMS_Login_Form
	/// </summary>
	public ref class PBMS_Login_Form : public System::Windows::Forms::Form
	{
	public:
		PBMS_Login_Form(void)
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
		~PBMS_Login_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	protected:

	protected:









	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textPassword;
	private: System::Windows::Forms::Button^ buttonLogin;
	private: System::Windows::Forms::TextBox^ textUsername;
	private: System::Windows::Forms::Button^ buttonClear;


	private:
		/// <summary>
		/// Helper method to round button edges
		/// </summary>
		void ApplyRoundedButton(System::Windows::Forms::Button^ btn, int radius)
		{
			GraphicsPath^ path = gcnew GraphicsPath();
			path->StartFigure();
			path->AddArc(0, 0, radius, radius, 180, 90);
			path->AddArc(btn->Width - radius, 0, radius, radius, 270, 90);
			path->AddArc(btn->Width - radius, btn->Height - radius, radius, radius, 0, 90);
			path->AddArc(0, btn->Height - radius, radius, radius, 90, 90);
			path->CloseFigure();

			btn->Region = gcnew System::Drawing::Region(path);
		}


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PBMS_Login_Form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->textPassword = (gcnew System::Windows::Forms::TextBox());
			this->textUsername = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkCyan;
			this->label1->Location = System::Drawing::Point(120, 160);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(470, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Pet Boarding Care Center Management System";
			this->label1->Click += gcnew System::EventHandler(this, &PBMS_Login_Form::label2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(323, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"LOGIN";
			this->label2->Click += gcnew System::EventHandler(this, &PBMS_Login_Form::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(191, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Username :";
			this->label3->Click += gcnew System::EventHandler(this, &PBMS_Login_Form::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(191, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Password :";
			this->label4->Click += gcnew System::EventHandler(this, &PBMS_Login_Form::label2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->panel1->Controls->Add(this->buttonClear);
			this->panel1->Controls->Add(this->buttonLogin);
			this->panel1->Controls->Add(this->textPassword);
			this->panel1->Controls->Add(this->textUsername);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 223);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(694, 238);
			this->panel1->TabIndex = 4;
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClear->Location = System::Drawing::Point(387, 131);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(39, 19);
			this->buttonClear->TabIndex = 4;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &PBMS_Login_Form::buttonClear_Click);
			// 
			// buttonLogin
			// 
			this->buttonLogin->BackColor = System::Drawing::Color::Navy;
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"SimSun", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogin->ForeColor = System::Drawing::Color::White;
			this->buttonLogin->Location = System::Drawing::Point(314, 165);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(72, 30);
			this->buttonLogin->TabIndex = 3;
			this->buttonLogin->Text = L"Login";
			this->buttonLogin->UseVisualStyleBackColor = false;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &PBMS_Login_Form::buttonLogin_Click);
			// 
			// textPassword
			// 
			this->textPassword->Location = System::Drawing::Point(276, 105);
			this->textPassword->MaxLength = 20;
			this->textPassword->Name = L"textPassword";
			this->textPassword->PasswordChar = '*';
			this->textPassword->Size = System::Drawing::Size(150, 20);
			this->textPassword->TabIndex = 1;
			this->textPassword->TextChanged += gcnew System::EventHandler(this, &PBMS_Login_Form::textBox1_TextChanged);
			// 
			// textUsername
			// 
			this->textUsername->Location = System::Drawing::Point(276, 54);
			this->textUsername->MaxLength = 20;
			this->textUsername->Name = L"textUsername";
			this->textUsername->Size = System::Drawing::Size(150, 20);
			this->textUsername->TabIndex = 0;
			this->textUsername->TextChanged += gcnew System::EventHandler(this, &PBMS_Login_Form::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(694, 138);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &PBMS_Login_Form::pictureBox1_Click_1);
			// 
			// PBMS_Login_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(694, 461);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PBMS_Login_Form";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &PBMS_Login_Form::PBMS_Login_Form_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PBMS_Login_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		ApplyRoundedButton(this->buttonLogin, 15);
		ApplyRoundedButton(this->buttonClear, 10);
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = textUsername->Text;
		String^ password = textPassword->Text;

		if (username == "admin" && password == "1234") {
			PBMS_Dashboard^ dashboard = gcnew PBMS_Dashboard();
			// when the dashboard closes (Logout), bring the login form back
			dashboard->FormClosed += gcnew FormClosedEventHandler(this, &PBMS_Login_Form::dashboard_FormClosed);
			dashboard->Show();
			this->Hide();
		}
		else {
			MessageBox::Show("Invalid username or password. Please try again.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);

			textUsername->Clear();
			textPassword->Clear();
			textUsername->Focus();
		}
	}
	private: System::Void dashboard_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		textUsername->Clear();
		textPassword->Clear();
		this->Show();
		textUsername->Focus();
	}
	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		textUsername->Clear();
		textPassword->Clear();
		textUsername->Focus();
	}
	};
}