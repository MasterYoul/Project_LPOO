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
	/// Resumen de SearchPlatos
	/// </summary>
	public ref class SearchPlatos : public System::Windows::Forms::Form
	{
	public:
		SearchPlatos(void)
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
		~SearchPlatos()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::TextBox^ textBox2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(860, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(232, 29);
			this->label4->TabIndex = 44;
			this->label4->Text = L"BUSCAR PLATOS:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(36, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 50);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Platos:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1004, 320);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 69);
			this->button2->TabIndex = 40;
			this->button2->Text = L"LIMPIAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SearchPlatos::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(861, 667);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(242, 79);
			this->textBox3->TabIndex = 39;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(860, 485);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 25);
			this->label3->TabIndex = 38;
			this->label3->Text = L"NOMBRE:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(860, 613);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 25);
			this->label2->TabIndex = 36;
			this->label2->Text = L"DESCRIPCIÓN:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(861, 216);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(84, 26);
			this->textBox1->TabIndex = 35;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(860, 187);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 25);
			this->label1->TabIndex = 34;
			this->label1->Text = L"ID:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1172, 584);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 54);
			this->button1->TabIndex = 33;
			this->button1->Text = L"BUSCAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearchPlatos::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(33, 116);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(788, 714);
			this->dataGridView1->TabIndex = 32;
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
			this->Column2->HeaderText = L"NOMBRE";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"STOCK";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 70;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"PRICE";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 80;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"DESCRIPCION";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1142, 195);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(169, 36);
			this->button4->TabIndex = 48;
			this->button4->Text = L"BUSCAR POR ID";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SearchPlatos::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(865, 534);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(238, 26);
			this->textBox2->TabIndex = 37;
			// 
			// SearchPlatos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1323, 885);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"SearchPlatos";
			this->Text = L"Filtro de Platos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		dataGridView1->Rows->Clear();
		try {
			if ((textBox2->Text->Trim() == "")&&(textBox3->Text->Trim() == "")){
				MessageBox::Show("Se necesita un NOMBRE o una DESCRIPCIÓN.");
				return;
			}
			if (textBox2->Text->Trim() != "") {
				List<Meals^>^ MealsList = Controller::QueryMealsByNameOrDescription(textBox2->Text->Trim());
				if (MealsList->Count == 0) {
					MessageBox::Show("El NOMBRE del plato no existe");
				}
				for (int i = 0; i < MealsList->Count; i++) {
					dataGridView1->Rows->Add(gcnew array<String^> {
						"" + MealsList[i]->Id,
							MealsList[i]->Name,
							Convert::ToString(MealsList[i]->Stock),
							Convert::ToString(MealsList[i]->Price),
							MealsList[i]->Description,
					});
				}
			}
			if (textBox3->Text->Trim() != "") {
				List<Meals^>^ MealsList = Controller::QueryMealsByNameOrDescription(textBox3->Text->Trim());
				if (MealsList->Count==0) {
					MessageBox::Show("La DESCRIPCIÓN del plato no existe");
				}
				for (int i = 0; i < MealsList->Count; i++) {
					dataGridView1->Rows->Add(gcnew array<String^> {
						"" + MealsList[i]->Id,
							MealsList[i]->Name,
							Convert::ToString(MealsList[i]->Stock),
							Convert::ToString(MealsList[i]->Price),
							MealsList[i]->Description,
					});
				}
			}
			

		}
		catch (Exception^ ex) {
			throw ex;
		}
		finally {

			textBox2->Clear();
			textBox3->Clear();
		}


	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//Búsqueda de producto por el código ingresado por el usuario
		try {
			if (textBox1->Text->Trim() == "") {
				MessageBox::Show("El ID del plato no debe estar vacío.");
				return;
			}

			Meals^ p = Controller::QueryMealstById(Convert::ToInt32(textBox1->Text->Trim()));
			if (p == nullptr) {
				MessageBox::Show("El ID del plato no existe.");
				return;
			}

			//Se borran los datos del grid.
			dataGridView1->Rows->Clear();
			dataGridView1->Rows->Add(gcnew array<String^> {
				"" + p->Id,
					p->Name,
					Convert::ToString(p->Stock),
					Convert::ToString(p->Price),
					p->Description,
			});
		}
		catch (Exception^ ex) {
			throw ex;
		}
		finally {

			textBox1->Clear();

		}
	}
		   
		void ClearControls() {
			
			textBox1->Clear();
			 textBox2->Clear();
			 textBox3->Clear();
			 		   
		   }


	
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	void ClearControls();
	dataGridView1->Rows->Clear();

}



};
};


