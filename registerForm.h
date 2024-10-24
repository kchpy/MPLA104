#pragma once
#include "user.h"

namespace MPLA104 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for registerForm
	/// </summary>
	public ref class registerForm : public System::Windows::Forms::Form
	{
	public:
		registerForm(void)
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
		~registerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbRegisName;
	private: System::Windows::Forms::TextBox^ tbRegisID;
	private: System::Windows::Forms::TextBox^ tbRegisMail;
	private: System::Windows::Forms::TextBox^ tbRegisPk1;
	private: System::Windows::Forms::TextBox^ tbRegisPk2;
	private: System::Windows::Forms::Button^ btnRegisProc;
	private: System::Windows::Forms::Button^ btnRegisExit;
	private: System::Windows::Forms::LinkLabel^ lblRegis;



	protected:





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registerForm::typeid));
			this->tbRegisName = (gcnew System::Windows::Forms::TextBox());
			this->tbRegisID = (gcnew System::Windows::Forms::TextBox());
			this->tbRegisMail = (gcnew System::Windows::Forms::TextBox());
			this->tbRegisPk1 = (gcnew System::Windows::Forms::TextBox());
			this->tbRegisPk2 = (gcnew System::Windows::Forms::TextBox());
			this->btnRegisProc = (gcnew System::Windows::Forms::Button());
			this->btnRegisExit = (gcnew System::Windows::Forms::Button());
			this->lblRegis = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// tbRegisName
			// 
			this->tbRegisName->BackColor = System::Drawing::Color::White;
			this->tbRegisName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbRegisName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbRegisName->Location = System::Drawing::Point(52, 128);
			this->tbRegisName->Name = L"tbRegisName";
			this->tbRegisName->Size = System::Drawing::Size(216, 15);
			this->tbRegisName->TabIndex = 0;
			this->tbRegisName->TextChanged += gcnew System::EventHandler(this, &registerForm::tbRegisName_TextChanged);
			// 
			// tbRegisID
			// 
			this->tbRegisID->BackColor = System::Drawing::Color::White;
			this->tbRegisID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbRegisID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbRegisID->Location = System::Drawing::Point(52, 177);
			this->tbRegisID->Name = L"tbRegisID";
			this->tbRegisID->Size = System::Drawing::Size(216, 15);
			this->tbRegisID->TabIndex = 1;
			// 
			// tbRegisMail
			// 
			this->tbRegisMail->BackColor = System::Drawing::Color::White;
			this->tbRegisMail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbRegisMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbRegisMail->Location = System::Drawing::Point(52, 228);
			this->tbRegisMail->Name = L"tbRegisMail";
			this->tbRegisMail->Size = System::Drawing::Size(216, 15);
			this->tbRegisMail->TabIndex = 2;
			// 
			// tbRegisPk1
			// 
			this->tbRegisPk1->BackColor = System::Drawing::Color::White;
			this->tbRegisPk1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbRegisPk1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbRegisPk1->Location = System::Drawing::Point(52, 278);
			this->tbRegisPk1->Name = L"tbRegisPk1";
			this->tbRegisPk1->PasswordChar = '*';
			this->tbRegisPk1->Size = System::Drawing::Size(216, 15);
			this->tbRegisPk1->TabIndex = 3;
			// 
			// tbRegisPk2
			// 
			this->tbRegisPk2->BackColor = System::Drawing::Color::White;
			this->tbRegisPk2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbRegisPk2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbRegisPk2->Location = System::Drawing::Point(52, 329);
			this->tbRegisPk2->Name = L"tbRegisPk2";
			this->tbRegisPk2->PasswordChar = '*';
			this->tbRegisPk2->Size = System::Drawing::Size(216, 15);
			this->tbRegisPk2->TabIndex = 4;
			// 
			// btnRegisProc
			// 
			this->btnRegisProc->BackColor = System::Drawing::Color::Transparent;
			this->btnRegisProc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRegisProc->FlatAppearance->BorderSize = 0;
			this->btnRegisProc->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnRegisProc->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnRegisProc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegisProc->Location = System::Drawing::Point(42, 372);
			this->btnRegisProc->Name = L"btnRegisProc";
			this->btnRegisProc->Size = System::Drawing::Size(111, 43);
			this->btnRegisProc->TabIndex = 5;
			this->btnRegisProc->UseVisualStyleBackColor = false;
			this->btnRegisProc->Click += gcnew System::EventHandler(this, &registerForm::btnRegisProc_Click);
			// 
			// btnRegisExit
			// 
			this->btnRegisExit->BackColor = System::Drawing::Color::Transparent;
			this->btnRegisExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRegisExit->FlatAppearance->BorderSize = 0;
			this->btnRegisExit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnRegisExit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnRegisExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegisExit->Location = System::Drawing::Point(169, 372);
			this->btnRegisExit->Name = L"btnRegisExit";
			this->btnRegisExit->Size = System::Drawing::Size(111, 43);
			this->btnRegisExit->TabIndex = 6;
			this->btnRegisExit->UseVisualStyleBackColor = false;
			this->btnRegisExit->Click += gcnew System::EventHandler(this, &registerForm::btnRegisExit_Click);
			// 
			// lblRegis
			// 
			this->lblRegis->ActiveLinkColor = System::Drawing::Color::White;
			this->lblRegis->AutoSize = true;
			this->lblRegis->BackColor = System::Drawing::Color::Transparent;
			this->lblRegis->LinkColor = System::Drawing::Color::White;
			this->lblRegis->Location = System::Drawing::Point(95, 431);
			this->lblRegis->Name = L"lblRegis";
			this->lblRegis->Size = System::Drawing::Size(132, 13);
			this->lblRegis->TabIndex = 7;
			this->lblRegis->TabStop = true;
			this->lblRegis->Text = L"Already have an account\?";
			this->lblRegis->VisitedLinkColor = System::Drawing::Color::White;
			this->lblRegis->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &registerForm::linkLabel1_LinkClicked);
			// 
			// registerForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(320, 460);
			this->Controls->Add(this->lblRegis);
			this->Controls->Add(this->btnRegisExit);
			this->Controls->Add(this->btnRegisProc);
			this->Controls->Add(this->tbRegisPk2);
			this->Controls->Add(this->tbRegisPk1);
			this->Controls->Add(this->tbRegisMail);
			this->Controls->Add(this->tbRegisID);
			this->Controls->Add(this->tbRegisName);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"registerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"registerForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegisExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	public: bool switchToLogin = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToLogin = true;
		this->Close();
	}
	public: User^ user = nullptr;

private: System::Void btnRegisProc_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = tbRegisName->Text;
	String^ id = tbRegisID->Text;
	String^ mail = tbRegisMail->Text;
	String^ passkey = tbRegisPk1->Text;
	String^ cPasskey = tbRegisPk2->Text;
	bool isAdmin = false;

	if(name->Length == 0 || id->Length == 0 || mail->Length == 0 || passkey->Length == 0 || cPasskey->Length == 0) {
		MessageBox::Show("Please fill all fields", "registerForm.h", MessageBoxButtons::OK);
	}

	if (id->Length != 10 || !id->StartsWith("2")) {
		MessageBox::Show("Invalid ID.", "registerForm.h", MessageBoxButtons::OK);
		return;
	}

	while(passkey != cPasskey) {
		MessageBox::Show("Passwords do not match", "registerForm.h", MessageBoxButtons::OK);
		return;
	}
	
	try {
		String^ connString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ query = "INSERT INTO users" + "(name, userId, userEmail, userPasskey, isAdmin) VALUES" + "(@name, @id, @mail, @passkey, @isAdmin);";

		SqlCommand command(query, % sqlConn);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@id", id);
		command.Parameters->AddWithValue("@mail", mail);
		command.Parameters->AddWithValue("@passkey", passkey);
		command.Parameters->AddWithValue("@isAdmin", isAdmin);

		command.ExecuteNonQuery();

		user = gcnew User;
		user->name = name;
		user->userId = id;
		user->userEmail = mail;
		user->userPasskey = passkey;
		user->isAdmin = isAdmin;

		this->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "registerForm.h", MessageBoxButtons::OK);
	}
}
private: System::Void tbRegisName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
