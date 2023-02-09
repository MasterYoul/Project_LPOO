#pragma once

using namespace System;

namespace ProjectPersistance {
	public ref class Persistance
	{
	public:
		static void PersistBinary(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryData(String^ fileName);
		//static void PersistXML(String^ fileName, Object^ persistObject);
		//static Object^ LoadXMLData(String^ fileName);
	};
}

