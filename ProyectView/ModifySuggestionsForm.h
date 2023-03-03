#pragma once
#include"SearchModifySuggestionForm.h"

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

	/// <summary>
	/// Resumen de ModifySuggestionsForm
	/// </summary>
	public ref class ModifySuggestionsForm : public System::Windows::Forms::Form
	{
	private:
		Suggestions^ suggestions;
	public:
		ModifySuggestionsForm(void)
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
		~ModifySuggestionsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::TextBox^ ptplato;
	private: System::Windows::Forms::TextBox^ ptatencion;
	private: System::Windows::Forms::TextBox^ ptlocal;
	private: System::Windows::Forms::TextBox^ ptestado;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ptplato = (gcnew System::Windows::Forms::TextBox());
			this->ptatencion = (gcnew System::Windows::Forms::TextBox());
			this->ptlocal = (gcnew System::Windows::Forms::TextBox());
			this->ptestado = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 54);
			this->button1->TabIndex = 1;
			this->button1->Text = L"+ SUGERENCIA";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModifySuggestionsForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(256, 282);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(650, 111);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(256, 433);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(190, 41);
			this->button2->TabIndex = 3;
			this->button2->Text = L"RESUELTO";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(482, 433);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(249, 41);
			this->button3->TabIndex = 4;
			this->button3->Text = L"PONER EN OBSERVACIÓN";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(251, 237);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 27);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Comentario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(251, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"CLIENTE:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(260, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"pt. plato";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(432, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"pt. atencion";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(597, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"pt. local";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(742, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"estado";
			// 
			// ptplato
			// 
			this->ptplato->Location = System::Drawing::Point(256, 183);
			this->ptplato->Name = L"ptplato";
			this->ptplato->Size = System::Drawing::Size(105, 22);
			this->ptplato->TabIndex = 12;
			// 
			// ptatencion
			// 
			this->ptatencion->Location = System::Drawing::Point(437, 183);
			this->ptatencion->Name = L"ptatencion";
			this->ptatencion->Size = System::Drawing::Size(112, 22);
			this->ptatencion->TabIndex = 13;
			// 
			// ptlocal
			// 
			this->ptlocal->Location = System::Drawing::Point(602, 183);
			this->ptlocal->Name = L"ptlocal";
			this->ptlocal->Size = System::Drawing::Size(96, 22);
			this->ptlocal->TabIndex = 14;
			// 
			// ptestado
			// 
			this->ptestado->Location = System::Drawing::Point(747, 183);
			this->ptestado->Name = L"ptestado";
			this->ptestado->Size = System::Drawing::Size(159, 22);
			this->ptestado->TabIndex = 15;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(411, 31);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(556, 42);
			this->label16->TabIndex = 84;
			this->label16->Text = L"Sin usuario";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(766, 433);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 41);
			this->button4->TabIndex = 85;
			this->button4->Text = L"ELIMINAR";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 153);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(142, 25);
			this->label7->TabIndex = 86;
			this->label7->Text = L"Id sugerencia";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 203);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 25);
			this->label8->TabIndex = 87;
			this->label8->Text = L"Id ";
			// 
			// ModifySuggestionsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 491);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->ptestado);
			this->Controls->Add(this->ptlocal);
			this->Controls->Add(this->ptatencion);
			this->Controls->Add(this->ptplato);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"ModifySuggestionsForm";
			this->Text = L"Resolver sugerencias";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SearchModifySuggestionForm^ searchModifySuggestionForm = gcnew SearchModifySuggestionForm();
		searchModifySuggestionForm->Type = 'S';
		searchModifySuggestionForm->modifysugesstionForm = this;

		searchModifySuggestionForm->ShowDialog();
	}
		   public:  Void SetSuggestion(Suggestions^ cust) {
			   this->suggestions = cust;
			   textBox1->Text = cust->Comments;
			   label16->Text= cust->Client_Info->DocNumber  + " - " +
				   cust->Client_Info->Name + " " + cust->Client_Info->LastName;
			   ptplato->Text = Convert::ToString(cust->FoodScore);
			   ptatencion->Text = Convert::ToString(cust->AttentionScore);
			   ptlocal->Text = Convert::ToString(cust->VenueScore);
			   ptestado->Text = cust->Estado;
			   label8->Text = Convert::ToString(cust->Id);
			   
		   }

};
}
