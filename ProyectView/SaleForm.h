#pragma once
#include "MealsSearchForm.h"
#include "Client_InfoForm.h"
#include "Search_Client_InfoForm.h"
#include "UserForm.h"
#include "TableForm.h"
#include "SearchTableDetailForm.h"
#include "Resource.h"



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
	private:
		Client_Info^ client_Info;
		TableDetail^ tabledetail;
		User^ user;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ SEARCH_CLIENT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MealsId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MealsName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceMeals;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantity2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SubTotal;
	private: System::Windows::Forms::Button^ button3;









		   
	public:
		SaleForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
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

	private: System::Windows::Forms::DateTimePicker^ dateTimeSale;
	private: System::Windows::Forms::TextBox^ textClient;
	private: System::Windows::Forms::Label^ lblClientData;
	private: System::Windows::Forms::Button^ btnAddMeal;
	private: System::Windows::Forms::Button^ btnDeleteMeal;


	private: System::Windows::Forms::Button^ btnSearchCustomer;
	private: System::Windows::Forms::Button^ btnAddCustomer;
	private: System::Windows::Forms::DataGridView^ dgvDetails;





	private: System::Windows::Forms::Button^ btnRegisterSale;
	private: System::Windows::Forms::TextBox^ txtSubtotal;
	private: System::Windows::Forms::TextBox^ txtTax;
	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimeSale = (gcnew System::Windows::Forms::DateTimePicker());
			this->textClient = (gcnew System::Windows::Forms::TextBox());
			this->lblClientData = (gcnew System::Windows::Forms::Label());
			this->btnAddMeal = (gcnew System::Windows::Forms::Button());
			this->btnDeleteMeal = (gcnew System::Windows::Forms::Button());
			this->btnSearchCustomer = (gcnew System::Windows::Forms::Button());
			this->btnAddCustomer = (gcnew System::Windows::Forms::Button());
			this->dgvDetails = (gcnew System::Windows::Forms::DataGridView());
			this->MealsId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MealsName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceMeals = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantity2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnRegisterSale = (gcnew System::Windows::Forms::Button());
			this->txtSubtotal = (gcnew System::Windows::Forms::TextBox());
			this->txtTax = (gcnew System::Windows::Forms::TextBox());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SEARCH_CLIENT = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fecha";
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
			this->textClient->Location = System::Drawing::Point(154, 70);
			this->textClient->Name = L"textClient";
			this->textClient->Size = System::Drawing::Size(317, 22);
			this->textClient->TabIndex = 3;
			// 
			// lblClientData
			// 
			this->lblClientData->Location = System::Drawing::Point(151, 105);
			this->lblClientData->Name = L"lblClientData";
			this->lblClientData->Size = System::Drawing::Size(317, 16);
			this->lblClientData->TabIndex = 16;
			this->lblClientData->Text = L"Sin cliente";
			this->lblClientData->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnAddMeal
			// 
			this->btnAddMeal->Location = System::Drawing::Point(232, 271);
			this->btnAddMeal->Name = L"btnAddMeal";
			this->btnAddMeal->Size = System::Drawing::Size(239, 40);
			this->btnAddMeal->TabIndex = 17;
			this->btnAddMeal->Text = L"Agregar Plato";
			this->btnAddMeal->UseVisualStyleBackColor = true;
			this->btnAddMeal->Click += gcnew System::EventHandler(this, &SaleForm::btnAddMeal_Click);
			// 
			// btnDeleteMeal
			// 
			this->btnDeleteMeal->Location = System::Drawing::Point(528, 271);
			this->btnDeleteMeal->Name = L"btnDeleteMeal";
			this->btnDeleteMeal->Size = System::Drawing::Size(230, 40);
			this->btnDeleteMeal->TabIndex = 18;
			this->btnDeleteMeal->Text = L"Eliminar Plato";
			this->btnDeleteMeal->UseVisualStyleBackColor = true;
			this->btnDeleteMeal->Click += gcnew System::EventHandler(this, &SaleForm::btnDeleteMeal_Click);
			// 
			// btnSearchCustomer
			// 
			this->btnSearchCustomer->Location = System::Drawing::Point(534, 66);
			this->btnSearchCustomer->Name = L"btnSearchCustomer";
			this->btnSearchCustomer->Size = System::Drawing::Size(150, 30);
			this->btnSearchCustomer->TabIndex = 19;
			this->btnSearchCustomer->Text = L"BUSCAR CLIENTE";
			this->btnSearchCustomer->UseVisualStyleBackColor = true;
			this->btnSearchCustomer->Click += gcnew System::EventHandler(this, &SaleForm::btnSearchCustomer_Click);
			// 
			// btnAddCustomer
			// 
			this->btnAddCustomer->Location = System::Drawing::Point(863, 64);
			this->btnAddCustomer->Name = L"btnAddCustomer";
			this->btnAddCustomer->Size = System::Drawing::Size(135, 29);
			this->btnAddCustomer->TabIndex = 20;
			this->btnAddCustomer->Text = L"+ Cliente";
			this->btnAddCustomer->UseVisualStyleBackColor = true;
			this->btnAddCustomer->Click += gcnew System::EventHandler(this, &SaleForm::btnAddCustomer_Click);
			// 
			// dgvDetails
			// 
			this->dgvDetails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDetails->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->MealsId, this->MealsName,
					this->PriceMeals, this->quantity2, this->SubTotal
			});
			this->dgvDetails->Location = System::Drawing::Point(42, 329);
			this->dgvDetails->Name = L"dgvDetails";
			this->dgvDetails->RowHeadersWidth = 51;
			this->dgvDetails->RowTemplate->Height = 24;
			this->dgvDetails->Size = System::Drawing::Size(974, 267);
			this->dgvDetails->TabIndex = 21;
			this->dgvDetails->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SaleForm::dgvDetails_CellValueChanged);
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
			this->MealsName->Width = 300;
			// 
			// PriceMeals
			// 
			this->PriceMeals->HeaderText = L"Precio";
			this->PriceMeals->MinimumWidth = 6;
			this->PriceMeals->Name = L"PriceMeals";
			this->PriceMeals->Width = 125;
			// 
			// quantity2
			// 
			this->quantity2->HeaderText = L"Cantidad";
			this->quantity2->MinimumWidth = 6;
			this->quantity2->Name = L"quantity2";
			this->quantity2->Width = 125;
			// 
			// SubTotal
			// 
			this->SubTotal->HeaderText = L"Sub Total";
			this->SubTotal->MinimumWidth = 6;
			this->SubTotal->Name = L"SubTotal";
			this->SubTotal->Width = 125;
			// 
			// btnRegisterSale
			// 
			this->btnRegisterSale->Location = System::Drawing::Point(42, 648);
			this->btnRegisterSale->Name = L"btnRegisterSale";
			this->btnRegisterSale->Size = System::Drawing::Size(212, 47);
			this->btnRegisterSale->TabIndex = 22;
			this->btnRegisterSale->Text = L"Registrar Venta";
			this->btnRegisterSale->UseVisualStyleBackColor = true;
			this->btnRegisterSale->Click += gcnew System::EventHandler(this, &SaleForm::btnRegisterSale_Click);
			// 
			// txtSubtotal
			// 
			this->txtSubtotal->Location = System::Drawing::Point(793, 617);
			this->txtSubtotal->Name = L"txtSubtotal";
			this->txtSubtotal->Size = System::Drawing::Size(146, 22);
			this->txtSubtotal->TabIndex = 23;
			// 
			// txtTax
			// 
			this->txtTax->Location = System::Drawing::Point(793, 660);
			this->txtTax->Name = L"txtTax";
			this->txtTax->Size = System::Drawing::Size(146, 22);
			this->txtTax->TabIndex = 24;
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(793, 733);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(146, 22);
			this->txtTotal->TabIndex = 25;
			this->txtTotal->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(694, 623);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 16);
			this->label4->TabIndex = 26;
			this->label4->Text = L"SubTotal:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(721, 666);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 16);
			this->label5->TabIndex = 27;
			this->label5->Text = L"I.G.V.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(718, 739);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 16);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Total:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(684, 702);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 16);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Descuento:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(793, 696);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(146, 22);
			this->textBox1->TabIndex = 30;
			this->textBox1->Text = L"0";
			this->textBox1->Click += gcnew System::EventHandler(this, &SaleForm::textBox1_Click);
			this->textBox1->MouseCaptureChanged += gcnew System::EventHandler(this, &SaleForm::textBox1_MouseCaptureChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(21, 136);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 16);
			this->label10->TabIndex = 48;
			this->label10->Text = L"Mesa Asignada";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 200);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 16);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Mesero asignado";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(151, 234);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(317, 16);
			this->label7->TabIndex = 46;
			this->label7->Text = L"Sin mesero";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(534, 192);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 32);
			this->button2->TabIndex = 45;
			this->button2->Text = L"BUSCAR MESERO";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SaleForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(151, 200);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(317, 22);
			this->textBox3->TabIndex = 44;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(534, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 29);
			this->button1->TabIndex = 43;
			this->button1->Text = L"BUSCAR MESA";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SaleForm::button1_Click_1);
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(151, 170);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(317, 16);
			this->label8->TabIndex = 42;
			this->label8->Text = L"Sin mesa";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(151, 136);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(317, 22);
			this->textBox2->TabIndex = 41;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(68, 70);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 16);
			this->label11->TabIndex = 53;
			this->label11->Text = L"Cliente";
			// 
			// SEARCH_CLIENT
			// 
			this->SEARCH_CLIENT->Location = System::Drawing::Point(700, 64);
			this->SEARCH_CLIENT->Name = L"SEARCH_CLIENT";
			this->SEARCH_CLIENT->Size = System::Drawing::Size(140, 29);
			this->SEARCH_CLIENT->TabIndex = 54;
			this->SEARCH_CLIENT->Text = L"BUSCAR CLIENTE";
			this->SEARCH_CLIENT->UseVisualStyleBackColor = true;
			this->SEARCH_CLIENT->Click += gcnew System::EventHandler(this, &SaleForm::SEARCH_CLIENT_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(700, 136);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 29);
			this->button3->TabIndex = 55;
			this->button3->Text = L"BUSCAR MESA";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SaleForm::button3_Click);
			// 
			// SaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 767);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->SEARCH_CLIENT);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
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
			this->Controls->Add(this->label1);
			this->Name = L"SaleForm";
			this->Text = L"Generador de Ventas";
			this->Load += gcnew System::EventHandler(this, &SaleForm::SaleForm_Load);
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
		for (int i = 0; i < dgvDetails->RowCount - 1; i++) {
			int mealId = Convert::ToInt32(dgvDetails->Rows[i]->Cells[0]->Value->ToString());
			if (p->Id == mealId) {
				int quantity = Convert::ToInt32(dgvDetails->Rows[i]->Cells[3]->Value->ToString());
				quantity++;
				dgvDetails->Rows[i]->Cells[3]->Value = quantity;
				dgvDetails->Rows[i]->Cells[4]->Value = quantity *
					Double::Parse(dgvDetails->Rows[i]->Cells[2]->Value->ToString());
				RefreshTotalAmounts();
				return;
			}
		}
		dgvDetails->Rows->Add(gcnew array<String^> {
			Convert::ToString(p->Id),
				p->Name,
				Convert::ToString(p->Price),
				"1",
				Convert::ToString(p->Price)
				
		});
		RefreshTotalAmounts();

	}
		  Void SetClient_Info(Client_Info^ cust) {
			  this->client_Info = cust;
			  textClient->Text = cust->DocNumber;
			  lblClientData->Text = this->client_Info->DocNumber + " - " +
				  cust->Name + " " +((Client_Info ^ )cust)->LastName;
		  }
private: System::Void btnAddCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
	Client_InfoForm^ client_InfoForm = gcnew Client_InfoForm();
	client_InfoForm->UseType = 'S';
	client_InfoForm->RefSaleForm = this;

	client_InfoForm->ShowDialog();
}
	private: System::Void SaleForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSearchCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		Client_Info^ client_Info = Controller::QueryClient_InfoByDocNumber(textClient->Text);

	if (client_Info != nullptr) {
		
			lblClientData->Text = client_Info->DocNumber + " - " + client_Info->Name +
			" " + client_Info->LastName;
	}
	else {
		MessageBox::Show("Cliente no encontrado!");
	}
	
}
private: System::Void btnDeleteMeal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvDetails->SelectedRows->Count == 1) {
		if (dgvDetails->SelectedRows[0]->Cells[0]->Value->ToString()->Trim() != "")
			dgvDetails->Rows->RemoveAt(dgvDetails->SelectedRows[0]->Index);
		else
			MessageBox::Show("No se puede eliminar una fila vac?a.");
	}
	else
		MessageBox::Show("Para eliminar un producto debe seleccionar toda la fila.");
	RefreshTotalAmounts();

}
private: System::Void btnRegisterSale_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void dgvDetails_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvDetails->Columns[e->ColumnIndex]->Name == "quantity2") {
		dgvDetails->Rows[e->RowIndex]->Cells[4]->Value =

			Int32::Parse(dgvDetails->Rows[e->RowIndex]->Cells[3]->Value->ToString()) *
			Double::Parse(dgvDetails->Rows[e->RowIndex]->Cells[2]->Value->ToString());
		//Int32::Parse(dgvDetails->CurrentCell->Value->ToString())*
		RefreshTotalAmounts();
}
}
		private: Void RefreshTotalAmounts() {
			double total = 0;
			for (int i = 0; i < dgvDetails->RowCount - 1; i++)
				total += Double::Parse(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
			txtSubtotal->Text = "" + (total * (1 - IGV));
			txtTax->Text = "" + (total * IGV);
			txtTotal->Text = "" + (total- Double::Parse(textBox1->Text));
		}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3 == nullptr) {
		MessageBox::Show("Insertar el id de un mesero existente");
	}
	else {
		User^ User = Controller::QueryUsertById(Convert::ToInt32(textBox3->Text));


		if (User != nullptr) {

			label7->Text = User->DocNumber + " - " + User->Name +
				" " + User->LastName;
		}
		else {
			MessageBox::Show("Mesero no encontrado!");
		}

	}
}

	   public:  Void SetCustomer(Client_Info^ cust) {
		   this->client_Info = cust;
		   textClient->Text = cust->DocNumber;
		   lblClientData->Text = cust->DocNumber + " - " +
			   cust->Name + " " + cust->LastName;
	   }
			 public:  Void SetTableDetail(TableDetail^ cust) {
				 this->tabledetail = cust;
				 textBox2->Text = Convert::ToString(cust->Id);
				 label8->Text = cust->Id + " - Piso:" +
					 cust->Floor +
					 "- Capacidad:" + cust->TableCapacity;
			 }
			 

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	TableDetail^ TableDetail = Controller::QueryTableDetailtById(Int32::Parse(textBox2->Text));

	if (TableDetail != nullptr) {

		label8->Text = TableDetail->Id + " - Piso:" + TableDetail->Floor +
			"- Capacidad:" + TableDetail->TableCapacity;
	}
	else {
		MessageBox::Show("Mesa no encontra!");
	}
}

private: System::Void BtnCleanSale_Click(System::Object^ sender, System::EventArgs^ e) {
	TableDetail^ TableDetail = Controller::QueryTableDetailtById(Int32::Parse(textBox2->Text));
	
	dgvDetails->DataSource = "";

	textClient->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	txtSubtotal->Text = "";
	txtTax->Text = "";
	textBox1 ->Text = "";
	txtTotal->Text = "";
}
private: System::Void SEARCH_CLIENT_Click(System::Object^ sender, System::EventArgs^ e) {
	Search_Client_InfoForm^ client_infoform = gcnew Search_Client_InfoForm();
	client_infoform->Type = 'S';
	client_infoform->saleForm = this;

	client_infoform->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchTableDetailForm^ client_infoform = gcnew SearchTableDetailForm();
	client_infoform->Type = 'S';
	client_infoform->saleForm = this;

	client_infoform->ShowDialog();
}
private: System::Void textBox1_MouseCaptureChanged(System::Object^ sender, System::EventArgs^ e) {
	RefreshTotalAmounts();
}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshTotalAmounts();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshTotalAmounts();

}
};
}
