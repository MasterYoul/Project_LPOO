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
	/// Resumen de Search_ClientForm
	/// </summary>
	public ref class Search_ClientForm : public System::Windows::Forms::Form
	{
	public:
		property char Type;
		property Form^ sugesstionForm;
	public:
		Search_ClientForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
			Type = 'M';
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
		/// </summary>
		~Search_ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvMeals;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdMeals;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreMeal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceMeal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ s;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ txtNameDescription;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Id;

	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvMeals = (gcnew System::Windows::Forms::DataGridView());
			this->IdMeals = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreMeal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceMeal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->s = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->txtNameDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Id = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMeals))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvMeals
			// 
			this->dgvMeals->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMeals->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->IdMeals, this->NombreMeal,
					this->PriceMeal, this->s
			});
			this->dgvMeals->Location = System::Drawing::Point(24, 173);
			this->dgvMeals->Name = L"dgvMeals";
			this->dgvMeals->RowHeadersWidth = 51;
			this->dgvMeals->RowTemplate->Height = 24;
			this->dgvMeals->Size = System::Drawing::Size(632, 154);
			this->dgvMeals->TabIndex = 20;
			this->dgvMeals->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Search_ClientForm::dgvMeals_CellClick);
			// 
			// IdMeals
			// 
			this->IdMeals->HeaderText = L"Id";
			this->IdMeals->MinimumWidth = 6;
			this->IdMeals->Name = L"IdMeals";
			this->IdMeals->Width = 50;
			// 
			// NombreMeal
			// 
			this->NombreMeal->HeaderText = L"Nombre";
			this->NombreMeal->MinimumWidth = 6;
			this->NombreMeal->Name = L"NombreMeal";
			this->NombreMeal->Width = 200;
			// 
			// PriceMeal
			// 
			this->PriceMeal->HeaderText = L"Apellido";
			this->PriceMeal->MinimumWidth = 6;
			this->PriceMeal->Name = L"PriceMeal";
			this->PriceMeal->Width = 125;
			// 
			// s
			// 
			this->s->HeaderText = L"DNI";
			this->s->MinimumWidth = 6;
			this->s->Name = L"s";
			this->s->Width = 125;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(364, 112);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(110, 32);
			this->btnCancel->TabIndex = 19;
			this->btnCancel->Text = L"CANCELAR";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Search_ClientForm::btnCancel_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(124, 112);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(112, 32);
			this->btnSearch->TabIndex = 18;
			this->btnSearch->Text = L"BUSCAR";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &Search_ClientForm::btnSearch_Click);
			// 
			// txtNameDescription
			// 
			this->txtNameDescription->Location = System::Drawing::Point(199, 70);
			this->txtNameDescription->Name = L"txtNameDescription";
			this->txtNameDescription->Size = System::Drawing::Size(367, 22);
			this->txtNameDescription->TabIndex = 17;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(199, 38);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(104, 22);
			this->txtId->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nombre/Descripci?n";
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(42, 44);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(18, 16);
			this->Id->TabIndex = 14;
			this->Id->Text = L"Id";
			// 
			// Search_ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(702, 375);
			this->ControlBox = false;
			this->Controls->Add(this->dgvMeals);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtNameDescription);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Id);
			this->Name = L"Search_ClientForm";
			this->Text = L"Search_ClientForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMeals))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtId->Text->Trim() != "") {
			//B?squeda de producto por el c?digo ingresado por el usuario
			Client_Info^ p = Controller::QueryClient_InfotById(Convert::ToInt32(txtId->Text->Trim()));
			//Se borran los datos del grid.
			dgvMeals->Rows->Clear();
			dgvMeals->Rows->Add(gcnew array<String^> {
				"" + p->Id,
					p->Name,
					p->LastName,
					p->DocNumber
			});
		}
		else {
			//B?squeda de productos por el nombre o descripci?n ingresado por el usuario
			List<Client_Info^>^ client_InfoList = Controller::QueryClient_InfoByNameOrLastName(txtNameDescription->Text->Trim());
			//Se borran los datos del grid.
			dgvMeals->Rows->Clear();
			for (int i = 0; i < client_InfoList->Count; i++) {
				dgvMeals->Rows->Add(gcnew array<String^> {
					"" + client_InfoList[i]->Id,
						client_InfoList[i]->Name,
						client_InfoList[i]->LastName,
						client_InfoList[i]->DocNumber
				});
			}
		}
	}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void dgvMeals_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
