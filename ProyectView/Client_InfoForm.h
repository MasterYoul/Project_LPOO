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
	/// Resumen de Client_InfoForm
	/// </summary>
	public ref class Client_InfoForm : public System::Windows::Forms::Form
	{
	public:
		property char UseType;
		property Form^ RefSaleForm;

	public:
		Client_InfoForm(void)
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
		~Client_InfoForm()
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
	private: System::Windows::Forms::TextBox^ textNameClient;
	private: System::Windows::Forms::TextBox^ textLastNameClient;
	private: System::Windows::Forms::TextBox^ textDniClient;
	private: System::Windows::Forms::TextBox^ textOpinionClient;




	private: System::Windows::Forms::RadioButton^ radioButtonPersonClient;
	private: System::Windows::Forms::RadioButton^ radioButtonEmpresaClient;


	private: System::Windows::Forms::NumericUpDown^ numericUpDownVisitsClient;
	private: System::Windows::Forms::TextBox^ textNumberClient;
	private: System::Windows::Forms::TextBox^ textRucClient;
	private: System::Windows::Forms::Button^ butADD;
	private: System::Windows::Forms::Button^ butActualizar;
	private: System::Windows::Forms::Button^ butDELETE;







	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::ComboBox^ comboBoxRatioClient;
	private: System::Windows::Forms::DataGridView^ dataGridViewClient;





	private: System::Windows::Forms::Button^ CleanClientBtn;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textIdClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNIClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Rate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TxtOpinion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PhoneNumber;
































	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		/// 
	


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textNameClient = (gcnew System::Windows::Forms::TextBox());
			this->textLastNameClient = (gcnew System::Windows::Forms::TextBox());
			this->textDniClient = (gcnew System::Windows::Forms::TextBox());
			this->textOpinionClient = (gcnew System::Windows::Forms::TextBox());
			this->radioButtonPersonClient = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonEmpresaClient = (gcnew System::Windows::Forms::RadioButton());
			this->numericUpDownVisitsClient = (gcnew System::Windows::Forms::NumericUpDown());
			this->textNumberClient = (gcnew System::Windows::Forms::TextBox());
			this->textRucClient = (gcnew System::Windows::Forms::TextBox());
			this->butADD = (gcnew System::Windows::Forms::Button());
			this->butActualizar = (gcnew System::Windows::Forms::Button());
			this->butDELETE = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->comboBoxRatioClient = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridViewClient = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNIClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Rate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TxtOpinion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PhoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CleanClientBtn = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textIdClient = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVisitsClient))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(124, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(115, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellidos";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 182);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Numero de Telefono";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(153, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"DNI";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(454, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Cantidad de Visitas";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(79, 319);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Tipo de cliente";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(68, 251);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Numero de RUC";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(507, 182);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Calificación";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(117, 469);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"OPINION";
			// 
			// textNameClient
			// 
			this->textNameClient->Location = System::Drawing::Point(222, 15);
			this->textNameClient->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textNameClient->Name = L"textNameClient";
			this->textNameClient->Size = System::Drawing::Size(649, 26);
			this->textNameClient->TabIndex = 9;
			// 
			// textLastNameClient
			// 
			this->textLastNameClient->Location = System::Drawing::Point(222, 59);
			this->textLastNameClient->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textLastNameClient->Name = L"textLastNameClient";
			this->textLastNameClient->Size = System::Drawing::Size(649, 26);
			this->textLastNameClient->TabIndex = 10;
			// 
			// textDniClient
			// 
			this->textDniClient->Location = System::Drawing::Point(222, 115);
			this->textDniClient->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textDniClient->Name = L"textDniClient";
			this->textDniClient->Size = System::Drawing::Size(209, 26);
			this->textDniClient->TabIndex = 11;
			// 
			// textOpinionClient
			// 
			this->textOpinionClient->Location = System::Drawing::Point(222, 469);
			this->textOpinionClient->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textOpinionClient->Multiline = true;
			this->textOpinionClient->Name = L"textOpinionClient";
			this->textOpinionClient->Size = System::Drawing::Size(586, 120);
			this->textOpinionClient->TabIndex = 12;
			// 
			// radioButtonPersonClient
			// 
			this->radioButtonPersonClient->AutoSize = true;
			this->radioButtonPersonClient->Location = System::Drawing::Point(222, 314);
			this->radioButtonPersonClient->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->radioButtonPersonClient->Name = L"radioButtonPersonClient";
			this->radioButtonPersonClient->Size = System::Drawing::Size(93, 24);
			this->radioButtonPersonClient->TabIndex = 13;
			this->radioButtonPersonClient->TabStop = true;
			this->radioButtonPersonClient->Text = L"Persona";
			this->radioButtonPersonClient->UseVisualStyleBackColor = true;
			// 
			// radioButtonEmpresaClient
			// 
			this->radioButtonEmpresaClient->AutoSize = true;
			this->radioButtonEmpresaClient->Location = System::Drawing::Point(338, 314);
			this->radioButtonEmpresaClient->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->radioButtonEmpresaClient->Name = L"radioButtonEmpresaClient";
			this->radioButtonEmpresaClient->Size = System::Drawing::Size(98, 24);
			this->radioButtonEmpresaClient->TabIndex = 14;
			this->radioButtonEmpresaClient->TabStop = true;
			this->radioButtonEmpresaClient->Text = L"Empresa";
			this->radioButtonEmpresaClient->UseVisualStyleBackColor = true;
			// 
			// numericUpDownVisitsClient
			// 
			this->numericUpDownVisitsClient->Location = System::Drawing::Point(619, 115);
			this->numericUpDownVisitsClient->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDownVisitsClient->Name = L"numericUpDownVisitsClient";
			this->numericUpDownVisitsClient->Size = System::Drawing::Size(190, 26);
			this->numericUpDownVisitsClient->TabIndex = 15;
			// 
			// textNumberClient
			// 
			this->textNumberClient->Location = System::Drawing::Point(222, 175);
			this->textNumberClient->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textNumberClient->Name = L"textNumberClient";
			this->textNumberClient->Size = System::Drawing::Size(209, 26);
			this->textNumberClient->TabIndex = 16;
			// 
			// textRucClient
			// 
			this->textRucClient->Location = System::Drawing::Point(222, 244);
			this->textRucClient->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textRucClient->Name = L"textRucClient";
			this->textRucClient->Size = System::Drawing::Size(209, 26);
			this->textRucClient->TabIndex = 17;
			// 
			// butADD
			// 
			this->butADD->Location = System::Drawing::Point(118, 369);
			this->butADD->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->butADD->Name = L"butADD";
			this->butADD->Size = System::Drawing::Size(138, 52);
			this->butADD->TabIndex = 19;
			this->butADD->Text = L"Agregar";
			this->butADD->UseVisualStyleBackColor = true;
			this->butADD->Click += gcnew System::EventHandler(this, &Client_InfoForm::butADD_Click);
			// 
			// butActualizar
			// 
			this->butActualizar->Location = System::Drawing::Point(363, 369);
			this->butActualizar->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->butActualizar->Name = L"butActualizar";
			this->butActualizar->Size = System::Drawing::Size(141, 52);
			this->butActualizar->TabIndex = 20;
			this->butActualizar->Text = L"Modificar";
			this->butActualizar->UseVisualStyleBackColor = true;
			this->butActualizar->Click += gcnew System::EventHandler(this, &Client_InfoForm::btnUpdate_Click);
			// 
			// butDELETE
			// 
			this->butDELETE->Location = System::Drawing::Point(609, 369);
			this->butDELETE->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->butDELETE->Name = L"butDELETE";
			this->butDELETE->Size = System::Drawing::Size(141, 52);
			this->butDELETE->TabIndex = 21;
			this->butDELETE->Text = L"Eliminar";
			this->butDELETE->UseVisualStyleBackColor = true;
			this->butDELETE->Click += gcnew System::EventHandler(this, &Client_InfoForm::btnDelete_Click);
			// 
			// comboBoxRatioClient
			// 
			this->comboBoxRatioClient->FormattingEnabled = true;
			this->comboBoxRatioClient->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBoxRatioClient->Location = System::Drawing::Point(619, 175);
			this->comboBoxRatioClient->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBoxRatioClient->Name = L"comboBoxRatioClient";
			this->comboBoxRatioClient->Size = System::Drawing::Size(190, 28);
			this->comboBoxRatioClient->TabIndex = 22;
			// 
			// dataGridViewClient
			// 
			this->dataGridViewClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewClient->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Id,
					this->NameClient, this->DNIClient, this->Rate, this->TxtOpinion, this->PhoneNumber
			});
			this->dataGridViewClient->Location = System::Drawing::Point(53, 630);
			this->dataGridViewClient->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridViewClient->Name = L"dataGridViewClient";
			this->dataGridViewClient->RowHeadersWidth = 51;
			this->dataGridViewClient->RowTemplate->Height = 24;
			this->dataGridViewClient->Size = System::Drawing::Size(1042, 266);
			this->dataGridViewClient->TabIndex = 23;
			this->dataGridViewClient->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Client_InfoForm::dataGridViewClient_Info_CellClick);
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
			this->DNIClient->Width = 125;
			// 
			// Rate
			// 
			this->Rate->HeaderText = L"Calificacion";
			this->Rate->MinimumWidth = 6;
			this->Rate->Name = L"Rate";
			this->Rate->Width = 125;
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
			// CleanClientBtn
			// 
			this->CleanClientBtn->Location = System::Drawing::Point(846, 369);
			this->CleanClientBtn->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->CleanClientBtn->Name = L"CleanClientBtn";
			this->CleanClientBtn->Size = System::Drawing::Size(141, 52);
			this->CleanClientBtn->TabIndex = 24;
			this->CleanClientBtn->Text = L"Limpiar";
			this->CleanClientBtn->UseVisualStyleBackColor = true;
			this->CleanClientBtn->Click += gcnew System::EventHandler(this, &Client_InfoForm::CleanClientBtn_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(573, 251);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(23, 20);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Id";
			// 
			// textIdClient
			// 
			this->textIdClient->Location = System::Drawing::Point(619, 248);
			this->textIdClient->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textIdClient->Name = L"textIdClient";
			this->textIdClient->Size = System::Drawing::Size(188, 26);
			this->textIdClient->TabIndex = 26;
			// 
			// Client_InfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1227, 980);
			this->Controls->Add(this->textIdClient);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->CleanClientBtn);
			this->Controls->Add(this->dataGridViewClient);
			this->Controls->Add(this->comboBoxRatioClient);
			this->Controls->Add(this->butDELETE);
			this->Controls->Add(this->butActualizar);
			this->Controls->Add(this->butADD);
			this->Controls->Add(this->textRucClient);
			this->Controls->Add(this->textNumberClient);
			this->Controls->Add(this->numericUpDownVisitsClient);
			this->Controls->Add(this->radioButtonEmpresaClient);
			this->Controls->Add(this->radioButtonPersonClient);
			this->Controls->Add(this->textOpinionClient);
			this->Controls->Add(this->textDniClient);
			this->Controls->Add(this->textLastNameClient);
			this->Controls->Add(this->textNameClient);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Client_InfoForm";
			this->Text = L"Mantenimiento de Clientes";
			this->Load += gcnew System::EventHandler(this, &Client_InfoForm::Client_InfoForm_Load);
			this->Shown += gcnew System::EventHandler(this, &Client_InfoForm::Client_InfoForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVisitsClient))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


private: System::Void butADD_Click(System::Object ^ sender, System::EventArgs ^ e) {
	Client_Info^ client_Info = gcnew Client_Info();
	//Client_Info->setId(Convert::ToInt32(txtMealsId->Text));

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
		if (numericUpDownVisitsClient->Text->Trim() == "") {
			MessageBox::Show("El numero de visitas del cliente no debe estar vacío");
			return;
		}
		if (comboBoxRatioClient->Text->Trim() == "") {
			MessageBox::Show("La calificacion del cliente no debe estar vacía.");
			return;
		}
		if (textOpinionClient->Text->Trim() == "") {
			MessageBox::Show("La opinion del cliente no debe estar vacía.");
			return;
		}
		client_Info->Id = Int32::Parse(textIdClient->Text);
		client_Info->Name = textNameClient->Text;
		client_Info->LastName = textLastNameClient->Text;
		client_Info->TxtOpin = textOpinionClient->Text;
		client_Info->Type = radioButtonPersonClient->Checked ? 'P' : 'E';
		client_Info->VisitQuantity= Convert::ToInt32(numericUpDownVisitsClient->Text);
		client_Info->Rate = Convert::ToInt32(comboBoxRatioClient->Text);
		client_Info->RucNumber = textRucClient->Text;
		client_Info->PhoneNumber = textNumberClient->Text;
		client_Info->DocNumber = textDniClient->Text;
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
	   private: System::Void consultasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		   DisableControls();
	   }
			  Void DisableControls() {
				  textNameClient->ReadOnly = true;
				  textLastNameClient->ReadOnly = true;
				  butADD->Enabled = false;
				  butActualizar->Enabled = false;
				  butDELETE->Enabled = false;
			  }
			  Void EnableControls() {

				  textNameClient->ReadOnly = false;
				  textLastNameClient->ReadOnly = false;
				  butADD->Enabled = true;
				  butActualizar->Enabled = true;
				  butDELETE->Enabled = true;
			  }

			  Void RefreshdataGridViewClient() {
				  List <Client_Info^>^ Client_InfoList = Controller::QueryAllClient_Info();
				  dataGridViewClient->Rows->Clear();
				  if (Client_InfoList != nullptr)
					  for (int i = 0; i < Client_InfoList->Count; i++) {
						  dataGridViewClient->Rows->Add(gcnew array<String^> {
							  "" + Client_InfoList[i]->Id,
							  Client_InfoList[i]->Name,
								  "" + Client_InfoList[i]->DocNumber,
								  "" + Client_InfoList[i]->Rate,
								   Client_InfoList[i]->TxtOpin,
								  "" + Client_InfoList[i]->PhoneNumber,

						  });
					  }
			  }

			  void ClearControls() {
				  textIdClient->Text = "";
				  textNameClient->Text = "";
				  textLastNameClient->Text = "";
				  textOpinionClient->Text = "";
				  comboBoxRatioClient->Text = "";
				  textRucClient->Text = "";
				  textNumberClient->Text = "";
				  textDniClient->Text = "";
				  numericUpDownVisitsClient->Text = "";
				  radioButtonPersonClient->Checked = "";

			  }


			  void ShowClient() {
				  List<Client_Info^>^ Client_InfoList = Controller::QueryAllClient_Info();

				  dataGridViewClient->Rows->Clear();
				  for (int i = 0; i < Client_InfoList->Count; i++) {
					  dataGridViewClient->Rows->Add(gcnew array<String^>{
						  "" + Client_InfoList[i]->Id,
						  Client_InfoList[i]->Name,
							  "" + Client_InfoList[i]->DocNumber,
							  "" + Client_InfoList[i]->Rate,
							  Client_InfoList[i]->TxtOpin,
							  "" + Client_InfoList[i]->PhoneNumber,
					  });
				  }
			  }
			  
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	butActualizar->Enabled = false;
	butDELETE->Enabled = false;
	try {
		if (textIdClient->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ningun usuario seleccionado.");
			return;
		}
		int ClientId = Int32::Parse(textIdClient->Text);

		if (MessageBox::Show(
			"Estas seguro(a) de eliminar el usuario?",
			"Confirmacion", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{


			Client_Info^ c = Controller::QueryClient_InfotById(ClientId);
			c->Status = 0;

			Controller::DeleteClient_Info(ClientId);

			RefreshdataGridViewClient();
			ClearControls();
		}
	}
	catch (...) {
		MessageBox::Show("No se puede eliminar el producto porque el Id no es valido.");
		return;
	}
		/*
		if (textDniClient->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ningun cliente seleccionado.");
			return;
		}

		if (MessageBox::Show(
			"Estas seguro(a) de eliminar el cliente?",
			"Confirmacion", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{

			//List<Meals^>^ mealsList = Controller::QueryMealsByNameOrDescription(txtNameDescription->Text->Trim());
			List< Client_Info^>^ client_InfoList = Controller::QueryClient_InfotById(textNumberClient->Text->Trim());
			Client_Info->Status = 0;

			Controller::DeleteClient_Info(dn);

			RefreshdataGridViewClient();
			ClearControls();
		}
	}
	catch (...) {
		MessageBox::Show("No se puede eliminar el producto porque el Id no es valido.");
		return;
	}
	*/

}
	  
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
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
			if (numericUpDownVisitsClient->Text->Trim() == "") {
				MessageBox::Show("El numero de visitas del cliente no debe estar vacío");
				return;
			}
			if (comboBoxRatioClient->Text->Trim() == "") {
				MessageBox::Show("La calificacion del cliente no debe estar vacía.");
				return;
			}
			if (textOpinionClient->Text->Trim() == "") {
				MessageBox::Show("La opinion del cliente no debe estar vacía.");
				return;
			}
			client_Info->Id = Int32::Parse(textIdClient->Text);
			client_Info->Name = textNameClient->Text;
			client_Info->LastName = textLastNameClient->Text;
			client_Info->TxtOpin = textOpinionClient->Text;
			client_Info->Type = radioButtonPersonClient->Checked ? 'P' : 'E';
			client_Info->VisitQuantity = Convert::ToInt32(numericUpDownVisitsClient->Text);
			client_Info->Rate = Convert::ToInt32(comboBoxRatioClient->Text);
			client_Info->RucNumber = textRucClient->Text;
			client_Info->PhoneNumber = textNumberClient->Text;
			client_Info->DocNumber = textDniClient->Text;
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
	/*
private: System::Void dataGridViewUser_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dataGridViewClient->SelectedCells[0]->RowIndex;
	int ClientId = Convert::ToInt32(dataGridViewClient->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Client_Info^ c = Controller::QueryClient_InfotById(ClientId);

	butActualizar->Enabled = true;
	butDELETE->Enabled = true;

	textIdClient->Text = "" + c->Id;
	textNameClient->Text = c->Name;
	textLastNameClient->Text = c->LastName;
	textOpinionClient->Text = c->TxtOpin;
	comboBoxRatioClient->Text = "" + c->Rate;
	textRucClient->Text = c->RucNumber;
	textNumberClient->Text = c->PhoneNumber;
	textDniClient->Text = c->DocNumber;
	numericUpDownVisitsClient->Text = "" + c->VisitQuantity;
	radioButtonPersonClient->Checked = c->Type == 'P';
	radioButtonEmpresaClient->Checked = c->Type == 'E';

	//UserMale->Checked = p->Gender == 'M';
	//UserFemale->Checked = p->Gender == 'F';
}
*/


 
private: System::Void CleanClientBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
}
private: System::Void Client_InfoForm_Shown(System::Object^ sender, System::EventArgs^ e) {
	butActualizar->Enabled = false;
	butDELETE->Enabled = false;
}
private: System::Void dataGridViewClient_Info_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dataGridViewClient->SelectedCells[0]->RowIndex;
	int ClientId = Convert::ToInt32(dataGridViewClient->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Client_Info^ c = Controller::QueryClient_InfotById(ClientId);

	butActualizar->Enabled = true;
	butDELETE->Enabled = true;

	textIdClient->Text = "" + c->Id;
	textNameClient->Text = c->Name;
	textLastNameClient->Text = c->LastName;
	textOpinionClient->Text = c->TxtOpin;
	comboBoxRatioClient->Text = "" + c->Rate;
	textRucClient->Text = c->RucNumber;
	textNumberClient->Text = c->PhoneNumber;
	textDniClient->Text = c->DocNumber;
	numericUpDownVisitsClient->Text = "" + c->VisitQuantity;
	radioButtonPersonClient->Checked = c->Type == 'P';
	radioButtonEmpresaClient->Checked = c->Type == 'E';

	//UserMale->Checked = p->Gender == 'M';
	//UserFemale->Checked = p->Gender == 'F';
}
private: System::Void Client_InfoForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowClient();
}
};
}
