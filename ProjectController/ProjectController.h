#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace ProjectModel;
using namespace ProjectPersistance;

namespace ProjectController {
	public ref class Controller
	{
	private:
		static List<Meals^>^ MealsList = gcnew List<Meals^>();
		static List<Ingredients^>^ IngredientsList = gcnew List<Ingredients^>();
		static List<Client_Info^>^ Client_InfoList = gcnew List<Client_Info^>();
		static List<Sale^>^ SalesList = gcnew List<Sale^>();
		static List<SaleDetail^>^ SaleDetailList = gcnew List<SaleDetail^>();
		static List<TableDetail^>^ TableDetailList = gcnew List<TableDetail^>();
		static List<User^>^ UserList = gcnew List<User^>();
		static List <Sale^>^ SaleList = gcnew List<Sale^>();
		static List<Suggestions^>^ SuggestionsList = gcnew List<Suggestions^>();

	public:

		static void Init();


		static List<SaleDetail^>^ QueryAllSaleDetail();

		static List<SaleDetail^>^ QuerySingleSaleDetail(int SaleId);

		static List<SaleDetail^>^ ChangeQueryAllSaleDetail();

		static List<TableDetail^>^ QueryAllTableOcupado();

		static List<TableDetail^>^ QueryAllTableLibreporpiso(int piso);

		static List<TableDetail^>^ QueryAllTableOcupadasporpiso(int piso);

		static List<TableDetail^>^ QueryAllTableOcupadasporcapacidad(int capacidad);

		static int AddMeals(Meals^ meals);
		static Meals^ QueryMealstById(int MealsId);
		static List<Meals^>^ QueryAllMeals();
		static int UpdateMeals(Meals^ Meals);
		static int DeleteMeals(int MealsId);
		static List<Meals^>^ QueryMealsByNameOrDescription(String^ nameDesc);
	

		//static List<SaleDetail^>^ QueryAllSaleDetail();

		static int AddIngredients(Ingredients^ Ingredients);
		static Ingredients^ QueryIngredientstById(int IngredientsId);
		static List<Ingredients^>^ QueryAllIngredients();
		static int UpdateIngredients(Ingredients^ Ingredients);
		static int DeleteIngredients(int IngredientsId);
		static List<Ingredients^>^ QueryIngredientsByNameOrDescription(String^ nameDesc);

		static int AddClient_Info(Client_Info^ Client_Info);
		static Client_Info^ QueryClient_InfotById(int Client_InfoId);
		static List<Client_Info^>^ QueryAllClient_Info();
		static int UpdateClient_Info(Client_Info^ Client_Info);
		static int DeleteClient_Info(int Client_InfoId);
		static List<Client_Info^>^ QueryClient_InfoByNameOrLastName(String^ value);
		//static List<Client_Info^>^ QueryClient_InfoByDni(String^ nameDesc);
		static Client_Info^ QueryClient_InfoByDocNumber(String^ DocNumber);

		static int AddSale(Sale^ Sale);
		static Sale^ QuerySaletById(int SaleId);
		
		static int UpdateSale(Sale^ Sale);
		static int DeleteSale(int SaleId);


	
		static List<TableDetail^>^ QueryAllTableLibreporpisoporcapacidad(int piso, int capacidad);
		static List<TableDetail^>^ QueryAllTableporpisoporcapacidad(int piso, int capacidad);
		static List<TableDetail^>^ QueryAllTableOcupadaporpisoporcapacidad(int piso, int capacidad);
		static List<TableDetail^>^ QueryAllTableporpiso(int piso);
		static List<TableDetail^>^ QueryAllTableporcapacidad(int capacidad);
		static List<TableDetail^>^ QueryAllTableLibre();
		static TableDetail^ QueryTableDetailOcupado(int TableDetailId);
		static List<TableDetail^>^ QueryTableDetailByFloorOrCapacity(int value);


		static TableDetail^ QueryTableDetailtById(int TableDetailId);
		static List<TableDetail^>^ QueryAllTableDetail();
		static int AddTableDetail(TableDetail^ TableDetail);
		static int UpdateTableDetail(TableDetail^ TableDetail);
		static int DeleteTableDetail(int TableDetailId);
		static SaleDetail^ QueryAllSaleDetailById(int SaleDetailId);

		static Suggestions^ QuerySuggestionsById(int suggestionsId);

		static int AddUser(User^ User);
		static User^ QueryUserbyDni(String^ Dni);
		static User^ QueryUsertById(int UserId);
		static List<User^>^ QueryAllUser();
		static int UpdateUser(User^ User);
		static int DeleteUser(int UserId);
		static List<User^>^ QueryUserByNameOrLastName(String^ nameDesc);
		static User^ QueryUsertByCredentials(String^ username, String^ password);

		static User^ QuerychangeEstado(int id);

		static TableDetail^ QuerychangeEstadoTable(int id);

		static User^ QueryUserChangePassword(String^ UserDNI, String^ UserUsuario, String^ UserName, String^ UserLastName, String^ UserNumber, String^ newpassword);
		



		static User^ Login(String^ username, String^ password);

		static User^ CambioEstado(int id);
		static TableDetail^ CambioEstadoTable(int id);

		static User^ ChangePassword(String^ UserDNI, String^ UserUsuario, String^ UserName, String^ UserLastName, String^ UserNumber, String^ newpassword);

		static Void RegisterSuggestions(Suggestions^ suggestions);

		//Operaciones de venta
		static List<Sale^>^ QueryAllSale();
		static List<SaleDetail^>^ QueryAllSaleDetailsNp();
		static int SaledetailChangeEstado(int ID);
		static int QueryLastSaleId();
		static Void RegisterSale(Sale^ sale);
		static int   ChangeSuggestion(String^Estado, int Id);

		//static List<Sale^>^ QueryAllTotalSaleList(String^ date);
	};
}
