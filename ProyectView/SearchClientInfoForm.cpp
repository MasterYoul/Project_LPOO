#include "pch.h"
#include "SearchClientInfoForm.h"
#include "SearchModifySuggestionForm.h"

System::Void ProyectView::SearchClientInfoForm::dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ Client_InfoId = dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		Client_Info^ p = Controller::QueryClient_InfotById(Int32::Parse(Client_InfoId));
		if (Type == 'S') {
			//¿Cómo enviamos al formulario de la venta los datos del cliente?
			//Rpta. Mediante una referencia al formulario de la venta (SaleForm).
			((SearchModifySuggestionForm^)sugesstionForm)->SetCustom(p);
			this->Close();
		}
	}
	this->Close();
}
