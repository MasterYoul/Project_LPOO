#include "pch.h"
#include "LoginForm.h"
#include "ProyectMainForm.h"

System::Void ProyectView::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
	User^ emp = Controller::Login(txtUsername->Text, txtPassword->Text);
	if (emp != nullptr) {
		MessageBox::Show("Bienvenido " + emp->Name + " " + emp->LastName);
		ProyectMainForm::user = emp;
		this->Close();
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos.");
	}
}
