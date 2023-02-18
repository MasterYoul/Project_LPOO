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
		SearchTableDetailForm(void)
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
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->dataGridView1->Size = System::Drawing::Size(751, 587);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(828, 545);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 58);
			this->button1->TabIndex = 1;
			this->button1->Text = L"BUSCAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearchTableDetailForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(825, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"BUSCAR POR ID";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(828, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(373, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(828, 210);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(373, 22);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(825, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"BUSCAR POR PISO:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(828, 333);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(373, 22);
			this->textBox3->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(825, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"BUSCAR POR CAPACIDAD";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1034, 545);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 58);
			this->button2->TabIndex = 10;
			this->button2->Text = L"LIMPIAR";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1264, 545);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 58);
			this->button3->TabIndex = 11;
			this->button3->Text = L"CANCELAR";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(828, 478);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(373, 22);
			this->textBox4->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(825, 396);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"BUSCAR MESAS LIBRES";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(24, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(345, 43);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Mesas disponibles:";
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
			// SearchTableDetailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1402, 686);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
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
		if (textBox1->Text->Trim() != "") {
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
		else if (textBox1->Text->Trim() != "" && textBox4->Text->Trim() != "" && textBox3->Text->Trim() != "" && textBox2->Text->Trim() != "") {
			MessageBox::Show("Error, No llene todos los campos.");
		}
		else if (textBox1->Text->Trim() == "" && textBox2->Text->Trim() == "" && textBox3->Text->Trim() == "" && textBox4->Text->Trim() != "") {
			//Búsqueda de productos por el nombre o descripción ingresado por el usuario
			List<TableDetail^>^ mealsList = Controller::QueryAllTableLibre();

			//Se borran los datos del grid.
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
		else
		{

		}

	}
};
}
