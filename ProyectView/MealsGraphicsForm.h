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
			this->chartSales->Location = System::Drawing::Point(45, 203);
			this->chartSales->Margin = System::Windows::Forms::Padding(4);
			this->chartSales->Name = L"chartSales";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Monto";
			this->chartSales->Series->Add(series3);
			this->chartSales->Size = System::Drawing::Size(400, 369);
			this->chartSales->TabIndex = 0;
			this->chartSales->Text = L"chart1";
			this->chartSales->Click += gcnew System::EventHandler(this, &MealsGraphicsForm::chart1_Click);
			// 
			// chartCommonMeals
			// 
			chartArea4->Name = L"ChartArea1";
			this->chartCommonMeals->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chartCommonMeals->Legends->Add(legend4);
			this->chartCommonMeals->Location = System::Drawing::Point(633, 203);
			this->chartCommonMeals->Name = L"chartCommonMeals";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series4->Legend = L"Legend1";
			series4->Name = L"Platos";
			this->chartCommonMeals->Series->Add(series4);
			this->chartCommonMeals->Size = System::Drawing::Size(410, 368);
			this->chartCommonMeals->TabIndex = 1;
			this->chartCommonMeals->Text = L"chart1";
			// 
			// MealsGraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1067, 649);
			this->Controls->Add(this->chartCommonMeals);
			this->Controls->Add(this->chartSales);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MealsGraphicsForm";
			this->Text = L"Reporte  en graficos";
			this->Load += gcnew System::EventHandler(this, &MealsGraphicsForm::MealsGraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSales))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartCommonMeals))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MealsGraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Sale^>^ SalesList = Controller::QueryAllSale();
		for (int i = 0; i < SalesList->Count; i++) {

			chartSales->Series["Monto"]->Points->Add(SalesList[i]->Total);
			chartSales->Series["Monto"]->Points[i]->AxisLabel = SalesList[i]->Client_Info->Name;
			chartSales->Series["Monto"]->Points[i]->Label = Convert::ToString(SalesList[i]->Total);
		}

		List<Meals^>^ MealList = Controller::QueryAllMeals();
		for (int i = 0; i < MealList->Count; i++) {
			chartCommonMeals->Series["Platos"]->Points->Add(MealList[i]->StockUsed);
			chartCommonMeals->Series["Platos"]->Points[i]->LegendText = MealList[i]->Name;
			chartCommonMeals->Series["Platos"]->Points[i]->Label = Convert::ToString(MealList[i]->StockUsed);
		}
		

	}
};
}
