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
		static Meals^ QueryProductById(int MealsId);
		static int AddMeals(Meals^);
		static int UpdateMeals(Meals^);
		static int DeleteMeals(int MealsId);


		static User^ QueryUserById(int UserId);
		static List <User^>^ QueryAllUser();
		static User^ QueryUserbyDni(String^Dni);
		static int AddUser(User^p);
		static int UpdateUser(User^);
		static int DeleteUser(int UserId);
		static User^ Login(String^ Username, String^ Password);
		static User^ ChangePassword(String^ UserDNI, String^ UserUsuario, String^ UserName, String^ UserLastName, String^ UserNumber, String^ newpassword);
		static User^ QueryUserRecover(String^ UserDNI, String^ UserUsuario, String^ UserName, String^ UserLastName, String^ UserNumber);


	};
}

