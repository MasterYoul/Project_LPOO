#include "pch.h"
#include "Client_InfoForm.h"
#include "SaleForm.h"

using namespace	ProyectView;



System::Void ProyectView::Client_InfoForm::dataGridViewClient_Info_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	{
		int selectedRowIndex = dataGridViewClient->SelectedCells[0]->RowIndex;
		int ClientId = Convert::ToInt32(dataGridViewClient->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Client_Info^ c = Controller::QueryClient_InfotById(ClientId);
		if (UseType == 'S') {
			//¿Cómo enviamos al formulario de la venta los datos del cliente?
			//Rpta. Mediante una referencia al formulario de la venta (SaleForm).
			((SaleForm^)RefSaleForm)->SetCustomer(c);
			this->Close();
		}
		else{
		butActualizar->Enabled = true;
		butDELETE->Enabled = true;

		textIdClient->Text = "" + c->Id;
		textNameClient->Text = c->Name;
		textLastNameClient->Text = c->LastName;
		textOpinionClient->Text = c->TxtOpin;
		comboBoxRatioClient->Text = "" + c->Rate;
		textRucClient->Text = c->RucNumber;
		textNumberClient->Text = c->PhoneNumber;
		textDniClient->Text = c->DocNumber;
		numericUpDownVisitsClient->Text = "" + c->VisitQuantity;
		radioButtonPersonClient->Checked = c->Type == 'P';
		radioButtonEmpresaClient->Checked = c->Type == 'E';
		ClientFemale->Checked = c->Gender == 'F';
		ClientMale->Checked = c->Gender == 'M';


		//UserMale->Checked = p->Gender == 'M';
		//UserFemale->Checked = p->Gender == 'F';
		}

	}
}
