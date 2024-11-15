#pragma once
#include "user.h"
#include "courseForm.h"
#include "clientAlertForm.h"

namespace MPLA104 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for dashboardForm
	/// </summary>
	public ref class dashboardForm : public System::Windows::Forms::Form
	{
	private:
		User^ userTrue;

	public:
		dashboardForm(User^ user)
		{
			InitializeComponent();

			lblH1->Text = "Welcome, " + user->name;

			userTrue = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~dashboardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblH1;
	private: System::Windows::Forms::Button^ coursesButton;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnExit;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dashboardForm::typeid));
			this->lblH1 = (gcnew System::Windows::Forms::Label());
			this->coursesButton = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblH1
			// 
			this->lblH1->AutoSize = true;
			this->lblH1->BackColor = System::Drawing::Color::Transparent;
			this->lblH1->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblH1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->lblH1->Location = System::Drawing::Point(25, 101);
			this->lblH1->Name = L"lblH1";
			this->lblH1->Size = System::Drawing::Size(185, 32);
			this->lblH1->TabIndex = 0;
			this->lblH1->Text = L"Welcome, User";
			this->lblH1->Click += gcnew System::EventHandler(this, &dashboardForm::label1_Click);
			// 
			// coursesButton
			// 
			this->coursesButton->BackColor = System::Drawing::Color::Transparent;
			this->coursesButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->coursesButton->FlatAppearance->BorderSize = 0;
			this->coursesButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->coursesButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->coursesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->coursesButton->Location = System::Drawing::Point(31, 441);
			this->coursesButton->Name = L"coursesButton";
			this->coursesButton->Size = System::Drawing::Size(225, 69);
			this->coursesButton->TabIndex = 1;
			this->coursesButton->UseVisualStyleBackColor = false;
			this->coursesButton->Click += gcnew System::EventHandler(this, &dashboardForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(288, 439);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(225, 69);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &dashboardForm::button2_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Transparent;
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnExit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Location = System::Drawing::Point(545, 439);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(225, 69);
			this->btnExit->TabIndex = 3;
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &dashboardForm::button3_Click);
			// 
			// dashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->coursesButton);
			this->Controls->Add(this->lblH1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(800, 600);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"dashboardForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"dashboardForm";
			this->Load += gcnew System::EventHandler(this, &dashboardForm::dashboardForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
}
private: System::Void dashboardForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MPLA104::courseForm^ courseForm = gcnew MPLA104::courseForm(userTrue);
	courseForm->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MPLA104::clientAlertForm clientAlertForm(userTrue);
	clientAlertForm.ShowDialog();
}
	};
}
