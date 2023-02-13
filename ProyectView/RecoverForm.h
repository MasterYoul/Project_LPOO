#pragma once

namespace ProyectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RecoverForm
	/// </summary>
	public ref class RecoverForm : public System::Windows::Forms::Form
	{
	public:
		property char UseType;
		property Form^ RefSaleForm;
	public:
		RecoverForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			UseType = 'M';
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RecoverForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gBoxGender;
	protected:
	private: System::Windows::Forms::RadioButton^ UserFemale;
	private: System::Windows::Forms::RadioButton^ UserMale;
	private: System::Windows::Forms::ComboBox^ UserStatus;
	private: System::Windows::Forms::ComboBox^ UserType;
	private: System::Windows::Forms::DateTimePicker^ UserDateTimeBirthday;
	private: System::Windows::Forms::TextBox^ UserEmail;
	private: System::Windows::Forms::TextBox^ UserNumber;

	private: System::Windows::Forms::TextBox^ UserLastName;
	private: System::Windows::Forms::TextBox^ UserName;





	private: System::Windows::Forms::TextBox^ UserPassword;
	private: System::Windows::Forms::TextBox^ UserDNI;

	private: System::Windows::Forms::TextBox^ UserUsuario;




	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


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
			this->gBoxGender = (gcnew System::Windows::Forms::GroupBox());
			this->UserFemale = (gcnew System::Windows::Forms::RadioButton());
			this->UserMale = (gcnew System::Windows::Forms::RadioButton());
			this->UserStatus = (gcnew System::Windows::Forms::ComboBox());
			this->UserType = (gcnew System::Windows::Forms::ComboBox());
			this->UserDateTimeBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->UserEmail = (gcnew System::Windows::Forms::TextBox());
			this->UserNumber = (gcnew System::Windows::Forms::TextBox());
			this->UserLastName = (gcnew System::Windows::Forms::TextBox());
			this->UserName = (gcnew System::Windows::Forms::TextBox());
			this->UserPassword = (gcnew System::Windows::Forms::TextBox());
			this->UserDNI = (gcnew System::Windows::Forms::TextBox());
			this->UserUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->gBoxGender->SuspendLayout();
			this->SuspendLayout();
			// 
			// gBoxGender
			// 
			this->gBoxGender->Controls->Add(this->UserFemale);
			this->gBoxGender->Controls->Add(this->UserMale);
			this->gBoxGender->Location = System::Drawing::Point(210, 275);
			this->gBoxGender->Name = L"gBoxGender";
			this->gBoxGender->Size = System::Drawing::Size(317, 48);
			this->gBoxGender->TabIndex = 63;
			this->gBoxGender->TabStop = false;
			// 
			// UserFemale
			// 
			this->UserFemale->AutoSize = true;
			this->UserFemale->Location = System::Drawing::Point(6, 13);
			this->UserFemale->Name = L"UserFemale";
			this->UserFemale->Size = System::Drawing::Size(88, 20);
			this->UserFemale->TabIndex = 25;
			this->UserFemale->TabStop = true;
			this->UserFemale->Text = L"Femenino";
			this->UserFemale->UseVisualStyleBackColor = true;
			// 
			// UserMale
			// 
			this->UserMale->AutoSize = true;
			this->UserMale->Location = System::Drawing::Point(170, 14);
			this->UserMale->Name = L"UserMale";
			this->UserMale->Size = System::Drawing::Size(89, 20);
			this->UserMale->TabIndex = 26;
			this->UserMale->TabStop = true;
			this->UserMale->Text = L"Masculino";
			this->UserMale->UseVisualStyleBackColor = true;
			// 
			// UserStatus
			// 
			this->UserStatus->FormattingEnabled = true;
			this->UserStatus->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Activo", L"Inactivo" });
			this->UserStatus->Location = System::Drawing::Point(695, 343);
			this->UserStatus->Name = L"UserStatus";
			this->UserStatus->Size = System::Drawing::Size(289, 24);
			this->UserStatus->TabIndex = 62;
			// 
			// UserType
			// 
			this->UserType->FormattingEnabled = true;
			this->UserType->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Mesero", L"Cocinero", L"Cajero", L"Administrador" });
			this->UserType->Location = System::Drawing::Point(208, 343);
			this->UserType->Name = L"UserType";
			this->UserType->Size = System::Drawing::Size(289, 24);
			this->UserType->TabIndex = 61;
			// 
			// UserDateTimeBirthday
			// 
			this->UserDateTimeBirthday->Location = System::Drawing::Point(697, 155);
			this->UserDateTimeBirthday->Name = L"UserDateTimeBirthday";
			this->UserDateTimeBirthday->Size = System::Drawing::Size(317, 22);
			this->UserDateTimeBirthday->TabIndex = 60;
			// 
			// UserEmail
			// 
			this->UserEmail->Location = System::Drawing::Point(208, 226);
			this->UserEmail->Name = L"UserEmail";
			this->UserEmail->Size = System::Drawing::Size(808, 22);
			this->UserEmail->TabIndex = 59;
			// 
			// UserNumber
			// 
			this->UserNumber->Location = System::Drawing::Point(208, 155);
			this->UserNumber->Name = L"UserNumber";
			this->UserNumber->Size = System::Drawing::Size(289, 22);
			this->UserNumber->TabIndex = 56;
			// 
			// UserLastName
			// 
			this->UserLastName->Location = System::Drawing::Point(699, 107);
			this->UserLastName->Name = L"UserLastName";
			this->UserLastName->Size = System::Drawing::Size(317, 22);
			this->UserLastName->TabIndex = 55;
			// 
			// UserName
			// 
			this->UserName->Location = System::Drawing::Point(208, 115);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(289, 22);
			this->UserName->TabIndex = 54;
			// 
			// UserPassword
			// 
			this->UserPassword->Location = System::Drawing::Point(700, 297);
			this->UserPassword->Name = L"UserPassword";
			this->UserPassword->Size = System::Drawing::Size(317, 22);
			this->UserPassword->TabIndex = 53;
			// 
			// UserDNI
			// 
			this->UserDNI->Location = System::Drawing::Point(208, 78);
			this->UserDNI->Name = L"UserDNI";
			this->UserDNI->Size = System::Drawing::Size(289, 22);
			this->UserDNI->TabIndex = 52;
			// 
			// UserUsuario
			// 
			this->UserUsuario->Location = System::Drawing::Point(699, 69);
			this->UserUsuario->Name = L"UserUsuario";
			this->UserUsuario->Size = System::Drawing::Size(317, 22);
			this->UserUsuario->TabIndex = 51;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(139, 351);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(48, 16);
			this->label14->TabIndex = 49;
			this->label14->Text = L"Tipo(*)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(582, 161);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(88, 16);
			this->label13->TabIndex = 48;
			this->label13->Text = L"Nacimiento(*)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(124, 292);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 16);
			this->label12->TabIndex = 47;
			this->label12->Text = L"Género(*)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(727, 263);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(257, 16);
			this->label11->TabIndex = 46;
			this->label11->Text = L"Algun caracter que incluia la contraseña(*)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(613, 77);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 16);
			this->label10->TabIndex = 45;
			this->label10->Text = L"Usuario(*)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(610, 115);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 16);
			this->label8->TabIndex = 43;
			this->label8->Text = L"Apellido(*)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(623, 351);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 16);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Status(*)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(135, 232);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Email(*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(51, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 16);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Numero de telefono(*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(117, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 16);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Nombre (*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 16);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Documento de Identidad(*)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(682, 464);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(317, 22);
			this->textBox1->TabIndex = 64;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(208, 464);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(317, 22);
			this->textBox2->TabIndex = 65;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(213, 419);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 16);
			this->label1->TabIndex = 66;
			this->label1->Text = L"Nueva contraseña";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(679, 419);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(178, 16);
			this->label4->TabIndex = 67;
			this->label4->Text = L"Repita La Nueva contraseña";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(230, 568);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(282, 47);
			this->button1->TabIndex = 68;
			this->button1->Text = L"Cambiar Contraseña";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(682, 568);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(233, 46);
			this->button2->TabIndex = 69;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RecoverForm::button2_Click);
			// 
			// RecoverForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1139, 700);
			this->ControlBox = false;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->gBoxGender);
			this->Controls->Add(this->UserStatus);
			this->Controls->Add(this->UserType);
			this->Controls->Add(this->UserDateTimeBirthday);
			this->Controls->Add(this->UserEmail);
			this->Controls->Add(this->UserNumber);
			this->Controls->Add(this->UserLastName);
			this->Controls->Add(this->UserName);
			this->Controls->Add(this->UserPassword);
			this->Controls->Add(this->UserDNI);
			this->Controls->Add(this->UserUsuario);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"RecoverForm";
			this->Text = L"Cambiar Contraseña";
			this->gBoxGender->ResumeLayout(false);
			this->gBoxGender->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
