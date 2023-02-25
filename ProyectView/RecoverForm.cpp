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
		User^ usu = Controller::QueryUserbyDni(UserDNI->Text);
		
						
			
			Random^ rnd = gcnew Random();

			SmtpClient^ clienteSmtp = gcnew SmtpClient("smtp.gmail.com");
			clienteSmtp->Port = 587;
			clienteSmtp->EnableSsl = true;
			clienteSmtp->Credentials = gcnew NetworkCredential("proyectolpoo2023@gmail.com", "sqowggvrrkzehvld");

			// Configurar el correo electrónico
			String^ direccionDeCorreo = usu->Email;
			String^ asunto="Se acaba de solicitar un cambio de contraseña";
			int valor = rnd->Next() % 90000 + 10000;
			String^ codigo = Convert::ToString(valor);
			lblClientData->Text = codigo;
			String ^ cuerpo = "Para poder ingresar ingrese el siguiente codigo: "+ codigo;
			MailMessage^ correo = gcnew MailMessage("proyectolpoo2023@gmail.com", direccionDeCorreo, asunto, cuerpo);
			correo->IsBodyHtml = true; // permitir el uso de etiquetas HTML para editar el formato del texto
			// Editar el formato del cuerpo del correo electrónico
			correo->Body = "<p style='font-size: 40pt; font-family: Arial, sans-serif;'>" + correo->Body + "</p>";
			MessageBox::Show("Se acaba de enviar un codigo de confirmacion por su correo.");

			// Enviar el correo electrónico
			try {
				clienteSmtp->Send(correo);
			}
			catch (Exception^ e) {
				MessageBox::Show("Error al enviar el correo electrónico: {0}", e->ToString());
			}
			
		
	}
	
}


System::Void ProyectView::RecoverForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	User^ emp = Controller::ChangePassword(UserDNI->Text, UserUsuario->Text, UserName->Text, UserLastName->Text, UserNumber->Text, textBox2->Text);
	String^ validate = lblClientData->Text;

	
	if (emp != nullptr && validate== (textBox3->Text)) {
		MessageBox::Show("Bienvenido " + emp->Name + " " + emp->LastName);
		ProyectMainForm::user = emp;
		
		this->Close();
	}
	else {
		MessageBox::Show("Datos incorrectos ingresados.");
	}
}
