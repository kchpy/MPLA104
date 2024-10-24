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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ tbId;
	private: System::Windows::Forms::TextBox^ tbPk;

	private: System::Windows::Forms::Button^ button2;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tbId = (gcnew System::Windows::Forms::TextBox());
			this->tbPk = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Location = System::Drawing::Point(229, 38);
			this->pictureBox1->MaximumSize = System::Drawing::Size(320, 460);
			this->pictureBox1->MinimumSize = System::Drawing::Size(320, 460);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(320, 460);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tbId
			// 
			this->tbId->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbId->Location = System::Drawing::Point(280, 235);
			this->tbId->Name = L"tbId";
			this->tbId->Size = System::Drawing::Size(218, 15);
			this->tbId->TabIndex = 1;
			// 
			// tbPk
			// 
			this->tbPk->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPk->Location = System::Drawing::Point(280, 300);
			this->tbPk->Name = L"tbPk";
			this->tbPk->PasswordChar = '*';
			this->tbPk->Size = System::Drawing::Size(218, 15);
			this->tbPk->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Location = System::Drawing::Point(354, 407);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Enter";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &loginForm::button2_Click);
			// 
			// loginForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tbPk);
			this->Controls->Add(this->tbId);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"loginForm";
			this->Text = L"loginForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user = nullptr;

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ id = this->tbId->Text;
		String^ pk = this->tbPk->Text;

		if(id->Length == 0 || pk->Length == 0){
			MessageBox::Show("Please fill in all fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=mpla104data;User ID=user;Password=userpass;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE userId = @userId AND userPasskey = @userPasskey;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@userId", id);
			command.Parameters->AddWithValue("@userPasskey", pk);

			SqlDataReader^ reader = command.ExecuteReader();
			if(reader->Read()){
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->userId = reader->GetString(2);
				user->userEmail = reader->GetString(3);
				user->userPasskey = reader->GetString(4);
				user->isAdmin = reader->GetByte(5);	

				this->Close();
			}
			else{
				MessageBox::Show("Id or passkey is incorrect.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ e){
			MessageBox::Show("Cannot establish connection to server.", "SQL Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
};
}
