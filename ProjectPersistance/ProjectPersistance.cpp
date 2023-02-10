#include "pch.h"

#include "ProjectPersistance.h"
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace ProjectModel;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization;

/*
void ProjectPersistance::Persistance::Persist(String^ fileName, Object^ persistObject)
{
    FileStream^ archivo;
    StreamWriter^ escritor;
    try {
        archivo = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        escritor = gcnew StreamWriter(archivo);
        if (persistObject->GetType() == List<Meals^>::typeid) {
            for (int i = 0; i < ((List<Meals^>^)persistObject)->Count; i++) {
                escritor->WriteLine(
                    ((List<Meals^>^)persistObject)[i]->Id + "," +
                    ((List<Meals^>^)persistObject)[i]->Name + "," +
                    ((List<Meals^>^)persistObject)[i]->Description + "," +
                    ((List<Meals^>^)persistObject)[i]->Price + "," +
                    ((List<Meals^>^)persistObject)[i]->Stock);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (escritor != nullptr) escritor->Close();
        if (archivo != nullptr) archivo->Close();
    }
}
*/

void ProjectPersistance::Persistance::PersistBinary(String^ fileName, Object^ persistObject)
{
    FileStream^ output;
    try {
        output = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        BinaryFormatter^ formateador = gcnew BinaryFormatter();
        if (persistObject->GetType() == List<Meals^>::typeid) {
            formateador->Serialize(output, persistObject);
        }
        if (persistObject->GetType() == List<User^>::typeid) {
            formateador->Serialize(output, persistObject);
        }
        if (persistObject->GetType() == List<Client_Info^>::typeid) {
            formateador->Serialize(output, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (output != nullptr) output->Close();
    }

}

/*
Object^ ProjectPersistance::Persistance::LoadData(String^ fileName)
{
    /*
    * Codigo de ex1
    Object^ res;
    FileStream^ archivo;
    StreamReader^ lector;
    try {
        if (File::Exists(fileName)) {
            archivo = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            lector = gcnew StreamReader(archivo);
        }
        if (fileName->Equals("Meals.txt")) {
            res = gcnew List<Meals^>();
            if (File::Exists(fileName)) {
                while (true) {
                    String^ linea = lector->ReadLine();
                    if (linea == nullptr) break;
                    array<String^>^ record = linea->Split(',');
                    Meals^ p = gcnew Meals();
                    p->Id = Convert::ToInt32(record[0]);
                    p->Name = record[1];
                    p->Description = record[2];
                    p->Price = Convert::ToDouble(record[3]);
                    //p->PriceMaj = Convert::ToDouble(record[4]);
                    p->Stock = Convert::ToInt32(record[4]);
                    p->Status = 'A';
                    ((List<Meals^>^)res)->Add(p);
                }
            }
        }
        if (fileName->Equals("Meals.txt")) {
            res = gcnew List<String^>();
            if (File::Exists(fileName)) {
                while (true) {
                    String^ linea = lector->ReadLine();
                    if (linea == nullptr) break;
                    array<String^>^ record = linea->Split(',');
                    res = gcnew List<String^>(record);
                }
            }
        }
    }
    catch (Exception^ ex) {
         throw ex;
    }
    finally {
        if (lector != nullptr) lector->Close();
        if (archivo != nullptr) archivo->Close();
    }
    return res;
    
    Object^ res;
    FileStream^ archivo;
    StreamReader^ lector;
    try {
        if (File::Exists(fileName)) {
            archivo = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            lector = gcnew StreamReader(archivo);
        }
        if (fileName->Equals("Meals.txt")) {
            res = gcnew List<Meals^>();
            if (File::Exists(fileName)) {
                while (true) {
                    String^ linea = lector->ReadLine();
                    if (linea == nullptr) break;
                    array<String^>^ record = linea->Split(',');
                    Meals^ p = gcnew Meals();
                    p->Id = Convert::ToInt32(record[0]);
                    p->Name = record[1];
                    p->Description = record[2];
                    p->Price = Convert::ToDouble(record[3]);
                    p->Stock = Convert::ToInt32(record[4]);
                    p->Status = 'A';
                    ((List<Meals^>^)res)->Add(p);
                }
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (lector != nullptr) lector->Close();
        if (archivo != nullptr) archivo->Close();
    }
    return res;

    


}

*/

Object^ ProjectPersistance::Persistance::LoadBinaryData(String^ fileName)
{
    Object^ res;
    FileStream^ input;
    BinaryFormatter^ formateador;
    try {
        if (File::Exists(fileName)) {
            input = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formateador = gcnew BinaryFormatter();
        }
        if (fileName->Equals("Meals.bin")) {
            res = gcnew List<Meals^>();
            if (File::Exists(fileName)) {
                res = (List<Meals^>^)formateador->Deserialize(input);
            }
        }
        if (fileName->Equals("User.bin")) {
            res = gcnew List<User^>();
            if (File::Exists(fileName)) {
                res = (List<User^>^)formateador->Deserialize(input);
            }
        }
        if (fileName->Equals("Client_Info.bin")) {
            res = gcnew List<Client_Info^>();
            if (File::Exists(fileName)) {
                res = (List<Client_Info^>^)formateador->Deserialize(input);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (input != nullptr) input->Close();
    }

    return res;
}






