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
			sqlHistory();
			queuedLabel->Text = "User ID: " + uId + "\nExperiment ID: " + eId + "\nRequest Date: " + rDate + "\nSection: " + section;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(alertForm::typeid));
			this->queuedLabel = (gcnew System::Windows::Forms::Label());
			this->adminAccept = (gcnew System::Windows::Forms::Button());
			this->adminDeny = (gcnew System::Windows::Forms::Button());
			this->adminAlertReturn = (gcnew System::Windows::Forms::Button());
			this->historyLabel = (gcnew System::Windows::Forms::Label());
			this->adminHistory = (gcnew System::Windows::Forms::Panel());
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
			this->adminAccept->Location = System::Drawing::Point(62, 260);
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
			this->adminDeny->Location = System::Drawing::Point(219, 260);
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
			// alertForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 600);
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
	public:
		int rId;
		String^ uId;
		String^ eId;
		String^ rDate;
		String^ section;
	public: void sqlHistory() {
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

		// Use the SqlConnection and SqlCommand classes
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			// Open the connection
			connection->Open();

			// SQL command to retrieve materials for the specific experiment
			String^ sql = "SELECT requestId, userId, exptId, requestDate, section FROM requests";

			// Create a SqlCommand object
			SqlCommand^ command = gcnew SqlCommand(sql, connection);

			// Execute the command and read the results
			SqlDataReader^ reader = command->ExecuteReader();

            
			while(reader->Read()) {
				historyLabel->Text += "Request ID: " + reader->GetInt32(0) + "\nUser ID: " + reader->GetString(1) + "\nExperiment ID: " + reader->GetString(2) + "\nRequest Date: " + reader->GetDateTime(3).ToString("yyyy-MM-dd") + "\nSection: " + reader->GetString(4) + "\n\n";
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

		// SQL command to update the assessed column to 1
		String^ sql = "UPDATE requests SET assessed = 1, approved = 1 WHERE assessed = 0 AND userId = '" + uId + "' AND requestId = '" + rId + "'";

		// Create a SqlCommand object
		SqlCommand^ command = gcnew SqlCommand(sql, connection);

		// Execute the command
		command->ExecuteNonQuery();

		// Show a success message
		MessageBox::Show("Request accepted successfully.");

		// Update the queuedLabel with the new request
		sqlQueue();
		queuedLabel->Text = "User ID: " + uId + "\nExperiment ID: " + eId + "\nRequest Date: " + rDate + "\nSection: " + section;
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
		queuedLabel->Text = "User ID: " + uId + "\nExperiment ID: " + eId + "\nRequest Date: " + rDate + "\nSection: " + section;
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
};
}


