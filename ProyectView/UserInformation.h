#pragma once

namespace ProyectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProjectModel;
	using namespace ProjectController;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Resumen de UserInformation
	/// </summary>
	public ref class UserInformation : public System::Windows::Forms::Form
	{
	public:
		UserInformation(void)
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
		~UserInformation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::TextBox^ UserId;
	private: System::Windows::Forms::TextBox^ UserDNI;
	private: System::Windows::Forms::TextBox^ UserName;
	private: System::Windows::Forms::TextBox^ UserNumber;
	private: System::Windows::Forms::TextBox^ UserDirection;
	private: System::Windows::Forms::TextBox^ UserEmail;
	private: System::Windows::Forms::DateTimePicker^ UserDateTimeBirthday;
	private: System::Windows::Forms::Button^ buttonModifyUser;
	private: System::Windows::Forms::RadioButton^ UserMale;
	private: System::Windows::Forms::RadioButton^ UserFemale;
	private: System::Windows::Forms::GroupBox^ gBoxGender;

	private: System::Windows::Forms::TextBox^ UserSalary;
	private: System::Windows::Forms::TextBox^ UserLastName;
	private: System::Windows::Forms::TextBox^ UserPassword;
	private: System::Windows::Forms::TextBox^ UserUsuario;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label16;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->UserId = (gcnew System::Windows::Forms::TextBox());
			this->UserDNI = (gcnew System::Windows::Forms::TextBox());
			this->UserName = (gcnew System::Windows::Forms::TextBox());
			this->UserNumber = (gcnew System::Windows::Forms::TextBox());
			this->UserDirection = (gcnew System::Windows::Forms::TextBox());
			this->UserEmail = (gcnew System::Windows::Forms::TextBox());
			this->UserDateTimeBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonModifyUser = (gcnew System::Windows::Forms::Button());
			this->UserMale = (gcnew System::Windows::Forms::RadioButton());
			this->UserFemale = (gcnew System::Windows::Forms::RadioButton());
			this->gBoxGender = (gcnew System::Windows::Forms::GroupBox());
			this->UserSalary = (gcnew System::Windows::Forms::TextBox());
			this->UserLastName = (gcnew System::Windows::Forms::TextBox());
			this->UserPassword = (gcnew System::Windows::Forms::TextBox());
			this->UserUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->gBoxGender->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(148, 264);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 16);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Id(*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 302);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 16);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Documento de Identidad(*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(107, 337);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 16);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Nombre (*)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(102, 410);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 16);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Dirección(*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 377);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 16);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Numero de telefono(*)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(125, 440);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Email(*)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(114, 479);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 16);
			this->label12->TabIndex = 48;
			this->label12->Text = L"Género(*)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(90, 554);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(88, 16);
			this->label13->TabIndex = 49;
			this->label13->Text = L"Nacimiento(*)";
			// 
			// UserId
			// 
			this->UserId->Location = System::Drawing::Point(198, 257);
			this->UserId->Name = L"UserId";
			this->UserId->Size = System::Drawing::Size(289, 22);
			this->UserId->TabIndex = 51;
			// 
			// UserDNI
			// 
			this->UserDNI->Location = System::Drawing::Point(198, 295);
			this->UserDNI->Name = L"UserDNI";
			this->UserDNI->Size = System::Drawing::Size(289, 22);
			this->UserDNI->TabIndex = 53;
			// 
			// UserName
			// 
			this->UserName->Location = System::Drawing::Point(198, 332);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(289, 22);
			this->UserName->TabIndex = 55;
			// 
			// UserNumber
			// 
			this->UserNumber->Location = System::Drawing::Point(198, 372);
			this->UserNumber->Name = L"UserNumber";
			this->UserNumber->Size = System::Drawing::Size(289, 22);
			this->UserNumber->TabIndex = 57;
			// 
			// UserDirection
			// 
			this->UserDirection->Location = System::Drawing::Point(198, 404);
			this->UserDirection->Name = L"UserDirection";
			this->UserDirection->Size = System::Drawing::Size(808, 22);
			this->UserDirection->TabIndex = 59;
			// 
			// UserEmail
			// 
			this->UserEmail->Location = System::Drawing::Point(198, 434);
			this->UserEmail->Name = L"UserEmail";
			this->UserEmail->Size = System::Drawing::Size(808, 22);
			this->UserEmail->TabIndex = 60;
			// 
			// UserDateTimeBirthday
			// 
			this->UserDateTimeBirthday->Location = System::Drawing::Point(198, 549);
			this->UserDateTimeBirthday->Name = L"UserDateTimeBirthday";
			this->UserDateTimeBirthday->Size = System::Drawing::Size(317, 22);
			this->UserDateTimeBirthday->TabIndex = 61;
			// 
			// buttonModifyUser
			// 
			this->buttonModifyUser->Location = System::Drawing::Point(198, 653);
			this->buttonModifyUser->Name = L"buttonModifyUser";
			this->buttonModifyUser->Size = System::Drawing::Size(159, 41);
			this->buttonModifyUser->TabIndex = 65;
			this->buttonModifyUser->Text = L"MODIFICAR";
			this->buttonModifyUser->UseVisualStyleBackColor = true;
			this->buttonModifyUser->Click += gcnew System::EventHandler(this, &UserInformation::buttonModifyUser_Click);
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
			// gBoxGender
			// 
			this->gBoxGender->Controls->Add(this->UserFemale);
			this->gBoxGender->Controls->Add(this->UserMale);
			this->gBoxGender->Location = System::Drawing::Point(200, 462);
			this->gBoxGender->Name = L"gBoxGender";
			this->gBoxGender->Size = System::Drawing::Size(317, 48);
			this->gBoxGender->TabIndex = 67;
			this->gBoxGender->TabStop = false;
			// 
			// UserSalary
			// 
			this->UserSalary->Location = System::Drawing::Point(198, 208);
			this->UserSalary->Name = L"UserSalary";
			this->UserSalary->Size = System::Drawing::Size(291, 22);
			this->UserSalary->TabIndex = 76;
			// 
			// UserLastName
			// 
			this->UserLastName->Location = System::Drawing::Point(198, 168);
			this->UserLastName->Name = L"UserLastName";
			this->UserLastName->Size = System::Drawing::Size(291, 22);
			this->UserLastName->TabIndex = 75;
			// 
			// UserPassword
			// 
			this->UserPassword->Location = System::Drawing::Point(198, 133);
			this->UserPassword->Name = L"UserPassword";
			this->UserPassword->Size = System::Drawing::Size(291, 22);
			this->UserPassword->TabIndex = 74;
			// 
			// UserUsuario
			// 
			this->UserUsuario->Location = System::Drawing::Point(198, 93);
			this->UserUsuario->Name = L"UserUsuario";
			this->UserUsuario->Size = System::Drawing::Size(289, 22);
			this->UserUsuario->TabIndex = 73;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(90, 139);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 16);
			this->label11->TabIndex = 72;
			this->label11->Text = L"Contraseña(*)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(112, 101);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 16);
			this->label10->TabIndex = 71;
			this->label10->Text = L"Usuario(*)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(120, 215);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 16);
			this->label9->TabIndex = 70;
			this->label9->Text = L"Salario(*)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(109, 176);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 16);
			this->label8->TabIndex = 69;
			this->label8->Text = L"Apellido(*)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(717, 531);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(289, 22);
			this->textBox2->TabIndex = 80;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(717, 491);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(289, 22);
			this->textBox3->TabIndex = 79;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(560, 536);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 16);
			this->label7->TabIndex = 78;
			this->label7->Text = L"Nueva contraseña";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(560, 494);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(117, 16);
			this->label15->TabIndex = 77;
			this->label15->Text = L"Nueva contraseña";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(671, 93);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(323, 240);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 81;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(671, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(323, 41);
			this->button1->TabIndex = 82;
			this->button1->Text = L"CAMBIAR FOTO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserInformation::button1_Click);
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(211, 20);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(601, 42);
			this->label16->TabIndex = 83;
			this->label16->Text = L"Sin usuario";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UserInformation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1094, 783);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->UserSalary);
			this->Controls->Add(this->UserLastName);
			this->Controls->Add(this->UserPassword);
			this->Controls->Add(this->UserUsuario);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->gBoxGender);
			this->Controls->Add(this->buttonModifyUser);
			this->Controls->Add(this->UserDateTimeBirthday);
			this->Controls->Add(this->UserEmail);
			this->Controls->Add(this->UserDirection);
			this->Controls->Add(this->UserNumber);
			this->Controls->Add(this->UserName);
			this->Controls->Add(this->UserDNI);
			this->Controls->Add(this->UserId);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UserInformation";
			this->Text = L"UserInformation";
			this->Load += gcnew System::EventHandler(this, &UserInformation::UserInformation_Load);
			this->gBoxGender->ResumeLayout(false);
			this->gBoxGender->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserInformation_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pictureBox1->Image = gcnew Bitmap(opnfd->FileName);
	}
}
private: System::Void buttonModifyUser_Click(System::Object^ sender, System::EventArgs^ e);
};
}
