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
			//TODO: agregar c?digo de constructor aqu?
			//
			refForm = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ s;




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
			this->s = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMeals))->BeginInit();
			this->SuspendLayout();
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(14, 16);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(23, 20);
			this->Id->TabIndex = 0;
			this->Id->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre/Descripci?n";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(190, 9);
			this->txtId->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(116, 26);
			this->txtId->TabIndex = 2;
			// 
			// txtNameDescription
			// 
			this->txtNameDescription->Location = System::Drawing::Point(190, 49);
			this->txtNameDescription->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtNameDescription->Name = L"txtNameDescription";
			this->txtNameDescription->Size = System::Drawing::Size(412, 26);
			this->txtNameDescription->TabIndex = 3;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(106, 101);
			this->btnSearch->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(126, 40);
			this->btnSearch->TabIndex = 4;
			this->btnSearch->Text = L"BUSCAR";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MealsSearchForm::btnSearch_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(376, 101);
			this->btnCancel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(124, 40);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"CANCELAR";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MealsSearchForm::btnCancel_Click);
			// 
			// dgvMeals
			// 
			this->dgvMeals->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMeals->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->IdMeals, this->NombreMeal,
					this->PriceMeal, this->s
			});
			this->dgvMeals->Location = System::Drawing::Point(38, 166);
			this->dgvMeals->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dgvMeals->Name = L"dgvMeals";
			this->dgvMeals->RowHeadersWidth = 51;
			this->dgvMeals->RowTemplate->Height = 24;
			this->dgvMeals->Size = System::Drawing::Size(565, 192);
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
			// s
			// 
			this->s->HeaderText = L"Column1";
			this->s->MinimumWidth = 6;
			this->s->Name = L"s";
			this->s->Width = 125;
			// 
			// MealsSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(678, 398);
			this->Controls->Add(this->dgvMeals);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtNameDescription);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Id);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MealsSearchForm";
			this->Text = L"B?squeda de Platos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMeals))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtId->Text->Trim() != "") {
			//B?squeda de producto por el c?digo ingresado por el usuario
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
			//B?squeda de productos por el nombre o descripci?n ingresado por el usuario
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

private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
