#include "pch.h"

#include "ProjectPersistance.h"
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace ProjectModel;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization;

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
        if (persistObject->GetType() == List<User^>::typeid) {
            for (int i = 0; i < ((List<User^>^)persistObject)->Count; i++) {
                escritor->WriteLine(
                    ((List<User^>^)persistObject)[i]->Id + "," +
                    ((List<User^>^)persistObject)[i]->Name + "," +
                    ((List<User^>^)persistObject)[i]->LastName + "," +
                    ((List<User^>^)persistObject)[i]->Username + "," +
                    ((List<User^>^)persistObject)[i]->Salary);
            }
        }
        if (persistObject->GetType() == List<Client_Info^>::typeid) {
            for (int i = 0; i < ((List<Client_Info^>^)persistObject)->Count; i++) {
                escritor->WriteLine(
                    ((List<Client_Info^>^)persistObject)[i]->Id + "," +
                    ((List<Client_Info^>^)persistObject)[i]->Name + "," +
                    ((List<Client_Info^>^)persistObject)[i]->DocNumber + "," +
                    ((List<Client_Info^>^)persistObject)[i]->Rate + "," +
                    ((List<Client_Info^>^)persistObject)[i]->TxtOpin + "," +
                    ((List<Client_Info^>^)persistObject)[i]->PhoneNumber);
            }
        }
        if (persistObject->GetType() == List<Sale^>::typeid) {
            for (int i = 0; i < ((List<Sale^>^)persistObject)->Count; i++) {
                escritor->WriteLine(/*
                     Aqui escribe las variables que se guardaran en el grid
                    ((List<Sale^>^)persistObject)[i]->Id + "," +
                    ((List<Sale^>^)persistObject)[i]->Name + "," +
                    ((List<Sale^>^)persistObject)[i]->Price + "," +
                    ((List<Sale^>^)persistObject)[i]->Quantity + "," +
                    ((List<Sale^>^)persistObject)[i]->SubTotal*/
                    );
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

void ProjectPersistance::Persistance::PersistXML(String^ fileName, Object^ persistObject) {
    StreamWriter^ output;
    try {
        output = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Meals^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<Meals^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
        if (persistObject->GetType() == List<Client_Info^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<Client_Info^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
        if (persistObject->GetType() == List<User^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<User^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
        if (persistObject->GetType() == List<Sale^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<Sale^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (output != nullptr) output->Close();
    }


}

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
        if (persistObject->GetType() == List<Sale^>::typeid) {
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


Object^ ProjectPersistance::Persistance::LoadData(String^ fileName)
{
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
        if (fileName->Equals("User.txt")) {
            res = gcnew List<User^>();
            if (File::Exists(fileName)) {
                while (true) {
                    String^ linea = lector->ReadLine();
                    if (linea == nullptr) break;
                    array<String^>^ record = linea->Split(',');
                    User^ p = gcnew User();
                    p->Id = Convert::ToInt32(record[0]);
                    p->Name = record[1];
                    p->LastName = record[2];
                    p->Username = (record[3]);
                    p->Salary = Convert::ToInt32(record[4]);
                    p->Status = 'A';
                    ((List<User^>^)res)->Add(p);
                }
            }
        }
        if (fileName->Equals("Client_Info.txt")) {
            res = gcnew List<Client_Info^>();
            if (File::Exists(fileName)) {
                while (true) {
                    String^ linea = lector->ReadLine();
                    if (linea == nullptr) break;
                    array<String^>^ record = linea->Split(',');
                    Client_Info^ p = gcnew Client_Info();
                    p->Id = Convert::ToInt32(record[0]);
                    p->Name = record[1];
                    p->DocNumber = record[2];
                    p->Rate = Convert::ToDouble(record[3]);
                    p->TxtOpin = (record[4]);
                    p->PhoneNumber = (record[5]);
                    p->Status = 'A';
                    ((List<Client_Info^>^)res)->Add(p);
                }
            }
        }
        if (fileName->Equals("Sale.txt")) {
            res = gcnew List<Sale^>();
            if (File::Exists(fileName)) {
                while (true) {
                    String^ linea = lector->ReadLine();
                    if (linea == nullptr) break;
                    array<String^>^ record = linea->Split(',');
                    Sale^ p = gcnew Sale();
                    /*
                     Aqui escribe las variables que se guardaran en el grid
                    
                    p->Id = Convert::ToInt32(record[0]);
                    p->Name = record[1];
                    p->Price = record[2];
                    p->Quantity = Convert::ToDouble(record[3]);
                    p->SubTotal = (record[4]);

                    No recomiendo tocar el Status. -Joel
                    */
                    p->Status = 'A';
                    ((List<Sale^>^)res)->Add(p);
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

Object^ ProjectPersistance::Persistance::LoadXMLData(String^ fileName) {
    Object^ res;
    StreamReader^ sr;
    XmlSerializer^ serializadorXML;
    try {
        if (File::Exists(fileName)) {
            sr = gcnew StreamReader(fileName);
        }
        if (fileName->Equals("Meals.xml")) {
            res = gcnew List<Meals^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<Meals^>::typeid);
                res = (List<Meals^>^)serializadorXML->Deserialize(sr);
            }
        }
        if (fileName->Equals("Client_Info.xml")) {
            res = gcnew List<Client_Info^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<Client_Info^>::typeid);
                res = (List<Client_Info^>^)serializadorXML->Deserialize(sr);
            }
        }
        if (fileName->Equals("User.xml")) {
            res = gcnew List<User^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<User^>::typeid);
                res = (List<User^>^)serializadorXML->Deserialize(sr);
            }
        }
        if (fileName->Equals("Sale.xml")) {
            res = gcnew List<User^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<Sale^>::typeid);
                res = (List<Sale^>^)serializadorXML->Deserialize(sr);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
    return res;
}

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
        if (fileName->Equals("Sale.bin")) {
            res = gcnew List<Sale^>();
            if (File::Exists(fileName)) {
                res = (List<Sale^>^)formateador->Deserialize(input);
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





