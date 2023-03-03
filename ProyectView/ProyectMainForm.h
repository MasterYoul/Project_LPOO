#pragma once
#include "MealsForm.h";
#include "UserForm.h";
#include "LoginForm.h";
#include "Client_InfoForm.h";
#include "SaleForm.h";
#include "MealsGraphicsForm.h";
#include "MostMealsGraphics.h";
#include "TableForm.h";
#include "PedidosForm.h";
#include "SearchTableDetailForm.h":
#include "SearchClientInfoForm.h";
#include "SearchPlatos.h";
#include "SearchUserForm.h";
#include "SearchModifySuggestionForm.h";
#include "SearchVentasForm.h";
#include "UserInformation.h";
#include "ChatForm.h";
#include "ModifySuggestionsForm.h";
#include "FiltrarPedidosForm.h"

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
	private: 
		Thread^ myThread;
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

	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mesasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verPedidosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDePlatosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ filtroDePlatosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeClientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ filtroDeClientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeEmpleadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ filtroDeEmpleadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantemientoDeMesasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ filtroDeMesasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ realizarVentasToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ filtrarVentasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarPedidosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ filtrarPedidosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cambiarDeUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sugerenciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarSugerenciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ filtrarSugerenciasToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ platosToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ miInformaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ chatToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProyectMainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cambiarDeUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miInformaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->platosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDePlatosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filtroDePlatosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeClientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filtroDeClientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->empleadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeEmpleadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filtroDeEmpleadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mesasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantemientoDeMesasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filtroDeMesasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarVentasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarVentasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filtrarVentasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verPedidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarPedidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filtrarPedidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sugerenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarSugerenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filtrarSugerenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->platosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1271, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->salirToolStripMenuItem,
					this->cambiarDeUsuarioToolStripMenuItem, this->miInformaciónToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->archivoToolStripMenuItem->Text = L"Inicio";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::salirToolStripMenuItem_Click);
			// 
			// cambiarDeUsuarioToolStripMenuItem
			// 
			this->cambiarDeUsuarioToolStripMenuItem->Name = L"cambiarDeUsuarioToolStripMenuItem";
			this->cambiarDeUsuarioToolStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->cambiarDeUsuarioToolStripMenuItem->Text = L"Cambiar de Usuario";
			this->cambiarDeUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::cambiarDeUsuarioToolStripMenuItem_Click);
			// 
			// miInformaciónToolStripMenuItem
			// 
			this->miInformaciónToolStripMenuItem->Name = L"miInformaciónToolStripMenuItem";
			this->miInformaciónToolStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->miInformaciónToolStripMenuItem->Text = L"Mi Información";
			this->miInformaciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::miInformaciónToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->platosToolStripMenuItem,
					this->clientesToolStripMenuItem, this->empleadosToolStripMenuItem, this->mesasToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			this->mantenimientoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::mantenimientoToolStripMenuItem_Click);
			// 
			// platosToolStripMenuItem
			// 
			this->platosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mantenimientoDePlatosToolStripMenuItem,
					this->filtroDePlatosToolStripMenuItem
			});
			this->platosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"platosToolStripMenuItem.Image")));
			this->platosToolStripMenuItem->Name = L"platosToolStripMenuItem";
			this->platosToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->platosToolStripMenuItem->Text = L"Platos";
			this->platosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::platosToolStripMenuItem_Click);
			// 
			// mantenimientoDePlatosToolStripMenuItem
			// 
			this->mantenimientoDePlatosToolStripMenuItem->Name = L"mantenimientoDePlatosToolStripMenuItem";
			this->mantenimientoDePlatosToolStripMenuItem->Size = System::Drawing::Size(258, 26);
			this->mantenimientoDePlatosToolStripMenuItem->Text = L"Mantenimiento de Platos";
			this->mantenimientoDePlatosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::mantenimientoDePlatosToolStripMenuItem_Click);
			// 
			// filtroDePlatosToolStripMenuItem
			// 
			this->filtroDePlatosToolStripMenuItem->Name = L"filtroDePlatosToolStripMenuItem";
			this->filtroDePlatosToolStripMenuItem->Size = System::Drawing::Size(258, 26);
			this->filtroDePlatosToolStripMenuItem->Text = L"Filtro de Platos";
			this->filtroDePlatosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::filtroDePlatosToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mantenimientoDeClientesToolStripMenuItem,
					this->filtroDeClientesToolStripMenuItem
			});
			this->clientesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clientesToolStripMenuItem.Image")));
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::clientesToolStripMenuItem_Click);
			// 
			// mantenimientoDeClientesToolStripMenuItem
			// 
			this->mantenimientoDeClientesToolStripMenuItem->Name = L"mantenimientoDeClientesToolStripMenuItem";
			this->mantenimientoDeClientesToolStripMenuItem->Size = System::Drawing::Size(270, 26);
			this->mantenimientoDeClientesToolStripMenuItem->Text = L"Mantenimiento de Clientes";
			this->mantenimientoDeClientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::mantenimientoDeClientesToolStripMenuItem_Click);
			// 
			// filtroDeClientesToolStripMenuItem
			// 
			this->filtroDeClientesToolStripMenuItem->Name = L"filtroDeClientesToolStripMenuItem";
			this->filtroDeClientesToolStripMenuItem->Size = System::Drawing::Size(270, 26);
			this->filtroDeClientesToolStripMenuItem->Text = L"Filtro de Clientes";
			this->filtroDeClientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::filtroDeClientesToolStripMenuItem_Click);
			// 
			// empleadosToolStripMenuItem
			// 
			this->empleadosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mantenimientoDeEmpleadosToolStripMenuItem,
					this->filtroDeEmpleadosToolStripMenuItem
			});
			this->empleadosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"empleadosToolStripMenuItem.Image")));
			this->empleadosToolStripMenuItem->Name = L"empleadosToolStripMenuItem";
			this->empleadosToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->empleadosToolStripMenuItem->Text = L"Empleados";
			this->empleadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::empleadosToolStripMenuItem_Click);
			// 
			// mantenimientoDeEmpleadosToolStripMenuItem
			// 
			this->mantenimientoDeEmpleadosToolStripMenuItem->Name = L"mantenimientoDeEmpleadosToolStripMenuItem";
			this->mantenimientoDeEmpleadosToolStripMenuItem->Size = System::Drawing::Size(292, 26);
			this->mantenimientoDeEmpleadosToolStripMenuItem->Text = L"Mantenimiento de Empleados";
			this->mantenimientoDeEmpleadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::mantenimientoDeEmpleadosToolStripMenuItem_Click);
			// 
			// filtroDeEmpleadosToolStripMenuItem
			// 
			this->filtroDeEmpleadosToolStripMenuItem->Name = L"filtroDeEmpleadosToolStripMenuItem";
			this->filtroDeEmpleadosToolStripMenuItem->Size = System::Drawing::Size(292, 26);
			this->filtroDeEmpleadosToolStripMenuItem->Text = L"Filtro de Empleados";
			this->filtroDeEmpleadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::filtroDeEmpleadosToolStripMenuItem_Click);
			// 
			// mesasToolStripMenuItem
			// 
			this->mesasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mantemientoDeMesasToolStripMenuItem,
					this->filtroDeMesasToolStripMenuItem
			});
			this->mesasToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mesasToolStripMenuItem.Image")));
			this->mesasToolStripMenuItem->Name = L"mesasToolStripMenuItem";
			this->mesasToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->mesasToolStripMenuItem->Text = L"Mesas";
			this->mesasToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::mesasToolStripMenuItem_Click);
			// 
			// mantemientoDeMesasToolStripMenuItem
			// 
			this->mantemientoDeMesasToolStripMenuItem->Name = L"mantemientoDeMesasToolStripMenuItem";
			this->mantemientoDeMesasToolStripMenuItem->Size = System::Drawing::Size(247, 26);
			this->mantemientoDeMesasToolStripMenuItem->Text = L"Mantemiento de Mesas";
			this->mantemientoDeMesasToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::mantemientoDeMesasToolStripMenuItem_Click);
			// 
			// filtroDeMesasToolStripMenuItem
			// 
			this->filtroDeMesasToolStripMenuItem->Name = L"filtroDeMesasToolStripMenuItem";
			this->filtroDeMesasToolStripMenuItem->Size = System::Drawing::Size(247, 26);
			this->filtroDeMesasToolStripMenuItem->Text = L"Filtro de Mesas";
			this->filtroDeMesasToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::filtroDeMesasToolStripMenuItem_Click);
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->realizarVentasToolStripMenuItem,
					this->verPedidosToolStripMenuItem, this->sugerenciasToolStripMenuItem
			});
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(106, 24);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// realizarVentasToolStripMenuItem
			// 
			this->realizarVentasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->realizarVentasToolStripMenuItem1,
					this->filtrarVentasToolStripMenuItem
			});
			this->realizarVentasToolStripMenuItem->Name = L"realizarVentasToolStripMenuItem";
			this->realizarVentasToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->realizarVentasToolStripMenuItem->Text = L"Ventas";
			this->realizarVentasToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::realizarVentasToolStripMenuItem_Click);
			// 
			// realizarVentasToolStripMenuItem1
			// 
			this->realizarVentasToolStripMenuItem1->Name = L"realizarVentasToolStripMenuItem1";
			this->realizarVentasToolStripMenuItem1->Size = System::Drawing::Size(192, 26);
			this->realizarVentasToolStripMenuItem1->Text = L"Realizar Ventas";
			this->realizarVentasToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ProyectMainForm::realizarVentasToolStripMenuItem1_Click);
			// 
			// filtrarVentasToolStripMenuItem
			// 
			this->filtrarVentasToolStripMenuItem->Name = L"filtrarVentasToolStripMenuItem";
			this->filtrarVentasToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->filtrarVentasToolStripMenuItem->Text = L"Filtrar Ventas";
			this->filtrarVentasToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::filtrarVentasToolStripMenuItem_Click);
			// 
			// verPedidosToolStripMenuItem
			// 
			this->verPedidosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->modificarPedidosToolStripMenuItem,
					this->filtrarPedidosToolStripMenuItem
			});
			this->verPedidosToolStripMenuItem->Name = L"verPedidosToolStripMenuItem";
			this->verPedidosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->verPedidosToolStripMenuItem->Text = L"Pedidos";
			this->verPedidosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::verPedidosToolStripMenuItem_Click);
			// 
			// modificarPedidosToolStripMenuItem
			// 
			this->modificarPedidosToolStripMenuItem->Name = L"modificarPedidosToolStripMenuItem";
			this->modificarPedidosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->modificarPedidosToolStripMenuItem->Text = L"Modificar pedidos";
			this->modificarPedidosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::modificarPedidosToolStripMenuItem_Click);
			// 
			// filtrarPedidosToolStripMenuItem
			// 
			this->filtrarPedidosToolStripMenuItem->Name = L"filtrarPedidosToolStripMenuItem";
			this->filtrarPedidosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->filtrarPedidosToolStripMenuItem->Text = L"Filtrar Pedidos";
			this->filtrarPedidosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::filtrarPedidosToolStripMenuItem_Click);
			// 
			// sugerenciasToolStripMenuItem
			// 
			this->sugerenciasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->modificarSugerenciasToolStripMenuItem,
					this->filtrarSugerenciasToolStripMenuItem
			});
			this->sugerenciasToolStripMenuItem->Name = L"sugerenciasToolStripMenuItem";
			this->sugerenciasToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->sugerenciasToolStripMenuItem->Text = L"Sugerencias";
			// 
			// modificarSugerenciasToolStripMenuItem
			// 
			this->modificarSugerenciasToolStripMenuItem->Name = L"modificarSugerenciasToolStripMenuItem";
			this->modificarSugerenciasToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->modificarSugerenciasToolStripMenuItem->Text = L"Modificar Sugerencias";
			this->modificarSugerenciasToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::modificarSugerenciasToolStripMenuItem_Click);
			// 
			// filtrarSugerenciasToolStripMenuItem
			// 
			this->filtrarSugerenciasToolStripMenuItem->Name = L"filtrarSugerenciasToolStripMenuItem";
			this->filtrarSugerenciasToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->filtrarSugerenciasToolStripMenuItem->Text = L"Filtrar Sugerencias";
			this->filtrarSugerenciasToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::filtrarSugerenciasToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->reporteToolStripMenuItem,
					this->platosToolStripMenuItem1
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->reporteToolStripMenuItem->Text = L"Ventas";
			this->reporteToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::reporteToolStripMenuItem_Click);
			// 
			// platosToolStripMenuItem1
			// 
			this->platosToolStripMenuItem1->Name = L"platosToolStripMenuItem1";
			this->platosToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->platosToolStripMenuItem1->Text = L"Platos";
			this->platosToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ProyectMainForm::platosToolStripMenuItem1_Click);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->chatToolStripMenuItem });
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			this->ayudaToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::ayudaToolStripMenuItem_Click);
			// 
			// chatToolStripMenuItem
			// 
			this->chatToolStripMenuItem->Name = L"chatToolStripMenuItem";
			this->chatToolStripMenuItem->Size = System::Drawing::Size(122, 26);
			this->chatToolStripMenuItem->Text = L"Chat";
			this->chatToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProyectMainForm::chatToolStripMenuItem_Click);
			// 
			// ProyectMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1271, 759);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
}
private: System::Void ProyectMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ loginForm = gcnew LoginForm();
	loginForm->ShowDialog();

	myThread = gcnew Thread(gcnew ThreadStart(this, &ProyectMainForm::MyRun));
	myThread->IsBackground = true;
	myThread->Start();

}
	   
	   delegate void MyDelegate(String^);
	   void MyRun(){ 
		   
		   while (true) {
			   try {
				   myThread->Sleep(1000);
				   Invoke(gcnew MyDelegate(this, &ProyectMainForm::UpdateTitle),
					   DateTime::Now.ToString("dd/MM/yyyy hh:mm:ss"));
			   }
			   catch (Exception^ ex) {
				   return;
			   }
		   }
	   }
	   void UpdateTitle(String^ new_title) {
		   this->Text = new_title;
	   }

private: System::Void empleadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	

}

private: System::Void realizarVentasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void mantenimientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void reporteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MealsGraphicsForm^ graphicForm = gcnew MealsGraphicsForm();
	graphicForm-> MdiParent = this;
	graphicForm-> Show();
}
private: System::Void mesasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
}
private: System::Void verPedidosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}


private: System::Void gráficosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void mantenimientoDePlatosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MealsForm^ mealsForm = gcnew MealsForm();
	mealsForm->MdiParent = this;
	mealsForm->Show();
}
private: System::Void mantenimientoDeClientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Client_InfoForm^ client_Info = gcnew Client_InfoForm();
	client_Info->MdiParent = this;
	client_Info->Show();
}
private: System::Void mantenimientoDeEmpleadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	UserForm^ productForm = gcnew UserForm();
	productForm->MdiParent = this;
	
	if (ProyectMainForm::user->Type ->Equals( "Administrador")) {
		productForm->Show();
	}
	else {
		productForm->Hide();
		MessageBox::Show("Usted no tiene acceso a esta ventana.");
	}
	
}
private: System::Void mantemientoDeMesasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	TableForm^ tableForm = gcnew TableForm();
	tableForm->MdiParent = this;
	tableForm->Show();
}
private: System::Void filtroDeMesasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchTableDetailForm^ searchTableDetailForm = gcnew SearchTableDetailForm();
	searchTableDetailForm->MdiParent = this;
	searchTableDetailForm->Show();
}
private: System::Void realizarVentasToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	SaleForm^ saleForm = gcnew SaleForm();
	saleForm->MdiParent = this;
	saleForm->Show();
}
private: System::Void modificarPedidosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PedidosForm^ saleForm = gcnew PedidosForm();
	saleForm->MdiParent = this;
	saleForm->Show();
}
private: System::Void cambiarDeUsuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ saleForm = gcnew LoginForm();
	saleForm->MdiParent = this;
	saleForm->Show();
}
private: System::Void ayudaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void filtroDeClientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchClientInfoForm^ saleForm = gcnew SearchClientInfoForm();
	saleForm->MdiParent = this;
	saleForm->Show();
}
private: System::Void filtroDePlatosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchPlatos^ saleForm = gcnew SearchPlatos();
	saleForm->MdiParent = this;
	saleForm->Show();
}
private: System::Void filtroDeEmpleadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchUserForm^ saleForm = gcnew SearchUserForm();
	saleForm->MdiParent = this;
	if(ProyectMainForm::user->Type == "Administrador"){
		saleForm->Show();
	}
	else {
		saleForm->Hide();
		MessageBox::Show("Usted no tiene acceso a esta ventana.");
	}
}
private: System::Void filtrarSugerenciasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchModifySuggestionForm^ saleForm = gcnew SearchModifySuggestionForm();
	saleForm->MdiParent = this;
	if (ProyectMainForm::user->Type == "Administrador") {
		saleForm->Show();
	}
	else {
		saleForm->Hide();
		MessageBox::Show("Usted no tiene acceso a esta ventana.");
	}
}
private: System::Void filtrarVentasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchVentasForm^ saleForm = gcnew SearchVentasForm();
	saleForm->MdiParent = this;
	if (ProyectMainForm::user->Type == "Administrador") {
		saleForm->Show();
	}
	else {
		saleForm->Hide();
		MessageBox::Show("Usted no tiene acceso a esta ventana.");
	}
}
private: System::Void miInformaciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	UserInformation^ saleForm = gcnew UserInformation();
	saleForm->MdiParent = this;
	saleForm->Show();
}
private: System::Void chatToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	ChatForm^ chatForm = gcnew ChatForm();
	chatForm->MdiParent = this;
	chatForm->Show();
}
private: System::Void modificarSugerenciasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ModifySuggestionsForm^ suggestionsForm = gcnew ModifySuggestionsForm();
	suggestionsForm->MdiParent = this;
	suggestionsForm->Show();
}
private: System::Void platosToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MostMealsGraphics^ graphicForm = gcnew MostMealsGraphics();
	graphicForm->MdiParent = this;
	graphicForm->Show();
}
private: System::Void filtrarPedidosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FiltrarPedidosForm^ filtrarPedidosForm = gcnew FiltrarPedidosForm();
	filtrarPedidosForm->MdiParent = this;
	filtrarPedidosForm->Show();
}
};
}
