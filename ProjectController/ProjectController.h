#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace ProjectModel;

namespace ProjectController {
	public ref class Controller
	{
	private:
		static List<Meals^>^ MealsList = gcnew List<Meals^>();
		static List<Ingredients^>^ IngredientsList = gcnew List<Ingredients^>();
		static List<Client_Info^>^ Client_InfoList = gcnew List<Client_Info^>();
		static List<Sale^>^ SaleList = gcnew List<Sale^>();
		static List<TableDetail^>^ TableDetailList = gcnew List<TableDetail^>();
		static List<User^>^ UserList = gcnew List<User^>();
		

	public:

		static void Init();

		static int AddMeals(Meals^ meals);
		static Meals^ QueryMealstById(int MealsId);
		static List<Meals^>^ QueryAllMeals();
		static int UpdateMeals(Meals^ Meals);
		static int DeleteMeals(int MealsId);
		static List<Meals^>^ QueryMealsByNameOrDescription(String^ nameDesc);

		static int AddIngredients(Ingredients^ Ingredients);
		static Ingredients^ QueryIngredientstById(int IngredientsId);
		static List<Ingredients^>^ QueryAllIngredients();
		static int UpdateIngredients(Ingredients^ Ingredients);
		static int DeleteIngredients(int IngredientsId);
		static List<Ingredients^>^ QueryIngredientsByNameOrDescription(String^ nameDesc);

		static String^ AddClient_Info(Client_Info^ Client_Info);
		static Client_Info^ QueryClient_InfotById(int Client_InfoId);
		static List<Client_Info^>^ QueryAllClient_Info();
		static String^ UpdateClient_Info(Client_Info^ Client_Info);
		static int DeleteClient_Info(int Client_InfoId);
		static List<Client_Info^>^ QueryClient_InfoByNameOrLastName(String^ nameDesc);
		//static List<Client_Info^>^ QueryClient_InfoByDni(String^ nameDesc);
		static Client_Info^ QueryClient_InfoByDocNumber(String^ docNumber);

		static int AddSale(Sale^ Sale);
		static Sale^ QuerySaletById(int SaleId);
		static List<Sale^>^ QueryAllSale();
		static int UpdateSale(Sale^ Sale);
		static int DeleteSale(int SaleId);


		static int AddTableDetail(TableDetail^ TableDetail);
		static TableDetail^ QueryTableDetailtById(int TableDetailId);
		static List<TableDetail^>^ QueryAllTableDetail();
		static int UpdateTableDetail(TableDetail^ TableDetail);
		static int DeleteTableDetail(int TableDetailId);
		static List<TableDetail^>^ QueryTableDetailByFloorOrCapacity(int value);

		static int AddUser(User^ User);
		static User^ QueryUsertById(int UserId);
		static List<User^>^ QueryAllUser();
		static int UpdateUser(User^ User);
		static int DeleteUser(int UserId);
		static List<User^>^ QueryUserByNameOrLastName(String^ nameDesc);
		static User^ QueryUsertByCredentials(String^ username, String^ password);
		



		static User^ Login(String^ username, String^ password);
	};
}
