
#include "pch.h"
#include "SaleForm.h"
#include "ProyectMainForm.h"
#include "TableForm.h"


System::Void ProyectView::SaleForm::SaleForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	dateTimeSale->Text = DateTime::Now.ToString("dd/MM/yyyy");
}

System::Void ProyectView::SaleForm::btnRegisterSale_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		if (lblClientData->Text == "Sin cliente") {
			client_Info = Controller::QueryClient_InfotById(0);
		}
		if (lblClientData->Text != "Sin cliente") {
			client_Info = Controller::QueryClient_InfoByDocNumber(textClient->Text);
		}
		if (label8->Text == "Sin mesa") {
			tabledetail = Controller::QueryTableDetailtById(0);
			//= Controller::QueryTableDetailOcupado(0);
		}
		if (label8->Text != "Sin mesa") {
			tabledetail = Controller::QueryTableDetailtById(Convert::ToInt32(textBox2->Text));
			//= Controller::QueryTableDetailOcupado(0);
		}
		if (label7->Text == "Sin mesero") {
			user = Controller::QueryUsertById(0);
		}
		if (label7->Text != "Sin mesero") {
			user = Controller::QueryUsertById(Convert::ToInt32(textBox3->Text));
		}
		if (dgvDetails->Rows->Count == 0 || txtTotal->Text->Trim() == "0") {
			MessageBox::Show("Tiene que agregar un producto");
			return;
		}
		int a = 1;
		Sale^ sale = gcnew Sale();
		sale->Id = Controller::QueryLastSaleId() + 1;
		sale->Client_Info = client_Info;
		sale->TxtDate = dateTimeSale->Text;
		sale->User = user;
		sale->Estado = "POR ATENDER";
		sale->Status = 'A';
		sale->TableDetail = tabledetail;
		sale->Total = Double::Parse(txtTotal->Text);
		sale->SaleDetails = gcnew List<SaleDetail^>();
		sale->Fecha = dateTimeSale->Value.ToString("yyyy-MM-dd");

		User^ emp = Controller::CambioEstado(Convert::ToInt32(textBox3->Text));
		TableDetail^ table = Controller::CambioEstadoTable(Convert::ToInt32(textBox3->Text));


		//Recorrer todos las filas del grid para armar los detalles de venta
		//y a?adir cada detalle de venta a SaleDetails
		for (int i = 0; i < dgvDetails->RowCount - 1; i++) {
			SaleDetail^ saleDetail = gcnew SaleDetail();
			int mealId = Int32::Parse(dgvDetails->Rows[i]->Cells[0]->Value->ToString());
			saleDetail->Id = i + 1;
			saleDetail->Meals = Controller::QueryMealstById(mealId);
			saleDetail->UnitPrice = Convert::ToDouble(dgvDetails->Rows[i]->Cells[2]->Value->ToString());
			saleDetail->Quantity = Convert::ToInt32(dgvDetails->Rows[i]->Cells[3]->Value->ToString());
			saleDetail->Subtotal = Convert::ToDouble(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
			saleDetail->Estado = "no preparado";

			sale->SaleDetails->Add(saleDetail);


		}
		// 
		//Completar el RegisterSale
		Controller::RegisterSale(sale);
		MessageBox::Show("Se ha registrado la venta exitosamente.");
		RefreshTotalAmounts();
	}
	catch(Exception^ex){
		throw ex;

	}
	finally {
		dgvDetails->DataSource = "";

		textClient->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		txtSubtotal->Text = "";
		txtTax->Text = "";
		textBox1->Text = "";
		txtTotal->Text = "";
	}
}

