#pragma once

namespace ProyectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SearchVentasForm
	/// </summary>
	public ref class SearchVentasForm : public System::Windows::Forms::Form
	{
	public:
		SearchVentasForm(void)
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
		~SearchVentasForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label7;
	protected:
	private: System::Windows::Forms::Label^ lblClientData;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total;

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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblClientData = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(67, 551);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(215, 25);
			this->label7->TabIndex = 104;
			this->label7->Text = L"Sin cliente";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblClientData
			// 
			this->lblClientData->Location = System::Drawing::Point(68, 441);
			this->lblClientData->Name = L"lblClientData";
			this->lblClientData->Size = System::Drawing::Size(215, 25);
			this->lblClientData->TabIndex = 103;
			this->lblClientData->Text = L"Sin cliente";
			this->lblClientData->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(309, 520);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 56);
			this->button6->TabIndex = 102;
			this->button6->Text = L"BUSCAR Mesero";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(309, 403);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 55);
			this->button5->TabIndex = 101;
			this->button5->Text = L"BUSCAR Cliente";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(67, 314);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 100;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(63, 266);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 20);
			this->label6->TabIndex = 99;
			this->label6->Text = L"Fecha";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(67, 173);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 43);
			this->button4->TabIndex = 98;
			this->button4->Text = L"BUSCAR";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(80, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(202, 25);
			this->label4->TabIndex = 97;
			this->label4->Text = L"BUSCAR VENTAS:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(428, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 43);
			this->label5->TabIndex = 96;
			this->label5->Text = L"VENTAS";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(284, 648);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 43);
			this->button3->TabIndex = 95;
			this->button3->Text = L"CANCELAR";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(170, 648);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 43);
			this->button2->TabIndex = 94;
			this->button2->Text = L"LIMPIAR";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(66, 515);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(216, 22);
			this->textBox3->TabIndex = 93;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(63, 479);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 20);
			this->label3->TabIndex = 92;
			this->label3->Text = L"Mesero:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(65, 403);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(216, 22);
			this->textBox2->TabIndex = 91;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(63, 366);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 20);
			this->label2->TabIndex = 90;
			this->label2->Text = L"Cliente:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(66, 135);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 22);
			this->textBox1->TabIndex = 89;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(63, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 20);
			this->label1->TabIndex = 88;
			this->label1->Text = L"ID:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(53, 648);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 43);
			this->button1->TabIndex = 87;
			this->button1->Text = L"BUSCAR";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Fecha, this->Cliente, this->Column4, this->Column5, this->Total
			});
			this->dataGridView1->Location = System::Drawing::Point(436, 118);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(705, 571);
			this->dataGridView1->TabIndex = 86;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Fecha
			// 
			this->Fecha->HeaderText = L"Fecha";
			this->Fecha->MinimumWidth = 6;
			this->Fecha->Name = L"Fecha";
			this->Fecha->Width = 50;
			// 
			// Cliente
			// 
			this->Cliente->HeaderText = L"Cliente";
			this->Cliente->MinimumWidth = 6;
			this->Cliente->Name = L"Cliente";
			this->Cliente->Width = 80;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Mesero";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Descripcion";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->MinimumWidth = 6;
			this->Total->Name = L"Total";
			this->Total->Width = 125;
			// 
			// SearchVentasForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1174, 731);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lblClientData);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
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
			this->Name = L"SearchVentasForm";
			this->Text = L"SearchVentasForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
