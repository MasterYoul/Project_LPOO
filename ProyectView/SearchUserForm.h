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
	/// Resumen de SearchUserForm
	/// </summary>
	public ref class SearchUserForm : public System::Windows::Forms::Form
	{
	public:
		SearchUserForm(void)
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
		~SearchUserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox4;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NOMBRE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Label^ label7;

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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NOMBRE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(897, 254);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(242, 26);
			this->textBox4->TabIndex = 65;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(893, 214);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 25);
			this->label6->TabIndex = 64;
			this->label6->Text = L"DNI:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1172, 185);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 54);
			this->button4->TabIndex = 63;
			this->button4->Text = L"BUSCAR";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SearchUserForm::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(889, 466);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(218, 32);
			this->label4->TabIndex = 62;
			this->label4->Text = L"BUSCAR POR:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Mesero", L"Cocinero", L"Cajero", L"Administrador" });
			this->comboBox1->Location = System::Drawing::Point(895, 566);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(281, 30);
			this->comboBox1->TabIndex = 61;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(48, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(215, 50);
			this->label5->TabIndex = 60;
			this->label5->Text = L"Usuarios:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(999, 346);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 54);
			this->button2->TabIndex = 58;
			this->button2->Text = L"LIMPIAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SearchUserForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(895, 669);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(281, 26);
			this->textBox3->TabIndex = 57;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(892, 628);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 25);
			this->label3->TabIndex = 56;
			this->label3->Text = L"Nombre:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(897, 160);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(242, 26);
			this->textBox1->TabIndex = 53;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(893, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 25);
			this->label1->TabIndex = 52;
			this->label1->Text = L"ID:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(999, 737);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 54);
			this->button1->TabIndex = 51;
			this->button1->Text = L"BUSCAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearchUserForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->NOMBRE, this->DNI, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(45, 120);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(788, 714);
			this->dataGridView1->TabIndex = 50;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// NOMBRE
			// 
			this->NOMBRE->HeaderText = L"NOMBRE";
			this->NOMBRE->MinimumWidth = 6;
			this->NOMBRE->Name = L"NOMBRE";
			this->NOMBRE->Width = 50;
			// 
			// DNI
			// 
			this->DNI->HeaderText = L"DNI";
			this->DNI->MinimumWidth = 6;
			this->DNI->Name = L"DNI";
			this->DNI->Width = 80;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"DIRECCION";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"SALARIO";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(890, 521);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(175, 25);
			this->label7->TabIndex = 66;
			this->label7->Text = L"Tipo de empleado:";
			// 
			// SearchUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1296, 874);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"SearchUserForm";
			this->Text = L"Filtro Usuarios";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		User^ p;
		try {
			if ((textBox1->Text->Trim() == "") && (textBox4->Text->Trim() == "")) {
				MessageBox::Show("Se necesita un ID o un DNI.");
				return;
			}
			if (textBox1->Text->Trim() != "") {

				p = Controller::QueryUsertById(Convert::ToInt32(textBox1->Text->Trim()));
				//Se borran los datos del grid.
				dataGridView1->Rows->Clear();
				dataGridView1->Rows->Add(gcnew array<String^> {
					"" + p->Id,
						p->Name,
						p->DocNumber,
						p->Adress,
						Convert::ToString(p->Salary)
				});



			}
			else if (textBox4->Text->Trim() != "") {
				//Búsqueda de usuario por su id
				p = Controller::QueryUserbyDni(textBox4->Text->Trim());
				//Se borran los datos del grid.
				dataGridView1->Rows->Clear();
				dataGridView1->Rows->Add(gcnew array<String^> {
					"" + p->Id,
						p->Name,
						p->DocNumber,
						p->Adress,
						Convert::ToString(p->Salary)
				});
			}
		}
		catch (Exception^ ex) {
			throw ex;
		}
		finally {

			CleanControls();
		}
		
	}

		   void CleanControls() {

			   textBox1->Clear();
			   textBox3->Clear();
			   textBox4->Clear();
			   comboBox1->ResetText();

		   }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		if ((comboBox1->Text->Trim() == "") && (textBox3->Text->Trim() == "")) {
			MessageBox::Show("Elija un TIPO o escriba un NOMBRE");
			return;
		}
		if (comboBox1->Text->Trim() != "") {
			List<User^>^ userlists = Controller::QueryAllUser();
			for (int i = 0; i < userlists->Count; i++) {
				if (userlists[i]->Type == comboBox1->Text->Trim()) {
					dataGridView1->Rows->Clear();
					dataGridView1->Rows->Add(gcnew array<String^> {
						"" + userlists[i]->Id,
							userlists[i]->Name,
							userlists[i]->DocNumber,
							userlists[i]->Adress,
							Convert::ToString(userlists[i]->Salary)
					});

				}
			}
			
		}
		if (textBox3->Text->Trim() != "") {
			List<User^>^ userlists = Controller::QueryAllUser();
			for (int i = 0; i < userlists->Count; i++) {
				if (userlists[i]->Name == textBox3->Text->Trim()) {
					dataGridView1->Rows->Clear();
					dataGridView1->Rows->Add(gcnew array<String^> {
						"" + userlists[i]->Id,
							userlists[i]->Name,
							userlists[i]->DocNumber,
							userlists[i]->Adress,
							Convert::ToString(userlists[i]->Salary)
					});

				}

			}
		}	

		
	}
	catch (Exception^ ex) {


	}
	finally {

		void CleanControls();

	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	CleanControls();
	dataGridView1->Rows->Clear();
	comboBox1->ResetText();

}
};
}
