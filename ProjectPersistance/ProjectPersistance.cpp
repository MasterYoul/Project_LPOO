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
        if (persistObject->GetType() == List<TableDetail^>::typeid) {
            for (int i = 0; i < ((List<TableDetail^>^)persistObject)->Count; i++) {
                escritor->WriteLine(
                    
                    ((List<TableDetail^>^)persistObject)[i]->Id + "," +
                    ((List<TableDetail^>^)persistObject)[i]->TableCapacity + "," +
                    ((List<TableDetail^>^)persistObject)[i]->Floor + "," +
                    ((List<TableDetail^>^)persistObject)[i]->Disponibility + "," +
                    ((List<TableDetail^>^)persistObject)[i]->Reserved
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
        if (persistObject->GetType() == List<TableDetail^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<TableDetail^>::typeid);
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
        if (persistObject->GetType() == List<TableDetail^>::typeid) {
            formateador->Serialize(output, persistObject);
        }
        if (persistObject->GetType() == List<Suggestions^>::typeid) {
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
        if (fileName->Equals("TableDetail.txt")) {
            res = gcnew List<TableDetail^>();
            if (File::Exists(fileName)) {
                while (true) {
                    String^ linea = lector->ReadLine();
                    if (linea == nullptr) break;
                    array<String^>^ record = linea->Split(',');
                    TableDetail^ p = gcnew TableDetail();
                    p->Id = Convert::ToInt32(record[0]);
                    p->TableCapacity = Convert::ToInt32(record[1]);
                    p->Floor = Convert::ToInt32(record[2]);
                    p->Disponibility = record[3];
                    p->Reserved = (record[4]);
                   
                    ((List<TableDetail^>^)res)->Add(p);
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
        if (fileName->Equals("TableDetail.xml")) {
            res = gcnew List<TableDetail^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<TableDetail^>::typeid);
                res = (List<TableDetail^>^)serializadorXML->Deserialize(sr);
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
        if (fileName->Equals("TableDetail.bin")) {
            res = gcnew List<TableDetail^>();
            if (File::Exists(fileName)) {
                res = (List<TableDetail^>^)formateador->Deserialize(input);
            }
        }
        if (fileName->Equals("Suggestions.bin")) {
            res = gcnew List<Suggestions^>();
            if (File::Exists(fileName)) {
                res = (List<Suggestions^>^)formateador->Deserialize(input);
            }
        }
    }
    catch (NullReferenceException^ ex) {
        //Mandar un mensaje por correo
        throw ex;
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (input != nullptr) input->Close();
    }

    return res;
}


SqlConnection^ ProjectPersistance::Persistance::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "SP183DN";
    conn->ConnectionString = "Server=200.16.7.140;Database=a20182138;User ID=a20182138;Password=" + password+";";
    conn->Open();
    return conn;
    // TODO: Insertar una instrucción "return" aquí
}

List<Meals^>^ ProjectPersistance::Persistance::QueryAllActiveMeals()
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<Meals^>^ activemealsList = gcnew List<Meals^>();
    try {
        // paso1: Se obtiene la conexion
        conn = GetConnection();
        // paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM MEALS WHERE Status='A'", conn);
        //paso 3: Se ejecuta la sentecia
        reader = comm->ExecuteReader();
        // paso 4: se procesan los resultados
        while (reader->Read()) {
            Meals^ p = gcnew Meals();
            p->Id = Convert::ToInt32(reader["Id"]->ToString());
            p->Name = reader["Name"]->ToString();
            p->Description = reader["Description"]->ToString();
            p->Price = Convert::ToDouble(reader["Price"]->ToString());
            p->Stock = Convert::ToInt32(reader["Stock"]->ToString());
            p->TotalMeals = Convert::ToDouble(reader["TotalMeals"]->ToString());
            p->DateMeal = reader["DateMeal"]->ToString();
            p->StockUsed = Convert::ToInt32(reader["StockUsed"]->ToString());
            if (!DBNull::Value->Equals(reader["Status"])) p->Status = reader["Status"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["Photo"])) p->Photo = (array<Byte>^)reader["Photo"];
            activemealsList->Add(p);
        }
    }
    catch(Exception^ ex){}
    finally {
        //paso 5: S e cierra los objetos de conexion
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activemealsList;
    
}

Meals^ ProjectPersistance::Persistance::QueryProductById(int MealsId)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    Meals^ activeMeals;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM MEALS WHERE id=" + MealsId +
            " AND status = 'A'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        if (reader->Read()) {
            Meals^ p = gcnew Meals();
            p->Id = Convert::ToInt32(reader["id"]->ToString());
            p->Name = reader["name"]->ToString();
            p->Description = reader["description"]->ToString();
            p->Price = Convert::ToDouble(reader["price"]->ToString());
            p->Stock = Convert::ToInt32(reader["stock"]->ToString());
            p->StockUsed = Convert::ToInt32(reader["StockUsed"]->ToString());
            p->TotalMeals = Convert::ToDouble(reader["TotalMeals"]->ToString());
            if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["photo"])) p->Photo = (array<Byte>^)reader["photo"];
            activeMeals = p;
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeMeals;
}

User^ ProjectPersistance::Persistance::QueryUserById(int UserId)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    User^ activeUser;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM USUARIO WHERE id=" + UserId +
            " AND status = 'A'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        if (reader->Read()) {
            User^ p = gcnew User();
            p->Id = Convert::ToInt32(reader["id"]->ToString());
            p->DocNumber= reader["DocNumber"]->ToString();
            p->Name = reader["Name"]->ToString();
            p->Email = reader["Adress"]->ToString();
            p->Adress = reader["Email"]->ToString();
            p->PhoneNumber = reader["PhoneNumber"]->ToString();
            p->LastName = reader["LastName"]->ToString();
            p->Salary = Convert::ToDouble(reader["Salary"]->ToString());
            p->Username = reader["Username"]->ToString();
            p->Password = reader["Password"]->ToString();
            p->Birthday = reader["Birthday"]->ToString();
            p->Type = reader["Type"]->ToString();
            p->State = reader["State"]->ToString();
 

            if (!DBNull::Value->Equals(reader["Gender"])) p->Gender = reader["Gender"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["Status"])) p->Status = reader["Status"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["Photo"])) p->Foto = (array<Byte>^)reader["Photo"];
            activeUser = p;
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeUser;
}

int ProjectPersistance::Persistance::AddUser(User^ p)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_AddUsuario", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@Name", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@DocNumber", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Adress", System::Data::SqlDbType::VarChar, 500);
        comm->Parameters->Add("@Email", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@PhoneNumber", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Status", System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@LastName", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Salary", System::Data::SqlDbType::Decimal, 10);
        comm->Parameters["@Salary"]->Precision = 10;
        comm->Parameters["@Salary"]->Scale = 2;
        comm->Parameters->Add("@Username", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Password", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Gender", System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@Birthday", System::Data::SqlDbType::Date);
        comm->Parameters->Add("@Type", System::Data::SqlDbType::VarChar, 120);
        comm->Parameters->Add("@State", System::Data::SqlDbType::VarChar, 120);
        comm->Parameters->Add("@Photo", System::Data::SqlDbType::Image);

        SqlParameter^ outputIdParam = gcnew SqlParameter("@Id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        comm->Parameters->Add(outputIdParam);
        comm->Prepare();
        comm->Parameters["@Name"]->Value = p->Name;//1
        comm->Parameters["@DocNumber"]->Value = p->DocNumber;//2
        comm->Parameters["@Adress"]->Value = p->Adress;//3
        comm->Parameters["@Email"]->Value = p->Email;//4
        comm->Parameters["@PhoneNumber"]->Value = p->PhoneNumber;//5
        comm->Parameters["@Status"]->Value =Char::ToString( p->Status);//6
        comm->Parameters["@LastName"]->Value = p->LastName;//7
        comm->Parameters["@Salary"]->Value = p->Salary;//8
        comm->Parameters["@Username"]->Value = p->Username;//9
        comm->Parameters["@Password"]->Value = p->Password;//10
        comm->Parameters["@Gender"]->Value = Char::ToString(p->Gender);//11
        comm->Parameters["@Birthday"]->Value = p->Birthday;//12
        comm->Parameters["@Type"]->Value = p->Type;//13
        comm->Parameters["@State"]->Value = p->State;//14
        if (p->Foto==nullptr) {
            comm->Parameters["@Photo"]->Value = DBNull::Value;
        }
        else {
            comm->Parameters["@Photo"]->Value = p->Foto;//15
        }
        //Paso 3: Se ejecuta la sentencia
        comm->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados   
        output_id = Convert::ToInt32(comm->Parameters["@Id"]->Value );//16

        
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        
        if (conn != nullptr) conn->Close();
    }
    return output_id;
}





