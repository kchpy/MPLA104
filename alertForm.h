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
	/// Summary for alertForm
	/// </summary>
	public ref class alertForm : public System::Windows::Forms::Form
	{
	public:
		alertForm(void)
		{
			InitializeComponent();

			sqlQueue();
			historyLabel->Text = "";
			addtlLbl->Text = "";
			populateHistoryCb();
			sqlAddtl();
			queuedLabel->Text = "Request ID: " + rId + "\nUser ID: " + uId + "\nExperiment ID: " + eId + "\nRequest Date: " + rDate + "\nSection: " + section;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~alertForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ queuedLabel;
	private: System::Windows::Forms::Button^ adminAccept;
	private: System::Windows::Forms::Button^ adminDeny;
	private: System::Windows::Forms::Button^ adminAlertReturn;
	private: System::Windows::Forms::Label^ historyLabel;
	private: System::Windows::Forms::Panel^ adminHistory;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ addtlLbl;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ adminHistoryCb;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(alertForm::typeid));
			this->queuedLabel = (gcnew System::Windows::Forms::Label());
			this->adminAccept = (gcnew System::Windows::Forms::Button());
			this->adminDeny = (gcnew System::Windows::Forms::Button());
			this->adminAlertReturn = (gcnew System::Windows::Forms::Button());
			this->historyLabel = (gcnew System::Windows::Forms::Label());
			this->adminHistory = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->addtlLbl = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->adminHistoryCb = (gcnew System::Windows::Forms::ComboBox());
			this->adminHistory->SuspendLayout();
			this->SuspendLayout();
			// 
			// queuedLabel
			// 
			this->queuedLabel->AutoSize = true;
			this->queuedLabel->BackColor = System::Drawing::Color::Transparent;
			this->queuedLabel->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->queuedLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->queuedLabel->Location = System::Drawing::Point(58, 157);
			this->queuedLabel->Name = L"queuedLabel";
			this->queuedLabel->Size = System::Drawing::Size(89, 76);
			this->queuedLabel->TabIndex = 0;
			this->queuedLabel->Text = L"placeholder\r\nplaceholder\r\nplaceholder\r\nplaceholder";
			this->queuedLabel->Click += gcnew System::EventHandler(this, &alertForm::queuedLabel_Click);
			// 
			// adminAccept
			// 
			this->adminAccept->BackColor = System::Drawing::Color::Transparent;
			this->adminAccept->Cursor = System::Windows::Forms::Cursors::Hand;
			this->adminAccept->FlatAppearance->BorderSize = 0;
			this->adminAccept->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->adminAccept->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->adminAccept->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adminAccept->Location = System::Drawing::Point(62, 432);
			this->adminAccept->Name = L"adminAccept";
			this->adminAccept->Size = System::Drawing::Size(127, 41);
			this->adminAccept->TabIndex = 6;
			this->adminAccept->UseVisualStyleBackColor = false;
			this->adminAccept->Click += gcnew System::EventHandler(this, &alertForm::adminAccept_Click);
			// 
			// adminDeny
			// 
			this->adminDeny->BackColor = System::Drawing::Color::Transparent;
			this->adminDeny->Cursor = System::Windows::Forms::Cursors::Hand;
			this->adminDeny->FlatAppearance->BorderSize = 0;
			this->adminDeny->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->adminDeny->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->adminDeny->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adminDeny->Location = System::Drawing::Point(219, 433);
			this->adminDeny->Name = L"adminDeny";
			this->adminDeny->Size = System::Drawing::Size(127, 41);
			this->adminDeny->TabIndex = 7;
			this->adminDeny->UseVisualStyleBackColor = false;
			this->adminDeny->Click += gcnew System::EventHandler(this, &alertForm::adminDeny_Click);
			// 
			// adminAlertReturn
			// 
			this->adminAlertReturn->BackColor = System::Drawing::Color::Transparent;
			this->adminAlertReturn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->adminAlertReturn->FlatAppearance->BorderSize = 0;
			this->adminAlertReturn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->adminAlertReturn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->adminAlertReturn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adminAlertReturn->Location = System::Drawing::Point(58, 50);
			this->adminAlertReturn->Name = L"adminAlertReturn";
			this->adminAlertReturn->Size = System::Drawing::Size(36, 35);
			this->adminAlertReturn->TabIndex = 8;
			this->adminAlertReturn->UseVisualStyleBackColor = false;
			this->adminAlertReturn->Click += gcnew System::EventHandler(this, &alertForm::adminAlertReturn_Click);
			// 
			// historyLabel
			// 
			this->historyLabel->AutoSize = true;
			this->historyLabel->BackColor = System::Drawing::Color::Transparent;
			this->historyLabel->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historyLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->historyLabel->Location = System::Drawing::Point(3, 2);
			this->historyLabel->Name = L"historyLabel";
			this->historyLabel->Size = System::Drawing::Size(49, 19);
			this->historyLabel->TabIndex = 9;
			this->historyLabel->Text = L"NULL";
			this->historyLabel->Click += gcnew System::EventHandler(this, &alertForm::label1_Click);
			// 
			// adminHistory
			// 
			this->adminHistory->AutoScroll = true;
			this->adminHistory->BackColor = System::Drawing::Color::White;
			this->adminHistory->Controls->Add(this->historyLabel);
			this->adminHistory->Location = System::Drawing::Point(435, 157);
			this->adminHistory->Name = L"adminHistory";
			this->adminHistory->Size = System::Drawing::Size(309, 389);
			this->adminHistory->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label1->Location = System::Drawing::Point(58, 253);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 19);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Additional Materials:";
			// 
			// addtlLbl
			// 
			this->addtlLbl->AutoSize = true;
			this->addtlLbl->BackColor = System::Drawing::Color::Transparent;
			this->addtlLbl->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addtlLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->addtlLbl->Location = System::Drawing::Point(58, 282);
			this->addtlLbl->Name = L"addtlLbl";
			this->addtlLbl->Size = System::Drawing::Size(49, 19);
			this->addtlLbl->TabIndex = 12;
			this->addtlLbl->Text = L"None.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label2->Location = System::Drawing::Point(431, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 19);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Date filter:";
			// 
			// adminHistoryCb
			// 
			this->adminHistoryCb->FormattingEnabled = true;
			this->adminHistoryCb->Location = System::Drawing::Point(435, 79);
			this->adminHistoryCb->Name = L"adminHistoryCb";
			this->adminHistoryCb->Size = System::Drawing::Size(121, 21);
			this->adminHistoryCb->TabIndex = 14;
			this->adminHistoryCb->SelectedIndexChanged += gcnew System::EventHandler(this, &alertForm::adminHistoryCb_SelectedIndexChanged);
			// 
			// alertForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->adminHistoryCb);
			this->Controls->Add(this->addtlLbl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->adminHistory);
			this->Controls->Add(this->adminAlertReturn);
			this->Controls->Add(this->adminDeny);
			this->Controls->Add(this->adminAccept);
			this->Controls->Add(this->queuedLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(800, 600);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"alertForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"alertForm";
			this->adminHistory->ResumeLayout(false);
			this->adminHistory->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void sqlAddtl()
	{
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

		// Use the SqlConnection and SqlCommand classes
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			// Open connection
			connection->Open();

			// SQL query to fetch materialName and requestedQuantity
			String^ sql = "SELECT m.materialName, rm.requestedQuantity FROM request_materials rm "
				"INNER JOIN material m ON rm.materialId = m.materialId "
				"WHERE rm.requestId = @requestId";

			SqlCommand^ command = gcnew SqlCommand(sql, connection);
			command->Parameters->AddWithValue("@requestId", rId); // Pass the specific requestId

			SqlDataReader^ reader = command->ExecuteReader();

			// Clear the label text before appending new data
			addtlLbl->Text = "";

			// Flag to check if any data is found
			bool dataFound = false;

			// Check if data is returned
			while (reader->Read()) {
				String^ materialName = reader->GetString(0); // materialName is the first column
				int requestedQuantity = reader->GetInt32(1); // requestedQuantity is the second column

				// Check if materialName and requestedQuantity are valid
				if (materialName != nullptr && !String::IsNullOrEmpty(materialName) && !reader->IsDBNull(1)) {
					// Append the retrieved data to the label
					addtlLbl->Text += materialName + " - " + requestedQuantity + "\n";
					dataFound = true;
				}
			}

			// If no data was found, you can optionally set a default message
			if (!dataFound) {
				addtlLbl->Text = "No materials found for this request ID.";
			}

		}
		catch (SqlException^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message);
		}
		finally {
			// Close the connection
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}


	public:
		int rId;
		String^ uId;
		String^ eId;
		String^ rDate;
		String^ section;
	public: void sqlHistory(String^ selectedDate) {
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";

		// Use the SqlConnection and SqlCommand classes
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			// Determine the query based on whether "Show All" or a specific date is selected
			String^ sql;
			if (selectedDate == "Show All") {
				sql = "SELECT requestId, userId, exptId, requestDate, section FROM requests";
			}
			else {
				sql = "SELECT requestId, userId, exptId, requestDate, section FROM requests WHERE CAST(requestDate AS DATE) = @selectedDate";
			}

			SqlCommand^ command = gcnew SqlCommand(sql, connection);

			// If a specific date is selected, add it as a parameter
			if (selectedDate != "Show All") {
				command->Parameters->AddWithValue("@selectedDate", selectedDate);
			}

			// Execute the command and read the results
			SqlDataReader^ reader = command->ExecuteReader();

			// Clear the existing content of the label before adding new data
			historyLabel->Text = "";

			// Display the results
			while (reader->Read()) {
				historyLabel->Text += "Request ID: " + reader->GetInt32(0) + "\nUser ID: " + reader->GetString(1) +
					"\nExperiment ID: " + reader->GetString(2) +
					"\nRequest Date: " + reader->GetDateTime(3).ToString("yyyy-MM-dd") +
					"\nSection: " + reader->GetString(4) + "\n\n";
			}

			reader->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message);
		}
		finally {
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}
	public: void populateHistoryCb() {
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			// Get distinct dates from the requests table
			String^ sql = "SELECT DISTINCT CAST(requestDate AS DATE) FROM requests";
			SqlCommand^ command = gcnew SqlCommand(sql, connection);

			SqlDataReader^ reader = command->ExecuteReader();

			// Clear existing items and add "Show All" option
			adminHistoryCb->Items->Clear();
			adminHistoryCb->Items->Add("Show All");

			// Add unique dates to the ComboBox
			while (reader->Read()) {
				String^ date = reader->GetDateTime(0).ToString("yyyy-MM-dd");
				if (!adminHistoryCb->Items->Contains(date)) {
					adminHistoryCb->Items->Add(date);
				}
			}

			reader->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message);
		}
		finally {
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}
	private: System::Void historyCb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Get the selected date from the ComboBox
		String^ selectedDate = adminHistoryCb->SelectedItem->ToString();

		// Call the sqlHistory method to update the label based on the selected date
		sqlHistory(selectedDate);
	}

	public: void sqlQueue() {
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

		// Use the SqlConnection and SqlCommand classes
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			// Open the connection
			connection->Open();

			// SQL command to retrieve materials for the specific experiment
            String^ sql = "SELECT requestId, userId, exptId, requestDate, section FROM requests WHERE assessed = 0";

			// Create a SqlCommand object
			SqlCommand^ command = gcnew SqlCommand(sql, connection);

			// Execute the command and read the results
			SqlDataReader^ reader = command->ExecuteReader();

			reader->Read();
			
			rId = reader->GetInt32(0);
			uId = reader->GetString(1);
			eId = reader->GetString(2);
			rDate = reader->GetDateTime(3).ToString("yyyy-MM-dd");
			section = reader->GetString(4);

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
	private: System::Void adminAlertReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void queuedLabel_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void adminAccept_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

	// Use the SqlConnection and SqlCommand classes
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		// Open the connection
		connection->Open();

		// Check if any requested quantities exceed available quantities
		String^ checkRequestedQtySql = "SELECT m.materialId, m.quantityAvailable, SUM(rm.requestedQuantity) AS totalRequested "
			"FROM material m "
			"LEFT JOIN request_materials rm ON m.materialId = rm.materialId AND rm.requestId = @requestId "
			"WHERE m.materialId IN (SELECT materialId FROM request_materials WHERE requestId = @requestId) AND m.isActive = 1"
			"GROUP BY m.materialId, m.quantityAvailable";

		SqlCommand^ checkRequestedQtyCommand = gcnew SqlCommand(checkRequestedQtySql, connection);
		checkRequestedQtyCommand->Parameters->AddWithValue("@requestId", rId);

		SqlDataReader^ requestedReader = checkRequestedQtyCommand->ExecuteReader();
		bool canAcceptRequest = true;

		while (requestedReader->Read()) {
			int materialId = requestedReader->GetInt32(0);
			int availableQty = requestedReader->GetInt32(1);
			int totalRequested = requestedReader->GetInt32(2);

			if (totalRequested > availableQty) {
				canAcceptRequest = false;
				MessageBox::Show("Request cannot be accepted. Material ID " + materialId.ToString() +
					" requires more than available stock.");
				break;
			}
		}

	requestedReader->Close();

	if (canAcceptRequest) {
		// Update request to set assessed and approved
		String^ updateRequestSql = "UPDATE requests SET assessed = 1, approved = 1 WHERE assessed = 0 AND userId = @userId AND requestId = @requestId";
		SqlCommand^ updateRequestCommand = gcnew SqlCommand(updateRequestSql, connection);
		updateRequestCommand->Parameters->AddWithValue("@userId", uId);
		updateRequestCommand->Parameters->AddWithValue("@requestId", rId);
		updateRequestCommand->ExecuteNonQuery();

		// Deduct material quantities based on the request_materials and expt_material tables
		String^ deductRequestedMaterialsSql = "UPDATE m "
			"SET m.quantityAvailable = m.quantityAvailable - COALESCE(rm.requestedQuantity, 0) "
			"FROM material m "
			"INNER JOIN request_materials rm ON m.materialId = rm.materialId "
			"WHERE rm.requestId = @requestId AND m.isActive = 1";

		SqlCommand^ deductRequestedMaterialsCommand = gcnew SqlCommand(deductRequestedMaterialsSql, connection);
		deductRequestedMaterialsCommand->Parameters->AddWithValue("@requestId", rId);
		deductRequestedMaterialsCommand->ExecuteNonQuery();

		// Deduct quantities from experiment materials
		String^ deductExptMaterialsSql = "UPDATE m "
			"SET m.quantityAvailable = m.quantityAvailable - COALESCE(em.defaultQuantity, 0) "
			"FROM material m "
			"INNER JOIN expt_material em ON m.materialId = em.materialId AND em.exptId = @exptId "
			"WHERE em.exptId = @exptId AND m.isActive = 1";

		SqlCommand^ deductExptMaterialsCommand = gcnew SqlCommand(deductExptMaterialsSql, connection);
		deductExptMaterialsCommand->Parameters->AddWithValue("@exptId", eId);
		deductExptMaterialsCommand->ExecuteNonQuery();

		// Show success message
		MessageBox::Show("Request accepted successfully.");

		// Update the queuedLabel with the new request
		sqlQueue();
		sqlAddtl();
		queuedLabel->Text = "User ID: " + uId + "\nExperiment ID: " + eId + "\nRequest Date: " + rDate + "\nSection: " + section;
		}
	}
	catch (SqlException^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message);
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message);
	}
	finally {
		if (connection->State == ConnectionState::Open) {
			connection->Close();
		}
	}
}


private: System::Void adminDeny_Click(System::Object^ sender, System::EventArgs^ e) {
            
	String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

	// Use the SqlConnection and SqlCommand classes
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		// Open the connection
		connection->Open();

		// SQL command to update the assessed column to 1
		String^ sql = "UPDATE requests SET assessed = 1 WHERE assessed = 0 AND userId = '" + uId + "' AND requestId = '" + rId + "'";

		// Create a SqlCommand object
		SqlCommand^ command = gcnew SqlCommand(sql, connection);

		// Execute the command
		command->ExecuteNonQuery();

		// Show a success message
		MessageBox::Show("Request denied successfully.");

		// Update the queuedLabel with the new request
		sqlQueue();
		sqlAddtl();
		queuedLabel->Text = "Request ID: " + rId + "\nUser ID: " + uId + "\nExperiment ID: " + eId + "\nRequest Date: " + rDate + "\nSection: " + section;
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
private: System::Void adminHistoryCb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedDate = adminHistoryCb->SelectedItem->ToString();
	sqlHistory(selectedDate);
}
};
}


