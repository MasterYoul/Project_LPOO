#pragma once

namespace ProyectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProjectController;
	using namespace ProjectModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de SearchTableDetailForm
	/// </summary>
	public ref class SearchTableDetailForm : public System::Windows::Forms::Form
	{
	public:
		property char Type;
		property Form^ saleForm;// Variable de instancia
	public:
		SearchTableDetailForm()
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			Type = 'M';
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SearchTableDetailForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;







	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(21, 75);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(700, 571);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SearchTableDetailForm::dataGridView1_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Piso";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Capacidad";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 80;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Disponibilidad";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Reservado";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(763, 604);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"BUSCAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearchTableDetailForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(775, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ID:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(778, 107);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(778, 424);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(216, 22);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(775, 392);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"PISO:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(880, 604);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 43);
			this->button2->TabIndex = 10;
			this->button2->Text = L"LIMPIAR";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(994, 604);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 43);
			this->button3->TabIndex = 11;
			this->button3->Text = L"CANCELAR";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SearchTableDetailForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(24, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 43);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Mesas:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"TODAS", L"LIBRES", L"OCUPADAS" });
			this->comboBox1->Location = System::Drawing::Point(776, 327);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(250, 35);
			this->comboBox1->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(773, 280);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(260, 25);
			this->label4->TabIndex = 16;
			this->label4->Text = L"BUSCAR A LAS MESAS:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(778, 175);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 43);
			this->button4->TabIndex = 17;
			this->button4->Text = L"BUSCAR";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SearchTableDetailForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(775, 511);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"CAPACIDAD:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(778, 547);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(216, 22);
			this->textBox3->TabIndex = 7;
			// 
			// SearchTableDetailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1171, 694);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"SearchTableDetailForm";
			this->Text = L"Busqueda de mesas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		List<TableDetail^>^ mealsList;

		if (comboBox1->Text->Equals("LIBRES")) {
			if (textBox2->Text->Trim() != "" && textBox3->Text->Trim() == "") { // Buscando por piso

			}
			else if (textBox2->Text->Trim() == "" && textBox3->Text->Trim() != "") {// Buscando por capacidad

			}
			else if (textBox2->Text->Trim() == "" && textBox3->Text->Trim() != "") { // buscando por piso y capacidad

			}
			else { // buscando todos los libres
				mealsList = Controller::QueryAllTableLibre();
			}
			
		}
		else if (comboBox1->Text->Equals("OCUPADAS")){
			if (textBox2->Text->Trim() != "" && textBox3->Text->Trim() == "") { // Buscando por piso

			}
			else if (textBox2->Text->Trim() == "" && textBox3->Text->Trim() != "") {// Buscando por capacidad

			}
			else if (textBox2->Text->Trim() == "" && textBox3->Text->Trim() != "") { // buscando por piso y capacidad

			}
			else { // buscando todos los ocupados
				mealsList = Controller::QueryAllTableOcupado();
			}

		}
		else {
			 if (textBox2->Text->Trim() == "" && textBox3->Text->Trim() != "") {// Buscando por capacidad

			}
			else if (textBox2->Text->Trim() == "" && textBox3->Text->Trim() != "") { // buscando por piso y capacidad

			}
			else { // buscando todas las mesas
				 mealsList = Controller::QueryAllTableDetail();
			}
		
		}
		RefreshdataGridViewClient(mealsList);

	}

		   Void RefreshdataGridViewClient(List<TableDetail^>^ mealsList) {
			   dataGridView1->Rows->Clear();
			   for (int i = 0; i < mealsList->Count; i++) {
				   dataGridView1->Rows->Add(gcnew array<String^> {
					   "" + mealsList[i]->Id,
						   Convert::ToString(mealsList[i]->Floor),
						   Convert::ToString(mealsList[i]->TableCapacity),
						   mealsList[i]->Disponibility,
						   mealsList[i]->Reserved
				   });
			   }
		   }
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//Búsqueda de producto por el código ingresado por el usuario
	TableDetail^ p = Controller::QueryTableDetailtById(Convert::ToInt32(textBox1->Text->Trim()));
	//Se borran los datos del grid.
	dataGridView1->Rows->Clear();
	dataGridView1->Rows->Add(gcnew array<String^> {
		"" + p->Id,
			Convert::ToString(p->Floor),
			Convert::ToString(p->TableCapacity),
			p->Disponibility,
			p->Reserved
	});

}
};
}
