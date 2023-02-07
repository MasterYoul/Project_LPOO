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
	/// Resumen de Client_InfoForm
	/// </summary>
	public ref class Client_InfoForm : public System::Windows::Forms::Form
	{
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVisitsClient))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(110, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(102, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellidos";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Numero de Telefono";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(136, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"DNI";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(404, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Cantidad de Visitas";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(70, 255);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Tipo de cliente";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(60, 201);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Numero de RUC";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(479, 146);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"RATIO";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(104, 375);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 16);
			this->label9->TabIndex = 8;
			this->label9->Text = L"OPINION";
			// 
			// textNameClient
			// 
			this->textNameClient->Location = System::Drawing::Point(197, 12);
			this->textNameClient->Name = L"textNameClient";
			this->textNameClient->Size = System::Drawing::Size(577, 22);
			this->textNameClient->TabIndex = 9;
			// 
			// textLastNameClient
			// 
			this->textLastNameClient->Location = System::Drawing::Point(197, 47);
			this->textLastNameClient->Name = L"textLastNameClient";
			this->textLastNameClient->Size = System::Drawing::Size(577, 22);
			this->textLastNameClient->TabIndex = 10;
			// 
			// textDniClient
			// 
			this->textDniClient->Location = System::Drawing::Point(197, 92);
			this->textDniClient->Name = L"textDniClient";
			this->textDniClient->Size = System::Drawing::Size(186, 22);
			this->textDniClient->TabIndex = 11;
			// 
			// textOpinionClient
			// 
			this->textOpinionClient->Location = System::Drawing::Point(197, 375);
			this->textOpinionClient->Multiline = true;
			this->textOpinionClient->Name = L"textOpinionClient";
			this->textOpinionClient->Size = System::Drawing::Size(521, 97);
			this->textOpinionClient->TabIndex = 12;
			// 
			// radioButtonPersonClient
			// 
			this->radioButtonPersonClient->AutoSize = true;
			this->radioButtonPersonClient->Location = System::Drawing::Point(197, 251);
			this->radioButtonPersonClient->Name = L"radioButtonPersonClient";
			this->radioButtonPersonClient->Size = System::Drawing::Size(79, 20);
			this->radioButtonPersonClient->TabIndex = 13;
			this->radioButtonPersonClient->TabStop = true;
			this->radioButtonPersonClient->Text = L"Persona";
			this->radioButtonPersonClient->UseVisualStyleBackColor = true;
			// 
			// radioButtonEmpresaClient
			// 
			this->radioButtonEmpresaClient->AutoSize = true;
			this->radioButtonEmpresaClient->Location = System::Drawing::Point(300, 251);
			this->radioButtonEmpresaClient->Name = L"radioButtonEmpresaClient";
			this->radioButtonEmpresaClient->Size = System::Drawing::Size(83, 20);
			this->radioButtonEmpresaClient->TabIndex = 14;
			this->radioButtonEmpresaClient->TabStop = true;
			this->radioButtonEmpresaClient->Text = L"Empresa";
			this->radioButtonEmpresaClient->UseVisualStyleBackColor = true;
			// 
			// numericUpDownVisitsClient
			// 
			this->numericUpDownVisitsClient->Location = System::Drawing::Point(550, 92);
			this->numericUpDownVisitsClient->Name = L"numericUpDownVisitsClient";
			this->numericUpDownVisitsClient->Size = System::Drawing::Size(169, 22);
			this->numericUpDownVisitsClient->TabIndex = 15;
			// 
			// textNumberClient
			// 
			this->textNumberClient->Location = System::Drawing::Point(197, 140);
			this->textNumberClient->Name = L"textNumberClient";
			this->textNumberClient->Size = System::Drawing::Size(186, 22);
			this->textNumberClient->TabIndex = 16;
			// 
			// textRucClient
			// 
			this->textRucClient->Location = System::Drawing::Point(197, 195);
			this->textRucClient->Name = L"textRucClient";
			this->textRucClient->Size = System::Drawing::Size(186, 22);
			this->textRucClient->TabIndex = 17;
			// 
			// butADD
			// 
			this->butADD->Location = System::Drawing::Point(105, 295);
			this->butADD->Name = L"butADD";
			this->butADD->Size = System::Drawing::Size(123, 42);
			this->butADD->TabIndex = 19;
			this->butADD->Text = L"Agregar";
			this->butADD->UseVisualStyleBackColor = true;
			this->butADD->Click += gcnew System::EventHandler(this, &Client_InfoForm::buttonADD_Click);
			// 
			// butActualizar
			// 
			this->butActualizar->Location = System::Drawing::Point(323, 295);
			this->butActualizar->Name = L"butActualizar";
			this->butActualizar->Size = System::Drawing::Size(125, 42);
			this->butActualizar->TabIndex = 20;
			this->butActualizar->Text = L"Actualizar";
			this->butActualizar->UseVisualStyleBackColor = true;
			// 
			// butDELETE
			// 
			this->butDELETE->Location = System::Drawing::Point(574, 295);
			this->butDELETE->Name = L"butDELETE";
			this->butDELETE->Size = System::Drawing::Size(106, 42);
			this->butDELETE->TabIndex = 21;
			this->butDELETE->Text = L"Eliminar";
			this->butDELETE->UseVisualStyleBackColor = true;

			// 
			// comboBoxRatioClient
			// 
			this->comboBoxRatioClient->FormattingEnabled = true;
			this->comboBoxRatioClient->Location = System::Drawing::Point(550, 140);
			this->comboBoxRatioClient->Name = L"comboBoxRatioClient";
			this->comboBoxRatioClient->Size = System::Drawing::Size(169, 24);
			this->comboBoxRatioClient->TabIndex = 22;
			// 
			// Client_InfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 641);
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
			this->Name = L"Client_InfoForm";
			this->Text = L"Client_InfoForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVisitsClient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void buttonADD_Click(System::Object^ sender, System::EventArgs^ e) {
	Client_Info^ client_Info = gcnew Client_Info();
	client_Info->Name = textNameClient->Text;
	client_Info->LastName = textLastNameClient->Text;
	client_Info->DocNumber = textDniClient->Text;
	client_Info->PhoneNumber = textNumberClient->Text;
	client_Info->VisitQuantity = Convert::ToInt32(numericUpDownVisitsClient->Text);
	client_Info->Type = 'A';
	client_Info->RucNumber = textRucClient->Text;
	client_Info->Rate = Convert::ToInt32(comboBoxRatioClient->Text);
	client_Info->TxtOpin = textOpinionClient->Text;

	Controller::AddClient_Info(client_Info);

}
};
}
