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
	/// Resumen de MyForm
	/// </summary>
	public ref class TableForm : public System::Windows::Forms::Form
	{
	public:
		property char UseType;
		property Form^ RefSaleForm;
	public:
		TableForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~TableForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridTable;
	protected:

	private: System::Windows::Forms::TextBox^ txtTableId;







	private: System::Windows::Forms::TextBox^ txtTableFloor;

	private: System::Windows::Forms::TextBox^ txtTableCapacity;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;







	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtTableTimeReserved;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnModify;
	private: System::Windows::Forms::Button^ btnClear;





	private: System::Windows::Forms::ComboBox^ comboBoxDisponibility;
	private: System::Windows::Forms::ComboBox^ comboBoxReserved;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;










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
			this->dataGridTable = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtTableId = (gcnew System::Windows::Forms::TextBox());
			this->txtTableFloor = (gcnew System::Windows::Forms::TextBox());
			this->txtTableCapacity = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtTableTimeReserved = (gcnew System::Windows::Forms::TextBox());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnModify = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->comboBoxDisponibility = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxReserved = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridTable))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridTable
			// 
			this->dataGridTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridTable->Location = System::Drawing::Point(37, 299);
			this->dataGridTable->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridTable->Name = L"dataGridTable";
			this->dataGridTable->RowHeadersWidth = 62;
			this->dataGridTable->RowTemplate->Height = 28;
			this->dataGridTable->Size = System::Drawing::Size(915, 382);
			this->dataGridTable->TabIndex = 0;
			this->dataGridTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TableForm::dataGridTable_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 70;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Capacidad";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Piso";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 70;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Disponibilidad";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Estado de Reserva";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 200;
			// 
			// txtTableId
			// 
			this->txtTableId->Location = System::Drawing::Point(166, 22);
			this->txtTableId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtTableId->Name = L"txtTableId";
			this->txtTableId->Size = System::Drawing::Size(89, 22);
			this->txtTableId->TabIndex = 1;
			// 
			// txtTableFloor
			// 
			this->txtTableFloor->Location = System::Drawing::Point(166, 110);
			this->txtTableFloor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtTableFloor->Name = L"txtTableFloor";
			this->txtTableFloor->Size = System::Drawing::Size(89, 22);
			this->txtTableFloor->TabIndex = 3;
			// 
			// txtTableCapacity
			// 
			this->txtTableCapacity->Location = System::Drawing::Point(166, 68);
			this->txtTableCapacity->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtTableCapacity->Name = L"txtTableCapacity";
			this->txtTableCapacity->Size = System::Drawing::Size(89, 22);
			this->txtTableCapacity->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(131, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Id: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(518, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Disponibilidad: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(112, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Piso: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(67, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 18);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Capacidad: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(486, 66);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Estado de Reserva:";
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(134, 198);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(121, 44);
			this->btnAdd->TabIndex = 11;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &TableForm::btnAdd_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(484, 110);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 18);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Tiempo de reserva: ";
			// 
			// txtTableTimeReserved
			// 
			this->txtTableTimeReserved->Location = System::Drawing::Point(641, 110);
			this->txtTableTimeReserved->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtTableTimeReserved->Name = L"txtTableTimeReserved";
			this->txtTableTimeReserved->Size = System::Drawing::Size(168, 22);
			this->txtTableTimeReserved->TabIndex = 12;
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(292, 198);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(124, 44);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &TableForm::btnDelete_Click);
			// 
			// btnModify
			// 
			this->btnModify->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModify->Location = System::Drawing::Point(490, 198);
			this->btnModify->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(123, 44);
			this->btnModify->TabIndex = 15;
			this->btnModify->Text = L"Modificar";
			this->btnModify->UseVisualStyleBackColor = true;
			this->btnModify->Click += gcnew System::EventHandler(this, &TableForm::btnModify_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(666, 198);
			this->btnClear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(124, 44);
			this->btnClear->TabIndex = 16;
			this->btnClear->Text = L"Limpiar";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &TableForm::btnClear_Click);
			// 
			// comboBoxDisponibility
			// 
			this->comboBoxDisponibility->FormattingEnabled = true;
			this->comboBoxDisponibility->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Disponible", L"No Disponible" });
			this->comboBoxDisponibility->Location = System::Drawing::Point(641, 20);
			this->comboBoxDisponibility->Name = L"comboBoxDisponibility";
			this->comboBoxDisponibility->Size = System::Drawing::Size(141, 24);
			this->comboBoxDisponibility->TabIndex = 17;
			// 
			// comboBoxReserved
			// 
			this->comboBoxReserved->FormattingEnabled = true;
			this->comboBoxReserved->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Libre", L"Reservado" });
			this->comboBoxReserved->Location = System::Drawing::Point(641, 65);
			this->comboBoxReserved->Name = L"comboBoxReserved";
			this->comboBoxReserved->Size = System::Drawing::Size(141, 24);
			this->comboBoxReserved->TabIndex = 18;
			// 
			// TableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(964, 706);
			this->Controls->Add(this->comboBoxReserved);
			this->Controls->Add(this->comboBoxDisponibility);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnModify);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtTableTimeReserved);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtTableCapacity);
			this->Controls->Add(this->txtTableFloor);
			this->Controls->Add(this->txtTableId);
			this->Controls->Add(this->dataGridTable);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"TableForm";
			this->Text = L"Mantenimiento de Mesas";
			this->Load += gcnew System::EventHandler(this, &TableForm::TableForm_Load);
			this->Shown += gcnew System::EventHandler(this, &TableForm::TableForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
//private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			//this->Close();
		//}
	
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	TableDetail^ table = gcnew TableDetail();
	if (txtTableId->Text->Trim() == "") {
		MessageBox::Show("El ID de la mesa no debe estar vacío.");
		return;
	}
	if (txtTableCapacity->Text->Trim() == "") {
		MessageBox::Show("La capacidad de la mesa no debe estar vacía.");
		return;
	}
	if (txtTableFloor->Text->Trim() == "") {
		MessageBox::Show("El piso de la mesa no debe estar vacío.");
		return;
	}

	if (txtTableTimeReserved->Text->Trim() == "") {
		MessageBox::Show("El tiempo de reserva  no debe estar vacío.");
		return;
	}

	table->Id = Convert::ToInt32(txtTableId->Text);
	table->Floor = Convert::ToInt32(txtTableFloor->Text);
	table->TableCapacity = Convert::ToInt32(txtTableCapacity->Text);
	table->Disponibility = comboBoxDisponibility->Text;
	table->Reserved = comboBoxReserved->Text;
	table->TimeReserv = txtTableTimeReserved->Text;

	Controller::AddTableDetail(table);
	ClearControls();
	ShowTable();
}
	   Void RefreshdatadataGridTable() {
		   List <TableDetail^>^ TableList = Controller::QueryAllTableDetail();
		   dataGridTable->Rows->Clear();
		   if (TableList != nullptr)
			   for (int i = 0; i < TableList->Count; i++) {
				   dataGridTable->Rows->Add(gcnew array<String^> {
					   "" + TableList[i]->Id,
						   "" + TableList[i]->TableCapacity,
						   "" + TableList[i]->Floor,
						   "" + TableList[i] ->Disponibility,
						   "" + TableList[i]->Reserved
				   });
			   }
	   }

	   void ShowTable() {
		   List<TableDetail^>^ TableList = Controller::QueryAllTableDetail();

		   dataGridTable->Rows->Clear();
		   for (int i = 0; i < TableList->Count; i++) {
			   dataGridTable->Rows->Add(gcnew array<String^>{
				   "" + TableList[i]->Id,
					   "" + TableList[i]->TableCapacity,
					   "" + TableList[i]->Floor,
					   "" + TableList[i]->Disponibility,
					   "" + TableList[i]->Reserved
			   });
		   }
	   }
	   void ClearControls() {
		   txtTableId->Text = "";;
		   txtTableCapacity->Text = "";
		   txtTableFloor->Text = "";
		   comboBoxDisponibility->Text = "";
		   comboBoxReserved-> Text = "";
		   txtTableTimeReserved->Text = "";
	   }



private: System::Void btnModify_Click(System::Object^ sender, System::EventArgs^ e) {
	TableDetail^ table = gcnew TableDetail();
	if (txtTableId->Text->Trim() == "") {
		MessageBox::Show("El ID de la mesa no debe estar vacío.");
		return;
	}
	if (txtTableCapacity->Text->Trim() == "") {
		MessageBox::Show("La capacidad de la mesa no debe estar vacía.");
		return;
	}
	if (txtTableFloor->Text->Trim() == "") {
		MessageBox::Show("El piso de la mesa no debe estar vacío.");
		return;
	}
	if (comboBoxDisponibility->Text->Trim() == "") {
		MessageBox::Show("El estado de disponibilidad de la mesa no debe estar vacía.");
		return;
	}
	if (comboBoxReserved->Text->Trim() == "") {
		MessageBox::Show("El estado de reserva de la mesa no debe estar vacío.");
		return;
	}

	if (txtTableTimeReserved->Text->Trim() == "") {
		MessageBox::Show("El tiempo de reserva  no debe estar vacío.");
		return;
	}
	btnModify->Enabled = false;
	btnDelete->Enabled = false;
	table->Id = Convert::ToInt32(txtTableId->Text);
	table->Floor = Convert::ToInt32(txtTableFloor->Text);
	table->TableCapacity = Convert::ToInt32(txtTableCapacity->Text);
	table->Disponibility = comboBoxDisponibility->Text;
	table->Reserved = comboBoxReserved->Text;
	table->TimeReserv = txtTableTimeReserved->Text;

	Controller::UpdateTableDetail(table);
	RefreshdatadataGridTable();
	ClearControls();
	
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	btnModify->Enabled = false;
	btnDelete->Enabled = false;
	try {
		if (txtTableId->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ninguna mesa seleccionada.");
			return;
		}
		int TableId = Int32::Parse(txtTableId->Text);

		if (MessageBox::Show(
			"Estás seguro(a) de eliminar el producto?",
			"Confirmación", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			

			Controller::DeleteTableDetail(TableId);

			RefreshdatadataGridTable();
			ClearControls();
		}
	}
	catch (...) {
		MessageBox::Show("No se puede eliminar el producto porque el Id no es valido.");
		return;
	}

}
private: System::Void dataGridTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dataGridTable->SelectedCells[0]->RowIndex;
	int TableId = Convert::ToInt32(dataGridTable->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	TableDetail^ t = Controller::QueryTableDetailtById(TableId);
	txtTableId->Text = "" + t->Id;
	txtTableCapacity->Text = "" + t->TableCapacity;
	txtTableFloor->Text = "" + t->Floor;	
	comboBoxDisponibility->Text = "" + t->Disponibility;
	comboBoxReserved -> Text = "" + t->Reserved;
	txtTableTimeReserved->Text = t->TimeReserv;
	btnModify->Enabled = true;
	btnDelete->Enabled = true;

	//UserMale->Checked = p->Gender == 'M';
	//UserFemale->Checked = p->Gender == 'F';
}
private: System::Void TableForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowTable();
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
}
private: System::Void TableForm_Shown(System::Object^ sender, System::EventArgs^ e) {
	btnModify->Enabled = false;
	btnDelete->Enabled = false;
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshdatadataGridTable();
}
};
}
