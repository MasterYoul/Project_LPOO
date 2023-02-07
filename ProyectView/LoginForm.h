#pragma once

namespace ProyectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace	ProjectController;
	using namespace ProjectModel;
	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ butRecover;



	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;



	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->butRecover = (gcnew System::Windows::Forms::Button());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(76, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario";
			//this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contrase�a";
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(31, 133);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(99, 40);
			this->btnOK->TabIndex = 2;
			this->btnOK->Text = L"Aceptar";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(179, 133);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(94, 40);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// butRecover
			// 
			this->butRecover->Location = System::Drawing::Point(321, 133);
			this->butRecover->Name = L"butRecover";
			this->butRecover->Size = System::Drawing::Size(109, 40);
			this->butRecover->TabIndex = 4;
			this->butRecover->Text = L"Recuperar Contrase�a";
			this->butRecover->UseVisualStyleBackColor = true;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(179, 21);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(251, 22);
			this->txtUsername->TabIndex = 5;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(179, 70);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(251, 22);
			this->txtPassword->TabIndex = 6;
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::txtPassword_KeyDown);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 207);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->butRecover);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"Autentificaci�n de Usuario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
 private: System::Void txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		   if (e->KeyData == Keys::Enter)
			   btnOK->PerformClick();}
};
}
