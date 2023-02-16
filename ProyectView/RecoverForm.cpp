#include "pch.h"
#include "RecoverForm.h"
#include "ProyectMainForm.h"

System::Void ProyectView::RecoverForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (UserDNI->Text == nullptr&& UserUsuario->Text == nullptr && UserName->Text == nullptr && UserLastName->Text == nullptr && UserNumber->Text == nullptr && textBox2->Text == nullptr) {
		MessageBox::Show("Complete todos los espacios.");
	}
	if (textBox2->Text!= textBox1->Text) {
		MessageBox::Show("Las nuevas contraseñas son distintas.");
	}
	else {
		User^ emp = Controller::ChangePassword(UserDNI->Text, UserUsuario->Text, UserName->Text, UserLastName->Text, UserNumber->Text, textBox2->Text);
		if (emp != nullptr) {
			MessageBox::Show("Bienvenido " + emp->Name + " " + emp->LastName);
			ProyectMainForm::user = emp;
			this->Close();
		}
		else {
			MessageBox::Show("Datos incorrectos ingresados.");
		}
	}
}
