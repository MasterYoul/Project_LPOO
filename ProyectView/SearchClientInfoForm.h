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
	/// Resumen de SearchClientInfoForm
	/// </summary>
	public ref class SearchClientInfoForm : public System::Windows::Forms::Form
	{
	public:
		property char Type;
		property Form^ sugesstionForm;
	public:
		SearchClientInfoForm(void)
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
		~SearchClientInfoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(755, 319);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 43);
			this->button4->TabIndex = 45;
			this->button4->Text = L"BUSCAR";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SearchClientInfoForm::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(759, 410);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(220, 25);
			this->label4->TabIndex = 44;
			this->label4->Text = L"BUSCAR CLIENTES:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"EMPRESA", L"PERSONA", L"TODOS" });
			this->comboBox1->Location = System::Drawing::Point(762, 457);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(250, 35);
			this->comboBox1->TabIndex = 43;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(15, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(171, 43);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Clientes:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(985, 608);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 43);
			this->button3->TabIndex = 41;
			this->button3->Text = L"CANCELAR";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(871, 608);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 43);
			this->button2->TabIndex = 40;
			this->button2->Text = L"LIMPIAR";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(764, 554);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(216, 22);
			this->textBox2->TabIndex = 37;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(761, 522);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 20);
			this->label2->TabIndex = 36;
			this->label2->Text = L"CANTIDAD DE VISITAS:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(753, 111);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 22);
			this->textBox1->TabIndex = 35;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(750, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 20);
			this->label1->TabIndex = 34;
			this->label1->Text = L"ID:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(754, 608);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 43);
			this->button1->TabIndex = 33;
			this->button1->Text = L"BUSCAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearchClientInfoForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 79);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(700, 571);
			this->dataGridView1->TabIndex = 32;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SearchClientInfoForm::dataGridView1_CellClick);
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
			this->Column2->HeaderText = L"DNI:";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"RUC:";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"TIPO";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"VISITAS";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 75;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(752, 187);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(216, 22);
			this->textBox4->TabIndex = 47;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(749, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 20);
			this->label6->TabIndex = 46;
			this->label6->Text = L"DNI:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(754, 271);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(216, 22);
			this->textBox3->TabIndex = 49;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(751, 239);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 20);
			this->label3->TabIndex = 48;
			this->label3->Text = L"RUC:";
			// 
			// SearchClientInfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1180, 717);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"SearchClientInfoForm";
			this->Text = L"Filtro de clientes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Client_Info^ p;
		
		if (textBox1->Text->Trim() != "" && textBox4->Text->Trim() == "" && textBox3->Text->Trim() == "") {// busqueda por id
			p = Controller::QueryClient_InfotById(Convert::ToInt32(textBox1->Text->Trim()));
		}
		else if (textBox1->Text->Trim() == "" && textBox4->Text->Trim() != "" && textBox3->Text->Trim() == "") {// busqueda por dni
			p = Controller::QueryClient_InfoByDocNumber(textBox4->Text);
		}
		else if (textBox1->Text->Trim() == "" && textBox4->Text->Trim() != "" && textBox3->Text->Trim() != "") {// busqueda por ruc

		}
		else {
			MessageBox::Show("Solo llenar un campo");

		}
		
		//Se borran los datos del grid.
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add(gcnew array<String^> {
			"" + p->Id,
				p->DocNumber,
				p->RucNumber,
				Convert::ToString(p->Type),
				Convert::ToString(p->VisitQuantity)
		});
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Client_Info^>^ clientList;
	if (comboBox1->Text->Equals("PERSONA")) {
		if (textBox2->Text->Trim() != "") { // busqueda por cantidad de visitas

		}
		else {

		}
	}
	else if(comboBox1->Text->Equals("EMPRESA")) {
		if (textBox2->Text->Trim() != "") {// busqueda por cantidad de visitas

		}
		else {

		}

	}
	else {
		if (textBox2->Text->Trim() != "") {// busqueda por cantidad de visitas

		}
		else {
			clientList = Controller::QueryAllClient_Info();

		}
	}

	
	RefreshdataGridViewClient(clientList);
}
	   Void RefreshdataGridViewClient(List<Client_Info^>^ clientList) {
		   dataGridView1->Rows->Clear();
		   for (int i = 0; i < clientList->Count; i++) {
			   dataGridView1->Rows->Add(gcnew array<String^> {
				   "" + clientList[i]->Id,
					   clientList[i]->DocNumber,
					   clientList[i]->RucNumber,
					   Convert::ToString(clientList[i]->Type),
					   Convert::ToString(clientList[i]->VisitQuantity)
			   });
		   }
	   }
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
