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
	private: System::Windows::Forms::DataGridView^ dataGridPedidos;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdSaleDetail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ QuantitySaleDetail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MealsSaleDetail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EstadoSaleDetail;
	private: System::Windows::Forms::Button^ button1;



	protected:

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
			this->dataGridPedidos = (gcnew System::Windows::Forms::DataGridView());
			this->IdSaleDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuantitySaleDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MealsSaleDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EstadoSaleDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridPedidos))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridPedidos
			// 
			this->dataGridPedidos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridPedidos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->IdSaleDetail,
					this->QuantitySaleDetail, this->MealsSaleDetail, this->EstadoSaleDetail
			});
			this->dataGridPedidos->Location = System::Drawing::Point(55, 170);
			this->dataGridPedidos->Name = L"dataGridPedidos";
			this->dataGridPedidos->RowHeadersWidth = 51;
			this->dataGridPedidos->RowTemplate->Height = 24;
			this->dataGridPedidos->Size = System::Drawing::Size(928, 473);
			this->dataGridPedidos->TabIndex = 0;
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
			this->QuantitySaleDetail->HeaderText = L"Quantity";
			this->QuantitySaleDetail->MinimumWidth = 6;
			this->QuantitySaleDetail->Name = L"QuantitySaleDetail";
			this->QuantitySaleDetail->Width = 125;
			// 
			// MealsSaleDetail
			// 
			this->MealsSaleDetail->HeaderText = L"Meals";
			this->MealsSaleDetail->MinimumWidth = 6;
			this->MealsSaleDetail->Name = L"MealsSaleDetail";
			this->MealsSaleDetail->Width = 125;
			// 
			// EstadoSaleDetail
			// 
			this->EstadoSaleDetail->HeaderText = L"Estado";
			this->EstadoSaleDetail->MinimumWidth = 6;
			this->EstadoSaleDetail->Name = L"EstadoSaleDetail";
			this->EstadoSaleDetail->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(395, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(226, 60);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Actualizar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PedidosForm::button1_Click);
			// 
			// PedidosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1071, 708);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridPedidos);
			this->Name = L"PedidosForm";
			this->Text = L"Lista de pedidos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridPedidos))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Búsqueda de productos por el nombre o descripción ingresado por el usuario
	List<SaleDetail^>^ saledetaillist = Controller::QueryAllSaleDetail();
	//Se borran los datos del grid.
	dataGridPedidos->Rows->Clear();
	for (int i = 0; i < saledetaillist->Count; i++) {
		dataGridPedidos->Rows->Add(gcnew array<String^> {
			"" + saledetaillist[i]->Id,
				Convert::ToString(saledetaillist[i]->Quantity),
				saledetaillist[i]->Meals->Name,
				saledetaillist[i]->Estado
		});
	}
}
};
}
