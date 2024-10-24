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
	/// Summary for courseForm
	/// </summary>
	public ref class courseForm : public System::Windows::Forms::Form
	{
	public:
		String^ uName;
	private: System::Windows::Forms::Button^ exptab;
	private: System::Windows::Forms::Button^ exptae;
	public:


	private: System::Windows::Forms::Button^ exptad;

	private: System::Windows::Forms::Button^ exptac;

	public:
		String^ uId;
	public:
		courseForm(User^ user)
		{
			InitializeComponent();

			exptaPanel->Hide();
			finalPanel->Hide();
			
			uName = user->name;
			uId = user->userId;

			courseForm::coursesName->Text = "Name: " + uName;
			courseForm::coursesId->Text = "Student ID: " + uId;

			CheckSectionAccess();
		}
		


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~courseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ exptaPanel;
	protected:

	private: System::Windows::Forms::Panel^ finalPanel;
	private: System::Windows::Forms::Button^ exptaa;
	protected:

	protected:






	private: System::Windows::Forms::Button^ fourLcs;
	private: System::Windows::Forms::Button^ fiveLcs;




	private: System::Windows::Forms::Label^ coursesName;
	private: System::Windows::Forms::Label^ courseMatList;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ coursesId;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ coursesReturn;
	private: System::Windows::Forms::ComboBox^ sectionCb;
	private: System::Windows::Forms::Label^ coursesExpt;
	private: System::Windows::Forms::Button^ coursesConfirm;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(courseForm::typeid));
			this->exptaPanel = (gcnew System::Windows::Forms::Panel());
			this->exptae = (gcnew System::Windows::Forms::Button());
			this->exptad = (gcnew System::Windows::Forms::Button());
			this->exptac = (gcnew System::Windows::Forms::Button());
			this->exptab = (gcnew System::Windows::Forms::Button());
			this->exptaa = (gcnew System::Windows::Forms::Button());
			this->finalPanel = (gcnew System::Windows::Forms::Panel());
			this->coursesConfirm = (gcnew System::Windows::Forms::Button());
			this->coursesExpt = (gcnew System::Windows::Forms::Label());
			this->sectionCb = (gcnew System::Windows::Forms::ComboBox());
			this->courseMatList = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->coursesId = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->coursesName = (gcnew System::Windows::Forms::Label());
			this->fourLcs = (gcnew System::Windows::Forms::Button());
			this->fiveLcs = (gcnew System::Windows::Forms::Button());
			this->coursesReturn = (gcnew System::Windows::Forms::Button());
			this->exptaPanel->SuspendLayout();
			this->finalPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// exptaPanel
			// 
			this->exptaPanel->BackColor = System::Drawing::Color::White;
			this->exptaPanel->Controls->Add(this->exptae);
			this->exptaPanel->Controls->Add(this->exptad);
			this->exptaPanel->Controls->Add(this->exptac);
			this->exptaPanel->Controls->Add(this->exptab);
			this->exptaPanel->Controls->Add(this->exptaa);
			this->exptaPanel->Location = System::Drawing::Point(269, 122);
			this->exptaPanel->Name = L"exptaPanel";
			this->exptaPanel->Size = System::Drawing::Size(265, 300);
			this->exptaPanel->TabIndex = 0;
			// 
			// exptae
			// 
			this->exptae->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->exptae->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exptae->FlatAppearance->BorderSize = 0;
			this->exptae->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->exptae->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->exptae->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exptae->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exptae->ForeColor = System::Drawing::Color::White;
			this->exptae->Location = System::Drawing::Point(30, 230);
			this->exptae->Name = L"exptae";
			this->exptae->Size = System::Drawing::Size(207, 44);
			this->exptae->TabIndex = 8;
			this->exptae->Text = L"Experiment 105";
			this->exptae->UseVisualStyleBackColor = false;
			this->exptae->Click += gcnew System::EventHandler(this, &courseForm::exptae_Click);
			// 
			// exptad
			// 
			this->exptad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->exptad->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exptad->FlatAppearance->BorderSize = 0;
			this->exptad->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->exptad->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->exptad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exptad->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exptad->ForeColor = System::Drawing::Color::White;
			this->exptad->Location = System::Drawing::Point(30, 180);
			this->exptad->Name = L"exptad";
			this->exptad->Size = System::Drawing::Size(207, 44);
			this->exptad->TabIndex = 7;
			this->exptad->Text = L"Experiment 104";
			this->exptad->UseVisualStyleBackColor = false;
			this->exptad->Click += gcnew System::EventHandler(this, &courseForm::exptad_Click);
			// 
			// exptac
			// 
			this->exptac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->exptac->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exptac->FlatAppearance->BorderSize = 0;
			this->exptac->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->exptac->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->exptac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exptac->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exptac->ForeColor = System::Drawing::Color::White;
			this->exptac->Location = System::Drawing::Point(30, 130);
			this->exptac->Name = L"exptac";
			this->exptac->Size = System::Drawing::Size(207, 44);
			this->exptac->TabIndex = 6;
			this->exptac->Text = L"Experiment 103";
			this->exptac->UseVisualStyleBackColor = false;
			this->exptac->Click += gcnew System::EventHandler(this, &courseForm::exptac_Click);
			// 
			// exptab
			// 
			this->exptab->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->exptab->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exptab->FlatAppearance->BorderSize = 0;
			this->exptab->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->exptab->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->exptab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exptab->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exptab->ForeColor = System::Drawing::Color::White;
			this->exptab->Location = System::Drawing::Point(30, 79);
			this->exptab->Name = L"exptab";
			this->exptab->Size = System::Drawing::Size(207, 44);
			this->exptab->TabIndex = 5;
			this->exptab->Text = L"Experiment 102";
			this->exptab->UseVisualStyleBackColor = false;
			this->exptab->Click += gcnew System::EventHandler(this, &courseForm::exptb_Click);
			// 
			// exptaa
			// 
			this->exptaa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->exptaa->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exptaa->FlatAppearance->BorderSize = 0;
			this->exptaa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->exptaa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->exptaa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exptaa->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exptaa->ForeColor = System::Drawing::Color::White;
			this->exptaa->Location = System::Drawing::Point(30, 27);
			this->exptaa->Name = L"exptaa";
			this->exptaa->Size = System::Drawing::Size(207, 44);
			this->exptaa->TabIndex = 4;
			this->exptaa->Text = L"Experiment 101";
			this->exptaa->UseVisualStyleBackColor = false;
			this->exptaa->Click += gcnew System::EventHandler(this, &courseForm::button1_Click);
			// 
			// finalPanel
			// 
			this->finalPanel->BackColor = System::Drawing::Color::White;
			this->finalPanel->Controls->Add(this->coursesConfirm);
			this->finalPanel->Controls->Add(this->coursesExpt);
			this->finalPanel->Controls->Add(this->sectionCb);
			this->finalPanel->Controls->Add(this->courseMatList);
			this->finalPanel->Controls->Add(this->label4);
			this->finalPanel->Controls->Add(this->coursesId);
			this->finalPanel->Controls->Add(this->label2);
			this->finalPanel->Controls->Add(this->coursesName);
			this->finalPanel->Location = System::Drawing::Point(535, 122);
			this->finalPanel->Name = L"finalPanel";
			this->finalPanel->Size = System::Drawing::Size(265, 476);
			this->finalPanel->TabIndex = 1;
			// 
			// coursesConfirm
			// 
			this->coursesConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->coursesConfirm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->coursesConfirm->FlatAppearance->BorderSize = 0;
			this->coursesConfirm->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->coursesConfirm->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->coursesConfirm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->coursesConfirm->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->coursesConfirm->ForeColor = System::Drawing::Color::White;
			this->coursesConfirm->Location = System::Drawing::Point(36, 388);
			this->coursesConfirm->Name = L"coursesConfirm";
			this->coursesConfirm->Size = System::Drawing::Size(207, 44);
			this->coursesConfirm->TabIndex = 5;
			this->coursesConfirm->Text = L"Confirm";
			this->coursesConfirm->UseVisualStyleBackColor = false;
			this->coursesConfirm->Click += gcnew System::EventHandler(this, &courseForm::coursesConfirm_Click);
			// 
			// coursesExpt
			// 
			this->coursesExpt->AutoSize = true;
			this->coursesExpt->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->coursesExpt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->coursesExpt->Location = System::Drawing::Point(33, 60);
			this->coursesExpt->Name = L"coursesExpt";
			this->coursesExpt->Size = System::Drawing::Size(110, 16);
			this->coursesExpt->TabIndex = 15;
			this->coursesExpt->Text = L"Experiment Code: ";
			this->coursesExpt->Click += gcnew System::EventHandler(this, &courseForm::label1_Click_1);
			// 
			// sectionCb
			// 
			this->sectionCb->FormattingEnabled = true;
			this->sectionCb->Location = System::Drawing::Point(36, 95);
			this->sectionCb->Name = L"sectionCb";
			this->sectionCb->Size = System::Drawing::Size(207, 21);
			this->sectionCb->TabIndex = 14;
			this->sectionCb->SelectedIndexChanged += gcnew System::EventHandler(this, &courseForm::sectionCb_SelectedIndexChanged);
			// 
			// courseMatList
			// 
			this->courseMatList->AutoSize = true;
			this->courseMatList->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->courseMatList->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->courseMatList->Location = System::Drawing::Point(33, 165);
			this->courseMatList->Name = L"courseMatList";
			this->courseMatList->Size = System::Drawing::Size(39, 16);
			this->courseMatList->TabIndex = 13;
			this->courseMatList->Text = L"NULL";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->label4->Location = System::Drawing::Point(33, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Section:";
			this->label4->Click += gcnew System::EventHandler(this, &courseForm::label4_Click);
			// 
			// coursesId
			// 
			this->coursesId->AutoSize = true;
			this->coursesId->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->coursesId->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->coursesId->Location = System::Drawing::Point(33, 44);
			this->coursesId->Name = L"coursesId";
			this->coursesId->Size = System::Drawing::Size(69, 16);
			this->coursesId->TabIndex = 11;
			this->coursesId->Text = L"Student ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->label2->Location = System::Drawing::Point(33, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Materials:";
			// 
			// coursesName
			// 
			this->coursesName->AutoSize = true;
			this->coursesName->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->coursesName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->coursesName->Location = System::Drawing::Point(33, 27);
			this->coursesName->Name = L"coursesName";
			this->coursesName->Size = System::Drawing::Size(43, 16);
			this->coursesName->TabIndex = 9;
			this->coursesName->Text = L"Name:\r\n";
			this->coursesName->Click += gcnew System::EventHandler(this, &courseForm::label1_Click);
			// 
			// fourLcs
			// 
			this->fourLcs->BackColor = System::Drawing::Color::Transparent;
			this->fourLcs->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fourLcs->FlatAppearance->BorderSize = 0;
			this->fourLcs->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->fourLcs->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->fourLcs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fourLcs->Location = System::Drawing::Point(37, 149);
			this->fourLcs->Name = L"fourLcs";
			this->fourLcs->Size = System::Drawing::Size(189, 44);
			this->fourLcs->TabIndex = 2;
			this->fourLcs->UseVisualStyleBackColor = false;
			this->fourLcs->Click += gcnew System::EventHandler(this, &courseForm::fourLcs_Click);
			// 
			// fiveLcs
			// 
			this->fiveLcs->BackColor = System::Drawing::Color::Transparent;
			this->fiveLcs->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fiveLcs->FlatAppearance->BorderSize = 0;
			this->fiveLcs->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->fiveLcs->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->fiveLcs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fiveLcs->Location = System::Drawing::Point(37, 216);
			this->fiveLcs->Name = L"fiveLcs";
			this->fiveLcs->Size = System::Drawing::Size(189, 44);
			this->fiveLcs->TabIndex = 3;
			this->fiveLcs->UseVisualStyleBackColor = false;
			// 
			// coursesReturn
			// 
			this->coursesReturn->BackColor = System::Drawing::Color::Transparent;
			this->coursesReturn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->coursesReturn->FlatAppearance->BorderSize = 0;
			this->coursesReturn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->coursesReturn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->coursesReturn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->coursesReturn->Location = System::Drawing::Point(30, 34);
			this->coursesReturn->Name = L"coursesReturn";
			this->coursesReturn->Size = System::Drawing::Size(36, 35);
			this->coursesReturn->TabIndex = 4;
			this->coursesReturn->UseVisualStyleBackColor = false;
			this->coursesReturn->Click += gcnew System::EventHandler(this, &courseForm::coursesReturn_Click);
			// 
			// courseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->coursesReturn);
			this->Controls->Add(this->fiveLcs);
			this->Controls->Add(this->fourLcs);
			this->Controls->Add(this->finalPanel);
			this->Controls->Add(this->exptaPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(800, 600);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"courseForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"courseForm";
			this->exptaPanel->ResumeLayout(false);
			this->finalPanel->ResumeLayout(false);
			this->finalPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: int curExpt;
	public: void CheckSectionAccess() {
		DateTime now = DateTime::Now;
		int hour = now.Hour;

		// Clear the ComboBox items
		sectionCb->Items->Clear();

		// Define time ranges for each section
		if ((hour >= 1 && hour < 12))
		{
			sectionCb->Items->Add("A1");
		}
		else if ((hour >= 12 && hour < 24))
		{
			sectionCb->Items->Add("B1");
		}

		if (sectionCb->Items->Count == 0)
		{
			MessageBox::Show("No sections are available at this time.");
		}
		else
		{
			// Optionally select the first available section
			sectionCb->SelectedIndex = 0;
		}
	}
	public: void sqlExpt() {
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

		// Use the SqlConnection and SqlCommand classes
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			// Open the connection
			connection->Open();

			// SQL command to retrieve materials for the specific experiment
			String^ sql = "SELECT m.materialId, m.materialName, em.defaultQuantity "
				"FROM expt_material em "
				"JOIN material m ON em.materialId = m.materialId "
				"WHERE em.exptId = @exptId";

			// Create a SqlCommand object
			SqlCommand^ command = gcnew SqlCommand(sql, connection);

			// Add parameter for experiment ID
			command->Parameters->AddWithValue("@exptId", curExpt); // Replace with your experiment ID

			// Execute the command and read the results
			SqlDataReader^ reader = command->ExecuteReader();

			String^ mId;
			String^ mname;
			String^ qty;

			while (reader->Read()) {
				mId = reader->GetInt32(0).ToString();
				mname = reader->GetString(1);
				qty = reader->GetInt32(2).ToString();

				courseMatList->Text += mname + " - " + qty + "\n";
			}

			// Close the reader
			reader->Close();

		}
		catch (SqlException^ ex) {
			// Handle SQL exceptions
			MessageBox::Show("An error occurred: " + ex->Message);
		}
		catch (Exception^ ex) {
			// Handle other exceptions
			MessageBox::Show("An error occurred: " + ex->Message);
		}
		finally {
			// Ensure the connection is closed
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void coursesReturn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void fourLcs_Click(System::Object^ sender, System::EventArgs^ e) {
	exptaPanel->Show();
}


private: System::Void sectionCb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void coursesConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
	// SQL Server connection string
	String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

	// Use the SqlConnection and SqlCommand classes
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		// Open the connection
		connection->Open();

		// SQL command to insert a new request into the requests table
		String^ sql = "INSERT INTO requests (userId, exptId, requestDate, approved, section) VALUES (@userId, @exptId, @requestDate, @approved, @section)";

		// Create a SqlCommand object
		SqlCommand^ command = gcnew SqlCommand(sql, connection);

		// Parameters for the SQL command
		command->Parameters->AddWithValue("@userId", uId);
		command->Parameters->AddWithValue("@exptId", curExpt);
		command->Parameters->AddWithValue("@requestDate", DateTime::Now); // Use current date and time
		command->Parameters->AddWithValue("@approved", 0); // Default is 0 (not approved)
		command->Parameters->AddWithValue("@section", sectionCb->SelectedItem);

		// Execute the command
		int rowsAffected = command->ExecuteNonQuery();

		// Optionally show a message indicating success
		if (rowsAffected > 0) {
			MessageBox::Show("Request submitted successfully!");
		}
		else {
			MessageBox::Show("Failed to submit the request.");
		}
	}
	catch (SqlException^ ex) {
		// Handle SQL exceptions
		MessageBox::Show("An error occurred: " + ex->Message);
	}
	catch (Exception^ ex) {
		// Handle other exceptions
		MessageBox::Show("An error occurred: " + ex->Message);
	}
	finally {
		// Ensure the connection is closed
		if (connection->State == ConnectionState::Open) {
			connection->Close();
		}
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	curExpt = 101;
	coursesExpt->Text = "Experiment Code: 101";
	courseMatList->Text = "";
	sqlExpt();

	finalPanel->Show();
}
private: System::Void exptb_Click(System::Object^ sender, System::EventArgs^ e) {
	curExpt = 102;
	coursesExpt->Text = "Experiment Code: 102";
	courseMatList->Text = "";
	sqlExpt();

	finalPanel->Show();
}

private: System::Void exptac_Click(System::Object^ sender, System::EventArgs^ e) {
	curExpt = 103;
	coursesExpt->Text = "Experiment Code: 103";
	courseMatList->Text = "";
	sqlExpt();

	finalPanel->Show();
}
private: System::Void exptad_Click(System::Object^ sender, System::EventArgs^ e) {
	curExpt = 104;
	coursesExpt->Text = "Experiment Code: 104";
	courseMatList->Text = "";
	sqlExpt();

	finalPanel->Show();
}
private: System::Void exptae_Click(System::Object^ sender, System::EventArgs^ e) {
	curExpt = 105;
	coursesExpt->Text = "Experiment Code: 105";
	courseMatList->Text = "";
	sqlExpt();

	finalPanel->Show();
}
};
}
