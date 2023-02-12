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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ txtTableId;
	private: System::Windows::Forms::TextBox^ txtTableDisponibility;






	private: System::Windows::Forms::TextBox^ txtTableFloor;

	private: System::Windows::Forms::TextBox^ txtTableCapacity;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::TextBox^ txtTableStatus;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtTableTimeReserved;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnModify;
	private: System::Windows::Forms::Button^ btnClear;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtTableId = (gcnew System::Windows::Forms::TextBox());
			this->txtTableDisponibility = (gcnew System::Windows::Forms::TextBox());
			this->txtTableFloor = (gcnew System::Windows::Forms::TextBox());
			this->txtTableCapacity = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtTableStatus = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtTableTimeReserved = (gcnew System::Windows::Forms::TextBox());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnModify = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
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
			this->dataGridView1->Location = System::Drawing::Point(42, 374);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(993, 477);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Capacidad";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Piso";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
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
			this->txtTableId->Location = System::Drawing::Point(187, 28);
			this->txtTableId->Name = L"txtTableId";
			this->txtTableId->Size = System::Drawing::Size(100, 26);
			this->txtTableId->TabIndex = 1;
			// 
			// txtTableDisponibility
			// 
			this->txtTableDisponibility->Location = System::Drawing::Point(721, 25);
			this->txtTableDisponibility->Name = L"txtTableDisponibility";
			this->txtTableDisponibility->Size = System::Drawing::Size(116, 26);
			this->txtTableDisponibility->TabIndex = 2;
			// 
			// txtTableFloor
			// 
			this->txtTableFloor->Location = System::Drawing::Point(187, 137);
			this->txtTableFloor->Name = L"txtTableFloor";
			this->txtTableFloor->Size = System::Drawing::Size(30, 26);
			this->txtTableFloor->TabIndex = 3;
			// 
			// txtTableCapacity
			// 
			this->txtTableCapacity->Location = System::Drawing::Point(187, 85);
			this->txtTableCapacity->Name = L"txtTableCapacity";
			this->txtTableCapacity->Size = System::Drawing::Size(100, 26);
			this->txtTableCapacity->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(147, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 22);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Id: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(583, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 22);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Disponibilidad: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(126, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 22);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Piso: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(75, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 22);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Capacidad: ";
			// 
			// txtTableStatus
			// 
			this->txtTableStatus->Location = System::Drawing::Point(721, 83);
			this->txtTableStatus->Name = L"txtTableStatus";
			this->txtTableStatus->Size = System::Drawing::Size(116, 26);
			this->txtTableStatus->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(547, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 22);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Estado de Reserva:";
			
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(151, 256);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(136, 55);
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
			this->label6->Location = System::Drawing::Point(545, 138);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 22);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Tiempo de reserva: ";
			// 
			// txtTableTimeReserved
			// 
			this->txtTableTimeReserved->Location = System::Drawing::Point(721, 137);
			this->txtTableTimeReserved->Name = L"txtTableTimeReserved";
			this->txtTableTimeReserved->Size = System::Drawing::Size(188, 26);
			this->txtTableTimeReserved->TabIndex = 12;
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(355, 256);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(139, 55);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnModify
			// 
			this->btnModify->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModify->Location = System::Drawing::Point(577, 256);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(138, 55);
			this->btnModify->TabIndex = 15;
			this->btnModify->Text = L"Modificar";
			this->btnModify->UseVisualStyleBackColor = true;
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(795, 256);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(139, 55);
			this->btnClear->TabIndex = 16;
			this->btnClear->Text = L"Limpiar";
			this->btnClear->UseVisualStyleBackColor = true;
			// 
			// TableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1085, 882);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnModify);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtTableTimeReserved);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtTableStatus);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtTableCapacity);
			this->Controls->Add(this->txtTableFloor);
			this->Controls->Add(this->txtTableDisponibility);
			this->Controls->Add(this->txtTableId);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"TableForm";
			this->Text = L"Mantenimiento de Mesas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
//private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			//this->Close();
		//}
	
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	TableDetail^ table = gcnew TableDetail();


	table->Id = Convert::ToInt32(txtTableId->Text);
	table->Floor = Convert::ToInt32(txtTableFloor->Text);
	table->TableCapacity = Convert::ToInt32(txtTableCapacity->Text);
	table->Disponibility = Convert :: ToChar(txtTableDisponibility->Text);
	table->Reserved = Convert::ToChar(txtTableStatus->Text);
	table->TimeReserv = txtTableTimeReserved->Text;

	Controller::AddTableDetail(table);

}

};
}
