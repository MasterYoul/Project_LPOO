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


		static User^ QueryUserById(int UserId);
		static List <User^>^ QueryAllUser();
		static int AddUser(User^p);


	};
}

