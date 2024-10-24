#pragma once
#include "user.h"
#include "alertForm.h"

namespace MPLA104 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for adminDash
	/// </summary>
	public ref class adminDash : public System::Windows::Forms::Form
	{
	public:
		adminDash(User^ user)
		{
			InitializeComponent();
			
			adminDashLabel->Text = "Welcome, " + user->name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~adminDash()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ adminExit;
	private: System::Windows::Forms::Button^ adminAlertButton;
	protected:


	private: System::Windows::Forms::Label^ adminDashLabel;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adminDash::typeid));
			this->adminExit = (gcnew System::Windows::Forms::Button());
			this->adminAlertButton = (gcnew System::Windows::Forms::Button());
			this->adminDashLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// adminExit
			// 
			this->adminExit->BackColor = System::Drawing::Color::Transparent;
			this->adminExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->adminExit->FlatAppearance->BorderSize = 0;
			this->adminExit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->adminExit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->adminExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adminExit->Location = System::Drawing::Point(418, 442);
			this->adminExit->Name = L"adminExit";
			this->adminExit->Size = System::Drawing::Size(225, 69);
			this->adminExit->TabIndex = 7;
			this->adminExit->UseVisualStyleBackColor = false;
			this->adminExit->Click += gcnew System::EventHandler(this, &adminDash::adminExit_Click);
			// 
			// adminAlertButton
			// 
			this->adminAlertButton->BackColor = System::Drawing::Color::Transparent;
			this->adminAlertButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->adminAlertButton->FlatAppearance->BorderSize = 0;
			this->adminAlertButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->adminAlertButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->adminAlertButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adminAlertButton->Location = System::Drawing::Point(160, 442);
			this->adminAlertButton->Name = L"adminAlertButton";
			this->adminAlertButton->Size = System::Drawing::Size(225, 69);
			this->adminAlertButton->TabIndex = 5;
			this->adminAlertButton->UseVisualStyleBackColor = false;
			this->adminAlertButton->Click += gcnew System::EventHandler(this, &adminDash::adminAlertButton_Click);
			// 
			// adminDashLabel
			// 
			this->adminDashLabel->AutoSize = true;
			this->adminDashLabel->BackColor = System::Drawing::Color::Transparent;
			this->adminDashLabel->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminDashLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->adminDashLabel->Location = System::Drawing::Point(25, 101);
			this->adminDashLabel->Name = L"adminDashLabel";
			this->adminDashLabel->Size = System::Drawing::Size(185, 32);
			this->adminDashLabel->TabIndex = 4;
			this->adminDashLabel->Text = L"Welcome, User";
			this->adminDashLabel->Click += gcnew System::EventHandler(this, &adminDash::lblH1_Click);
			// 
			// adminDash
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->adminExit);
			this->Controls->Add(this->adminAlertButton);
			this->Controls->Add(this->adminDashLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(800, 600);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"adminDash";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"adminDash";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void adminExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void lblH1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void adminAlertButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MPLA104::alertForm alertForm;
	alertForm.ShowDialog();
}
};
}
