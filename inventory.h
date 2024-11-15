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
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ qtyTb2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ itemCb;

	private: System::Windows::Forms::Label^ label1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(inventory::typeid));
			this->adminAlertReturn = (gcnew System::Windows::Forms::Button());
			this->materialLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->qtyLabel = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->qtyTb2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->itemCb = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
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
			this->panel1->Location = System::Drawing::Point(30, 135);
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
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->qtyTb2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->itemCb);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(305, 135);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(239, 112);
			this->panel2->TabIndex = 12;
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
			this->label1->Text = L"Update Quanitty";
			// 
			// inventory
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->panel2);
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
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
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

			while (reader->Read()) {
				String^ mtlName = reader->GetString(0);
				itemCb->Items->Add(mtlName);
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
		String^ query = "SELECT materialId, materialName, quantityAvailable FROM material";

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
};
}
