#include "pch.h"
#include "ChatForm.h"
#include "ProyectMainForm.h"

System::Void ProyectView::ChatForm::Enviar_Click(System::Object^ sender, System::EventArgs^ e)
{
	array <unsigned char>^ outStream = System::Text::Encoding::ASCII->GetBytes(txtMessage->Text + "$");
	if (serverStream != nullptr) {
		serverStream->Write(outStream, 0, outStream->Length);
		serverStream->Flush();
	}
}

System::Void ProyectView::ChatForm::ChatForm_Load_1(System::Object^ sender, System::EventArgs^ e)
{
	clientSocket = gcnew System::Net::Sockets::TcpClient();
	clientSocket->Connect("26.128.102.240", 8888);
	serverStream = clientSocket->GetStream();
	array <unsigned char>^ outStream = System::Text::Encoding::ASCII->GetBytes(ProyectMainForm::user->Username + "$");
	serverStream->Write(outStream, 0, ProyectMainForm::user->Username->Length + 1);
	serverStream->Flush();
	thread = gcnew Thread(gcnew ThreadStart(this, &ChatForm::GetMessage));
	thread->IsBackground = true;
	thread->Start();
}
