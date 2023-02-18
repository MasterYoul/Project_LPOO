#pragma once
#include "Client_InfoForm.h"
#include "Search_ClientForm.h"
#include "RegisterClientForm.h"

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
	/// Resumen de Sugesstions
	/// </summary>
	public ref class Sugesstions : public System::Windows::Forms::Form
	{
	private:
		Client_Info^ client_Info;
	public:
		property char UseType;
		property Form^ RefSaleForm;
	public:
		Sugesstions(void)
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
		~Sugesstions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAddCustomer;
	protected:
	private: System::Windows::Forms::Button^ btnSearchCustomer;
	private: System::Windows::Forms::Label^ lblClientData;
	private: System::Windows::Forms::TextBox^ textClient;
	private: System::Windows::Forms::DateTimePicker^ dateTimeSale;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxComments;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBoxLocal;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBoxFood;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBoxAtention;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ buttonClean;

	private: System::Windows::Forms::Button^ buttonSave;
	private: System::Windows::Forms::Button^ buttonCancel;
	private: System::Windows::Forms::Label^ label6;



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
			this->btnAddCustomer = (gcnew System::Windows::Forms::Button());
			this->btnSearchCustomer = (gcnew System::Windows::Forms::Button());
			this->lblClientData = (gcnew System::Windows::Forms::Label());
			this->textClient = (gcnew System::Windows::Forms::TextBox());
			this->dateTimeSale = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxComments = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBoxLocal = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBoxFood = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBoxAtention = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonClean = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnAddCustomer
			// 
			this->btnAddCustomer->Location = System::Drawing::Point(668, 136);
			this->btnAddCustomer->Name = L"btnAddCustomer";
			this->btnAddCustomer->Size = System::Drawing::Size(143, 44);
			this->btnAddCustomer->TabIndex = 27;
			this->btnAddCustomer->Text = L"REGISTRARSE";
			this->btnAddCustomer->UseVisualStyleBackColor = true;
			this->btnAddCustomer->Click += gcnew System::EventHandler(this, &Sugesstions::btnAddCustomer_Click);
			// 
			// btnSearchCustomer
			// 
			this->btnSearchCustomer->Location = System::Drawing::Point(487, 137);
			this->btnSearchCustomer->Name = L"btnSearchCustomer";
			this->btnSearchCustomer->Size = System::Drawing::Size(125, 44);
			this->btnSearchCustomer->TabIndex = 26;
			this->btnSearchCustomer->Text = L"BUSCAR";
			this->btnSearchCustomer->UseVisualStyleBackColor = true;
			this->btnSearchCustomer->Click += gcnew System::EventHandler(this, &Sugesstions::btnSearchCustomer_Click);
			// 
			// lblClientData
			// 
			this->lblClientData->Location = System::Drawing::Point(95, 197);
			this->lblClientData->Name = L"lblClientData";
			this->lblClientData->Size = System::Drawing::Size(317, 16);
			this->lblClientData->TabIndex = 25;
			this->lblClientData->Text = L"Sin Cliente";
			this->lblClientData->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textClient
			// 
			this->textClient->Location = System::Drawing::Point(98, 158);
			this->textClient->Name = L"textClient";
			this->textClient->Size = System::Drawing::Size(331, 22);
			this->textClient->TabIndex = 24;
			this->textClient->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// dateTimeSale
			// 
			this->dateTimeSale->Location = System::Drawing::Point(98, 122);
			this->dateTimeSale->Name = L"dateTimeSale";
			this->dateTimeSale->Size = System::Drawing::Size(331, 22);
			this->dateTimeSale->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 16);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Cliente";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 16);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Fecha";
			// 
			// textBoxComments
			// 
			this->textBoxComments->Location = System::Drawing::Point(462, 297);
			this->textBoxComments->Multiline = true;
			this->textBoxComments->Name = L"textBoxComments";
			this->textBoxComments->Size = System::Drawing::Size(349, 269);
			this->textBoxComments->TabIndex = 28;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(459, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Comentario:";
			// 
			// comboBoxLocal
			// 
			this->comboBoxLocal->FormattingEnabled = true;
			this->comboBoxLocal->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBoxLocal->Location = System::Drawing::Point(223, 496);
			this->comboBoxLocal->Name = L"comboBoxLocal";
			this->comboBoxLocal->Size = System::Drawing::Size(169, 24);
			this->comboBoxLocal->TabIndex = 31;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(20, 504);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 16);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Puntuación del local:";
			// 
			// comboBoxFood
			// 
			this->comboBoxFood->FormattingEnabled = true;
			this->comboBoxFood->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBoxFood->Location = System::Drawing::Point(223, 396);
			this->comboBoxFood->Name = L"comboBoxFood";
			this->comboBoxFood->Size = System::Drawing::Size(169, 24);
			this->comboBoxFood->TabIndex = 33;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 404);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 16);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Puntuacion de la comida:";
			// 
			// comboBoxAtention
			// 
			this->comboBoxAtention->FormattingEnabled = true;
			this->comboBoxAtention->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBoxAtention->Location = System::Drawing::Point(223, 301);
			this->comboBoxAtention->Name = L"comboBoxAtention";
			this->comboBoxAtention->Size = System::Drawing::Size(169, 24);
			this->comboBoxAtention->TabIndex = 35;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 309);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 16);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Puntuacion de la atención:";
			// 
			// buttonClean
			// 
			this->buttonClean->Location = System::Drawing::Point(343, 629);
			this->buttonClean->Name = L"buttonClean";
			this->buttonClean->Size = System::Drawing::Size(114, 44);
			this->buttonClean->TabIndex = 37;
			this->buttonClean->Text = L"LIMPIAR";
			this->buttonClean->UseVisualStyleBackColor = true;
			this->buttonClean->Click += gcnew System::EventHandler(this, &Sugesstions::buttonClean_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(162, 629);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(125, 44);
			this->buttonSave->TabIndex = 36;
			this->buttonSave->Text = L"GUARDAR";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &Sugesstions::buttonSave_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(519, 629);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(114, 44);
			this->buttonCancel->TabIndex = 38;
			this->buttonCancel->Text = L"CANCELAR";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &Sugesstions::buttonCancel_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(19, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(722, 24);
			this->label6->TabIndex = 39;
			this->label6->Text = L"REALIZE SUS QUEJAS, SUGERENCIAS Y RECOMENDACIONES:";
			// 
			// Sugesstions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(950, 701);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonClean);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->comboBoxAtention);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBoxFood);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBoxLocal);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxComments);
			this->Controls->Add(this->btnAddCustomer);
			this->Controls->Add(this->btnSearchCustomer);
			this->Controls->Add(this->lblClientData);
			this->Controls->Add(this->textClient);
			this->Controls->Add(this->dateTimeSale);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Sugesstions";
			this->Text = L"Sugerencias";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dateTimeSale->Text->Trim() == "") {
		MessageBox::Show("La fecha de la sugerencia no debe estar vacío.");
		return;
	}
	if (textClient->Text->Trim() == "") {
		MessageBox::Show("El nombre del cliente no debe estar vacío.");
		return;
	}
	if (comboBoxAtention->Text->Trim() == "") {
		MessageBox::Show("El puntaje de la atencion no debe estar vacío.");
		return;
	}
	if (comboBoxFood->Text->Trim() == "") {
		MessageBox::Show("El puntaje de la comida no debe estar vacío.");
		return;
	}
	if (comboBoxLocal->Text->Trim() == "") {
		MessageBox::Show("El puntaje del local no debe estar vacío.");
		return;
	}
	if (textBoxComments->Text->Trim() == "") {
		MessageBox::Show("Le falta realizar un comentario.");
		return;
	}
	
	Suggestions^ suggestions = gcnew Suggestions();
	suggestions->Date = dateTimeSale->Value.ToString("yyyy-MM-dd");
	suggestions->ClientName = textClient->Text;
	suggestions->AttentionScore = comboBoxAtention->Text;
	suggestions->FoodScore = comboBoxFood->Text;
	suggestions->VenueScore = comboBoxLocal->Text;
	suggestions->Comments = textBoxComments ->Text;

	
	//Completar el Registro
	Controller::RegisterSuggestions(suggestions);
	MessageBox::Show("Se ha registrado la sugerencia correctamente.");
	ClearControls();
}

	   void ClearControls() {
		   textClient->Text = "";
		   comboBoxAtention->Text = "";
		   comboBoxFood->Text = "";
		   comboBoxLocal->Text = "";
		   textBoxComments->Text = "";

	   }

private: System::Void buttonClean_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
}
private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnSearchCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
	Search_ClientForm^ client_infoform = gcnew Search_ClientForm();
	client_infoform->Type = 'S';
	client_infoform->sugesstionForm = this;

	client_infoform->ShowDialog();
}
	   private: System::Void btnAddCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
		   RegisterClientForm^ client_infoform = gcnew RegisterClientForm();
		   client_infoform->Type = 'S';
		   client_infoform->registerclientForm = this;

		   client_infoform->ShowDialog();
	   }
	   public:  Void SetCustom(Client_Info^ cust) {
		   this->client_Info = cust;
		   textClient->Text = Convert::ToString(cust->DocNumber);
		   lblClientData->Text = cust->DocNumber + " - " +
			   cust->Name + " " + cust->LastName;
	   }

	 public:  Void SetCust(Client_Info^ cust) {
				 this->client_Info = cust;
				 textClient->Text = Convert::ToString(cust->DocNumber);
				 lblClientData->Text = cust->DocNumber + " - " +
					 cust->Name + " " + cust->LastName;
			 }
			 

};
}
