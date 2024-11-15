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
	/// Summary for loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
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
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ tbId;
	private: System::Windows::Forms::TextBox^ tbPk;
	private: System::Windows::Forms::Button^ btnProceed;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::LinkLabel^ lblRegis;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginForm::typeid));
			/// this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tbId = (gcnew System::Windows::Forms::TextBox());
			this->tbPk = (gcnew System::Windows::Forms::TextBox());
			this->btnProceed = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->lblRegis = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			/*this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Location = System::Drawing::Point(229, 38);
			this->pictureBox1->MaximumSize = System::Drawing::Size(320, 460);
			this->pictureBox1->MinimumSize = System::Drawing::Size(320, 460);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(320, 460);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;*/
			// 
			// tbId
			// 
			this->tbId->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbId->Location = System::Drawing::Point(51, 196);
			this->tbId->Name = L"tbId";
			this->tbId->Size = System::Drawing::Size(218, 15);
			this->tbId->TabIndex = 1;
			this->tbId->TextChanged += gcnew System::EventHandler(this, &loginForm::tbId_TextChanged);
			// 
			// tbPk
			// 
			this->tbPk->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPk->Location = System::Drawing::Point(51, 261);
			this->tbPk->Name = L"tbPk";
			this->tbPk->PasswordChar = '*';
			this->tbPk->Size = System::Drawing::Size(218, 15);
			this->tbPk->TabIndex = 2;
			// 
			// btnProceed
			// 
			this->btnProceed->BackColor = System::Drawing::Color::Transparent;
			this->btnProceed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnProceed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnProceed->FlatAppearance->BorderSize = 0;
			this->btnProceed->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnProceed->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnProceed->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProceed->ForeColor = System::Drawing::Color::Transparent;
			this->btnProceed->Location = System::Drawing::Point(37, 327);
			this->btnProceed->Name = L"btnProceed";
			this->btnProceed->Size = System::Drawing::Size(246, 45);
			this->btnProceed->TabIndex = 3;
			this->btnProceed->UseVisualStyleBackColor = false;
			this->btnProceed->Click += gcnew System::EventHandler(this, &loginForm::btnProceed_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Transparent;
			this->btnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnExit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::Transparent;
			this->btnExit->Location = System::Drawing::Point(38, 377);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(246, 39);
			this->btnExit->TabIndex = 4;
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &loginForm::btnExit_Click);
			// 
			// lblRegis
			// 
			this->lblRegis->ActiveLinkColor = System::Drawing::Color::White;
			this->lblRegis->AutoSize = true;
			this->lblRegis->BackColor = System::Drawing::Color::Transparent;
			this->lblRegis->LinkColor = System::Drawing::Color::White;
			this->lblRegis->Location = System::Drawing::Point(100, 300);
			this->lblRegis->Name = L"lblRegis";
			this->lblRegis->Size = System::Drawing::Size(122, 13);
			this->lblRegis->TabIndex = 8;
			this->lblRegis->TabStop = true;
			this->lblRegis->Text = L"Don\'t have an account\?";
			this->lblRegis->VisitedLinkColor = System::Drawing::Color::White;
			this->lblRegis->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &loginForm::lblRegis_LinkClicked);
			// 
			// loginForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(320, 460);
			this->Controls->Add(this->lblRegis);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnProceed);
			this->Controls->Add(this->tbPk);
			this->Controls->Add(this->tbId);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(320, 460);
			this->MinimumSize = System::Drawing::Size(320, 460);
			this->Name = L"loginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"loginForm";
			/*(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();*/
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user = nullptr;

private: System::Void btnProceed_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ id = this->tbId->Text;
		String^ pk = this->tbPk->Text;

	if (id->Length == 0 || pk->Length == 0) {
			MessageBox::Show("Please fill in all fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
		String^ connString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE userId = @userId AND userPasskey = @userPasskey;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@userId", id);
			command.Parameters->AddWithValue("@userPasskey", pk);

			SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->userId = reader->GetString(2);
				user->userEmail = reader->GetString(3);
				user->userPasskey = reader->GetString(4);
				user->isAdmin = reader->GetBoolean(5);

				this->Close();
			}
		else {
			MessageBox::Show("Invalid credentials!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	catch (Exception^ e) {
			MessageBox::Show("Cannot establish connection to server.", "SQL Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

public: bool switchToRegister = false;
private: System::Void lblRegis_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
		}
private: System::Void tbId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
