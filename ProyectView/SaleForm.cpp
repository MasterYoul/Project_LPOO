
#include "pch.h"
#include "SaleForm.h"
#include "ProyectMainForm.h"

System::Void ProyectView::SaleForm::SaleForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	dateTimeSale->Text = DateTime::Now.ToString("dd/MM/yyyy");
}

System::Void ProyectView::SaleForm::btnRegisterSale_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblClientData->Text == "Sin cliente") {
		 client_Info = Controller::QueryClient_InfotById(0);
	}
	if (dgvDetails->Rows->Count == 0 || txtTotal->Text->Trim() == "0") {
		MessageBox::Show("Tiene que agregar un producto");
		return;
	}
	Sale^ sale = gcnew Sale();
	sale->Id = Controller::QueryLastSaleId() + 1;
	sale->Client_Info = client_Info;
	sale->TxtDate = dateTimeSale->Text;
	sale->User = (User^)ProyectMainForm::user;
	sale->Total = Double::Parse(txtTotal->Text);
	sale->SaleDetails = gcnew List<SaleDetail^>();
	//Recorrer todos las filas del grid para armar los detalles de venta
	//y añadir cada detalle de venta a SaleDetails
	for (int i = 0; i < dgvDetails->RowCount - 1; i++) {
		SaleDetail^ saleDetail = gcnew SaleDetail();
		int productId = Int32::Parse(dgvDetails->Rows[i]->Cells[0]->Value->ToString());
		saleDetail->Id = i + 1;
		saleDetail->Meals = Controller::QueryMealstById(productId);
		saleDetail->UnitPrice = Convert::ToDouble(dgvDetails->Rows[i]->Cells[2]->Value->ToString());
		saleDetail->Quantity = Convert::ToInt32(dgvDetails->Rows[i]->Cells[3]->Value->ToString());
		saleDetail->Subtotal = Convert::ToDouble(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
		sale->SaleDetails->Add(saleDetail);
	}
	// 
	//Completar el RegisterSale
	Controller::RegisterSale(sale);
	MessageBox::Show("Se ha registrado la venta exitosamente.");
}
