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
	using namespace System::Collections::Generic;
	using namespace Threading;


	/// <summary>
	/// Resumen de MealsForm
	/// </summary>
	public ref class MealsForm : public System::Windows::Forms::Form
	{
	private:
		Thread^ myThread;
	public:
		MealsForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			myThread = gcnew Thread(gcnew ThreadStart(this, &MealsForm::MyRun));
			myThread->IsBackground = true;
			myThread->Start();
		}

		delegate void MyDelegate();

		void MyRun() {
			
			while (true) {
				try {
					myThread->Sleep(10*1000);
					Invoke(gcnew MyDelegate(this, &MealsForm::RefreshdatadataGridMeals));
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
					return;
				}
			}
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MealsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtMealsId;
	private: System::Windows::Forms::TextBox^ textMealsName;
	private: System::Windows::Forms::TextBox^ textMealsDescription;
	private: System::Windows::Forms::TextBox^ textMealsPrice;
	private: System::Windows::Forms::TextBox^ textMealsStock;
	private: System::Windows::Forms::PictureBox^ pictureMeals;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonModify;
	private: System::Windows::Forms::Button^ buttonDelate;
	private: System::Windows::Forms::DataGridView^ dataGridMeals;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MealsId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MealsName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MealsDescription;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MeaslPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MealsStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StockUsed;
	private: System::Windows::Forms::TextBox^ textMealsStockUsed;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dateTimeMeals;

















	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtMealsId = (gcnew System::Windows::Forms::TextBox());
			this->textMealsName = (gcnew System::Windows::Forms::TextBox());
			this->textMealsDescription = (gcnew System::Windows::Forms::TextBox());
			this->textMealsPrice = (gcnew System::Windows::Forms::TextBox());
			this->textMealsStock = (gcnew System::Windows::Forms::TextBox());
			this->pictureMeals = (gcnew System::Windows::Forms::PictureBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonModify = (gcnew System::Windows::Forms::Button());
			this->buttonDelate = (gcnew System::Windows::Forms::Button());
			this->dataGridMeals = (gcnew System::Windows::Forms::DataGridView());
			this->MealsId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MealsName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MealsDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MeaslPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MealsStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StockUsed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textMealsStockUsed = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dateTimeMeals = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMeals))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridMeals))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(98, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"NOMBRE:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"DESCRIPCIÓN";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(61, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"PRECIO:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(69, 334);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"STOCK";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(43, 278);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 16);
			this->label6->TabIndex = 5;
			// 
			// txtMealsId
			// 
			this->txtMealsId->Location = System::Drawing::Point(146, 70);
			this->txtMealsId->Name = L"txtMealsId";
			this->txtMealsId->Size = System::Drawing::Size(232, 22);
			this->txtMealsId->TabIndex = 6;
			// 
			// textMealsName
			// 
			this->textMealsName->Location = System::Drawing::Point(146, 122);
			this->textMealsName->Name = L"textMealsName";
			this->textMealsName->Size = System::Drawing::Size(232, 22);
			this->textMealsName->TabIndex = 7;
			// 
			// textMealsDescription
			// 
			this->textMealsDescription->Location = System::Drawing::Point(146, 185);
			this->textMealsDescription->Multiline = true;
			this->textMealsDescription->Name = L"textMealsDescription";
			this->textMealsDescription->Size = System::Drawing::Size(232, 75);
			this->textMealsDescription->TabIndex = 8;
			// 
			// textMealsPrice
			// 
			this->textMealsPrice->Location = System::Drawing::Point(146, 283);
			this->textMealsPrice->Name = L"textMealsPrice";
			this->textMealsPrice->Size = System::Drawing::Size(130, 22);
			this->textMealsPrice->TabIndex = 9;
			// 
			// textMealsStock
			// 
			this->textMealsStock->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textMealsStock->Location = System::Drawing::Point(146, 334);
			this->textMealsStock->Name = L"textMealsStock";
			this->textMealsStock->Size = System::Drawing::Size(130, 22);
			this->textMealsStock->TabIndex = 10;
			// 
			// pictureMeals
			// 
			this->pictureMeals->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureMeals->Location = System::Drawing::Point(467, 43);
			this->pictureMeals->Name = L"pictureMeals";
			this->pictureMeals->Size = System::Drawing::Size(303, 201);
			this->pictureMeals->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureMeals->TabIndex = 11;
			this->pictureMeals->TabStop = false;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(115, 437);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(168, 43);
			this->buttonAdd->TabIndex = 12;
			this->buttonAdd->Text = L"AGREGAR";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MealsForm::buttonAdd_Click);
			// 
			// buttonModify
			// 
			this->buttonModify->Location = System::Drawing::Point(354, 437);
			this->buttonModify->Name = L"buttonModify";
			this->buttonModify->Size = System::Drawing::Size(170, 43);
			this->buttonModify->TabIndex = 13;
			this->buttonModify->Text = L"MODIFICAR";
			this->buttonModify->UseVisualStyleBackColor = true;
			this->buttonModify->Click += gcnew System::EventHandler(this, &MealsForm::buttonModify_Click);
			// 
			// buttonDelate
			// 
			this->buttonDelate->Location = System::Drawing::Point(580, 437);
			this->buttonDelate->Name = L"buttonDelate";
			this->buttonDelate->Size = System::Drawing::Size(170, 43);
			this->buttonDelate->TabIndex = 14;
			this->buttonDelate->Text = L"ELIMINAR";
			this->buttonDelate->UseVisualStyleBackColor = true;
			this->buttonDelate->Click += gcnew System::EventHandler(this, &MealsForm::buttonDelate_Click);
			// 
			// dataGridMeals
			// 
			this->dataGridMeals->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridMeals->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->MealsId,
					this->MealsName, this->MealsDescription, this->MeaslPrice, this->MealsStock, this->StockUsed
			});
			this->dataGridMeals->Location = System::Drawing::Point(46, 520);
			this->dataGridMeals->Name = L"dataGridMeals";
			this->dataGridMeals->RowHeadersWidth = 51;
			this->dataGridMeals->RowTemplate->Height = 24;
			this->dataGridMeals->Size = System::Drawing::Size(1018, 225);
			this->dataGridMeals->TabIndex = 15;
			this->dataGridMeals->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MealsForm::dataGridMeals_CellClick);
			// 
			// MealsId
			// 
			this->MealsId->HeaderText = L"Plato ID";
			this->MealsId->MinimumWidth = 6;
			this->MealsId->Name = L"MealsId";
			this->MealsId->Width = 50;
			// 
			// MealsName
			// 
			this->MealsName->HeaderText = L"Nombre del Plato";
			this->MealsName->MinimumWidth = 6;
			this->MealsName->Name = L"MealsName";
			this->MealsName->Width = 200;
			// 
			// MealsDescription
			// 
			this->MealsDescription->HeaderText = L"Descripcion del Plato";
			this->MealsDescription->MinimumWidth = 6;
			this->MealsDescription->Name = L"MealsDescription";
			this->MealsDescription->Width = 300;
			// 
			// MeaslPrice
			// 
			this->MeaslPrice->HeaderText = L"Precio";
			this->MeaslPrice->MinimumWidth = 6;
			this->MeaslPrice->Name = L"MeaslPrice";
			this->MeaslPrice->Width = 125;
			// 
			// MealsStock
			// 
			this->MealsStock->HeaderText = L"Stock";
			this->MealsStock->MinimumWidth = 6;
			this->MealsStock->Name = L"MealsStock";
			this->MealsStock->Width = 125;
			// 
			// StockUsed
			// 
			this->StockUsed->HeaderText = L"Stock Usado";
			this->StockUsed->MinimumWidth = 6;
			this->StockUsed->Name = L"StockUsed";
			this->StockUsed->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(499, 277);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 43);
			this->button1->TabIndex = 16;
			this->button1->Text = L"ESTABLECER IMAGEN";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MealsForm::btnSetImage_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(802, 437);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 43);
			this->button2->TabIndex = 17;
			this->button2->Text = L"LIMPIAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MealsForm::button2_Click);
			// 
			// textMealsStockUsed
			// 
			this->textMealsStockUsed->Location = System::Drawing::Point(146, 379);
			this->textMealsStockUsed->Name = L"textMealsStockUsed";
			this->textMealsStockUsed->Size = System::Drawing::Size(130, 22);
			this->textMealsStockUsed->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 385);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 16);
			this->label7->TabIndex = 19;
			this->label7->Text = L"STOCK USADO";
			// 
			// dateTimeMeals
			// 
			this->dateTimeMeals->Location = System::Drawing::Point(45, 24);
			this->dateTimeMeals->Name = L"dateTimeMeals";
			this->dateTimeMeals->Size = System::Drawing::Size(333, 22);
			this->dateTimeMeals->TabIndex = 20;
			// 
			// MealsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1092, 785);
			this->Controls->Add(this->dateTimeMeals);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textMealsStockUsed);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridMeals);
			this->Controls->Add(this->buttonDelate);
			this->Controls->Add(this->buttonModify);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->pictureMeals);
			this->Controls->Add(this->textMealsStock);
			this->Controls->Add(this->textMealsPrice);
			this->Controls->Add(this->textMealsDescription);
			this->Controls->Add(this->textMealsName);
			this->Controls->Add(this->txtMealsId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MealsForm";
			this->Text = L"Mantenimiento de Platos";
			this->Load += gcnew System::EventHandler(this, &MealsForm::MealsForm_Load);
			this->Shown += gcnew System::EventHandler(this, &MealsForm::MealsForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMeals))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridMeals))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Meals^ meals = gcnew Meals();
	//Meals->setId(Convert::ToInt32(txtMealsId->Text));

	if (txtMealsId->Text->Trim() == "") {
		MessageBox::Show("El ID del plato no debe estar vacío.");
		return;
	}
	if (textMealsName->Text->Trim() == "") {
		MessageBox::Show("El nombre del plato no debe estar vacío.");
		return;
	}
	if (textMealsDescription->Text->Trim() == "") {
		MessageBox::Show("La descripcion del plato no debe estar vacío.");
		return;
	}
	if (textMealsPrice->Text->Trim() == "") {
		MessageBox::Show("El precio del plato no debe estar vacío.");
		return;
	}
	if (textMealsStock->Text->Trim() == "") {
		MessageBox::Show("El stock del plato no debe estar vacío.");
		return;
	}
	if (textMealsStock->Text->Trim() == "") {
		MessageBox::Show("El stock del plato no debe estar vacío.");
		return;
	}
	if (textMealsStockUsed->Text->Trim() == "") {
		MessageBox::Show("El stock utilizado del plato no debe estar vacío.");
		return;
	}
	meals->DateMeal = dateTimeMeals->Value.ToString("dd-MM-yyyy");
	meals->Id = Convert::ToInt32(txtMealsId->Text);
	meals->Name = textMealsName->Text;
	meals->Description = textMealsDescription->Text;
	meals->Price = Convert::ToDouble(textMealsPrice->Text);
	meals->Stock = Convert::ToInt32(textMealsStock->Text);
	meals->StockUsed = Convert::ToInt32(textMealsStockUsed->Text);
	meals->Status = 'A';

	if (pictureMeals != nullptr && pictureMeals->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pictureMeals->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		meals->Photo = ms->ToArray();
	}

	Controller::AddMeals(meals);

	ClearControls();
	ShowMeals();
}

	   Void RefreshdatadataGridMeals() {
		   List <Meals^>^ MealsList = Controller::QueryAllMeals();
		   dataGridMeals->Rows->Clear();
		   if (MealsList != nullptr)
			   for (int i = 0; i < MealsList->Count; i++) {
				   dataGridMeals->Rows->Add(gcnew array<String^> {
					   "" + MealsList[i]->Id,
						   MealsList[i]->Name,
						   MealsList[i]->Description,
						   ""+ MealsList[i]->Price,
						   "" + MealsList[i]->Stock,
						   "" + MealsList[i]->StockUsed,
				   });
			   }
	   }
	  
	void ShowMeals() {
		   List<Meals^>^ MealsList = Controller::QueryAllMeals();

		   dataGridMeals->Rows->Clear();
		   for (int i = 0; i < MealsList->Count; i++) {
			   dataGridMeals->Rows->Add(gcnew array<String^>{
				   "" + MealsList[i]->Id,
					   MealsList[i]->Name,
					   "" + MealsList[i]->Description,
					   "" + MealsList[i]->Price,
					   "" + MealsList[i]->Stock,
					   "" + MealsList[i]->StockUsed,
			   });
		   }
	   }
	   void ClearControls() {
		   txtMealsId->Clear();
		   textMealsName->Clear();
		   textMealsDescription->Clear();
		   textMealsPrice->Clear();
		   textMealsStock->Clear();
		   textMealsStockUsed->Clear();
		   pictureMeals->Image = nullptr;
	   }


private: System::Void buttonModify_Click(System::Object^ sender, System::EventArgs^ e) {
	Meals^ meals = gcnew Meals();
	if (txtMealsId->Text->Trim() == "") {
		MessageBox::Show("El ID del plato no debe estar vacío.");
		return;
	}
	if (textMealsName->Text->Trim() == "") {
		MessageBox::Show("El nombre del plato no debe estar vacío.");
		return;
	}
	if (textMealsDescription->Text->Trim() == "") {
		MessageBox::Show("La descripcion del plato no debe estar vacío.");
		return;
	}
	if (textMealsPrice->Text->Trim() == "") {
		MessageBox::Show("El precio del plato no debe estar vacío.");
		return;
	}
	if (textMealsStock->Text->Trim() == "") {
		MessageBox::Show("El stock del plato no debe estar vacío.");
		return;
	}
	if (textMealsStockUsed->Text->Trim() == "") {
		MessageBox::Show("El stock utilizado del plato no debe estar vacío.");
		return;
	}
	//meals->setId(Convert::ToInt32(txtMealsId->Text));
	meals->DateMeal = dateTimeMeals->Value.ToString("yyyy-MM-dd");
	meals->Id = Convert::ToInt32(txtMealsId->Text);
	meals->Name = textMealsName->Text;
	meals->Description = textMealsDescription->Text;
	meals->Price = Convert::ToDouble(textMealsPrice->Text);
	meals->Stock = Convert::ToInt32(textMealsStock->Text);
	meals->StockUsed = Convert::ToInt32(textMealsStockUsed->Text);
	meals->Status = 'A';
	buttonModify->Enabled = false;
	buttonDelate->Enabled = false;

	if (pictureMeals != nullptr && pictureMeals->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pictureMeals->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		meals->Photo = ms->ToArray();
	}

	Controller::UpdateMeals(meals);
	ClearControls();
	ShowMeals();
}
private: System::Void buttonDelate_Click(System::Object^ sender, System::EventArgs^ e) {
	buttonModify->Enabled = false;
	buttonDelate->Enabled = false;
	try {
		if (txtMealsId->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ningun producto seleccionado.");
			return;
		}
		int MealsId = Int32::Parse(txtMealsId->Text);

		if (MessageBox::Show(
			"Estas seguro(a) de eliminar el producto?",
			"Confirmacion", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
		

			Meals^ meals = Controller::QueryMealstById(MealsId);
			meals->Status = 0;

			Controller::DeleteMeals(MealsId);

			RefreshdatadataGridMeals();
			ClearControls();
		}
	}
	catch (...) {
		MessageBox::Show("No se puede eliminar el producto porque el Id no es valido.");
		return;
	}

}




private: System::Void dataGridMeals_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dataGridMeals->SelectedCells[0]->RowIndex;
	int MealsId = Convert::ToInt32(dataGridMeals->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Meals^ p = Controller::QueryMealstById(MealsId);
	txtMealsId->Text = "" + p->Id;
	textMealsName->Text = p->Name;
	textMealsDescription->Text = p->Description;
	textMealsPrice->Text = "" + p->Price;
	textMealsStock->Text= "" + p->Stock;
	textMealsStockUsed->Text = "" + p->StockUsed;
	buttonModify->Enabled = true;
	buttonDelate->Enabled = true;
	//dateTimeMeals->Value = DateTime::Parse(p->DateMeal);

	if (p->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
		pictureMeals->Image = Image::FromStream(ms);
	}
	else {
		pictureMeals->Image = nullptr;
		pictureMeals->Invalidate();
	}
}
 private: System::Void MealsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	 ShowMeals();
	 
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
}
private: System::Void btnSetImage_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pictureMeals->Image = gcnew Bitmap(opnfd->FileName);
	}

}

private: System::Void MealsForm_Shown(System::Object^ sender, System::EventArgs^ e) {
	buttonModify->Enabled = false;
	buttonDelate->Enabled = false;
}

};
}
