#include "pch.h"

#include "ProjectPersistance.h"
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace ProjectModel;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization;


void ProjectPersistance::Persistance::PersistBinary(String^ fileName, Object^ persistObject)
{
    FileStream^ output;
    try {
        output = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        BinaryFormatter^ formateador = gcnew BinaryFormatter();
        //if (persistObject->GetType() == List<Product^>::typeid) {
        formateador->Serialize(output, persistObject);
        //}
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (output != nullptr) output->Close();
    }

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
        if (fileName->Equals("meals.bin")) {
            res = gcnew List<Meals^>();
            if (File::Exists(fileName)) {
                res = (List<Meals^>^)formateador->Deserialize(input);
            }
        }
        if (fileName->Equals("Ingredients.bin")) {
            res = gcnew List<Ingredients^>();
            if (File::Exists(fileName)) {
                res = (List<Ingredients^>^)formateador->Deserialize(input);
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
        if (fileName->Equals("TableDetail.bin")) {
            res = gcnew List<TableDetail^>();
            if (File::Exists(fileName)) {
                res = (List<TableDetail^>^)formateador->Deserialize(input);
            }
        }
        if (fileName->Equals("User.bin")) {
            res = gcnew List<User^>();
            if (File::Exists(fileName)) {
                res = (List<User^>^)formateador->Deserialize(input);
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


