#pragma once

using namespace System;

using namespace ProjectModel;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

namespace ProjectPersistance {
	public ref class Persistance
	{
	public:
		static void Persist(String^ fileName, Object^ persistObject);
		static Object^ LoadData(String^ fileName);


		static Object^ LoadBinaryData(String^ fileName);
		static void PersistBinary(String^ fileName, Object^ persistObject);

		static void PersistXML(String^ fileName, Object^ persistObject);
		static Object^ LoadXMLData(String^ fileName);


		static SqlConnection^ GetConnection();

		static List<Meals^>^ QueryAllActiveMeals();
		static Meals^ QueryMealsById(int MealsId);
		static int AddMeals(Meals^);
		static int UpdateMeals(Meals^);
		static int DeleteMeals(int MealsId);
		static List<Meals^>^ QueryMealsByNameOrDescription(String^ value);


		static List<TableDetail^>^ QueryAllTableDetail();
		static TableDetail^ QueryTableDetailtById(int TableDetailId);
		static int AddTableDetail(TableDetail^);
		static int UpdateTableDetail(TableDetail^);
		static int DeleteTableDetail(int TableDetailId);

		static List<Client_Info^>^ QueryAllClient_Info();
		static Client_Info^ QueryClient_InfotById(int Client_InfoId);
		static int AddClient_Info(Client_Info^);
		static int UpdateClient_Info(Client_Info^);
		static int DeleteClient_Info(int Client_InfoId);
		static List<Client_Info^>^ QueryClient_InfoByNameOrLastName(String^ value);
		static Client_Info^ QueryClient_InfoByDocNumber(String^ DocNumber);

		static User^ QueryUserById(int UserId);
		static List <User^>^ QueryAllUser();
		static User^ QueryUserbyDni(String^Dni);
		static int AddUser(User^p);
		static int UpdateUser(User^);
		static int DeleteUser(int UserId);

		static User^ Login(String^ Username, String^ Password);
		static User^ ChangePassword(String^ UserDNI, String^ UserUsuario, String^ UserName, String^ UserLastName, String^ UserNumber, String^ newpassword);
		static User^ QueryUserRecover(String^ UserDNI, String^ UserUsuario, String^ UserName, String^ UserLastName, String^ UserNumber);


		static int RegisterSale(Sale^);
		static int RegisterSuggestions(Suggestions^ suggestions);

	};
}

