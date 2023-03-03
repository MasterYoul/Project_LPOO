#include "pch.h"
#include "UserInformation.h"
#include "ProyectMainForm.h"
using namespace ProyectView;

using namespace System::Collections::Generic;

System::Void ProyectView::UserInformation::UserInformation_Load(System::Object^ sender, System::EventArgs^ e)

{
	label16->Text="Bienvenido" + " "+ProyectMainForm::user->Name + " " + ProyectMainForm::user->LastName;
	UserId->Text = "" + ProyectMainForm::user->Id;
	UserDNI->Text = ProyectMainForm::user->DocNumber;
	UserName->Text = ProyectMainForm::user->Name;
	UserNumber->Text = ProyectMainForm::user->PhoneNumber;
	UserDirection->Text = ProyectMainForm::user->Adress;
	UserEmail->Text = ProyectMainForm::user->Email;
	UserUsuario->Text = ProyectMainForm::user->Username;
	UserPassword->Text = ProyectMainForm::user->Password;
	UserLastName->Text = ProyectMainForm::user->LastName;
	UserSalary->Text = "" + ProyectMainForm::user->Salary;
	UserMale->Checked = ProyectMainForm::user->Gender == 'M';
	UserFemale->Checked = ProyectMainForm::user->Gender == 'F';
	UserDateTimeBirthday->Value = DateTime::Parse(ProyectMainForm::user->Birthday);
	if (ProyectMainForm::user ->Foto != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(ProyectMainForm::user->Foto);
		pictureBox1->Image = Image::FromStream(ms);
	}
	else {
		pictureBox1->Image = nullptr;
		pictureBox1->Invalidate();
	}
   

}

System::Void ProyectView::UserInformation::buttonModifyUser_Click(System::Object^ sender, System::EventArgs^ e)
{
	{
		User^ user = gcnew User();


		user->Id = Convert::ToInt32(ProyectMainForm::user->Id);
		user->Username = UserUsuario->Text;
		
		user->Name = ProyectMainForm::user->Name;
		user->LastName = ProyectMainForm::user->LastName;
		user->Salary = Convert::ToDouble(ProyectMainForm::user->Salary);
		user->Type = ProyectMainForm::user->Type;
		user->Gender = ProyectMainForm::user->Gender;
		user->Adress = UserDirection->Text;
		user->PhoneNumber = UserNumber->Text;
		user->Birthday = ProyectMainForm::user->Birthday;
		user->Email = UserEmail->Text;
		user->DocNumber = ProyectMainForm::user->DocNumber;
		user->State = ProyectMainForm::user->State;
		user->Status = ProyectMainForm::user->Status;

		if (textBox3->Text->Trim() != "" || textBox2->Text->Trim() !="" ) {
			if (textBox3->Text!= textBox2->Text) {
				MessageBox::Show("Las nuevas contrase�as deben ser iguales");
			}
			else {
				user->Password = textBox3->Text;
			}

		}
		else {
			user->Password = UserPassword->Text;
		}



		if (pictureBox1 != nullptr && pictureBox1->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pictureBox1->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			user->Foto = ms->ToArray();
		}
		Controller::UpdateUser(user);
		MessageBox::Show("Se acaba de actualizar su informaci�n");
	}
}
