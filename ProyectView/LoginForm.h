#pragma once
#include "Sugesstions.h";
#include "RecoverForm.h";

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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->butRecover = (gcnew System::Windows::Forms::Button());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(551, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(529, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña";
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(506, 183);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(99, 40);
			this->btnOK->TabIndex = 2;
			this->btnOK->Text = L"Aceptar";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(654, 183);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(94, 40);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// butRecover
			// 
			this->butRecover->Location = System::Drawing::Point(796, 183);
			this->butRecover->Name = L"butRecover";
			this->butRecover->Size = System::Drawing::Size(109, 40);
			this->butRecover->TabIndex = 4;
			this->butRecover->Text = L"Recuperar Contraseña";
			this->butRecover->UseVisualStyleBackColor = true;
			this->butRecover->Click += gcnew System::EventHandler(this, &LoginForm::butRecover_Click);
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(654, 71);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(251, 22);
			this->txtUsername->TabIndex = 5;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(654, 120);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(251, 22);
			this->txtPassword->TabIndex = 6;
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::txtPassword_KeyDown);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(572, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 39);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Sugerencias";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(92, 71);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(259, 276);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox1_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1002, 476);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->butRecover);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"Autentificación de Usuario";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Sugesstions^ SugesstionsForm = gcnew Sugesstions();
	SugesstionsForm->UseType = 'S';
	SugesstionsForm->RefSaleForm = this;
	SugesstionsForm->ShowDialog();

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	 
}
private: System::Void butRecover_Click(System::Object^ sender, System::EventArgs^ e) {
	RecoverForm^ recoverForm = gcnew RecoverForm();
	recoverForm->UseType = 'S';
	recoverForm->RefSaleForm = this;
	recoverForm->ShowDialog();
}
};
}
