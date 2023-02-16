#include "pch.h"
#include "Search_Client_InfoForm.h"
#include "SaleForm.h";




System::Void ProyectView::Search_Client_InfoForm::dgvMeals_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ Client_InfoId = dgvMeals->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		Client_Info^ p = Controller::QueryClient_InfotById(Int32::Parse(Client_InfoId));
		if (Type == 'S') {
			//¿Cómo enviamos al formulario de la venta los datos del cliente?
			//Rpta. Mediante una referencia al formulario de la venta (SaleForm).
			((SaleForm^)saleForm)->SetCustomer(p);
			this->Close();
		}
	}
	this->Close();
}
