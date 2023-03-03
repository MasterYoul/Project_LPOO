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
	/// Resumen de FiltrarPedidosForm
	/// </summary>
	public ref class FiltrarPedidosForm : public System::Windows::Forms::Form
	{
	public:
		FiltrarPedidosForm(void)
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
		~FiltrarPedidosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridPedidos;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdSaleDetail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ QuantitySaleDetail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MealsSaleDetail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ checkBoxColumn;
	private: System::Windows::Forms::Label^ lblClientData;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			this->dataGridPedidos = (gcnew System::Windows::Forms::DataGridView());
			this->IdSaleDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuantitySaleDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MealsSaleDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->checkBoxColumn = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->lblClientData = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridPedidos))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridPedidos
			// 
			this->dataGridPedidos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridPedidos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->IdSaleDetail,
					this->QuantitySaleDetail, this->MealsSaleDetail, this->Estado, this->checkBoxColumn
			});
			this->dataGridPedidos->Location = System::Drawing::Point(445, 63);
			this->dataGridPedidos->Name = L"dataGridPedidos";
			this->dataGridPedidos->RowHeadersWidth = 51;
			this->dataGridPedidos->RowTemplate->Height = 24;
			this->dataGridPedidos->Size = System::Drawing::Size(906, 543);
			this->dataGridPedidos->TabIndex = 4;
			// 
			// IdSaleDetail
			// 
			this->IdSaleDetail->HeaderText = L"Id";
			this->IdSaleDetail->MinimumWidth = 6;
			this->IdSaleDetail->Name = L"IdSaleDetail";
			this->IdSaleDetail->Width = 125;
			// 
			// QuantitySaleDetail
			// 
			this->QuantitySaleDetail->HeaderText = L"Cantidad";
			this->QuantitySaleDetail->MinimumWidth = 6;
			this->QuantitySaleDetail->Name = L"QuantitySaleDetail";
			this->QuantitySaleDetail->Width = 125;
			// 
			// MealsSaleDetail
			// 
			this->MealsSaleDetail->HeaderText = L"Plato";
			this->MealsSaleDetail->MinimumWidth = 6;
			this->MealsSaleDetail->Name = L"MealsSaleDetail";
			this->MealsSaleDetail->Width = 125;
			// 
			// Estado
			// 
			this->Estado->HeaderText = L"Estado";
			this->Estado->MinimumWidth = 6;
			this->Estado->Name = L"Estado";
			this->Estado->Width = 125;
			// 
			// checkBoxColumn
			// 
			this->checkBoxColumn->HeaderText = L"CheckBox";
			this->checkBoxColumn->MinimumWidth = 6;
			this->checkBoxColumn->Name = L"checkBoxColumn";
			this->checkBoxColumn->Width = 125;
			// 
			// lblClientData
			// 
			this->lblClientData->Location = System::Drawing::Point(44, 394);
			this->lblClientData->Name = L"lblClientData";
			this->lblClientData->Size = System::Drawing::Size(215, 25);
			this->lblClientData->TabIndex = 120;
			this->lblClientData->Text = L"Sin cliente";
			this->lblClientData->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(285, 356);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 55);
			this->button5->TabIndex = 118;
			this->button5->Text = L"BUSCAR Plato";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(39, 219);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 20);
			this->label6->TabIndex = 116;
			this->label6->Text = L"Cantidad";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(41, 141);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 43);
			this->button4->TabIndex = 115;
			this->button4->Text = L"BUSCAR";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FiltrarPedidosForm::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(54, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(210, 25);
			this->label4->TabIndex = 114;
			this->label4->Text = L"BUSCAR PEDIDOS:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(274, 530);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 43);
			this->button3->TabIndex = 113;
			this->button3->Text = L"CANCELAR";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 530);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 43);
			this->button2->TabIndex = 112;
			this->button2->Text = L"LIMPIAR";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(39, 432);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 20);
			this->label3->TabIndex = 110;
			this->label3->Text = L"Estado:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(41, 356);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(216, 22);
			this->textBox2->TabIndex = 109;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(39, 319);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 20);
			this->label2->TabIndex = 108;
			this->label2->Text = L"Plato:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(40, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 22);
			this->textBox1->TabIndex = 107;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(42, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 20);
			this->label1->TabIndex = 106;
			this->label1->Text = L"ID:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(43, 530);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 43);
			this->button1->TabIndex = 105;
			this->button1->Text = L"BUSCAR";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(41, 272);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(216, 22);
			this->textBox4->TabIndex = 122;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(40, 469);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(205, 24);
			this->comboBox1->TabIndex = 123;
			// 
			// FiltrarPedidosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1453, 674);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->lblClientData);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridPedidos);
			this->Name = L"FiltrarPedidosForm";
			this->Text = L"FiltrarPedidosForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridPedidos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//Búsqueda de mesa por el código ingresado por el usuario
		SaleDetail^ p = Controller::QueryAllSaleDetailById(Convert::ToInt32(textBox1->Text->Trim()));
		//Se borran los datos del grid.
		dataGridPedidos->Rows->Clear();
		dataGridPedidos->Rows->Add(gcnew array<String^> {
			"" + p->Id,
				Convert::ToString(p->Quantity),
				p->Meals->Name,
				p->Estado
		});
	}
};
}
