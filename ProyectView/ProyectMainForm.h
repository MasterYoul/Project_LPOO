#pragma once
#include "MealsForm.h";
#include "UserForm.h";
#include "LoginForm.h";

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
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->mantenimientoToolStripMenuItem, this->operacionesToolStripMenuItem, this->reportesToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1232, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->platosToolStripMenuItem,
					this->clientesToolStripMenuItem, this->empleadosToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			this->mantenimientoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::mantenimientoToolStripMenuItem_Click);
			// 
			// platosToolStripMenuItem
			// 
			this->platosToolStripMenuItem->Name = L"platosToolStripMenuItem";
			this->platosToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->platosToolStripMenuItem->Text = L"Platos";
			this->platosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::platosToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->clientesToolStripMenuItem->Text = L"Informacion Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::clientesToolStripMenuItem_Click);
			// 
			// empleadosToolStripMenuItem
			// 
			this->empleadosToolStripMenuItem->Name = L"empleadosToolStripMenuItem";
			this->empleadosToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->empleadosToolStripMenuItem->Text = L"Empleados";
			this->empleadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::empleadosToolStripMenuItem_Click);
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->realizarVentasToolStripMenuItem });
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(106, 24);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// realizarVentasToolStripMenuItem
			// 
			this->realizarVentasToolStripMenuItem->Name = L"realizarVentasToolStripMenuItem";
			this->realizarVentasToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->realizarVentasToolStripMenuItem->Text = L"Realizar Ventas";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// ProyectMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1232, 416);
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
private: System::Void mantenimientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
