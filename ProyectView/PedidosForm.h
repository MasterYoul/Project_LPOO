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
	using namespace Threading;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de PedidosForm
	/// </summary>
	public ref class PedidosForm : public System::Windows::Forms::Form
	{
	public:
		PedidosForm(void)
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
		~PedidosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPedidos;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridPedidos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdSaleDetail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ QuantitySaleDetail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MealsSaleDetail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ checkBoxColumn;

	protected:







	protected:













	private: System::ComponentModel::IContainer^ components;















	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnPedidos = (gcnew System::Windows::Forms::Button());
			this->dataGridPedidos = (gcnew System::Windows::Forms::DataGridView());
			this->IdSaleDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuantitySaleDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MealsSaleDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->checkBoxColumn = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridPedidos))->BeginInit();
			this->SuspendLayout();
			// 
			// btnPedidos
			// 
			this->btnPedidos->Location = System::Drawing::Point(351, 22);
			this->btnPedidos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPedidos->Name = L"btnPedidos";
			this->btnPedidos->Size = System::Drawing::Size(154, 34);
			this->btnPedidos->TabIndex = 4;
			this->btnPedidos->Text = L"Pedidos";
			this->btnPedidos->UseVisualStyleBackColor = true;
			this->btnPedidos->Click += gcnew System::EventHandler(this, &PedidosForm::btnPedidos_Click);
			// 
			// dataGridPedidos
			// 
			this->dataGridPedidos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridPedidos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->IdSaleDetail,
					this->QuantitySaleDetail, this->MealsSaleDetail, this->Estado, this->checkBoxColumn
			});
			this->dataGridPedidos->Location = System::Drawing::Point(40, 81);
			this->dataGridPedidos->Name = L"dataGridPedidos";
			this->dataGridPedidos->RowHeadersWidth = 51;
			this->dataGridPedidos->RowTemplate->Height = 24;
			this->dataGridPedidos->Size = System::Drawing::Size(906, 543);
			this->dataGridPedidos->TabIndex = 3;
			this->dataGridPedidos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PedidosForm::dataGridPedidos_CellContentClick);
			this->dataGridPedidos->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PedidosForm::dataGridPedidos_CellValueChanged);
			// 
			// IdSaleDetail
			// 
			this->IdSaleDetail->HeaderText = L"Id";
			this->IdSaleDetail->MinimumWidth = 6;
			this->IdSaleDetail->Name = L"IdSaleDetail";
			this->IdSaleDetail->Width = 125;
			// 
			// QuantitySaleDetail
			// 
			this->QuantitySaleDetail->HeaderText = L"Cantidad";
			this->QuantitySaleDetail->MinimumWidth = 6;
			this->QuantitySaleDetail->Name = L"QuantitySaleDetail";
			this->QuantitySaleDetail->Width = 125;
			// 
			// MealsSaleDetail
			// 
			this->MealsSaleDetail->HeaderText = L"Plato";
			this->MealsSaleDetail->MinimumWidth = 6;
			this->MealsSaleDetail->Name = L"MealsSaleDetail";
			this->MealsSaleDetail->Width = 125;
			// 
			// Estado
			// 
			this->Estado->HeaderText = L"Estado";
			this->Estado->MinimumWidth = 6;
			this->Estado->Name = L"Estado";
			this->Estado->Width = 125;
			// 
			// checkBoxColumn
			// 
			this->checkBoxColumn->HeaderText = L"CheckBox";
			this->checkBoxColumn->MinimumWidth = 6;
			this->checkBoxColumn->Name = L"checkBoxColumn";
			this->checkBoxColumn->Width = 125;
			// 
			// PedidosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1167, 708);
			this->Controls->Add(this->btnPedidos);
			this->Controls->Add(this->dataGridPedidos);
			this->Name = L"PedidosForm";
			this->Text = L"Lista de pedidos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridPedidos))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	

	private: System::Void btnPedidos_Click(System::Object^ sender, System::EventArgs^ e) {
		RefreshdatadataGridMeals();
	}
		   Void RefreshdatadataGridMeals() {
			   List <SaleDetail^>^ SaleDetailList = Controller::QueryAllSaleDetailsNp();
			   dataGridPedidos->Rows->Clear();
			   if (SaleDetailList != nullptr)
				   for (int i = 0; i < SaleDetailList->Count; i++) {
					   dataGridPedidos->Rows->Add(gcnew array<String^> {
						   "" + SaleDetailList[i]->Id,
							   "" + SaleDetailList[i]->Quantity,
							   SaleDetailList[i]->Meals->Name,
							   SaleDetailList[i]->Estado,
					   });
				   }
		   }
private: System::Void dataGridPedidos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dataGridPedidos->Columns[e->ColumnIndex]->Name == "checkBoxColumn" && e->RowIndex >= 0) {
		DataGridViewCheckBoxCell^ cell = dynamic_cast<DataGridViewCheckBoxCell^>(dataGridPedidos->Rows[e->RowIndex]->Cells[e->ColumnIndex]);
		bool isChecked = Convert::ToBoolean(cell->Value);
		// hacer algo con isChecked
		if (isChecked) {
			Controller::SaledetailChangeEstado(Int32::Parse(dataGridPedidos->Rows[e->RowIndex]->Cells[0]->Value->ToString()));
		}
	}
}
private: System::Void dataGridPedidos_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dataGridPedidos->Columns[e->ColumnIndex]->Name == "checkBoxColumn") {
		DataGridViewCheckBoxCell^ checkBoxCell = dynamic_cast<DataGridViewCheckBoxCell^>(dataGridPedidos->Rows[e->RowIndex]->Cells[e->ColumnIndex]);
		if (checkBoxCell->Value != nullptr && (bool)checkBoxCell->Value) {
			Controller::SaledetailChangeEstado(Int32::Parse(dataGridPedidos->Rows[e->RowIndex]->Cells[0]->Value->ToString()));
		}
		else {
			Console::WriteLine("CheckBox is unchecked");
		}
	}
}
};
}
