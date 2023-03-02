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
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerMeals;
	protected:

	private: System::Windows::Forms::Button^ button1;

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
			this->dateTimePickerMeals = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartCommonMeals))->BeginInit();
			this->SuspendLayout();
			// 
			// chartCommonMeals
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartCommonMeals->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartCommonMeals->Legends->Add(legend1);
			this->chartCommonMeals->Location = System::Drawing::Point(120, 145);
			this->chartCommonMeals->Name = L"chartCommonMeals";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Platos";
			this->chartCommonMeals->Series->Add(series1);
			this->chartCommonMeals->Size = System::Drawing::Size(523, 432);
			this->chartCommonMeals->TabIndex = 2;
			this->chartCommonMeals->Text = L"chart1";
			// 
			// dateTimePickerMeals
			// 
			this->dateTimePickerMeals->Location = System::Drawing::Point(141, 55);
			this->dateTimePickerMeals->Name = L"dateTimePickerMeals";
			this->dateTimePickerMeals->Size = System::Drawing::Size(299, 22);
			this->dateTimePickerMeals->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(501, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Seleccionar Fecha";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MostMealsGraphics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(916, 655);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePickerMeals);
			this->Controls->Add(this->chartCommonMeals);
			this->Name = L"MostMealsGraphics";
			this->Text = L"MostMealsGraphics";
			this->Load += gcnew System::EventHandler(this, &MostMealsGraphics::button1_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartCommonMeals))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void RefreshDGV() {
			DateTime dateTime = dateTimePickerMeals->Value;
			String^ FechaMeals = dateTime.ToString("yyyy-MM-dd");


			chartCommonMeals->Series["Platos"]->Points->Clear();


			int k = 0;
			if (chartCommonMeals != nullptr) {
				List<Meals^>^ MealList = Controller::QueryAllMeals();
				for (int i = 0; i < MealList->Count; i++) {

					if (MealList[i]->DateMeal->Contains(FechaMeals)) {
						chartCommonMeals->Series["Platos"]->Points->Add(MealList[i]->StockUsed);
						if (k < chartCommonMeals->Series["Platos"]->Points->Count) {
							chartCommonMeals->Series["Platos"]->Points[k]->LegendText = MealList[i]->Name;
							chartCommonMeals->Series["Platos"]->Points[k]->Label = Convert::ToString(MealList[i]->StockUsed);
						}
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
