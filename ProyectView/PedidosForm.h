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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado;
	private: System::Windows::Forms::Button^ btnReady;
	private: System::Windows::Forms::Button^ button1;

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
			this->dataGridPedidos = (gcnew System::Windows::Forms::DataGridView());
			this->IdSaleDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuantitySaleDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MealsSaleDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnReady = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridPedidos))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridPedidos
			// 
			this->dataGridPedidos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridPedidos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->IdSaleDetail,
					this->QuantitySaleDetail, this->MealsSaleDetail, this->Estado
			});
			this->dataGridPedidos->Location = System::Drawing::Point(12, 90);
			this->dataGridPedidos->Name = L"dataGridPedidos";
			this->dataGridPedidos->RowHeadersWidth = 51;
			this->dataGridPedidos->RowTemplate->Height = 24;
			this->dataGridPedidos->Size = System::Drawing::Size(689, 543);
			this->dataGridPedidos->TabIndex = 0;
			this->dataGridPedidos->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PedidosForm::dataGridPedidos_CellClick);
			this->dataGridPedidos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PedidosForm::dataGridPedidos_CellContentClick);
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
			// btnReady
			// 
			this->btnReady->Location = System::Drawing::Point(840, 243);
			this->btnReady->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnReady->Name = L"btnReady";
			this->btnReady->Size = System::Drawing::Size(154, 34);
			this->btnReady->TabIndex = 2;
			this->btnReady->Text = L"Listo";
			this->btnReady->UseVisualStyleBackColor = true;
			this->btnReady->Click += gcnew System::EventHandler(this, &PedidosForm::btnReady_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(289, 33);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Listo";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// PedidosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1433, 708);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnReady);
			this->Controls->Add(this->dataGridPedidos);
			this->Name = L"PedidosForm";
			this->Text = L"Lista de pedidos";
			this->Load += gcnew System::EventHandler(this, &PedidosForm::PedidosForm_Load);
			this->Shown += gcnew System::EventHandler(this, &PedidosForm::PedidosForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridPedidos))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	/*
	MessageBox::Show("¿Seguro que quiere Actualizar?");
	MessageBoxButtons botones = MessageBoxButtons::OKCancel;
	
	if ( botones == DialogResult.OK) {

	}*/


	//Búsqueda de productos por el nombre o descripción ingresado por el usuario
	List<SaleDetail^>^ saledetaillist = Controller::QueryAllSaleDetail();
	List<SaleDetail^>^ saledetaillis=Controller::ChangeQueryAllSaleDetail();
	//Se borran los datos del grid.
	//dataGridPedidos->Rows->Clear();
	for (int i = 0; i < saledetaillist->Count; i++) {
		dataGridPedidos->Rows->Add(gcnew array<String^> {
			"" + saledetaillist[i]->Id,
				Convert::ToString(saledetaillist[i]->Quantity),
				saledetaillist[i]->Meals->Name,
				saledetaillist[i]->Estado
		});
	}
}
private: System::Void btnReady_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int selectedRowIndex = dataGridPedidos->SelectedCells[0]->RowIndex;
		int SaleDetailId = Convert::ToInt32(dataGridPedidos->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		
		if (MessageBox::Show(
			"Ya está listo este pedido?",
			"Confirmacion", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			List<SaleDetail^>^ saledetaillist = Controller::QueryAllSaleDetail();
			for (int i = 0; i < saledetaillist->Count; i++) {
				if (saledetaillist[i]->Id == SaleDetailId) {
					saledetaillist[i]->Estado->Equals("preparado");
				}
				
				}
			}
			
		}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		btnReady->Enabled = false;
		
	}

}
private: System::Void dataGridPedidos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}

private: System::Void PedidosForm_Shown(System::Object^ sender, System::EventArgs^ e) {
	btnReady->Enabled = false;
}
private: System::Void dataGridPedidos_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	btnReady->Enabled = true;
	int selectedRowIndex = dataGridPedidos->SelectedCells[0]->RowIndex;
	int SaleDetailId = Convert::ToInt32(dataGridPedidos->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	List<SaleDetail^>^ SaleDetailList = Controller::QuerySingleSaleDetail(SaleDetailId);
}
private: System::Void PedidosForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
