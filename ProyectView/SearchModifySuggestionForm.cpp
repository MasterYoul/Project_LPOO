#include "pch.h"
#include "SearchModifySuggestionForm.h"
#include "ModifySuggestionsForm.h"

System::Void ProyectView::SearchModifySuggestionForm::dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ Id = dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		Suggestions^ p = Controller::QuerySuggestionsById(Int32::Parse(Id));
		if (Type == 'S') {
			//¿Cómo enviamos al formulario de la venta los datos del cliente?
			//Rpta. Mediante una referencia al formulario de la venta (SaleForm).
			((ModifySuggestionsForm^)modifysugesstionForm)->SetSuggestion(p);
			this->Close();
		}
	}
	this->Close();
}
