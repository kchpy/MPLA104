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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ addtlCb;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ qtyTb;
	private: System::Windows::Forms::Panel^ panel105;
	private: System::Windows::Forms::Button^ button205;

	private: System::Windows::Forms::Button^ button204;

	private: System::Windows::Forms::Button^ button203;

	private: System::Windows::Forms::Button^ button202;

	private: System::Windows::Forms::Button^ button201;



	public:
		String^ uId;
	public:
		courseForm(User^ user)
		{
			InitializeComponent();

			exptaPanel->Hide();
			finalPanel->Hide();
			panel105->Hide();
			
			uName = user->name;
			uId = user->userId;

			courseForm::coursesName->Text = "Name: " + uName;
			courseForm::coursesId->Text = "Student ID: " + uId;
			qtyTb->Text = "0";

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
			this->panel105 = (gcnew System::Windows::Forms::Panel());
			this->button205 = (gcnew System::Windows::Forms::Button());
			this->button204 = (gcnew System::Windows::Forms::Button());
			this->button203 = (gcnew System::Windows::Forms::Button());
			this->button202 = (gcnew System::Windows::Forms::Button());
			this->button201 = (gcnew System::Windows::Forms::Button());
			this->finalPanel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->qtyTb = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->addtlCb = (gcnew System::Windows::Forms::ComboBox());
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
			this->panel105->SuspendLayout();
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
			// panel105
			// 
			this->panel105->BackColor = System::Drawing::Color::White;
			this->panel105->Controls->Add(this->button205);
			this->panel105->Controls->Add(this->button204);
			this->panel105->Controls->Add(this->button203);
			this->panel105->Controls->Add(this->button202);
			this->panel105->Controls->Add(this->button201);
			this->panel105->Location = System::Drawing::Point(269, 122);
			this->panel105->Name = L"panel105";
			this->panel105->Size = System::Drawing::Size(265, 300);
			this->panel105->TabIndex = 9;
			// 
			// button205
			// 
			this->button205->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button205->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button205->FlatAppearance->BorderSize = 0;
			this->button205->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button205->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button205->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button205->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button205->ForeColor = System::Drawing::Color::White;
			this->button205->Location = System::Drawing::Point(30, 230);
			this->button205->Name = L"button205";
			this->button205->Size = System::Drawing::Size(207, 44);
			this->button205->TabIndex = 8;
			this->button205->Text = L"Experiment 205";
			this->button205->UseVisualStyleBackColor = false;
			this->button205->Click += gcnew System::EventHandler(this, &courseForm::button205_Click);
			// 
			// button204
			// 
			this->button204->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button204->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button204->FlatAppearance->BorderSize = 0;
			this->button204->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button204->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button204->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button204->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button204->ForeColor = System::Drawing::Color::White;
			this->button204->Location = System::Drawing::Point(30, 180);
			this->button204->Name = L"button204";
			this->button204->Size = System::Drawing::Size(207, 44);
			this->button204->TabIndex = 7;
			this->button204->Text = L"Experiment 204";
			this->button204->UseVisualStyleBackColor = false;
			this->button204->Click += gcnew System::EventHandler(this, &courseForm::button204_Click);
			// 
			// button203
			// 
			this->button203->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button203->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button203->FlatAppearance->BorderSize = 0;
			this->button203->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button203->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button203->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button203->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button203->ForeColor = System::Drawing::Color::White;
			this->button203->Location = System::Drawing::Point(30, 130);
			this->button203->Name = L"button203";
			this->button203->Size = System::Drawing::Size(207, 44);
			this->button203->TabIndex = 6;
			this->button203->Text = L"Experiment 203";
			this->button203->UseVisualStyleBackColor = false;
			this->button203->Click += gcnew System::EventHandler(this, &courseForm::button203_Click);
			// 
			// button202
			// 
			this->button202->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button202->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button202->FlatAppearance->BorderSize = 0;
			this->button202->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button202->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button202->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button202->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button202->ForeColor = System::Drawing::Color::White;
			this->button202->Location = System::Drawing::Point(30, 79);
			this->button202->Name = L"button202";
			this->button202->Size = System::Drawing::Size(207, 44);
			this->button202->TabIndex = 5;
			this->button202->Text = L"Experiment 202";
			this->button202->UseVisualStyleBackColor = false;
			this->button202->Click += gcnew System::EventHandler(this, &courseForm::button202_Click);
			// 
			// button201
			// 
			this->button201->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button201->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button201->FlatAppearance->BorderSize = 0;
			this->button201->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button201->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button201->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button201->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button201->ForeColor = System::Drawing::Color::White;
			this->button201->Location = System::Drawing::Point(30, 27);
			this->button201->Name = L"button201";
			this->button201->Size = System::Drawing::Size(207, 44);
			this->button201->TabIndex = 4;
			this->button201->Text = L"Experiment 201";
			this->button201->UseVisualStyleBackColor = false;
			this->button201->Click += gcnew System::EventHandler(this, &courseForm::button201_Click);
			// 
			// finalPanel
			// 
			this->finalPanel->BackColor = System::Drawing::Color::White;
			this->finalPanel->Controls->Add(this->label3);
			this->finalPanel->Controls->Add(this->qtyTb);
			this->finalPanel->Controls->Add(this->label1);
			this->finalPanel->Controls->Add(this->addtlCb);
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->label3->Location = System::Drawing::Point(183, 300);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 16);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Qty:";
			// 
			// qtyTb
			// 
			this->qtyTb->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->qtyTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qtyTb->Location = System::Drawing::Point(186, 319);
			this->qtyTb->Name = L"qtyTb";
			this->qtyTb->Size = System::Drawing::Size(57, 21);
			this->qtyTb->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->label1->Location = System::Drawing::Point(33, 300);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 16);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Additional Materials:";
			// 
			// addtlCb
			// 
			this->addtlCb->FormattingEnabled = true;
			this->addtlCb->Location = System::Drawing::Point(36, 319);
			this->addtlCb->Name = L"addtlCb";
			this->addtlCb->Size = System::Drawing::Size(127, 21);
			this->addtlCb->TabIndex = 16;
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
			this->courseMatList->Size = System::Drawing::Size(11, 128);
			this->courseMatList->TabIndex = 13;
			this->courseMatList->Text = L"-\r\n-\r\n-\r\n-\r\n-\r\n-\r\n-\r\n-";
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
			this->fiveLcs->Click += gcnew System::EventHandler(this, &courseForm::fiveLcs_Click);
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
			this->Controls->Add(this->panel105);
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
			this->panel105->ResumeLayout(false);
			this->finalPanel->ResumeLayout(false);
			this->finalPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: String^ materialName;
    public: System::Void InsertRequestedMaterial(int requestId, int requestedQuantity)
    {
        // SQL Server connection string
        String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

        // Use the SqlConnection and SqlCommand classes
        SqlConnection^ connection = gcnew SqlConnection(connectionString);

        try {
            // Open the connection
            connection->Open();
            materialName = addtlCb->Text;

            // Check if both the textbox and the combobox are empty
            if (String::IsNullOrEmpty(materialName) && String::IsNullOrEmpty(qtyTb->Text)) {
                // Proceed with the program without inserting values to the table
                return;
            }

            // Get the materialId based on the materialName
            String^ getMaterialIdQuery = "SELECT materialId FROM material WHERE materialName = @materialName";
            SqlCommand^ getMaterialIdCommand = gcnew SqlCommand(getMaterialIdQuery, connection);
            getMaterialIdCommand->Parameters->AddWithValue("@materialName", materialName);
            int materialId = Convert::ToInt32(getMaterialIdCommand->ExecuteScalar());

            // SQL command to insert a new record into the requested_materials table
            String^ insertQuery = "INSERT INTO request_materials (requestId, materialId, requestedQuantity) VALUES (@requestId, @materialId, @requestedQuantity)";

            // Create a SqlCommand object
            SqlCommand^ insertCommand = gcnew SqlCommand(insertQuery, connection);

            // Parameters for the SQL command
            insertCommand->Parameters->AddWithValue("@requestId", requestId);
            insertCommand->Parameters->AddWithValue("@materialId", materialId);
            insertCommand->Parameters->AddWithValue("@requestedQuantity", requestedQuantity);

            // Execute the command
            int rowsAffected = insertCommand->ExecuteNonQuery();

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
	public: void comboQuery() {
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

		// Use the SqlConnection and SqlCommand classes
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			// Open the connection
			connection->Open();

			String^ sql = "SELECT materialName from material";

			SqlCommand^ command = gcnew SqlCommand(sql, connection);

			SqlDataReader^ reader = command->ExecuteReader();

			while(reader->Read()){
				String^ mtlName = reader->GetString(0);
				addtlCb->Items->Add(mtlName);
			}

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
	public: int curExpt;
		  String^ mtlName;
	public: int iterateId(SqlConnection^ connection){
		String^ getMaxIdSql = "SELECT COALESCE(MAX(requestId), 0) + 1 FROM requests";
		SqlCommand^ command = gcnew SqlCommand(getMaxIdSql, connection);
		Object^ result = command->ExecuteScalar();
		return Convert::ToInt32(result);
	}
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
	panel105->Hide();
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
		String^ sql = "INSERT INTO requests (requestId, userId, exptId, requestDate, approved, section) VALUES (@requestId, @userId, @exptId, @requestDate, @approved, @section)";

		// Create a SqlCommand object
		SqlCommand^ command = gcnew SqlCommand(sql, connection);

		int nextRequestId = iterateId(connection);
        
		// Parameters for the SQL command
		command->Parameters->AddWithValue("@requestId", nextRequestId);
		command->Parameters->AddWithValue("@userId", uId);
		command->Parameters->AddWithValue("@exptId", curExpt);
		command->Parameters->AddWithValue("@requestDate", DateTime::Now); // Use current date and time
		command->Parameters->AddWithValue("@approved", 0); // Default is 0 (not approved)
		command->Parameters->AddWithValue("@section", sectionCb->SelectedItem);

		// Execute the command
		int rowsAffected = command->ExecuteNonQuery();
		
		if (qtyTb->Text != "0") {
			int quantityRequested = Convert::ToInt32(qtyTb->Text);
			InsertRequestedMaterial(nextRequestId, quantityRequested);
		}
		
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
	comboQuery();

	finalPanel->Show();
}
private: System::Void exptb_Click(System::Object^ sender, System::EventArgs^ e) {
	curExpt = 102;
	coursesExpt->Text = "Experiment Code: 102";
	courseMatList->Text = "";
	sqlExpt();
	comboQuery();

	finalPanel->Show();
}

private: System::Void exptac_Click(System::Object^ sender, System::EventArgs^ e) {
	curExpt = 103;
	coursesExpt->Text = "Experiment Code: 103";
	courseMatList->Text = "";
	sqlExpt();
	comboQuery();

	finalPanel->Show();
}
private: System::Void exptad_Click(System::Object^ sender, System::EventArgs^ e) {
	curExpt = 104;
	coursesExpt->Text = "Experiment Code: 104";
	courseMatList->Text = "";
	sqlExpt();
	comboQuery();

	finalPanel->Show();
}
private: System::Void exptae_Click(System::Object^ sender, System::EventArgs^ e) {
	curExpt = 105;
	coursesExpt->Text = "Experiment Code: 105";
	courseMatList->Text = "";
	sqlExpt();
	comboQuery();

	finalPanel->Show();
}
private: System::Void fiveLcs_Click(System::Object^ sender, System::EventArgs^ e) {
	exptaPanel->Hide();
	panel105->Show();
}
private: System::Void button201_Click(System::Object^ sender, System::EventArgs^ e) {
	curExpt = 201;
	coursesExpt->Text = "Experiment Code: 201";
	courseMatList->Text = "";
	sqlExpt();
	comboQuery();

	finalPanel->Show();
}
private: System::Void button202_Click(System::Object^ sender, System::EventArgs^ e) {
	curExpt = 202;
	coursesExpt->Text = "Experiment Code: 202";
	courseMatList->Text = "";
	sqlExpt();
	comboQuery();

	finalPanel->Show();
}
private: System::Void button203_Click(System::Object^ sender, System::EventArgs^ e) {
	curExpt = 203;
	coursesExpt->Text = "Experiment Code: 203";
	courseMatList->Text = "";
	sqlExpt();
	comboQuery();

	finalPanel->Show();
}
private: System::Void button204_Click(System::Object^ sender, System::EventArgs^ e) {
	curExpt = 204;
	coursesExpt->Text = "Experiment Code: 204";
	courseMatList->Text = "";
	sqlExpt();
	comboQuery();

	finalPanel->Show();
}
private: System::Void button205_Click(System::Object^ sender, System::EventArgs^ e) {		
	curExpt = 205;
	coursesExpt->Text = "Experiment Code: 205";
	courseMatList->Text = "";
	sqlExpt();
	comboQuery();

	finalPanel->Show();
}
};
}
