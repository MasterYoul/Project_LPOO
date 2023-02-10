#pragma once

using namespace System;

namespace ProjectPersistance {
	public ref class Persistance
	{
	public:
		//static void Persist(String^ fileName, Object^ persistObject);
		//static Object^ LoadData(String^ fileName);


		static Object^ LoadBinaryData(String^ fileName);
		static void PersistBinary(String^ fileName, Object^ persistObject);

		//static void PersistXML(String^ fileName, Object^ persistObject);
		//static Object^ LoadXMLData(String^ fileName);
	};
}

