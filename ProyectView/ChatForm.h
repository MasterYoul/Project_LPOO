#pragma once

namespace ProyectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// Resumen de ChatForm
	/// </summary>
	public ref class ChatForm : public System::Windows::Forms::Form
	{
	public:
		ChatForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ChatForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtMessages;
	private: System::Windows::Forms::TextBox^ txtMessage;
	private: System::Windows::Forms::Button^ btnSend;
	protected:

	protected:



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtMessages = (gcnew System::Windows::Forms::TextBox());
			this->txtMessage = (gcnew System::Windows::Forms::TextBox());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtMessages
			// 
			this->txtMessages->Location = System::Drawing::Point(31, 36);
			this->txtMessages->Multiline = true;
			this->txtMessages->Name = L"txtMessages";
			this->txtMessages->Size = System::Drawing::Size(649, 403);
			this->txtMessages->TabIndex = 0;
			// 
			// txtMessage
			// 
			this->txtMessage->Location = System::Drawing::Point(31, 471);
			this->txtMessage->Name = L"txtMessage";
			this->txtMessage->Size = System::Drawing::Size(518, 22);
			this->txtMessage->TabIndex = 1;
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(573, 471);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(107, 23);
			this->btnSend->TabIndex = 2;
			this->btnSend->Text = L"Enviar";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &ChatForm::Enviar_Click);
			// 
			// ChatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(724, 565);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->txtMessage);
			this->Controls->Add(this->txtMessages);
			this->Name = L"ChatForm";
			this->Text = L"Chat";
			this->Load += gcnew System::EventHandler(this, &ChatForm::ChatForm_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Net::Sockets::NetworkStream^ serverStream;
		System::Net::Sockets::TcpClient^ clientSocket;

		// propia maquina: String^ chatServerIP = "127.0.0.1";
		String^ chatServerIP = "127.0.0.1";
		Thread^ thread;
		bool closedChat = false;
		String^ readData;

	private: System::Void Enviar_Click(System::Object^ sender, System::EventArgs^ e);

		   void GetMessage() { //Es el MyRun
			   int bufferSize = 0;
			   while (!closedChat) {
				   try {
					   if (clientSocket != nullptr && clientSocket->Connected) {
						   serverStream = clientSocket->GetStream();
						   if (serverStream != nullptr && serverStream->DataAvailable) {
							   array<unsigned char>^ inStream = gcnew array<unsigned char>(100000);
							   bufferSize = clientSocket->ReceiveBufferSize;
							   serverStream->Read(inStream, 0, bufferSize);
							   readData = System::Text::Encoding::ASCII->GetString(inStream);
							   ShowReturnedMessage();
						   }
					   }
				   }
				   catch (Exception^ ex) {
					   MessageBox::Show(ex->Message, "Error");
					   if (serverStream != nullptr) serverStream->Close();
					   if (clientSocket != nullptr) clientSocket->Close();
				   }
			   }
		   }
		   void ShowReturnedMessage() {
			   if (this->InvokeRequired)
				   this->Invoke(gcnew MethodInvoker(this, &ChatForm::ShowReturnedMessage));
			   else {
				   txtMessages->Text = txtMessages->Text + Environment::NewLine + " >> " + readData;
			   }
		   }

	
private: System::Void ChatForm_Load_1(System::Object^ sender, System::EventArgs^ e);
};
}