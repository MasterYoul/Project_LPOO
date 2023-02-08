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
	/// Resumen de MealsSearchForm
	/// </summary>
	public ref class MealsSearchForm : public System::Windows::Forms::Form
	{
		Form^ refForm;// Variable de instancia
	public:
		MealsSearchForm(Form^form )
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refForm = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MealsSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Id;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtNameDescription;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::DataGridView^ dgvMeals;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdMeals;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreMeal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceMeal;

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
			this->Id = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtNameDescription = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->dgvMeals = (gcnew System::Windows::Forms::DataGridView());
			this->IdMeals = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreMeal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceMeal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMeals))->BeginInit();
			this->SuspendLayout();
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(12, 13);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(18, 16);
			this->Id->TabIndex = 0;
			this->Id->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre/Descripción";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(169, 7);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(104, 22);
			this->txtId->TabIndex = 2;
			// 
			// txtNameDescription
			// 
			this->txtNameDescription->Location = System::Drawing::Point(169, 39);
			this->txtNameDescription->Name = L"txtNameDescription";
			this->txtNameDescription->Size = System::Drawing::Size(367, 22);
			this->txtNameDescription->TabIndex = 3;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(94, 81);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(112, 32);
			this->btnSearch->TabIndex = 4;
			this->btnSearch->Text = L"BUSCAR";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MealsSearchForm::btnSearch_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(334, 81);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(110, 32);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"CANCELAR";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// dgvMeals
			// 
			this->dgvMeals->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMeals->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->IdMeals, this->NombreMeal,
					this->PriceMeal
			});
			this->dgvMeals->Location = System::Drawing::Point(34, 133);
			this->dgvMeals->Name = L"dgvMeals";
			this->dgvMeals->RowHeadersWidth = 51;
			this->dgvMeals->RowTemplate->Height = 24;
			this->dgvMeals->Size = System::Drawing::Size(502, 154);
			this->dgvMeals->TabIndex = 6;
			this->dgvMeals->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MealsSearchForm::dgvMeals_CellClick);
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
			this->PriceMeal->HeaderText = L"Precio";
			this->PriceMeal->MinimumWidth = 6;
			this->PriceMeal->Name = L"PriceMeal";
			this->PriceMeal->Width = 125;
			// 
			// MealsSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 318);
			this->Controls->Add(this->dgvMeals);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtNameDescription);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Id);
			this->Name = L"MealsSearchForm";
			this->Text = L"MealsSearchForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMeals))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtId->Text->Trim() != "") {
			//Búsqueda de producto por el código ingresado por el usuario
			Meals^ p = Controller::QueryMealstById(Convert::ToInt32(txtId->Text->Trim()));
			//Se borran los datos del grid.
			dgvMeals->Rows->Clear();
			dgvMeals->Rows->Add(gcnew array<String^> {
				"" + p->Id,
					p->Name,
					Convert::ToString(p->Price)
			});
		}
		else {
			//Búsqueda de productos por el nombre o descripción ingresado por el usuario
			List<Meals^>^ mealsList = Controller::QueryMealsByNameOrDescription(txtNameDescription->Text->Trim());
			//Se borran los datos del grid.
			dgvMeals->Rows->Clear();
			for (int i = 0; i < mealsList->Count; i++) {
				dgvMeals->Rows->Add(gcnew array<String^> {
					"" + mealsList[i]->Id,
						mealsList[i]->Name,
						Convert::ToString(mealsList[i]->Price),
				});
			}
		}

	}
private: System::Void dgvMeals_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
