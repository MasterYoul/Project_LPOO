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
			// MealsGraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 570);
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
		
	
	void RefreshDGV() {

		DateTime dt = dateTimeReport1->Value;
		String^ BuscarPorFecha = dt.ToString("yyyy-MM-dd");


		chartSales->Series["Monto"]->Points->Clear();


		int k = 0;
		if (chartSales != nullptr) {
			List<Sale^>^ SalesList = Controller::QueryAllSale();

			for (int i = 0; i < SalesList->Count; i++) {

				if (SalesList[i]->Fecha->Contains(BuscarPorFecha)) {
					chartSales->Series["Monto"]->Points->Add(SalesList[i]->Total);
					chartSales->Series["Monto"]->Points[k]->Color = Color::Blue;
					chartSales->Series["Monto"]->Points[k]->AxisLabel = SalesList[i]->Client_Info->Name;
					chartSales->Series["Monto"]->Points[k]->Label = Convert::ToString(SalesList[i]->Total);
					k++;
				}
			}

		}

	}
	

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshDGV();
}
};
}
