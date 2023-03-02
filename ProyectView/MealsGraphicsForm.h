#pragma once
#include <string>
#include <vector>

namespace ProyectView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	//using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProjectModel;
	using namespace ProjectController;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms::DataVisualization;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Globalization;

	/// <summary>
	/// Resumen de MealsGraphicsForm
	/// </summary>
	public ref class MealsGraphicsForm : public System::Windows::Forms::Form
	{
	public:
		MealsGraphicsForm(void)
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
		~MealsGraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartSales;
	private: System::Windows::Forms::DateTimePicker^ dateTimeReport1;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimeReport2;



	protected:

	protected:

	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chartSales = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dateTimeReport1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimeReport2 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSales))->BeginInit();
			this->SuspendLayout();
			// 
			// chartSales
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartSales->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartSales->Legends->Add(legend1);
			this->chartSales->Location = System::Drawing::Point(71, 151);
			this->chartSales->Margin = System::Windows::Forms::Padding(4);
			this->chartSales->Name = L"chartSales";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Monto";
			this->chartSales->Series->Add(series1);
			this->chartSales->Size = System::Drawing::Size(580, 389);
			this->chartSales->TabIndex = 0;
			this->chartSales->Text = L"chart1";
			// 
			// dateTimeReport1
			// 
			this->dateTimeReport1->Location = System::Drawing::Point(71, 40);
			this->dateTimeReport1->Name = L"dateTimeReport1";
			this->dateTimeReport1->Size = System::Drawing::Size(290, 22);
			this->dateTimeReport1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(413, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Buscar por fecha";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MealsGraphicsForm::button1_Click);
			// 
			// dateTimeReport2
			// 
			this->dateTimeReport2->Location = System::Drawing::Point(71, 100);
			this->dateTimeReport2->Name = L"dateTimeReport2";
			this->dateTimeReport2->Size = System::Drawing::Size(290, 22);
			this->dateTimeReport2->TabIndex = 4;
			// 
			// MealsGraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 570);
			this->Controls->Add(this->dateTimeReport2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimeReport1);
			this->Controls->Add(this->chartSales);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MealsGraphicsForm";
			this->Text = L"Reporte  en graficos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSales))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		/*
		List<Sale^>^ ventas = Controller::QueryAllSale();

		DateTimePicker^ dtpInicio = gcnew DateTimePicker();
		DateTimePicker^ dtpFin = gcnew DateTimePicker();

		Chart^ grafico = gcnew Chart();
		ChartArea^ area = gcnew ChartArea();
	



		void dtpInicio_ValueChanged(Object^ sender, EventArgs^ e) {
			GenerarDatosGrafico(ventas, dtpInicio->Value, dtpFin->Value, grafico, area);
		}


		// código para el evento de cambio de fecha en el segundo DateTimePicker
		void dtpFin_ValueChanged(Object^ sender, EventArgs^ e) {
			GenerarDatosGrafico(ventas, dtpInicio->Value, dtpFin->Value, grafico, area);
		}

		void GenerarDatosGrafico(List<Sale^>^ ventas, DateTime fechaInicio, DateTime fechaFin, Chart^ grafico, ChartArea^ area) {
			// crear diccionario para agrupar ventas por día
			Dictionary<String^, double>^ ventasPorDia = gcnew Dictionary<String^, double>();
			for each (Sale ^ venta in ventas) {
				DateTime fechaVenta = DateTime::ParseExact(venta->Fecha, "yyyy-MM-dd", CultureInfo::InvariantCulture);
				if (fechaVenta >= fechaInicio && fechaVenta <= fechaFin) {
					String^ fechaKey = fechaVenta.ToString("yyyy-MM-dd");
					if (ventasPorDia->ContainsKey(fechaKey)) {
						ventasPorDia[fechaKey] += venta->Total;
					}
					else {
						ventasPorDia->Add(fechaKey, venta->Total);
					}
				}
			}

			// crear datos para el gráfico
			Series^ serie = gcnew Series();
			serie->ChartType = SeriesChartType::Column;
			serie->XValueType = ChartValueType::DateTime;
			serie->YValueType = ChartValueType::Double;
			grafico->Series->Clear();
			grafico->Series->Add(serie);

			DateTime fechaActual = fechaInicio;
			while (fechaActual <= fechaFin) {
				String^ fechaKey = fechaActual.ToString("yyyy-MM-dd");
				double totalVenta = 0.0;
				if (ventasPorDia->TryGetValue(fechaKey, totalVenta)) {
					DataPoint^ punto = gcnew DataPoint(fechaActual.ToOADate(), totalVenta);
					serie->Points->Add(punto);
				}
				fechaActual = fechaActual.AddDays(1);
			}

			// ajustar configuración del gráfico
			area->AxisX->Minimum = fechaInicio.ToOADate();
			area->AxisX->Maximum = fechaFin.ToOADate();
			area->AxisX->Interval = Math::Max(1.0, (fechaFin - fechaInicio).Days / 7.0);
			area->AxisY->Minimum = 0;
		}


		void Form1_Load(Object^ sender, EventArgs^ e) {
			// crear y configurar los controles
			this->dtpInicio = gcnew DateTimePicker();
			dtpInicio->Value = DateTime::Today;
			//dtpInicio->ValueChanged += gcnew EventHandler(this, &MostMealsGraphics::dtpInicio_ValueChanged);
			this->Controls->Add(dtpInicio);

			this->dtpFin = gcnew DateTimePicker();
			dtpFin->Value = DateTime::Today.AddDays(7);
			//dtpFin->ValueChanged += gcnew EventHandler(this, &MostMealsGraphics::dtpFin_ValueChanged);
			this->Controls->Add(dtpFin);

			grafico = gcnew Chart();
			area = gcnew ChartArea();
			grafico->ChartAreas->Add(area);
			GenerarDatosGrafico(ventas, dtpInicio->Value, dtpFin->Value, grafico, area);
			this->Controls->Add(grafico);

			void GenerarDatosGrafico(List<Sale^> ^ ventas, DateTime fechaInicio, DateTime fechaFin, Chart ^ grafico, ChartArea ^ area);
			
		}
	
	void RefreshDGV() {

		grafico->ChartAreas->Add(area);

		// añadir control Chart al formulario
		this->Controls->Add(grafico);

	}
	*/

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//RefreshDGV();
}
};
}
