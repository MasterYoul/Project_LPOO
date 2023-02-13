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
	protected:

	protected:

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
			this->chartSales = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSales))->BeginInit();
			this->SuspendLayout();
			// 
			// chartSales
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartSales->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartSales->Legends->Add(legend1);
			this->chartSales->Location = System::Drawing::Point(16, 15);
			this->chartSales->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->chartSales->Name = L"chartSales";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Monto";
			this->chartSales->Series->Add(series1);
			this->chartSales->Size = System::Drawing::Size(400, 369);
			this->chartSales->TabIndex = 0;
			this->chartSales->Text = L"chart1";
			this->chartSales->Click += gcnew System::EventHandler(this, &MealsGraphicsForm::chart1_Click);
			// 
			// MealsGraphicsForm
			////// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 439);
			this->Controls->Add(this->chartSales);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MealsGraphicsForm";
			this->Text = L"MealsGraphicsForm";
			this->Load += gcnew System::EventHandler(this, &MealsGraphicsForm::MealsGraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSales))->EndInit();
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
	}
	};
}
