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
			sqlHistory();
			
			
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
			this->adminHistory->SuspendLayout();
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
			this->clientQueueLabel->Location = System::Drawing::Point(58, 157);
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
			// clientAlertForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->adminHistory);
			this->Controls->Add(this->clientQueueLabel);
			this->Controls->Add(this->clientAlertReturn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(800, 600);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"clientAlertForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"clientAlertForm";
			this->adminHistory->ResumeLayout(false);
			this->adminHistory->PerformLayout();
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
	public: void sqlHistory() {
		String^ connectionString = "Data Source=.\\sqlexpress;Initial Catalog=mpla104data;Integrated Security=True;Encrypt=False;TrustServerCertificate=True"; // Adjust as necessary

		// Use the SqlConnection and SqlCommand classes
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			// Open the connection
			connection->Open();

			// SQL command to retrieve materials for the specific experiment
			String^ sql = "SELECT requestId, userId, exptId, requestDate, section, approved, assessed FROM requests WHERE userId = '" + ID + "'";

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
				approved = reader->GetBoolean(5);
				assessed = reader->GetBoolean(6);

				clientHistoryLabel->Text += "Request ID: " + rId + "\nUser ID: " + uId + "\nExperiment ID: " + eId + "\nRequest Date: " + rDate + "\nSection: " + section + "\nStatus: " + (assessed ? (approved ? "Accepted" : "Denied") : "Pending" ) + "\n\n";
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
	};
}
