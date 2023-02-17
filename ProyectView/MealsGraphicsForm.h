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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartCommonMeals;
	private: System::Windows::Forms::DateTimePicker^ dateTimeReport;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chartSales = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartCommonMeals = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dateTimeReport = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSales))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartCommonMeals))->BeginInit();
			this->SuspendLayout();
			// 
			// chartSales
			// 
			chartArea3->Name = L"ChartArea1";
			this->chartSales->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chartSales->Legends->Add(legend3);
			this->chartSales->Location = System::Drawing::Point(71, 108);
			this->chartSales->Margin = System::Windows::Forms::Padding(4);
			this->chartSales->Name = L"chartSales";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Monto";
			this->chartSales->Series->Add(series3);
			this->chartSales->Size = System::Drawing::Size(461, 389);
			this->chartSales->TabIndex = 0;
			this->chartSales->Text = L"chart1";
			// 
			// chartCommonMeals
			// 
			chartArea4->Name = L"ChartArea1";
			this->chartCommonMeals->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chartCommonMeals->Legends->Add(legend4);
			this->chartCommonMeals->Location = System::Drawing::Point(660, 108);
			this->chartCommonMeals->Name = L"chartCommonMeals";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series4->Legend = L"Legend1";
			series4->Name = L"Platos";
			this->chartCommonMeals->Series->Add(series4);
			this->chartCommonMeals->Size = System::Drawing::Size(433, 389);
			this->chartCommonMeals->TabIndex = 1;
			this->chartCommonMeals->Text = L"chart1";
			// 
			// dateTimeReport
			// 
			this->dateTimeReport->Location = System::Drawing::Point(71, 40);
			this->dateTimeReport->Name = L"dateTimeReport";
			this->dateTimeReport->Size = System::Drawing::Size(290, 22);
			this->dateTimeReport->TabIndex = 2;
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
			this->ClientSize = System::Drawing::Size(1181, 570);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimeReport);
			this->Controls->Add(this->chartCommonMeals);
			this->Controls->Add(this->chartSales);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MealsGraphicsForm";
			this->Text = L"Reporte  en graficos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSales))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartCommonMeals))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	void RefreshDGV() {

		DateTime dt = dateTimeReport->Value;
		String^ BuscarPorFecha = dt.ToString("yyyy-MM-dd");

		
		chartSales->Series["Monto"]->Points->Clear();
		chartCommonMeals->Series["Platos"]->Points->Clear();

		//List<Sale^>^ SumTotal= Controller::QueryAllTotalSaleList(BuscarPorFecha);
		int k = 0;
		if (chartSales != nullptr) {
			List<Sale^>^ SalesList = Controller::QueryAllSale();
			/*
			for (int i = 0; i < 1; i++) {
				chartSales->Series["Monto"]->Points[k]->AxisLabel = Fec;
				chartSales->Series["Monto"]->Points[k]->Label = Convert::ToString(SumTotal);
			}
			*/
			for (int i = 0; i < SalesList->Count; i++) {

				if (SalesList[i]->Fecha->Contains(BuscarPorFecha)) {
					chartSales->Series["Monto"]->Points->Add(SalesList[i]->Total);
					chartSales->Series["Monto"]->Points[k]->Color = Color::Blue;
					chartSales->Series["Monto"]->Points[k]->AxisLabel = SalesList[i]->Fecha;
					chartSales->Series["Monto"]->Points[k]->Label = Convert::ToString(SalesList[i]->Total);
					k++;
				}
			}

		}

		chartCommonMeals->Series["Platos"]->Points->Clear();
	
		List<Meals^>^ MealList = Controller::QueryAllMeals();
		for (int i = 0; i < MealList->Count; i++) {
			chartCommonMeals->Series["Platos"]->Points->Add(MealList[i]->StockUsed);
			chartCommonMeals->Series["Platos"]->Points[i]->LegendText = MealList[i]->Name;
			chartCommonMeals->Series["Platos"]->Points[i]->Label = Convert::ToString(MealList[i]->StockUsed);
		}
		
	}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshDGV();
}
};
}
