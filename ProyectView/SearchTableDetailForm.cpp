#include "pch.h"
#include "SearchTableDetailForm.h"
#include "SaleForm.h";

System::Void ProyectView::SearchTableDetailForm::dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ Client_InfoId = dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		TableDetail^ p = Controller::QueryTableDetailtById(Int32::Parse(Client_InfoId));
		if (Type == 'S') {
			//¿Cómo enviamos al formulario de la venta los datos del cliente?
			//Rpta. Mediante una referencia al formulario de la venta (SaleForm).
			((SaleForm^)saleForm)->SetTableDetail(p);
			this->Close();
		}
		
	}
	this->Close();
}
