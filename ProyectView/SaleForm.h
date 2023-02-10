#pragma once
#include "Resource.h"
#include "MealsSearchForm.h"

namespace ProyectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProjectModel;
	using namespace ProjectController;

	/// <summary>
	/// Resumen de SaleForm
	/// </summary>
	public ref class SaleForm : public System::Windows::Forms::Form
	{
	public:
		SaleForm(void)
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
		~SaleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimeSale;
	private: System::Windows::Forms::TextBox^ textClient;
	private: System::Windows::Forms::Label^ lblClientData;
	private: System::Windows::Forms::Button^ btnAddMeal;
	private: System::Windows::Forms::Button^ btnDeleteMeal;


	private: System::Windows::Forms::Button^ btnSearchCustomer;
	private: System::Windows::Forms::Button^ btnAddCustomer;
	private: System::Windows::Forms::DataGridView^ dgvDetails;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MealsId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MealsName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceMeals;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SubTotal;
	private: System::Windows::Forms::Button^ btnRegisterSale;
	private: System::Windows::Forms::TextBox^ txtSubtotal;
	private: System::Windows::Forms::TextBox^ txtTax;
	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimeSale = (gcnew System::Windows::Forms::DateTimePicker());
			this->textClient = (gcnew System::Windows::Forms::TextBox());
			this->lblClientData = (gcnew System::Windows::Forms::Label());
			this->btnAddMeal = (gcnew System::Windows::Forms::Button());
			this->btnDeleteMeal = (gcnew System::Windows::Forms::Button());
			this->btnSearchCustomer = (gcnew System::Windows::Forms::Button());
			this->btnAddCustomer = (gcnew System::Windows::Forms::Button());
			this->dgvDetails = (gcnew System::Windows::Forms::DataGridView());
			this->btnRegisterSale = (gcnew System::Windows::Forms::Button());
			this->txtSubtotal = (gcnew System::Windows::Forms::TextBox());
			this->txtTax = (gcnew System::Windows::Forms::TextBox());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->MealsId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MealsName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceMeals = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(90, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fecha";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(89, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cliente";
			// 
			// dateTimeSale
			// 
			this->dateTimeSale->Location = System::Drawing::Point(151, 23);
			this->dateTimeSale->Name = L"dateTimeSale";
			this->dateTimeSale->Size = System::Drawing::Size(331, 22);
			this->dateTimeSale->TabIndex = 2;
			// 
			// textClient
			// 
			this->textClient->Location = System::Drawing::Point(151, 59);
			this->textClient->Name = L"textClient";
			this->textClient->Size = System::Drawing::Size(317, 22);
			this->textClient->TabIndex = 3;
			this->textClient->Text = L"Digite DNI";
			this->textClient->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblClientData
			// 
			this->lblClientData->Location = System::Drawing::Point(148, 98);
			this->lblClientData->Name = L"lblClientData";
			this->lblClientData->Size = System::Drawing::Size(317, 16);
			this->lblClientData->TabIndex = 16;
			this->lblClientData->Text = L"Sin Cliente";
			this->lblClientData->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnAddMeal
			// 
			this->btnAddMeal->Location = System::Drawing::Point(151, 158);
			this->btnAddMeal->Name = L"btnAddMeal";
			this->btnAddMeal->Size = System::Drawing::Size(239, 55);
			this->btnAddMeal->TabIndex = 17;
			this->btnAddMeal->Text = L"Agregar Plato";
			this->btnAddMeal->UseVisualStyleBackColor = true;
			this->btnAddMeal->Click += gcnew System::EventHandler(this, &SaleForm::btnAddMeal_Click);
			// 
			// btnDeleteMeal
			// 
			this->btnDeleteMeal->Location = System::Drawing::Point(478, 158);
			this->btnDeleteMeal->Name = L"btnDeleteMeal";
			this->btnDeleteMeal->Size = System::Drawing::Size(230, 55);
			this->btnDeleteMeal->TabIndex = 18;
			this->btnDeleteMeal->Text = L"Eliminar Plato";
			this->btnDeleteMeal->UseVisualStyleBackColor = true;
			// 
			// btnSearchCustomer
			// 
			this->btnSearchCustomer->Location = System::Drawing::Point(627, 34);
			this->btnSearchCustomer->Name = L"btnSearchCustomer";
			this->btnSearchCustomer->Size = System::Drawing::Size(125, 44);
			this->btnSearchCustomer->TabIndex = 19;
			this->btnSearchCustomer->Text = L"BUSCAR";
			this->btnSearchCustomer->UseVisualStyleBackColor = true;
			// 
			// btnAddCustomer
			// 
			this->btnAddCustomer->Location = System::Drawing::Point(818, 34);
			this->btnAddCustomer->Name = L"btnAddCustomer";
			this->btnAddCustomer->Size = System::Drawing::Size(114, 44);
			this->btnAddCustomer->TabIndex = 20;
			this->btnAddCustomer->Text = L"+ Cliente";
			this->btnAddCustomer->UseVisualStyleBackColor = true;
			// 
			// dgvDetails
			// 
			this->dgvDetails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDetails->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->MealsId, this->MealsName,
					this->PriceMeals, this->Quantity, this->SubTotal
			});
			this->dgvDetails->Location = System::Drawing::Point(35, 246);
			this->dgvDetails->Name = L"dgvDetails";
			this->dgvDetails->RowHeadersWidth = 51;
			this->dgvDetails->RowTemplate->Height = 24;
			this->dgvDetails->Size = System::Drawing::Size(897, 267);
			this->dgvDetails->TabIndex = 21;
			// 
			// btnRegisterSale
			// 
			this->btnRegisterSale->Location = System::Drawing::Point(151, 588);
			this->btnRegisterSale->Name = L"btnRegisterSale";
			this->btnRegisterSale->Size = System::Drawing::Size(290, 35);
			this->btnRegisterSale->TabIndex = 22;
			this->btnRegisterSale->Text = L"Registrar Venta";
			this->btnRegisterSale->UseVisualStyleBackColor = true;
			// 
			// txtSubtotal
			// 
			this->txtSubtotal->Location = System::Drawing::Point(786, 534);
			this->txtSubtotal->Name = L"txtSubtotal";
			this->txtSubtotal->Size = System::Drawing::Size(146, 22);
			this->txtSubtotal->TabIndex = 23;
			// 
			// txtTax
			// 
			this->txtTax->Location = System::Drawing::Point(786, 577);
			this->txtTax->Name = L"txtTax";
			this->txtTax->Size = System::Drawing::Size(146, 22);
			this->txtTax->TabIndex = 24;
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(786, 619);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(146, 22);
			this->txtTotal->TabIndex = 25;
			this->txtTotal->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(687, 540);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 16);
			this->label4->TabIndex = 26;
			this->label4->Text = L"SubTotal:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(714, 583);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 16);
			this->label5->TabIndex = 27;
			this->label5->Text = L"I.G.V.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(711, 625);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 16);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Total:";
			// 
			// MealsId
			// 
			this->MealsId->HeaderText = L"Id";
			this->MealsId->MinimumWidth = 6;
			this->MealsId->Name = L"MealsId";
			this->MealsId->Width = 50;
			// 
			// MealsName
			// 
			this->MealsName->HeaderText = L"Nombre";
			this->MealsName->MinimumWidth = 6;
			this->MealsName->Name = L"MealsName";
			this->MealsName->Width = 400;
			// 
			// PriceMeals
			// 
			this->PriceMeals->HeaderText = L"Precio";
			this->PriceMeals->MinimumWidth = 6;
			this->PriceMeals->Name = L"PriceMeals";
			this->PriceMeals->Width = 125;
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Cantidad";
			this->Quantity->MinimumWidth = 6;
			this->Quantity->Name = L"Quantity";
			this->Quantity->Width = 125;
			// 
			// SubTotal
			// 
			this->SubTotal->HeaderText = L"Sub Total";
			this->SubTotal->MinimumWidth = 6;
			this->SubTotal->Name = L"SubTotal";
			this->SubTotal->Width = 125;
			// 
			// SaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(979, 690);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->txtTax);
			this->Controls->Add(this->txtSubtotal);
			this->Controls->Add(this->btnRegisterSale);
			this->Controls->Add(this->dgvDetails);
			this->Controls->Add(this->btnAddCustomer);
			this->Controls->Add(this->btnSearchCustomer);
			this->Controls->Add(this->btnDeleteMeal);
			this->Controls->Add(this->btnAddMeal);
			this->Controls->Add(this->lblClientData);
			this->Controls->Add(this->textClient);
			this->Controls->Add(this->dateTimeSale);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"SaleForm";
			this->Text = L"SaleForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddMeal_Click(System::Object^ sender, System::EventArgs^ e) {
		MealsSearchForm^ mealsForm = gcnew MealsSearchForm(this);
		mealsForm->ShowDialog();
	}
	
	public: Void AddMealToSaleDetails(Meals^ p) {
		dgvDetails->Rows->Add(gcnew array<String^> {
			Convert::ToString(p->Id),
				p->Name,
				Convert::ToString(p->Price)
		});

	}
		
		


};
}
