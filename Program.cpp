#include "loginForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MPLA104::loginForm loginForm;

	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr) {
		MessageBox::Show("Successful Authentication of " + user->name, "Program.cpp", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Authentication Failed", "Program.cpp", MessageBoxButtons::OK);
	}
}