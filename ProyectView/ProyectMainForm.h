#pragma once
#include "MealsForm.h";
#include "UserForm.h";
#include "LoginForm.h";
#include "Client_InfoForm.h";
#include "SaleForm.h";
#include "MealsGraphicsForm.h"
#include "TableForm.h";

namespace ProyectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




	/// <summary>
	/// Resumen de ProyectMainForm
	/// </summary>
	public ref class ProyectMainForm : public System::Windows::Forms::Form
	{
	public:
		static User^ user;
		ProyectMainForm(void)
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
		~ProyectMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ platosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ empleadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ realizarVentasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gráficosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mesasToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->platosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->empleadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarVentasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gráficosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mesasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->mantenimientoToolStripMenuItem, this->operacionesToolStripMenuItem, this->reportesToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(6, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(1386, 35);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(88, 29);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(147, 34);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->platosToolStripMenuItem,
					this->clientesToolStripMenuItem, this->empleadosToolStripMenuItem, this->mesasToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(148, 29);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			this->mantenimientoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::mantenimientoToolStripMenuItem_Click);
			// 
			// platosToolStripMenuItem
			// 
			this->platosToolStripMenuItem->Name = L"platosToolStripMenuItem";
			this->platosToolStripMenuItem->Size = System::Drawing::Size(276, 34);
			this->platosToolStripMenuItem->Text = L"Platos";
			this->platosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::platosToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(276, 34);
			this->clientesToolStripMenuItem->Text = L"Informacion Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::clientesToolStripMenuItem_Click);
			// 
			// empleadosToolStripMenuItem
			// 
			this->empleadosToolStripMenuItem->Name = L"empleadosToolStripMenuItem";
			this->empleadosToolStripMenuItem->Size = System::Drawing::Size(276, 34);
			this->empleadosToolStripMenuItem->Text = L"Empleados";
			this->empleadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::empleadosToolStripMenuItem_Click);
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->realizarVentasToolStripMenuItem });
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(127, 29);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// realizarVentasToolStripMenuItem
			// 
			this->realizarVentasToolStripMenuItem->Name = L"realizarVentasToolStripMenuItem";
			this->realizarVentasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->realizarVentasToolStripMenuItem->Text = L"Realizar Ventas";
			this->realizarVentasToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::realizarVentasToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->gráficosToolStripMenuItem,
					this->reporteToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(98, 29);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// gráficosToolStripMenuItem
			// 
			this->gráficosToolStripMenuItem->Name = L"gráficosToolStripMenuItem";
			this->gráficosToolStripMenuItem->Size = System::Drawing::Size(178, 34);
			this->gráficosToolStripMenuItem->Text = L"Gráficos";
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(178, 34);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			this->reporteToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::reporteToolStripMenuItem_Click);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(79, 29);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// mesasToolStripMenuItem
			// 
			this->mesasToolStripMenuItem->Name = L"mesasToolStripMenuItem";
			this->mesasToolStripMenuItem->Size = System::Drawing::Size(276, 34);
			this->mesasToolStripMenuItem->Text = L"Mesas";
			this->mesasToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::mesasToolStripMenuItem_Click);
			// 
			// ProyectMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1386, 520);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ProyectMainForm";
			this->Text = L"Sistema de ventas de Menu";
			this->Load += gcnew System::EventHandler(this, &ProyectMainForm::ProyectMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Client_InfoForm^ client_Info = gcnew Client_InfoForm();
	client_Info->MdiParent = this;
	client_Info->Show();

}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void platosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MealsForm^ mealsForm = gcnew MealsForm();

	mealsForm-> MdiParent = this;
	mealsForm->Show();
}
private: System::Void ProyectMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ loginForm = gcnew LoginForm();
	loginForm->ShowDialog();
}
private: System::Void empleadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	UserForm^ productForm = gcnew UserForm();
	productForm->MdiParent = this;
	productForm->Show();

}

private: System::Void realizarVentasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaleForm^ saleForm = gcnew SaleForm();
	saleForm->MdiParent = this;
	saleForm->Show();
}
private: System::Void mantenimientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void reporteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MealsGraphicsForm^ graphicForm = gcnew MealsGraphicsForm();
	graphicForm-> MdiParent = this;
	graphicForm-> Show();
}
private: System::Void mesasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	TableForm^ tableForm = gcnew TableForm();
	tableForm-> MdiParent = this;
	tableForm->Show();
}
};
}
