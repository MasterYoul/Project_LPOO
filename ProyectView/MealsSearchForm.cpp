#include "pch.h"
#include "MealsSearchForm.h"
#include "SaleForm.h";

System::Void ProyectView::MealsSearchForm::dgvMeals_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ mealId = dgvMeals->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		Meals^ p = Controller::QueryMealstById(Int32::Parse(mealId));
		if (refForm->GetType() == SaleForm::typeid)
			((SaleForm^)refForm)->AddMealToSaleDetails(p);
	}
	this->Close();
}
