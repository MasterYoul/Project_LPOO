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
	using namespace System::Windows::Forms::DataVisualization;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Globalization;

	/// <summary>
	/// Resumen de MostMealsGraphics
	/// </summary>
	public ref class MostMealsGraphics : public System::Windows::Forms::Form
	{
	public:
		MostMealsGraphics(void)
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
		~MostMealsGraphics()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartCommonMeals;
	private: System::Windows::Forms::Label^ label1;

	protected:



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chartCommonMeals = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartCommonMeals))->BeginInit();
			this->SuspendLayout();
			// 
			// chartCommonMeals
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartCommonMeals->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartCommonMeals->Legends->Add(legend1);
			this->chartCommonMeals->Location = System::Drawing::Point(47, 132);
			this->chartCommonMeals->Name = L"chartCommonMeals";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Platos";
			this->chartCommonMeals->Series->Add(series1);
			this->chartCommonMeals->Size = System::Drawing::Size(479, 405);
			this->chartCommonMeals->TabIndex = 2;
			this->chartCommonMeals->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(130, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(378, 47);
			this->label1->TabIndex = 4;
			this->label1->Text = L"PLATOS VENDIDOS";
			// 
			// MostMealsGraphics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(646, 593);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chartCommonMeals);
			this->Name = L"MostMealsGraphics";
			this->Text = L"MostMealsGraphics";
			this->Load += gcnew System::EventHandler(this, &MostMealsGraphics::MostMealsGraphics_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartCommonMeals))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void RefreshDGV() {
			//DateTime dateTime = dateTimePickerMeals->Value;
			//String^ FechaMeals = dateTime.ToString("yyyy-MM-dd");

			chartCommonMeals->Series["Platos"]->Points->Clear();
			//int k = 0;

			if (chartCommonMeals != nullptr) {
				List<Meals^>^ MealList = Controller::QueryAllMeals();

				for (int i = 0; i < MealList->Count; i++) {

					//if (MealList[i]->DateMeal->Contains(FechaMeals)) {
					chartCommonMeals->Series["Platos"]->Points->Add(MealList[i]->StockUsed);
					chartCommonMeals->Series["Platos"]->Points[i]->LegendText = MealList[i]->Name;
					chartCommonMeals->Series["Platos"]->Points[i]->Label = Convert::ToString(MealList[i]->StockUsed);
					//}
					//k++;

				}
			}

		}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}


	private: System::Void MostMealsGraphics_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshDGV();
	}
};
}
