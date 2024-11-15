#include "loginForm.h"
#include "dashboardForm.h"
#include "registerForm.h"
#include "courseForm.h"
#include "adminDash.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MPLA104::loginForm loginForm;

	User^ user = nullptr;

	while (true) {
		MPLA104::loginForm loginForm;
	loginForm.ShowDialog();
	User^ user = loginForm.user;

		if (loginForm.switchToRegister) {
			MPLA104::registerForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
			else if (user == nullptr)
			{
				continue;
			}
			else {
				user = registerForm.user;
				continue;
			}
		}
		else {
			user = loginForm.user;
			break;
		}
		}
	if (user != nullptr) {
        if (user->isAdmin == 1) {
            MPLA104::adminDash adminDash(user);
            Application::Run(% adminDash);
	}
	else {
            MPLA104::dashboardForm dashboardForm(user);
            Application::Run(% dashboardForm);
        }
	}
}