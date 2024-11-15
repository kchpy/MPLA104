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
	/// Summary for clientAlertForm
	/// </summary>
	public ref class clientAlertForm : public System::Windows::Forms::Form
	{
	public:
		clientAlertForm(User^ user)
		{
			InitializeComponent();
			
			ID = user->userId;

			clientQueueLabel->Text = "";
			clientHistoryLabel->Text = "";
			
			sqlQueue();
			historyCb();
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~clientAlertForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ clientAlertReturn;
	private: System::Windows::Forms::Label^ clientQueueLabel;

	private: System::Windows::Forms::Panel^ adminHistory;
	private: System::Windows::Forms::Label^ clientHistoryLabel;
	private: System::Windows::Forms::ComboBox^ clientHistoryCb;
	private: System::Windows::Forms::Panel^ panel1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(clientAlertForm::typeid));
			this->clientAlertReturn = (gcnew System::Windows::Forms::Button());
			this->clientQueueLabel = (gcnew System::Windows::Forms::Label());
			this->adminHistory = (gcnew System::Windows::Forms::Panel());
			this->clientHistoryLabel = (gcnew System::Windows::Forms::Label());
			this->clientHistoryCb = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->adminHistory->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// clientAlertReturn
			// 
			this->clientAlertReturn->BackColor = System::Drawing::Color::Transparent;
			this->clientAlertReturn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clientAlertReturn->FlatAppearance->BorderSize = 0;
			this->clientAlertReturn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->clientAlertReturn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->clientAlertReturn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clientAlertReturn->Location = System::Drawing::Point(59, 50);
			this->clientAlertReturn->Name = L"clientAlertReturn";
			this->clientAlertReturn->Size = System::Drawing::Size(36, 35);
			this->clientAlertReturn->TabIndex = 9;
			this->clientAlertReturn->UseVisualStyleBackColor = false;
			this->clientAlertReturn->Click += gcnew System::EventHandler(this, &clientAlertForm::clientAlertReturn_Click);
			// 
			// clientQueueLabel
			// 
			this->clientQueueLabel->AutoSize = true;
			this->clientQueueLabel->BackColor = System::Drawing::Color::Transparent;
			this->clientQueueLabel->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clientQueueLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->clientQueueLabel->Location = System::Drawing::Point(-4, 0);
			this->clientQueueLabel->Name = L"clientQueueLabel";
			this->clientQueueLabel->Size = System::Drawing::Size(89, 76);
			this->clientQueueLabel->TabIndex = 10;
			this->clientQueueLabel->Text = L"placeholder\r\nplaceholder\r\nplaceholder\r\nplaceholder";
			// 
			// adminHistory
			// 
			this->adminHistory->AutoScroll = true;
			this->adminHistory->BackColor = System::Drawing::Color::White;
			this->adminHistory->Controls->Add(this->clientHistoryLabel);
			this->adminHistory->Location = System::Drawing::Point(434, 157);
			this->adminHistory->Name = L"adminHistory";
			this->adminHistory->Size = System::Drawing::Size(309, 389);
			this->adminHistory->TabIndex = 11;
			// 
			// clientHistoryLabel
			// 
			this->clientHistoryLabel->AutoSize = true;
			this->clientHistoryLabel->BackColor = System::Drawing::Color::Transparent;
			this->clientHistoryLabel->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clientHistoryLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->clientHistoryLabel->Location = System::Drawing::Point(3, 2);
			this->clientHistoryLabel->Name = L"clientHistoryLabel";
			this->clientHistoryLabel->Size = System::Drawing::Size(49, 19);
			this->clientHistoryLabel->TabIndex = 9;
			this->clientHistoryLabel->Text = L"NULL";
			// 
			// clientHistoryCb
			// 
			this->clientHistoryCb->FormattingEnabled = true;
			this->clientHistoryCb->Location = System::Drawing::Point(434, 79);
			this->clientHistoryCb->Name = L"clientHistoryCb";
			this->clientHistoryCb->Size = System::Drawing::Size(121, 21);
			this->clientHistoryCb->TabIndex = 12;
			this->clientHistoryCb->SelectedIndexChanged += gcnew System::EventHandler(this, &clientAlertForm::clientHistoryCb_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->clientQueueLabel);
			this->panel1->Location = System::Drawing::Point(59, 157);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(309, 389);
			this->panel1->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Neue Montreal", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label1->Location = System::Drawing::Point(430, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 19);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Date filter:";
			// 
			// clientAlertForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->clientHistoryCb);
			this->Controls->Add(this->adminHistory);
			this->Controls->Add(this->clientAlertReturn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(800, 600);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"clientAlertForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"clientAlertForm";
			this->adminHistory->ResumeLayout(false);
			this->adminHistory->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int rId;
		String^ ID;
		String^ uId;
		String^ eId;
		String^ rDate;
		String^ section;
		bool assessed;
		bool approved;
	public: void sqlHistory(String^ selectedDate) {
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";

		// Use the SqlConnection and SqlCommand classes
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			// Open the connection
			connection->Open();

			// SQL query to retrieve requests based on the selected date or all if "Show All" is chosen
			String^ sql;
			if (selectedDate == "Show All") {
				sql = "SELECT requestId, userId, exptId, requestDate, section, approved, assessed FROM requests WHERE userId = @userId";
			}
			else {
				sql = "SELECT requestId, userId, exptId, requestDate, section, approved, assessed FROM requests WHERE userId = @userId AND CAST(requestDate AS DATE) = @selectedDate";
			}

			// Create a SqlCommand object
			SqlCommand^ command = gcnew SqlCommand(sql, connection);

			// Add parameters to avoid SQL injection
			command->Parameters->AddWithValue("@userId", ID);
			if (selectedDate != "Show All") {
				command->Parameters->AddWithValue("@selectedDate", selectedDate);
			}

			// Execute the command and read the results
			SqlDataReader^ reader = command->ExecuteReader();

			// Clear the label text before displaying new data
			clientHistoryLabel->Text = "";

			while (reader->Read()) {
				int rId = reader->GetInt32(0);
				String^ uId = reader->GetString(1);
				String^ eId = reader->GetString(2);
				String^ rDate = reader->GetDateTime(3).ToString("yyyy-MM-dd");
				String^ section = reader->GetString(4);
				bool approved = reader->GetBoolean(5);
				bool assessed = reader->GetBoolean(6);

				// Update the label with request details
				clientHistoryLabel->Text += "Request ID: " + rId + "\nUser ID: " + uId +
					"\nExperiment ID: " + eId + "\nRequest Date: " + rDate + "\nSection: " + section +
					"\nStatus: " + (assessed ? (approved ? "Accepted" : "Denied") : "Pending") + "\n\n";
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


	public: void sqlQueue() {
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

		// Use the SqlConnection and SqlCommand classes
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			// Open the connection
			connection->Open();

			// SQL command to retrieve materials for the specific experiment
			String^ sql = "SELECT requestId, userId, exptId, requestDate, section FROM requests WHERE assessed = 0 AND userId = '" + ID + "'";

			// Create a SqlCommand object
			SqlCommand^ command = gcnew SqlCommand(sql, connection);

			// Execute the command and read the results
			SqlDataReader^ reader = command->ExecuteReader();

			while (reader->Read()) {
				rId = reader->GetInt32(0);
				uId = reader->GetString(1);
				eId = reader->GetString(2);
				rDate = reader->GetDateTime(3).ToString("yyyy-MM-dd");
				section = reader->GetString(4);

				clientQueueLabel->Text += "Request ID: " + rId + "\nUser ID: " + uId + "\nExperiment ID: " + eId + "\nRequest Date: " + rDate + "\nSection: " + section + "\nStatus: Pending\n\n" ;
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
	private: System::Void clientAlertReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void clientHistoryCb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Get the selected date from the ComboBox
		String^ selectedDate = clientHistoryCb->SelectedItem->ToString();

		// Call the sqlHistory method with the selected date
		sqlHistory(selectedDate);
	}
	public: void historyCb() {
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True";

		// Use the SqlConnection and SqlCommand classes
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			// Open the connection
			connection->Open();

			String^ sql = "SELECT DISTINCT CAST(requestDate AS DATE) FROM requests WHERE userId = @userId";
			SqlCommand^ command = gcnew SqlCommand(sql, connection);
			command->Parameters->AddWithValue("@userId", ID);

			SqlDataReader^ reader = command->ExecuteReader();

			// Clear existing items in the ComboBox
			clientHistoryCb->Items->Clear();

			// Add the "Show All" option
			clientHistoryCb->Items->Add("Show All");

			while (reader->Read()) {
				String^ date = reader->GetDateTime(0).ToString("yyyy-MM-dd");

				// Add the date to the ComboBox if it's not already present
				if (!clientHistoryCb->Items->Contains(date)) {
					clientHistoryCb->Items->Add(date);
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


};
}
