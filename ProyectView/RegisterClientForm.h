#pragma once

namespace ProyectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProjectController;
	using namespace ProjectModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de RegisterClientForm
	/// </summary>
	public ref class RegisterClientForm : public System::Windows::Forms::Form
	{
	public:
		property char Type;
		property Form^ registerclientForm;
	public:
		RegisterClientForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			Type = 'M';
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RegisterClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GroupBoxGender;
	protected:
	private: System::Windows::Forms::RadioButton^ ClientMale;
	private: System::Windows::Forms::RadioButton^ ClientFemale;
	private: System::Windows::Forms::Label^ txtClientGender;
	private: System::Windows::Forms::TextBox^ textIdClient;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DataGridView^ dataGridViewClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNIClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Rate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TxtOpinion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PhoneNumber;
	private: System::Windows::Forms::Button^ butActualizar;
	private: System::Windows::Forms::Button^ butADD;
	private: System::Windows::Forms::TextBox^ textRucClient;
	private: System::Windows::Forms::TextBox^ textNumberClient;
	private: System::Windows::Forms::RadioButton^ radioButtonEmpresaClient;
	private: System::Windows::Forms::RadioButton^ radioButtonPersonClient;
	private: System::Windows::Forms::TextBox^ textDniClient;
	private: System::Windows::Forms::TextBox^ textLastNameClient;
	private: System::Windows::Forms::TextBox^ textNameClient;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

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
			this->GroupBoxGender = (gcnew System::Windows::Forms::GroupBox());
			this->ClientMale = (gcnew System::Windows::Forms::RadioButton());
			this->ClientFemale = (gcnew System::Windows::Forms::RadioButton());
			this->txtClientGender = (gcnew System::Windows::Forms::Label());
			this->textIdClient = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewClient = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNIClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Rate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TxtOpinion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PhoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->butActualizar = (gcnew System::Windows::Forms::Button());
			this->butADD = (gcnew System::Windows::Forms::Button());
			this->textRucClient = (gcnew System::Windows::Forms::TextBox());
			this->textNumberClient = (gcnew System::Windows::Forms::TextBox());
			this->radioButtonEmpresaClient = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonPersonClient = (gcnew System::Windows::Forms::RadioButton());
			this->textDniClient = (gcnew System::Windows::Forms::TextBox());
			this->textLastNameClient = (gcnew System::Windows::Forms::TextBox());
			this->textNameClient = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->GroupBoxGender->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->BeginInit();
			this->SuspendLayout();
			// 
			// GroupBoxGender
			// 
			this->GroupBoxGender->Controls->Add(this->ClientMale);
			this->GroupBoxGender->Controls->Add(this->ClientFemale);
			this->GroupBoxGender->Location = System::Drawing::Point(603, 123);
			this->GroupBoxGender->Name = L"GroupBoxGender";
			this->GroupBoxGender->Size = System::Drawing::Size(228, 54);
			this->GroupBoxGender->TabIndex = 59;
			this->GroupBoxGender->TabStop = false;
			// 
			// ClientMale
			// 
			this->ClientMale->AutoSize = true;
			this->ClientMale->Location = System::Drawing::Point(128, 19);
			this->ClientMale->Name = L"ClientMale";
			this->ClientMale->Size = System::Drawing::Size(89, 20);
			this->ClientMale->TabIndex = 29;
			this->ClientMale->TabStop = true;
			this->ClientMale->Text = L"Masculino";
			this->ClientMale->UseVisualStyleBackColor = true;
			// 
			// ClientFemale
			// 
			this->ClientFemale->AutoSize = true;
			this->ClientFemale->Location = System::Drawing::Point(17, 19);
			this->ClientFemale->Name = L"ClientFemale";
			this->ClientFemale->Size = System::Drawing::Size(88, 20);
			this->ClientFemale->TabIndex = 28;
			this->ClientFemale->TabStop = true;
			this->ClientFemale->Text = L"Femenino";
			this->ClientFemale->UseVisualStyleBackColor = true;
			// 
			// txtClientGender
			// 
			this->txtClientGender->AutoSize = true;
			this->txtClientGender->Location = System::Drawing::Point(480, 146);
			this->txtClientGender->Name = L"txtClientGender";
			this->txtClientGender->Size = System::Drawing::Size(52, 16);
			this->txtClientGender->TabIndex = 58;
			this->txtClientGender->Text = L"Género";
			// 
			// textIdClient
			// 
			this->textIdClient->Location = System::Drawing::Point(603, 92);
			this->textIdClient->Name = L"textIdClient";
			this->textIdClient->Size = System::Drawing::Size(168, 22);
			this->textIdClient->TabIndex = 57;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(480, 92);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 16);
			this->label10->TabIndex = 56;
			this->label10->Text = L"Id";
			// 
			// dataGridViewClient
			// 
			this->dataGridViewClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewClient->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Id,
					this->NameClient, this->DNIClient, this->Rate, this->TxtOpinion, this->PhoneNumber
			});
			this->dataGridViewClient->Location = System::Drawing::Point(35, 373);
			this->dataGridViewClient->Name = L"dataGridViewClient";
			this->dataGridViewClient->RowHeadersWidth = 51;
			this->dataGridViewClient->RowTemplate->Height = 24;
			this->dataGridViewClient->Size = System::Drawing::Size(926, 213);
			this->dataGridViewClient->TabIndex = 54;
			this->dataGridViewClient->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RegisterClientForm::dataGridViewClient_CellClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->Width = 70;
			// 
			// NameClient
			// 
			this->NameClient->HeaderText = L"Nombre";
			this->NameClient->MinimumWidth = 6;
			this->NameClient->Name = L"NameClient";
			this->NameClient->Width = 125;
			// 
			// DNIClient
			// 
			this->DNIClient->HeaderText = L"DNI";
			this->DNIClient->MinimumWidth = 6;
			this->DNIClient->Name = L"DNIClient";
			this->DNIClient->Width = 50;
			// 
			// Rate
			// 
			this->Rate->HeaderText = L"Calificacion";
			this->Rate->MinimumWidth = 6;
			this->Rate->Name = L"Rate";
			this->Rate->Width = 50;
			// 
			// TxtOpinion
			// 
			this->TxtOpinion->HeaderText = L"Opinion";
			this->TxtOpinion->MinimumWidth = 6;
			this->TxtOpinion->Name = L"TxtOpinion";
			this->TxtOpinion->Width = 300;
			// 
			// PhoneNumber
			// 
			this->PhoneNumber->HeaderText = L"Numero de Telefono";
			this->PhoneNumber->MinimumWidth = 6;
			this->PhoneNumber->Name = L"PhoneNumber";
			this->PhoneNumber->Width = 125;
			// 
			// butActualizar
			// 
			this->butActualizar->Location = System::Drawing::Point(470, 293);
			this->butActualizar->Name = L"butActualizar";
			this->butActualizar->Size = System::Drawing::Size(125, 42);
			this->butActualizar->TabIndex = 51;
			this->butActualizar->Text = L"Modificar";
			this->butActualizar->UseVisualStyleBackColor = true;
			this->butActualizar->Click += gcnew System::EventHandler(this, &RegisterClientForm::butActualizar_Click);
			// 
			// butADD
			// 
			this->butADD->Location = System::Drawing::Point(258, 293);
			this->butADD->Name = L"butADD";
			this->butADD->Size = System::Drawing::Size(123, 42);
			this->butADD->TabIndex = 50;
			this->butADD->Text = L"Agregar";
			this->butADD->UseVisualStyleBackColor = true;
			this->butADD->Click += gcnew System::EventHandler(this, &RegisterClientForm::butADD_Click);
			// 
			// textRucClient
			// 
			this->textRucClient->Location = System::Drawing::Point(207, 194);
			this->textRucClient->Name = L"textRucClient";
			this->textRucClient->Size = System::Drawing::Size(186, 22);
			this->textRucClient->TabIndex = 49;
			// 
			// textNumberClient
			// 
			this->textNumberClient->Location = System::Drawing::Point(207, 139);
			this->textNumberClient->Name = L"textNumberClient";
			this->textNumberClient->Size = System::Drawing::Size(186, 22);
			this->textNumberClient->TabIndex = 48;
			// 
			// radioButtonEmpresaClient
			// 
			this->radioButtonEmpresaClient->AutoSize = true;
			this->radioButtonEmpresaClient->Location = System::Drawing::Point(731, 196);
			this->radioButtonEmpresaClient->Name = L"radioButtonEmpresaClient";
			this->radioButtonEmpresaClient->Size = System::Drawing::Size(83, 20);
			this->radioButtonEmpresaClient->TabIndex = 46;
			this->radioButtonEmpresaClient->TabStop = true;
			this->radioButtonEmpresaClient->Text = L"Empresa";
			this->radioButtonEmpresaClient->UseVisualStyleBackColor = true;
			// 
			// radioButtonPersonClient
			// 
			this->radioButtonPersonClient->AutoSize = true;
			this->radioButtonPersonClient->Location = System::Drawing::Point(622, 196);
			this->radioButtonPersonClient->Name = L"radioButtonPersonClient";
			this->radioButtonPersonClient->Size = System::Drawing::Size(79, 20);
			this->radioButtonPersonClient->TabIndex = 45;
			this->radioButtonPersonClient->TabStop = true;
			this->radioButtonPersonClient->Text = L"Persona";
			this->radioButtonPersonClient->UseVisualStyleBackColor = true;
			// 
			// textDniClient
			// 
			this->textDniClient->Location = System::Drawing::Point(207, 91);
			this->textDniClient->Name = L"textDniClient";
			this->textDniClient->Size = System::Drawing::Size(186, 22);
			this->textDniClient->TabIndex = 43;
			// 
			// textLastNameClient
			// 
			this->textLastNameClient->Location = System::Drawing::Point(207, 46);
			this->textLastNameClient->Name = L"textLastNameClient";
			this->textLastNameClient->Size = System::Drawing::Size(577, 22);
			this->textLastNameClient->TabIndex = 42;
			// 
			// textNameClient
			// 
			this->textNameClient->Location = System::Drawing::Point(207, 11);
			this->textNameClient->Name = L"textNameClient";
			this->textNameClient->Size = System::Drawing::Size(577, 22);
			this->textNameClient->TabIndex = 41;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(70, 200);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 16);
			this->label7->TabIndex = 38;
			this->label7->Text = L"Numero de RUC";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(480, 201);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 16);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Tipo de cliente";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(146, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 16);
			this->label4->TabIndex = 35;
			this->label4->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 16);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Numero de Telefono";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(112, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 16);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Apellidos";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(120, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Nombre";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(668, 293);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 42);
			this->button1->TabIndex = 60;
			this->button1->Text = L"CANCELAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterClientForm::button1_Click);
			// 
			// RegisterClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1014, 608);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->GroupBoxGender);
			this->Controls->Add(this->txtClientGender);
			this->Controls->Add(this->textIdClient);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->dataGridViewClient);
			this->Controls->Add(this->butActualizar);
			this->Controls->Add(this->butADD);
			this->Controls->Add(this->textRucClient);
			this->Controls->Add(this->textNumberClient);
			this->Controls->Add(this->radioButtonEmpresaClient);
			this->Controls->Add(this->radioButtonPersonClient);
			this->Controls->Add(this->textDniClient);
			this->Controls->Add(this->textLastNameClient);
			this->Controls->Add(this->textNameClient);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegisterClientForm";
			this->Text = L"RegisterClientForm";
			this->GroupBoxGender->ResumeLayout(false);
			this->GroupBoxGender->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void butADD_Click(System::Object^ sender, System::EventArgs^ e) {
		Client_Info^ client_Info = gcnew Client_Info();
		//Client_Info->setId(Convert::ToInt32(txtMealsId->Text));
		if (textIdClient->Text->Trim() == "") {
			MessageBox::Show("El id del cliente no debe estar vacío.");
			return;
		}
		if (textNameClient->Text->Trim() == "") {
			MessageBox::Show("El nombre del cliente no debe estar vacío.");
			return;
		}
		if (textLastNameClient->Text->Trim() == "") {
			MessageBox::Show("El apellido del cliente no debe estar vacío.");
			return;
		}
		if (textDniClient->Text->Trim() == "") {
			MessageBox::Show("El numero de DNI del cliente no debe estar vacío.");
			return;
		}
		if (textNumberClient->Text->Trim() == "") {
			MessageBox::Show("El numero de celular del cliente no debe estar vacío.");
			return;
		}
		
		Client_Info^ p = Controller::QueryClient_InfotById(Int32::Parse(textIdClient->Text));
		Client_Info^ t = Controller::QueryClient_InfoByDocNumber(textDniClient->Text);
		if (!(p )) {

			MessageBox::Show("Cliente registrado");
			RefreshdataGridViewClient();
		}
		else if (!(t)) {
			MessageBox::Show("Ingrese otro Id");
		}
		else {
			try {

				
				client_Info->Id = Int32::Parse(textIdClient->Text);
				client_Info->Name = textNameClient->Text;
				client_Info->LastName = textLastNameClient->Text;
				client_Info->TxtOpin = "Sin opinion";
				client_Info->Type = radioButtonPersonClient->Checked ? 'P' : 'E';
				client_Info->VisitQuantity = 0;
				client_Info->Rate = 0;
				client_Info->RucNumber = textRucClient->Text;
				client_Info->PhoneNumber = textNumberClient->Text;
				client_Info->DocNumber = textDniClient->Text;
				client_Info->Gender = ClientFemale->Checked ? 'F' : 'M';
				client_Info->Status = 'A';
				//s->Store = Controller::QueryStoreById(((ComboBoxItem^)cmbStore->Items[cmbStore->SelectedIndex])->Value);
				Controller::AddClient_Info(client_Info);
				RefreshdataGridViewClient();
				ClearControls();

			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString(), "Envíe el error al área de TI.");
				return;
			}
		}
		
	}
		   Void RefreshdataGridViewClient() {
			   Client_Info^ client_InfoList = Controller::QueryClient_InfoByDocNumber(textDniClient->Text);
			   dataGridViewClient->Rows->Clear();
			   if (client_InfoList != nullptr)
				   
					   dataGridViewClient->Rows->Add(gcnew array<String^> {
						   "" + client_InfoList->Id,
							   client_InfoList->Name,
							   "" + client_InfoList->DocNumber,
							   "" + client_InfoList->Rate,
							   client_InfoList->TxtOpin,
							   "" + client_InfoList->PhoneNumber,

					   });
				   
		   }

		   void ClearControls() {
			   textIdClient->Text = "";
			   textNameClient->Text = "";
			   textLastNameClient->Text = "";
			   
			   textRucClient->Text = "";
			   textNumberClient->Text = "";
			   textDniClient->Text = "";
			   radioButtonPersonClient->Checked = "";
			   ClientFemale->Checked = "";

		   }

private: System::Void butActualizar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewClient->CurrentCell != nullptr &&
		dataGridViewClient->CurrentCell->Value != nullptr &&
		dataGridViewClient->CurrentCell->Value->ToString() != "" &&
		!textDniClient->Text->Trim()->Equals("")) {

		Client_Info^ client_Info = gcnew Client_Info();
		try {
			if (textIdClient->Text->Trim() == "") {
				MessageBox::Show("El id del cliente no debe estar vacío.");
				return;
			}
			if (textNameClient->Text->Trim() == "") {
				MessageBox::Show("El nombre del cliente no debe estar vacío.");
				return;
			}
			if (textLastNameClient->Text->Trim() == "") {
				MessageBox::Show("El apellido del cliente no debe estar vacío.");
				return;
			}
			if (textDniClient->Text->Trim() == "") {
				MessageBox::Show("El numero de DNI del cliente no debe estar vacío.");
				return;
			}
			if (textNumberClient->Text->Trim() == "") {
				MessageBox::Show("El numero de celular del cliente no debe estar vacío.");
				return;
			}
			if (textRucClient->Text->Trim() == "") {
				MessageBox::Show("El RUC del cliente no debe estar vacío.");
				return;
			}
			client_Info->Id = Int32::Parse(textIdClient->Text);
			client_Info->Name = textNameClient->Text;
			client_Info->LastName = textLastNameClient->Text;
			client_Info->Type = radioButtonPersonClient->Checked ? 'P' : 'E';
			client_Info->RucNumber = textRucClient->Text;
			client_Info->PhoneNumber = textNumberClient->Text;
			client_Info->DocNumber = textDniClient->Text;
			client_Info->Gender = ClientFemale->Checked ? 'F' : 'M';
			client_Info->Status = 'A';
			//s->Store = Controller::QueryStoreById(((ComboBoxItem^)cmbStore->Items[cmbStore->SelectedIndex])->Value);
			Controller::UpdateClient_Info(client_Info);
			RefreshdataGridViewClient();
			ClearControls();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Envíe el error al área de TI.");
			return;
		}
	}
}
private: System::Void dataGridViewClient_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
