
#include "pch.h"
#include "SaleForm.h"
#include "ProyectMainForm.h"

System::Void ProyectView::SaleForm::SaleForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	dateTimeSale->Text = DateTime::Now.ToString("dd/MM/yyyy");
}
