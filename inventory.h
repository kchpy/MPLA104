#pragma once

namespace MPLA104 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for inventory
	/// </summary>
	public ref class inventory : public System::Windows::Forms::Form
	{
	public:
		inventory(void)
		{
			InitializeComponent();
			LoadMaterialsToLabel();
			comboQuery();
			comboQuery2();
			updatePanel->Hide();
			addPanel->Hide();
			removePanel->Hide();
			panel2->Hide();
			addToPnl->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~inventory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ adminAlertReturn;
	private: System::Windows::Forms::Label^ materialLabel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ qtyLabel;
	private: System::Windows::Forms::Panel^ updatePanel;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ qtyTb2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ itemCb;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ addPanel;
	private: System::Windows::Forms::TextBox^ addMtlTb;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ addQtyTb;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ removePanel;

	private: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ removeCb;
	private: System::Windows::Forms::Button^ searchPanel;
	private: System::Windows::Forms::Button^ addToPanel;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ searchTb;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Panel^ addToPnl;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ eITb;
	private: System::Windows::Forms::ComboBox^ aTTb;
	private: System::Windows::Forms::Button^ removeBtn;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ addBtn;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ editQtyTb;
	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(inventory::typeid));
			this->adminAlertReturn = (gcnew System::Windows::Forms::Button());
			this->materialLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->qtyLabel = (gcnew System::Windows::Forms::Label());
			this->updatePanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->qtyTb2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->itemCb = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->addPanel = (gcnew System::Windows::Forms::Panel());
			this->addMtlTb = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->addQtyTb = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->removePanel = (gcnew System::Windows::Forms::Panel());
			this->removeCb = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->searchPanel = (gcnew System::Windows::Forms::Button());
			this->addToPanel = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->searchTb = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->addToPnl = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->editQtyTb = (gcnew System::Windows::Forms::TextBox());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->eITb = (gcnew System::Windows::Forms::ComboBox());
			this->aTTb = (gcnew System::Windows::Forms::ComboBox());
			this->removeBtn = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->updatePanel->SuspendLayout();
			this->addPanel->SuspendLayout();
			this->removePanel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->addToPnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// adminAlertReturn
			// 
			this->adminAlertReturn->BackColor = System::Drawing::Color::Transparent;
			this->adminAlertReturn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->adminAlertReturn->FlatAppearance->BorderSize = 0;
			this->adminAlertReturn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->adminAlertReturn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->adminAlertReturn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adminAlertReturn->Location = System::Drawing::Point(30, 46);
			this->adminAlertReturn->Name = L"adminAlertReturn";
			this->adminAlertReturn->Size = System::Drawing::Size(36, 35);
			this->adminAlertReturn->TabIndex = 9;
			this->adminAlertReturn->UseVisualStyleBackColor = false;
			this->adminAlertReturn->Click += gcnew System::EventHandler(this, &inventory::adminAlertReturn_Click);
			// 
			// materialLabel
			// 
			this->materialLabel->AutoSize = true;
			this->materialLabel->BackColor = System::Drawing::Color::Transparent;
			this->materialLabel->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->materialLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->materialLabel->Location = System::Drawing::Point(-3, 14);
			this->materialLabel->Name = L"materialLabel";
			this->materialLabel->Size = System::Drawing::Size(39, 16);
			this->materialLabel->TabIndex = 10;
			this->materialLabel->Text = L"NULL";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->qtyLabel);
			this->panel1->Controls->Add(this->materialLabel);
			this->panel1->Location = System::Drawing::Point(43, 164);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(239, 394);
			this->panel1->TabIndex = 11;
			// 
			// qtyLabel
			// 
			this->qtyLabel->AutoSize = true;
			this->qtyLabel->BackColor = System::Drawing::Color::Transparent;
			this->qtyLabel->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qtyLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->qtyLabel->Location = System::Drawing::Point(200, 14);
			this->qtyLabel->Name = L"qtyLabel";
			this->qtyLabel->Size = System::Drawing::Size(39, 16);
			this->qtyLabel->TabIndex = 11;
			this->qtyLabel->Text = L"NULL";
			// 
			// updatePanel
			// 
			this->updatePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->updatePanel->Controls->Add(this->button1);
			this->updatePanel->Controls->Add(this->label3);
			this->updatePanel->Controls->Add(this->qtyTb2);
			this->updatePanel->Controls->Add(this->label2);
			this->updatePanel->Controls->Add(this->itemCb);
			this->updatePanel->Controls->Add(this->label1);
			this->updatePanel->Location = System::Drawing::Point(505, 146);
			this->updatePanel->Name = L"updatePanel";
			this->updatePanel->Size = System::Drawing::Size(239, 112);
			this->updatePanel->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(158, 83);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 22);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &inventory::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Default;
			this->label3->Font = (gcnew System::Drawing::Font(L"Neue Montreal Light", 10));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(155, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Qty:";
			// 
			// qtyTb2
			// 
			this->qtyTb2->Location = System::Drawing::Point(158, 57);
			this->qtyTb2->Name = L"qtyTb2";
			this->qtyTb2->Size = System::Drawing::Size(62, 20);
			this->qtyTb2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2->Font = (gcnew System::Drawing::Font(L"Neue Montreal Light", 10));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(16, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Item:";
			// 
			// itemCb
			// 
			this->itemCb->FormattingEnabled = true;
			this->itemCb->Location = System::Drawing::Point(19, 57);
			this->itemCb->Name = L"itemCb";
			this->itemCb->Size = System::Drawing::Size(124, 21);
			this->itemCb->TabIndex = 1;
			this->itemCb->SelectedIndexChanged += gcnew System::EventHandler(this, &inventory::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(15, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Update Quantity";
			// 
			// addPanel
			// 
			this->addPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->addPanel->Controls->Add(this->addMtlTb);
			this->addPanel->Controls->Add(this->button5);
			this->addPanel->Controls->Add(this->label4);
			this->addPanel->Controls->Add(this->addQtyTb);
			this->addPanel->Controls->Add(this->label5);
			this->addPanel->Controls->Add(this->label6);
			this->addPanel->Location = System::Drawing::Point(505, 146);
			this->addPanel->Name = L"addPanel";
			this->addPanel->Size = System::Drawing::Size(239, 112);
			this->addPanel->TabIndex = 13;
			// 
			// addMtlTb
			// 
			this->addMtlTb->Location = System::Drawing::Point(19, 57);
			this->addMtlTb->Name = L"addMtlTb";
			this->addMtlTb->Size = System::Drawing::Size(124, 20);
			this->addMtlTb->TabIndex = 6;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(158, 83);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(62, 22);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Confirm";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &inventory::button5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Default;
			this->label4->Font = (gcnew System::Drawing::Font(L"Neue Montreal Light", 10));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(155, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Qty:";
			// 
			// addQtyTb
			// 
			this->addQtyTb->Location = System::Drawing::Point(158, 57);
			this->addQtyTb->Name = L"addQtyTb";
			this->addQtyTb->Size = System::Drawing::Size(62, 20);
			this->addQtyTb->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Default;
			this->label5->Font = (gcnew System::Drawing::Font(L"Neue Montreal Light", 10));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(16, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 17);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Item Name:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Default;
			this->label6->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(15, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 19);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Add Material";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(418, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(36, 35);
			this->button2->TabIndex = 13;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &inventory::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(418, 197);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(36, 35);
			this->button3->TabIndex = 14;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &inventory::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(418, 246);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(36, 35);
			this->button4->TabIndex = 15;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &inventory::button4_Click);
			// 
			// removePanel
			// 
			this->removePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->removePanel->Controls->Add(this->removeCb);
			this->removePanel->Controls->Add(this->button6);
			this->removePanel->Controls->Add(this->label8);
			this->removePanel->Controls->Add(this->label9);
			this->removePanel->Location = System::Drawing::Point(505, 146);
			this->removePanel->Name = L"removePanel";
			this->removePanel->Size = System::Drawing::Size(239, 112);
			this->removePanel->TabIndex = 14;
			// 
			// removeCb
			// 
			this->removeCb->FormattingEnabled = true;
			this->removeCb->Location = System::Drawing::Point(19, 57);
			this->removeCb->Name = L"removeCb";
			this->removeCb->Size = System::Drawing::Size(124, 21);
			this->removeCb->TabIndex = 6;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(158, 83);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(62, 22);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Confirm";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &inventory::button6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::Default;
			this->label8->Font = (gcnew System::Drawing::Font(L"Neue Montreal Light", 10));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(16, 37);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 17);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Item:";
			this->label8->Click += gcnew System::EventHandler(this, &inventory::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::Default;
			this->label9->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(15, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(133, 19);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Remove Material";
			// 
			// searchPanel
			// 
			this->searchPanel->BackColor = System::Drawing::Color::Transparent;
			this->searchPanel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->searchPanel->FlatAppearance->BorderSize = 0;
			this->searchPanel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->searchPanel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->searchPanel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchPanel->Location = System::Drawing::Point(418, 295);
			this->searchPanel->Name = L"searchPanel";
			this->searchPanel->Size = System::Drawing::Size(36, 35);
			this->searchPanel->TabIndex = 16;
			this->searchPanel->UseVisualStyleBackColor = false;
			this->searchPanel->Click += gcnew System::EventHandler(this, &inventory::button7_Click);
			// 
			// addToPanel
			// 
			this->addToPanel->BackColor = System::Drawing::Color::Transparent;
			this->addToPanel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addToPanel->FlatAppearance->BorderSize = 0;
			this->addToPanel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->addToPanel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->addToPanel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addToPanel->Location = System::Drawing::Point(418, 343);
			this->addToPanel->Name = L"addToPanel";
			this->addToPanel->Size = System::Drawing::Size(36, 35);
			this->addToPanel->TabIndex = 17;
			this->addToPanel->UseVisualStyleBackColor = false;
			this->addToPanel->Click += gcnew System::EventHandler(this, &inventory::addToPanel_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel2->Controls->Add(this->searchTb);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Location = System::Drawing::Point(505, 146);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(239, 112);
			this->panel2->TabIndex = 15;
			// 
			// searchTb
			// 
			this->searchTb->Location = System::Drawing::Point(19, 57);
			this->searchTb->Name = L"searchTb";
			this->searchTb->Size = System::Drawing::Size(124, 20);
			this->searchTb->TabIndex = 19;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(158, 83);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(62, 22);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Confirm";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &inventory::button7_Click_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Default;
			this->label7->Font = (gcnew System::Drawing::Font(L"Neue Montreal Light", 10));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(16, 37);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 17);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Item:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Cursor = System::Windows::Forms::Cursors::Default;
			this->label10->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(15, 14);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(126, 19);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Search Material";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// addToPnl
			// 
			this->addToPnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->addToPnl->Controls->Add(this->label14);
			this->addToPnl->Controls->Add(this->editQtyTb);
			this->addToPnl->Controls->Add(this->addBtn);
			this->addToPnl->Controls->Add(this->label13);
			this->addToPnl->Controls->Add(this->eITb);
			this->addToPnl->Controls->Add(this->aTTb);
			this->addToPnl->Controls->Add(this->removeBtn);
			this->addToPnl->Controls->Add(this->label11);
			this->addToPnl->Controls->Add(this->label12);
			this->addToPnl->Location = System::Drawing::Point(505, 146);
			this->addToPnl->Name = L"addToPnl";
			this->addToPnl->Size = System::Drawing::Size(239, 148);
			this->addToPnl->TabIndex = 20;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Cursor = System::Windows::Forms::Cursors::Default;
			this->label14->Font = (gcnew System::Drawing::Font(L"Neue Montreal Light", 10));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(16, 88);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(30, 17);
			this->label14->TabIndex = 11;
			this->label14->Text = L"Qty:";
			// 
			// editQtyTb
			// 
			this->editQtyTb->Location = System::Drawing::Point(73, 87);
			this->editQtyTb->Name = L"editQtyTb";
			this->editQtyTb->Size = System::Drawing::Size(68, 20);
			this->editQtyTb->TabIndex = 10;
			// 
			// addBtn
			// 
			this->addBtn->Location = System::Drawing::Point(81, 113);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(62, 22);
			this->addBtn->TabIndex = 9;
			this->addBtn->Text = L"Add";
			this->addBtn->UseVisualStyleBackColor = true;
			this->addBtn->Click += gcnew System::EventHandler(this, &inventory::addBtn_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Cursor = System::Windows::Forms::Cursors::Default;
			this->label13->Font = (gcnew System::Drawing::Font(L"Neue Montreal Light", 10));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(155, 37);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 17);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Expt ID:";
			// 
			// eITb
			// 
			this->eITb->FormattingEnabled = true;
			this->eITb->Location = System::Drawing::Point(158, 56);
			this->eITb->Name = L"eITb";
			this->eITb->Size = System::Drawing::Size(62, 21);
			this->eITb->TabIndex = 7;
			// 
			// aTTb
			// 
			this->aTTb->FormattingEnabled = true;
			this->aTTb->Location = System::Drawing::Point(19, 57);
			this->aTTb->Name = L"aTTb";
			this->aTTb->Size = System::Drawing::Size(124, 21);
			this->aTTb->TabIndex = 6;
			// 
			// removeBtn
			// 
			this->removeBtn->Location = System::Drawing::Point(158, 113);
			this->removeBtn->Name = L"removeBtn";
			this->removeBtn->Size = System::Drawing::Size(62, 22);
			this->removeBtn->TabIndex = 5;
			this->removeBtn->Text = L"Remove";
			this->removeBtn->UseVisualStyleBackColor = true;
			this->removeBtn->Click += gcnew System::EventHandler(this, &inventory::removeBtn_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Cursor = System::Windows::Forms::Cursors::Default;
			this->label11->Font = (gcnew System::Drawing::Font(L"Neue Montreal Light", 10));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(16, 37);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 17);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Item:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Cursor = System::Windows::Forms::Cursors::Default;
			this->label12->Font = (gcnew System::Drawing::Font(L"Neue Montreal Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(15, 14);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(127, 19);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Edit Experiment";
			// 
			// inventory
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->addToPnl);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->addToPanel);
			this->Controls->Add(this->searchPanel);
			this->Controls->Add(this->removePanel);
			this->Controls->Add(this->addPanel);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->updatePanel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->adminAlertReturn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(800, 600);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"inventory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"inventory";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->updatePanel->ResumeLayout(false);
			this->updatePanel->PerformLayout();
			this->addPanel->ResumeLayout(false);
			this->addPanel->PerformLayout();
			this->removePanel->ResumeLayout(false);
			this->removePanel->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->addToPnl->ResumeLayout(false);
			this->addToPnl->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void AddMaterial()
	{
		// SQL Server connection string
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

		// Use the SqlConnection and SqlCommand classes
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			// Check if a material with the same name exists and is inactive (case-insensitive)
			String^ checkExistingSql = "SELECT COUNT(*) FROM material WHERE LOWER(materialName) = LOWER(@materialName) AND isActive = 0";
			SqlCommand^ checkCommand = gcnew SqlCommand(checkExistingSql, connection);
			checkCommand->Parameters->AddWithValue("@materialName", addMtlTb->Text);

			int materialCount = (int)checkCommand->ExecuteScalar();

			if (materialCount > 0) {
				// If the material is inactive, reactivate it (set isActive = 1)
				String^ updateSql = "UPDATE material SET isActive = 1, quantityAvailable = @quantityAvailable WHERE LOWER(materialName) = LOWER(@materialName) AND isActive = 0";
				SqlCommand^ updateCommand = gcnew SqlCommand(updateSql, connection);
				updateCommand->Parameters->AddWithValue("@materialName", addMtlTb->Text);
				updateCommand->Parameters->AddWithValue("@quantityAvailable", addQtyTb->Text);

				int rowsUpdated = updateCommand->ExecuteNonQuery();

				if (rowsUpdated > 0) {
					MessageBox::Show("Material reactivated successfully.");
				}
				else {
					MessageBox::Show("Material could not be reactivated.");
				}
			}
			else {
				// If no inactive material exists, insert a new one
				String^ insertSql = "INSERT INTO material (materialName, quantityAvailable, isActive) VALUES (@materialName, @quantityAvailable, 1)";
				SqlCommand^ insertCommand = gcnew SqlCommand(insertSql, connection);
				insertCommand->Parameters->AddWithValue("@materialName", addMtlTb->Text);
				insertCommand->Parameters->AddWithValue("@quantityAvailable", addQtyTb->Text);

				int rowsAffected = insertCommand->ExecuteNonQuery();

				if (rowsAffected > 0) {
					MessageBox::Show("Material added successfully.");
				}
				else {
					MessageBox::Show("Material could not be added.");
				}
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

	private: System::Void UpdateMaterialQuantity()
	{
		// Get the selected material name from the ComboBox
		String^ materialName = itemCb->SelectedItem->ToString();

		// Get the new quantity from the TextBox
		int newQuantity = 0;
		if (!Int32::TryParse(qtyTb2->Text, newQuantity)) {
			MessageBox::Show("Invalid quantity entered.");
			return;
		}

		// SQL Server connection string
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";

		// SQL query to update the quantityAvailable of the selected material
		String^ updateQuery = "UPDATE material SET quantityAvailable = @quantity WHERE materialName = @materialName";

		// Initialize a new SqlConnection
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try
		{
			// Open the connection
			connection->Open();

			// Create a SqlCommand object with the query and connection
			SqlCommand^ command = gcnew SqlCommand(updateQuery, connection);

			// Add parameters to avoid SQL injection
			command->Parameters->AddWithValue("@quantity", newQuantity);
			command->Parameters->AddWithValue("@materialName", materialName);

			// Execute the query to update the material's quantity
			int rowsAffected = command->ExecuteNonQuery();

			// Check if any rows were affected
			if (rowsAffected > 0)
			{
				MessageBox::Show("Material quantity updated successfully.");
			}
			else
			{
				MessageBox::Show("No material found with the specified name.");
			}
		}
		catch (SqlException^ ex)
		{
			// Handle any SQL exceptions (e.g., connection issues, invalid queries)
			MessageBox::Show("An error occurred: " + ex->Message);
		}
		finally
		{
			// Ensure the connection is closed
			if (connection->State == ConnectionState::Open)
			{
				connection->Close();
			}
		}
	}
	public: void comboQuery2() {
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

		// Use the SqlConnection and SqlCommand classes
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			// Open the connection
			connection->Open();

			String^ sql = "SELECT exptId from expt";

			SqlCommand^ command = gcnew SqlCommand(sql, connection);

			SqlDataReader^ reader = command->ExecuteReader();

			while (reader->Read()) {
				String^ exptID = reader->GetString(0);
				eITb->Items->Add(exptID);
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
	public: void comboQuery() {
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

		// Use the SqlConnection and SqlCommand classes
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			// Open the connection
			connection->Open();

			String^ sql = "SELECT m.materialName from material m WHERE m.isActive = 1";

			SqlCommand^ command = gcnew SqlCommand(sql, connection);

			SqlDataReader^ reader = command->ExecuteReader();

			while (reader->Read()) {
				String^ mtlName = reader->GetString(0);
				itemCb->Items->Add(mtlName);
				removeCb->Items->Add(mtlName);
				aTTb->Items->Add(mtlName);
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
	private: System::Void LoadMaterialsToLabel()
	{
		// SQL Server connection string
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";

		// SQL query to fetch data from the 'material' table
		String^ query = "SELECT m.materialId, m.materialName, m.quantityAvailable FROM material m WHERE m.isActive = 1";

		// Initialize a new SqlConnection
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try
		{
			// Open the connection
			connection->Open();

			// Create a command to execute the SQL query
			SqlCommand^ command = gcnew SqlCommand(query, connection);

			// Execute the command and retrieve a data reader
			SqlDataReader^ reader = command->ExecuteReader();

			// Initialize a string to hold the material data
			String^ materialData = "";
			String^ qtyData = "";

			// Loop through the reader and append each material's data to the string
			while (reader->Read())
			{
				// Get the material details
				String^ materialId = reader->GetInt32(0).ToString();
				String^ materialName = reader->GetString(1);
				String^ quantityAvailable = reader->GetInt32(2).ToString();

				// Concatenate the data with tabs between columns
				materialData += materialId + "    " + materialName + "\r\n";
				qtyData += quantityAvailable + "\r\n";
			}

			// Set the text of the label to display the material data
			materialLabel->Text = materialData;
			qtyLabel->Text = qtyData;

			reader->Close();
		}
		catch (SqlException^ ex)
		{
			// Handle SQL errors (e.g., connection or query issues)
			MessageBox::Show("Error: " + ex->Message);
		}
		finally
		{
			// Ensure the connection is closed
			if (connection->State == ConnectionState::Open)
			{
				connection->Close();
			}
		}
	}

	private: System::Void adminAlertReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateMaterialQuantity();
	LoadMaterialsToLabel();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	updatePanel->Show();
	addPanel->Hide();
	removePanel->Hide();
	panel2->Hide();
	addToPnl->Hide();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	addPanel->Show();
	updatePanel->Hide();
	removePanel->Hide();
	panel2->Hide();
	addToPnl->Hide();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	AddMaterial();
	comboQuery();
	comboQuery2();
	LoadMaterialsToLabel();
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	updatePanel->Hide();
	addPanel->Hide();
	removePanel->Show();
	panel2->Hide();
	addToPnl->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ materialName = removeCb->SelectedItem->ToString();

	// SQL Server connection string
	String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";

	// SQL query to update the isActive status of the selected material
	String^ updateQuery = "UPDATE material SET isActive = 0 WHERE materialName = @materialName";

	// Initialize a new SqlConnection
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try
	{
		// Open the connection
		connection->Open();

		// Create a SqlCommand object with the query and connection
		SqlCommand^ command = gcnew SqlCommand(updateQuery, connection);

		// Add parameters to avoid SQL injection
		command->Parameters->AddWithValue("@materialName", materialName);

		// Execute the query to update the material's isActive status
		int rowsAffected = command->ExecuteNonQuery();

		// Check if any rows were affected
		if (rowsAffected > 0)
		{
			MessageBox::Show("Material removed successfully.");
		}
		else
		{
			MessageBox::Show("No material found with the specified name.");
		}
	}
	catch (SqlException^ ex)
	{
		// Handle any SQL exceptions (e.g., connection issues, invalid queries)
		MessageBox::Show("An error occurred: " + ex->Message);
	}
	finally
	{
		// Ensure the connection is closed
		if (connection->State == ConnectionState::Open)
		{
			connection->Close();
		}
	}
	comboQuery();
	comboQuery2();
	LoadMaterialsToLabel();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Show();
	updatePanel->Hide();
	addPanel->Hide();
	removePanel->Hide();
	addToPnl->Hide();
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ materialName = searchTb->Text;

	// SQL Server connection string
	String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";

	// SQL query to fetch the material with the specified name
	String^ query = "SELECT m.materialId, m.materialName, m.quantityAvailable FROM material m WHERE m.materialName = @materialName AND m.isActive = 1";

	// Initialize a new SqlConnection
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try
	{
		// Open the connection
		connection->Open();

		// Create a command to execute the SQL query
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		// Add parameters to avoid SQL injection
		command->Parameters->AddWithValue("@materialName", materialName);

		// Execute the command and retrieve a data reader
		SqlDataReader^ reader = command->ExecuteReader();

		// Initialize a string to hold the material data
		String^ materialData = "";

		// Check if the reader contains any rows
		if (reader->HasRows)
		{
			// Loop through the reader and append each material's data to the string
			while (reader->Read())
			{
				// Get the material details
				String^ materialId = reader->GetInt32(0).ToString();
				String^ materialName = reader->GetString(1);
				String^ quantityAvailable = reader->GetInt32(2).ToString();

				// Concatenate the data with tabs between columns
				materialData = "Material ID: " + materialId + "\nMaterial Name: " + materialName + "\nMaterial Quantity: " + quantityAvailable;
			}

			// Show the material data
			MessageBox::Show(materialData);
		}
		else
		{
			// If no rows are found, display a message that the material doesn't exist
			MessageBox::Show("Material not found or is inactive.");
		}

		reader->Close();
	}
	catch (SqlException^ ex)
	{
		// Handle SQL errors (e.g., connection or query issues)
		MessageBox::Show("Error: " + ex->Message);
	}
	finally
	{
		// Ensure the connection is closed
		if (connection->State == ConnectionState::Open)
		{
			connection->Close();
		}
	}
}

private: System::Void addToPanel_Click(System::Object^ sender, System::EventArgs^ e) {
	addToPnl->Show();
	updatePanel->Hide();
	addPanel->Hide();
	removePanel->Hide();
	panel2->Hide();
}
private: System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ materialName = aTTb->SelectedItem->ToString();  // Selected material name
	String^ exptID = eITb->SelectedItem->ToString();        // Selected experiment ID
	int quantity = Int32::Parse(editQtyTb->Text);               // Quantity to add

	// SQL Server connection string
	String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";

	// SQL query to get materialId based on materialName
	String^ getMaterialIdQuery = "SELECT materialId FROM material WHERE materialName = @materialName AND isActive = 1";

	// Initialize a new SqlConnection
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try
	{
		connection->Open();

		// Get the materialId based on the materialName
		SqlCommand^ getMaterialIdCommand = gcnew SqlCommand(getMaterialIdQuery, connection);
		getMaterialIdCommand->Parameters->AddWithValue("@materialName", materialName);

		SqlDataReader^ reader = getMaterialIdCommand->ExecuteReader();

		int materialId = -1; // Default value if no material found

		// If material is found, retrieve the materialId
		if (reader->Read())
		{
			materialId = reader->GetInt32(0);
		}
		reader->Close();

		// Check if materialId is valid
		if (materialId != -1)
		{
			// SQL query to insert the selected material into the expt_material table
			String^ insertQuery = "INSERT INTO expt_material (exptId, materialId, defaultQuantity) VALUES (@exptId, @materialId, @defaultQuantity)";

			// Create the insert command
			SqlCommand^ insertCommand = gcnew SqlCommand(insertQuery, connection);

			// Add parameters to the insert command
			insertCommand->Parameters->AddWithValue("@exptId", exptID);
			insertCommand->Parameters->AddWithValue("@materialId", materialId);
			insertCommand->Parameters->AddWithValue("@defaultQuantity", quantity);

			// Execute the insert query
			int rowsAffected = insertCommand->ExecuteNonQuery();

			// Check if the insertion was successful
			if (rowsAffected > 0)
			{
				MessageBox::Show("Material added to experiment successfully.");
			}
			else
			{
				MessageBox::Show("Failed to add material to experiment.");
			}
		}
		else
		{
			MessageBox::Show("Material not found or is inactive.");
		}
	}
	catch (SqlException^ ex)
	{
		// Handle any SQL exceptions (e.g., connection issues, invalid queries)
		MessageBox::Show("An error occurred: " + ex->Message);
	}
	finally
	{
		// Ensure the connection is closed
		if (connection->State == ConnectionState::Open)
		{
			connection->Close();
		}
	}
	comboQuery();
	comboQuery2();
	LoadMaterialsToLabel();
}

private: System::Void removeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ materialName = aTTb->SelectedItem->ToString();  // Selected material name
	String^ exptID = eITb->SelectedItem->ToString();        // Selected experiment ID

	// SQL Server connection string
	String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";

	// Query to get materialId based on materialName
	String^ getMaterialIdQuery = "SELECT materialId FROM material WHERE materialName = @materialName AND isActive = 1";

	// Query to delete the material from the expt_material table
	String^ deleteQuery = "DELETE FROM expt_material WHERE exptId = @exptId AND materialId = @materialId";

	// Initialize a new SqlConnection
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		connection->Open();

		// Step 1: Get the materialId using materialName
		SqlCommand^ getMaterialIdCommand = gcnew SqlCommand(getMaterialIdQuery, connection);
		getMaterialIdCommand->Parameters->AddWithValue("@materialName", materialName);

		SqlDataReader^ reader = getMaterialIdCommand->ExecuteReader();
		int materialId = -1;

		// If material is found, retrieve the materialId
		if (reader->Read()) {
			materialId = reader->GetInt32(0);
		}
		reader->Close();

		// Step 2: If materialId is found, proceed with deletion
		if (materialId != -1) {
			// Create the delete command
			SqlCommand^ deleteCommand = gcnew SqlCommand(deleteQuery, connection);
			deleteCommand->Parameters->AddWithValue("@exptId", exptID);
			deleteCommand->Parameters->AddWithValue("@materialId", materialId);

			// Execute the delete query
			int rowsAffected = deleteCommand->ExecuteNonQuery();

			// Check if the deletion was successful
			if (rowsAffected > 0) {
				MessageBox::Show("Material removed from experiment successfully.");
			}
			else {
				MessageBox::Show("Failed to remove material from experiment. It might not be linked to the selected experiment.");
			}
		}
		else {
			MessageBox::Show("Material not found or is inactive.");
		}
	}
	catch (SqlException^ ex) {
		// Handle any SQL exceptions (e.g., connection issues, invalid queries)
		MessageBox::Show("An error occurred: " + ex->Message);
	}
	finally {
		// Ensure the connection is closed
		if (connection->State == ConnectionState::Open) {
			connection->Close();
		}
	}

	// Refresh UI elements after removal
	comboQuery();
	comboQuery2();
	LoadMaterialsToLabel();
}

};
}
