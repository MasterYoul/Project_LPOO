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
	using namespace Threading;

	/// <summary>
	/// Resumen de UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
		Thread^ myThread;
	public:
		UserForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			myThread = gcnew Thread(gcnew ThreadStart(this, &UserForm::MyRun));
			myThread->IsBackground = true;
			myThread->Start();
		}
		delegate void MyDelegate();

		void MyRun() {

			while (true) {
				try {
					myThread->Sleep(10 * 1000);
					Invoke(gcnew MyDelegate(this, &UserForm::RefreshdataGridViewUser));
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
					return;
				}
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UserForm()
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
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::TextBox^ UserUsuario;


	private: System::Windows::Forms::TextBox^ UserDNI;
	private: System::Windows::Forms::TextBox^ UserPassword;


	private: System::Windows::Forms::TextBox^ UserName;
	private: System::Windows::Forms::TextBox^ UserLastName;


	private: System::Windows::Forms::TextBox^ UserNumber;
	private: System::Windows::Forms::TextBox^ UserSalary;
	private: System::Windows::Forms::TextBox^ UserDirection;



	private: System::Windows::Forms::TextBox^ UserEmail;
	private: System::Windows::Forms::DateTimePicker^ UserDateTimeBirthday;
	private: System::Windows::Forms::RadioButton^ UserFemale;
	private: System::Windows::Forms::RadioButton^ UserMale;
	private: System::Windows::Forms::DataGridView^ dataGridViewUser;








	private: System::Windows::Forms::ComboBox^ UserType;
	private: System::Windows::Forms::ComboBox^ UserStatus;
	private: System::Windows::Forms::Button^ buttonAddUser;
	private: System::Windows::Forms::Button^ buttonModifyUser;
	private: System::Windows::Forms::Button^ buttonDeleteUser;






	private: System::Windows::Forms::GroupBox^ gBoxGender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ User_Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ User_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ User_LastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Usuario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Salario;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ UserId;













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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->UserUsuario = (gcnew System::Windows::Forms::TextBox());
			this->UserDNI = (gcnew System::Windows::Forms::TextBox());
			this->UserPassword = (gcnew System::Windows::Forms::TextBox());
			this->UserName = (gcnew System::Windows::Forms::TextBox());
			this->UserLastName = (gcnew System::Windows::Forms::TextBox());
			this->UserNumber = (gcnew System::Windows::Forms::TextBox());
			this->UserSalary = (gcnew System::Windows::Forms::TextBox());
			this->UserDirection = (gcnew System::Windows::Forms::TextBox());
			this->UserEmail = (gcnew System::Windows::Forms::TextBox());
			this->UserDateTimeBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->UserFemale = (gcnew System::Windows::Forms::RadioButton());
			this->UserMale = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridViewUser = (gcnew System::Windows::Forms::DataGridView());
			this->User_Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->User_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->User_LastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Usuario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Salario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UserType = (gcnew System::Windows::Forms::ComboBox());
			this->UserStatus = (gcnew System::Windows::Forms::ComboBox());
			this->buttonAddUser = (gcnew System::Windows::Forms::Button());
			this->buttonModifyUser = (gcnew System::Windows::Forms::Button());
			this->buttonDeleteUser = (gcnew System::Windows::Forms::Button());
			this->gBoxGender = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->UserId = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUser))->BeginInit();
			this->gBoxGender->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(186, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id(*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Documento de Identidad(*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(145, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombre (*)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(140, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Dirección(*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(79, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Numero de telefono(*)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(163, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Email(*)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(655, 347);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Status(*)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(638, 116);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Apellido(*)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(649, 155);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 16);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Salario(*)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(641, 41);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 16);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Usuario(*)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(619, 79);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 16);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Contraseña(*)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(152, 256);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 16);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Género(*)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(612, 256);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(88, 16);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Nacimiento(*)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(169, 347);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(48, 16);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Tipo(*)";
			// 
			// UserUsuario
			// 
			this->UserUsuario->Location = System::Drawing::Point(727, 33);
			this->UserUsuario->Name = L"UserUsuario";
			this->UserUsuario->Size = System::Drawing::Size(317, 22);
			this->UserUsuario->TabIndex = 15;
			// 
			// UserDNI
			// 
			this->UserDNI->Location = System::Drawing::Point(236, 72);
			this->UserDNI->Name = L"UserDNI";
			this->UserDNI->Size = System::Drawing::Size(289, 22);
			this->UserDNI->TabIndex = 16;
			// 
			// UserPassword
			// 
			this->UserPassword->Location = System::Drawing::Point(727, 73);
			this->UserPassword->Name = L"UserPassword";
			this->UserPassword->Size = System::Drawing::Size(317, 22);
			this->UserPassword->TabIndex = 17;
			// 
			// UserName
			// 
			this->UserName->Location = System::Drawing::Point(236, 109);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(289, 22);
			this->UserName->TabIndex = 18;
			// 
			// UserLastName
			// 
			this->UserLastName->Location = System::Drawing::Point(727, 108);
			this->UserLastName->Name = L"UserLastName";
			this->UserLastName->Size = System::Drawing::Size(317, 22);
			this->UserLastName->TabIndex = 19;
			// 
			// UserNumber
			// 
			this->UserNumber->Location = System::Drawing::Point(236, 149);
			this->UserNumber->Name = L"UserNumber";
			this->UserNumber->Size = System::Drawing::Size(289, 22);
			this->UserNumber->TabIndex = 20;
			// 
			// UserSalary
			// 
			this->UserSalary->Location = System::Drawing::Point(727, 148);
			this->UserSalary->Name = L"UserSalary";
			this->UserSalary->Size = System::Drawing::Size(317, 22);
			this->UserSalary->TabIndex = 21;
			// 
			// UserDirection
			// 
			this->UserDirection->Location = System::Drawing::Point(236, 181);
			this->UserDirection->Name = L"UserDirection";
			this->UserDirection->Size = System::Drawing::Size(808, 22);
			this->UserDirection->TabIndex = 22;
			// 
			// UserEmail
			// 
			this->UserEmail->Location = System::Drawing::Point(236, 211);
			this->UserEmail->Name = L"UserEmail";
			this->UserEmail->Size = System::Drawing::Size(808, 22);
			this->UserEmail->TabIndex = 23;
			// 
			// UserDateTimeBirthday
			// 
			this->UserDateTimeBirthday->Location = System::Drawing::Point(727, 250);
			this->UserDateTimeBirthday->Name = L"UserDateTimeBirthday";
			this->UserDateTimeBirthday->Size = System::Drawing::Size(317, 22);
			this->UserDateTimeBirthday->TabIndex = 24;
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
			// dataGridViewUser
			// 
			this->dataGridViewUser->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewUser->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->User_Id,
					this->User_Name, this->User_LastName, this->Usuario, this->Salario
			});
			this->dataGridViewUser->Location = System::Drawing::Point(74, 529);
			this->dataGridViewUser->Name = L"dataGridViewUser";
			this->dataGridViewUser->RowHeadersWidth = 51;
			this->dataGridViewUser->RowTemplate->Height = 24;
			this->dataGridViewUser->Size = System::Drawing::Size(970, 213);
			this->dataGridViewUser->TabIndex = 29;
			this->dataGridViewUser->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserForm::dataGridViewUser_CellClick);
			// 
			// User_Id
			// 
			this->User_Id->HeaderText = L"ID";
			this->User_Id->MinimumWidth = 6;
			this->User_Id->Name = L"User_Id";
			this->User_Id->Width = 125;
			// 
			// User_Name
			// 
			this->User_Name->HeaderText = L"NOMBRE";
			this->User_Name->MinimumWidth = 6;
			this->User_Name->Name = L"User_Name";
			this->User_Name->Width = 125;
			// 
			// User_LastName
			// 
			this->User_LastName->HeaderText = L"APELLIDO";
			this->User_LastName->MinimumWidth = 6;
			this->User_LastName->Name = L"User_LastName";
			this->User_LastName->Width = 125;
			// 
			// Usuario
			// 
			this->Usuario->HeaderText = L"USUARIO";
			this->Usuario->MinimumWidth = 6;
			this->Usuario->Name = L"Usuario";
			this->Usuario->Width = 125;
			// 
			// Salario
			// 
			this->Salario->HeaderText = L"UserSalary";
			this->Salario->MinimumWidth = 6;
			this->Salario->Name = L"Salario";
			this->Salario->Width = 125;
			// 
			// UserType
			// 
			this->UserType->FormattingEnabled = true;
			this->UserType->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Mesero", L"Cocinero", L"Cajero", L"Administrador" });
			this->UserType->Location = System::Drawing::Point(238, 339);
			this->UserType->Name = L"UserType";
			this->UserType->Size = System::Drawing::Size(289, 24);
			this->UserType->TabIndex = 30;
			// 
			// UserStatus
			// 
			this->UserStatus->FormattingEnabled = true;
			this->UserStatus->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"DISPONIBLE", L"NO DISPONIBLE", L"INACTIVO" });
			this->UserStatus->Location = System::Drawing::Point(727, 339);
			this->UserStatus->Name = L"UserStatus";
			this->UserStatus->Size = System::Drawing::Size(289, 24);
			this->UserStatus->TabIndex = 31;
			// 
			// buttonAddUser
			// 
			this->buttonAddUser->Location = System::Drawing::Point(201, 443);
			this->buttonAddUser->Name = L"buttonAddUser";
			this->buttonAddUser->Size = System::Drawing::Size(159, 41);
			this->buttonAddUser->TabIndex = 32;
			this->buttonAddUser->Text = L"AGREGAR";
			this->buttonAddUser->UseVisualStyleBackColor = true;
			this->buttonAddUser->Click += gcnew System::EventHandler(this, &UserForm::buttonAddUser_Click);
			// 
			// buttonModifyUser
			// 
			this->buttonModifyUser->Location = System::Drawing::Point(420, 443);
			this->buttonModifyUser->Name = L"buttonModifyUser";
			this->buttonModifyUser->Size = System::Drawing::Size(159, 41);
			this->buttonModifyUser->TabIndex = 33;
			this->buttonModifyUser->Text = L"MODIFICAR";
			this->buttonModifyUser->UseVisualStyleBackColor = true;
			this->buttonModifyUser->Click += gcnew System::EventHandler(this, &UserForm::btnUpdate_Click);
			// 
			// buttonDeleteUser
			// 
			this->buttonDeleteUser->Location = System::Drawing::Point(627, 443);
			this->buttonDeleteUser->Name = L"buttonDeleteUser";
			this->buttonDeleteUser->Size = System::Drawing::Size(159, 41);
			this->buttonDeleteUser->TabIndex = 34;
			this->buttonDeleteUser->Text = L"ELIMINAR";
			this->buttonDeleteUser->UseVisualStyleBackColor = true;
			this->buttonDeleteUser->Click += gcnew System::EventHandler(this, &UserForm::btnDelete_Click);
			// 
			// gBoxGender
			// 
			this->gBoxGender->Controls->Add(this->UserFemale);
			this->gBoxGender->Controls->Add(this->UserMale);
			this->gBoxGender->Location = System::Drawing::Point(238, 239);
			this->gBoxGender->Name = L"gBoxGender";
			this->gBoxGender->Size = System::Drawing::Size(317, 48);
			this->gBoxGender->TabIndex = 35;
			this->gBoxGender->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(835, 444);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 40);
			this->button1->TabIndex = 36;
			this->button1->Text = L"LIMPIAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserForm::button1_Click);
			// 
			// UserId
			// 
			this->UserId->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->UserId->Location = System::Drawing::Point(236, 34);
			this->UserId->Name = L"UserId";
			this->UserId->ReadOnly = true;
			this->UserId->Size = System::Drawing::Size(289, 22);
			this->UserId->TabIndex = 14;
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1107, 771);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->gBoxGender);
			this->Controls->Add(this->buttonDeleteUser);
			this->Controls->Add(this->buttonModifyUser);
			this->Controls->Add(this->buttonAddUser);
			this->Controls->Add(this->UserStatus);
			this->Controls->Add(this->UserType);
			this->Controls->Add(this->dataGridViewUser);
			this->Controls->Add(this->UserDateTimeBirthday);
			this->Controls->Add(this->UserEmail);
			this->Controls->Add(this->UserDirection);
			this->Controls->Add(this->UserSalary);
			this->Controls->Add(this->UserNumber);
			this->Controls->Add(this->UserLastName);
			this->Controls->Add(this->UserName);
			this->Controls->Add(this->UserPassword);
			this->Controls->Add(this->UserDNI);
			this->Controls->Add(this->UserUsuario);
			this->Controls->Add(this->UserId);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UserForm";
			this->Text = L"Formulario de Usuario";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			this->Shown += gcnew System::EventHandler(this, &UserForm::UserForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUser))->EndInit();
			this->gBoxGender->ResumeLayout(false);
			this->gBoxGender->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void buttonAddUser_Click(System::Object^ sender, System::EventArgs^ e) {
	User^ user = gcnew User();
	//Client_Info->setId(Convert::ToInt32(txtMealsId->Text));

	try {
		/*if (UserId->Text->Trim() == "") {
			MessageBox::Show("El ID del usuario no debe estar vacío.");
			return;
		}
		if (UserName->Text->Trim() == "") {
			MessageBox::Show("El nombre del usuario no debe estar vacío.");
			return;
		}
		if (UserPassword->Text->Trim() == "") {
			MessageBox::Show("El password del usuario no debe estar vacío.");
			return;
		}
		if (UserUsuario->Text->Trim() == "") {
			MessageBox::Show("El user del usuario no debe estar vacío.");
			return;
		}
		if (UserLastName->Text->Trim() == "") {
			MessageBox::Show("El apellido del vendedor no debe estar vacío.");
			return;
		}
		if (UserSalary->Text->Trim() == "") {
			MessageBox::Show("El salario del vendedor no debe estar vacío.");
			return;
		}
		if (UserType->Text->Trim() == "") {
			MessageBox::Show("El tipo de usuario no debe estar vacío.");
			return;
		}
		if (UserDirection->Text->Trim() == "") {
			MessageBox::Show("La dirección del usuario no debe estar vacío.");
			return;
		}
		if (UserNumber->Text->Trim() == "") {
			MessageBox::Show("El teléfono del usuario no debe estar vacío.");
			return;
		}
		if (UserEmail->Text->Trim() == "") {
			MessageBox::Show("La correo del usuario no debe estar vacío.");
			return;
		}
		if (UserDNI->Text->Trim() == "") {
			MessageBox::Show("El DNI del usuario no debe estar vacío.");
			return;
		}
		if (UserStatus->Text->Trim() == "") {
			MessageBox::Show("El status del usuario no debe estar vacío.");
			return;
		}*/

		//user->Id = Int32::Parse(UserId->Text);
		user->Username = UserUsuario->Text;
		user->Password = UserPassword->Text;
		user->Name = UserName->Text;
		user->LastName = UserLastName->Text;
		user->Salary = Convert::ToDouble(UserSalary->Text);
		user->Type = UserType->Text;
		user->Gender = UserFemale->Checked ? 'F' : 'M';
		user->Adress = UserDirection->Text;
		user->PhoneNumber = UserNumber->Text;
		user->Birthday = UserDateTimeBirthday->Value.ToString("yyyy-MM-dd");
		user->Email = UserEmail->Text;
		user->DocNumber = UserDNI->Text;
		user->State = "ACTIVO";
		
		
			
		if (UserStatus->Text->Equals("DISPONIBLE")) {
			user->Status = 'D';
		}
		else if (UserStatus->Text->Equals("NO DISPONIBLE")) {
			user->Status = 'N';
		}
		else {
			user->Status = 'I';
		}
		

		//s->Store = Controller::QueryStoreById(((ComboBoxItem^)cmbStore->Items[cmbStore->SelectedIndex])->Value);
		Controller::AddUser(user);
		RefreshdataGridViewUser();
		buttonAddUser->Enabled = true;
		ClearControls();
		
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Envíe el error al área de TI.");
		return;
	}
}
	   private: System::Void consultasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		   DisableControls();
	   }
			  Void DisableControls() {
				  UserId->ReadOnly = true;
				  UserName->ReadOnly = true;
				  UserLastName->ReadOnly = true;
				  UserSalary->ReadOnly = true;
				  UserUsuario->ReadOnly = true;
				  buttonAddUser->Enabled = false;
				  buttonModifyUser->Enabled = false;
				  buttonDeleteUser->Enabled = false;
			  }
			  Void EnableControls() {
				  UserId->ReadOnly = false;
				  UserName->ReadOnly = false;
				  UserLastName->ReadOnly = false;
				  UserSalary->ReadOnly = false;
				  UserUsuario->ReadOnly = false;
				  buttonAddUser->Enabled = true;
				  buttonModifyUser->Enabled = true;
				  buttonDeleteUser->Enabled = true;
			  }

			  Void RefreshdataGridViewUser() {
				  List <User^>^ UserList = Controller::QueryAllUser();
				  dataGridViewUser->Rows->Clear();
				  if (UserList != nullptr)
					  for (int i = 0; i < UserList->Count; i++) {
						  dataGridViewUser->Rows->Add(gcnew array<String^> {
							  "" + UserList[i]->Id,
								  UserList[i]->Name,
								  UserList[i]->LastName,
								  UserList[i]->Username,
								  "" + UserList[i]->Salary
						  });
					  }
			  }

			  void ClearControls() {
				  UserId->Text = "";
				  UserName->Text = "";
				  UserLastName->Text = "";
				  UserPassword->Text = "";
				  UserSalary->Text = "";
				  UserUsuario->Text = "";
				  UserDirection->Text = "";
				  UserNumber->Text = "";
				  UserEmail->Text = "";
				  UserDNI->Text = "";
				  UserType->Text = "";
				  UserStatus->Text = "";
				  UserFemale->Checked = "";

			  }


			  void ShowUser() {
				  List<User^>^ UserList = Controller::QueryAllUser();

				  dataGridViewUser->Rows->Clear();
				  for (int i = 0; i < UserList->Count; i++) {
					  dataGridViewUser->Rows->Add(gcnew array<String^>{
						  "" + UserList[i]->Id,
							  UserList[i]->Name,
							  "" + UserList[i]->LastName,
							  "" + UserList[i]->Username,
							  "" + UserList[i]->Salary,
					  });
				  }
			  }

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	buttonModifyUser->Enabled = false;
	buttonDeleteUser->Enabled = false;

	try {
		if (UserId->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ningun usuario seleccionado.");
			return;
		}
		int userId = Convert::ToInt32(UserId->Text->Trim());

		if (MessageBox::Show("Estas seguro(a) de eliminar el usuario?","Confirmacion", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{


		
			Controller::DeleteUser(userId);

			RefreshdataGridViewUser();
			ClearControls();
		}
	}
	catch (...) {
		MessageBox::Show("No se puede eliminar el producto porque el Id no es valido.");
		return;
	}
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	/*if (dataGridViewUser->CurrentCell != nullptr &&
		dataGridViewUser->CurrentCell->Value != nullptr &&
		dataGridViewUser->CurrentCell->Value->ToString() != "" &&
		!UserId->Text->Trim()->Equals("")) {

		User^ user = gcnew User();
		try {
			if (UserId->Text->Trim() == "") {
				MessageBox::Show("El ID del usuario no debe estar vacío.");
				return;
			}
			if (UserName->Text->Trim() == "") {
				MessageBox::Show("El nombre del usuario no debe estar vacío.");
				return;
			}
			if (UserPassword->Text->Trim() == "") {
				MessageBox::Show("El password del usuario no debe estar vacío.");
				return;
			}
			if (UserUsuario->Text->Trim() == "") {
				MessageBox::Show("El user del usuario no debe estar vacío.");
				return;
			}
			if (UserLastName->Text->Trim() == "") {
				MessageBox::Show("El apellido del vendedor no debe estar vacío.");
				return;
			}
			if (UserSalary->Text->Trim() == "") {
				MessageBox::Show("El salario del vendedor no debe estar vacío.");
				return;
			}
			if (UserType->Text->Trim() == "") {
				MessageBox::Show("El tipo de usuario no debe estar vacío.");
				return;
			}
			if (UserDirection->Text->Trim() == "") {
				MessageBox::Show("La dirección del usuario no debe estar vacío.");
				return;
			}
			if (UserNumber->Text->Trim() == "") {
				MessageBox::Show("El teléfono del usuario no debe estar vacío.");
				return;
			}
			if (UserEmail->Text->Trim() == "") {
				MessageBox::Show("La correo del usuario no debe estar vacío.");
				return;
			}
			if (UserDNI->Text->Trim() == "") {
				MessageBox::Show("El DNI del usuario no debe estar vacío.");
				return;
			}
			if (UserStatus->Text->Trim() == "") {
				MessageBox::Show("El status del usuario no debe estar vacío.");
				return;
			}*/
			buttonModifyUser->Enabled = false;
			buttonDeleteUser->Enabled = false;
			User^ user = gcnew User();

			user->Id = Convert::ToInt32(UserId->Text);
			user->Username = UserUsuario->Text;
			user->Password = UserPassword->Text;
			user->Name = UserName->Text;
			user->LastName = UserLastName->Text;
			user->Salary = Convert::ToDouble(UserSalary->Text);
			user->Type = UserType->Text;
			user->Gender = UserFemale->Checked ? 'F' : 'M';
			user->Adress = UserDirection->Text;
			user->PhoneNumber = UserNumber->Text;
			user->Birthday = UserDateTimeBirthday->Value.ToString("yyyy-MM-dd");
			user->Email = UserEmail->Text;
			user->DocNumber = UserDNI->Text;
			user->State = "ACTIVO";



			if (UserStatus->Text->Equals("DISPONIBLE")) {
				user->Status = 'D';
			}
			else if (UserStatus->Text->Equals("NO DISPONIBLE")) {
				user->Status = 'N';
			}
			else {
				user->Status = 'I';
			}
			Controller::UpdateUser(user);
			RefreshdataGridViewUser();
		
			ClearControls();
		/* }
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Envíe el error al área de TI.");
			return;
		}*/
	//}
}
	 
private: System::Void dataGridViewUser_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dataGridViewUser->CurrentCell != nullptr &&
		dataGridViewUser->CurrentCell->Value != nullptr &&
		dataGridViewUser->CurrentCell->Value->ToString() != "") {
		int selectedRowIndex = dataGridViewUser->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dataGridViewUser->Rows[selectedRowIndex];
		String^ a = selectedRow->Cells[0]->Value->ToString();
		int userId = Int32::Parse(a);
		User^ p = Controller::QueryUsertById(userId);

		buttonModifyUser->Enabled = true;
		buttonDeleteUser->Enabled = true;

		UserId->Text = "" + p->Id;
		UserDNI->Text = p->DocNumber;
		UserName->Text = p->Name;
		UserNumber->Text = p->PhoneNumber;
		UserDirection->Text = p->Adress;
		UserEmail->Text = p->Email;
		UserType->Text = p->Type;
		UserUsuario->Text = p->Username;
		UserPassword->Text = p->Password;
		UserLastName->Text = p->LastName;
		UserSalary->Text = "" + p->Salary;
		UserMale->Checked = p->Gender == 'M';
		UserFemale->Checked = p->Gender == 'F';
		UserDateTimeBirthday->Value = DateTime::Parse(p->Birthday);

		if (p->Status=='D') {
			UserStatus->Text = "DISPONIBLE";
		}
		else if (p->Status == 'N') {
			UserStatus->Text = "NO DISPONIBLE";
			
		}
		else {
			UserStatus->Text = "INACTIVO";
			
		}

	}
}



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();

}
private: System::Void UserForm_Shown(System::Object^ sender, System::EventArgs^ e) {
	buttonModifyUser->Enabled = false;
	buttonDeleteUser->Enabled = false;
}
private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowUser();
}
};
}
