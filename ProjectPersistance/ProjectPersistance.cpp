#include "pch.h"

#include "ProjectPersistance.h"
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace ProjectModel;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization;
using namespace System::Globalization;

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
            if (!DBNull::Value->Equals(reader["TotalMeals"]))p->TotalMeals = Convert::ToDouble(reader["TotalMeals"]->ToString());
            
            //DateTime^ sdate = safe_cast<DateTime^>(reader["DateMeal"]);
            //p->DateMeal = sdate->ToString("dd-mm-yyyy", CultureInfo::InvariantCulture);
            p->DateMeal = reader["DateMeal"]->ToString();

            p->StockUsed = Convert::ToInt32(reader["StockUsed"]->ToString());
            if (!DBNull::Value->Equals(reader["Status"])) p->Status = reader["Status"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["Photo"])) p->Photo = (array<Byte>^)reader["Photo"];
            activemealsList->Add(p);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //paso 5: S e cierra los objetos de conexion
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activemealsList;
    
}

Meals^ ProjectPersistance::Persistance::QueryMealsById(int MealsId)
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
            p->DateMeal = Convert::ToString(reader["DateMeal"]->ToString());
            if (!DBNull::Value->Equals(reader["TotalMeals"]))p->TotalMeals = Convert::ToDouble(reader["TotalMeals"]->ToString());
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

int ProjectPersistance::Persistance::AddMeals(Meals^ p)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_AddMeals", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@Name", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Description", System::Data::SqlDbType::VarChar, 500);
        comm->Parameters->Add("@price", System::Data::SqlDbType::Decimal, 10);
        comm->Parameters["@price"]->Precision = 10;
        comm->Parameters["@price"]->Scale = 2;
        comm->Parameters->Add("@stock", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@StockUsed", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@DateMeal", System::Data::SqlDbType::Date);
        comm->Parameters->Add("@Status", System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@Photo", System::Data::SqlDbType::Image);
        comm->Parameters->Add("@TotalMeals", System::Data::SqlDbType::Decimal, 10);
        comm->Parameters["@TotalMeals"]->Precision = 10;
        comm->Parameters["@TotalMeals"]->Scale = 2;
        SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        comm->Parameters->Add(outputIdParam);
        comm->Prepare();
        comm->Parameters["@name"]->Value = p->Name;
        comm->Parameters["@description"]->Value = p->Description;
        comm->Parameters["@price"]->Value = p->Price;
        comm->Parameters["@stock"]->Value = p->Stock;
        comm->Parameters["@stockUsed"]->Value = p->StockUsed;
        comm->Parameters["@DateMeal"]->Value = p->DateMeal;
        comm->Parameters["@status"]->Value = Char::ToString(p->Status);
        comm->Parameters["@TotalMeals"]->Value = p->TotalMeals;
        if (p->Photo == nullptr)
            comm->Parameters["@photo"]->Value = DBNull::Value;
        else
            comm->Parameters["@photo"]->Value = p->Photo;

        //Paso 3: Se ejecuta la sentencia
        comm->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados        
        output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);
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

int ProjectPersistance::Persistance::UpdateMeals(Meals^ p)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int result;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_UpdateMeals", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@Name", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Description", System::Data::SqlDbType::VarChar, 500);
        comm->Parameters->Add("@price", System::Data::SqlDbType::Decimal, 10);
        comm->Parameters["@price"]->Precision = 10;
        comm->Parameters["@price"]->Scale = 2;
        comm->Parameters->Add("@stock", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@StockUsed", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@DateMeal", System::Data::SqlDbType::Date);
        comm->Parameters->Add("@Status", System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@Photo", System::Data::SqlDbType::Image);
        comm->Parameters->Add("@TotalMeals", System::Data::SqlDbType::Decimal, 10);
        comm->Parameters["@TotalMeals"]->Precision = 10;
        comm->Parameters["@TotalMeals"]->Scale = 2;
        
        comm->Prepare();
        comm->Parameters["@id"]->Value = p->Id;
        comm->Parameters["@name"]->Value = p->Name;
        comm->Parameters["@description"]->Value = p->Description;
        comm->Parameters["@price"]->Value = p->Price;
        comm->Parameters["@stock"]->Value = p->Stock;
        comm->Parameters["@stockUsed"]->Value = p->StockUsed;
        comm->Parameters["@DateMeal"]->Value = p->DateMeal;
        comm->Parameters["@status"]->Value = Char::ToString(p->Status);
        comm->Parameters["@TotalMeals"]->Value = p->TotalMeals;
        if (p->Photo == nullptr)
            comm->Parameters["@photo"]->Value = DBNull::Value;
        else
            comm->Parameters["@photo"]->Value = p->Photo;

        //Paso 3: Se ejecuta la sentencia
        result=comm->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados        
       
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return result;
}

int ProjectPersistance::Persistance::DeleteMeals(int MealsId)
{
    
        SqlConnection^ conn;
        SqlCommand^ comm;
        int result;
        try {
            //Paso 1: Se obtiene la conexión
            conn = GetConnection();

            //Paso 2: Se prepara la sentencia
            comm = gcnew SqlCommand("UPDATE MEALS "
                + "SET Status = 'I' "
                + "WHERE id = " + MealsId, conn);

            //Paso 3: Se ejecuta la sentencia
            result = comm->ExecuteNonQuery();

            //Paso 4: Se procesan los resultados (No aplica)    
        }
        catch (Exception^ ex) {
            throw ex;
        }
        finally {
            //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
            if (conn != nullptr) conn->Close();
        }
        return result;
    
}

List<Meals^>^ ProjectPersistance::Persistance::QueryMealsByNameOrDescription(String^ value)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<Meals^>^ activeProductsList = gcnew List<Meals^>();
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM MEALS WHERE " +
            "(Name LIKE '%" + value + "%' OR " +
            "Description LIKE '%" + value + "%') AND " +
            "Status = 'A'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        while (reader->Read()) {
            Meals^ p = gcnew Meals();
            p->Id = Convert::ToInt32(reader["id"]->ToString());
            p->Name = reader["name"]->ToString();
            p->Description = reader["description"]->ToString();
            p->Price = Convert::ToDouble(reader["price"]->ToString());
            if (!DBNull::Value->Equals(reader["TotalMeals"]))p->TotalMeals = Convert::ToDouble(reader["TotalMeals"]->ToString());

            //DateTime^ sdate = safe_cast<DateTime^>(reader["DateMeal"]);
            //p->DateMeal = sdate->ToString("dd-MM-yyyy", CultureInfo::InvariantCulture);
            p->DateMeal = reader["DateMeal"]->ToString();

            p->StockUsed = Convert::ToInt32(reader["StockUsed"]->ToString());
            
            p->Stock = Convert::ToInt32(reader["stock"]->ToString());
            if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["photo"])) p->Photo = (array<Byte>^)reader["photo"];
            activeProductsList->Add(p);
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
    return activeProductsList;
}





int ProjectPersistance::Persistance::AddTableDetail(TableDetail^t)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_AddTableDetail", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@Floor", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@TableCapacity", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@Disponibility", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Reserved", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@TimeReserv", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Status", System::Data::SqlDbType::Char, 1);

        SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        comm->Parameters->Add(outputIdParam);
        comm->Prepare();
        comm->Parameters["@floor"]->Value = t->Floor;
        comm->Parameters["@tableCapacity"]->Value = t->TableCapacity;
        comm->Parameters["@disponibility"]->Value = t->Disponibility;
        comm->Parameters["@reserved"]->Value = t->Reserved;
        comm->Parameters["@timeReserv"]->Value = t->TimeReserv;
        comm->Parameters["@status"]->Value = Char::ToString(t->Status);

        //Paso 3: Se ejecuta la sentencia
        comm->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados        
        output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);
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

int ProjectPersistance::Persistance::UpdateTableDetail(TableDetail^p)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int result;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("usp_UpdateTableDetail", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@Id", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@Floor", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@TableCapacity", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@Disponibility", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Reserved", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@TimeReserv", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Status", System::Data::SqlDbType::Char, 1);

        comm->Prepare();
        comm->Parameters["@id"]->Value = p->Id;
        comm->Parameters["@floor"]->Value = p->Floor;
        comm->Parameters["@tableCapacity"]->Value = p->TableCapacity;
        comm->Parameters["@disponibility"]->Value = p->Disponibility;
        comm->Parameters["@reserved"]->Value = p->Reserved;
        comm->Parameters["@timeReserv"]->Value = p->TimeReserv;
        comm->Parameters["@status"]->Value = Char::ToString(p->Status);
  
        //Paso 3: Se ejecuta la sentencia
        result = comm->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados        

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return result;
}

int ProjectPersistance::Persistance::DeleteTableDetail(int TableDetailId)
{

    SqlConnection^ conn;
    SqlCommand^ comm;
    int result;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("UPDATE TABLEDETAIL "
            + "SET Status = 'I' "
            + "WHERE id = " + TableDetailId, conn);

        //Paso 3: Se ejecuta la sentencia
        result = comm->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados (No aplica)    
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return result;
}


List<Client_Info^>^ ProjectPersistance::Persistance::QueryAllClient_Info()
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<Client_Info^>^ activeClientList = gcnew List<Client_Info^>();
    try {
        // paso1: Se obtiene la conexion
        conn = GetConnection();
        // paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM CLIENT_INFO WHERE Status ='A'", conn);
        //paso 3: Se ejecuta la sentecia
        reader = comm->ExecuteReader();
        // paso 4: se procesan los resultados
        while (reader->Read()) {
            Client_Info^ p = gcnew Client_Info();
            p->Id = Convert::ToInt32(reader["Id"]->ToString());
            p->DocNumber = reader["DocNumber"]->ToString();
            p->Name = reader["Name"]->ToString();
            p->LastName = reader["LastName"]->ToString();
            p->PhoneNumber = reader["PhoneNumber"]->ToString();
            p->VisitQuantity = Convert::ToInt32(reader["VisitQuantity"]->ToString());
            //p->Type = reader["Type"]->ToString()[0];
            p->RucNumber = reader["RucNumber"]->ToString();
            p->Rate = Convert::ToInt32(reader["Rate"]->ToString());
            p->TxtOpin = reader["TxtOpin"]->ToString();
            //p->Gender = reader["Gender"]->ToString()[0];

            if (!DBNull::Value->Equals(reader["Status"])) p->Status = reader["Status"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["Type"])) p->Type = reader["Type"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["Gender"])) p->Gender = reader["Gender"]->ToString()[0];
            activeClientList->Add(p);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //paso 5: S e cierra los objetos de conexion
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeClientList;
}

Client_Info^ ProjectPersistance::Persistance::QueryClient_InfotById(int Client_InfoId)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    Client_Info^ clientInfos;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM CLIENT_INFO WHERE Id=" + Client_InfoId +
            " AND Status = 'A'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        if (reader->Read()) {
            Client_Info^ p = gcnew Client_Info();
            p->Id = Convert::ToInt32(reader["Id"]->ToString());
            p->DocNumber = reader["DocNumber"]->ToString();
            p->Name = reader["Name"]->ToString();
            p->LastName = reader["LastName"]->ToString();
            p->PhoneNumber = reader["PhoneNumber"]->ToString();
            p->VisitQuantity = Convert::ToInt32(reader["VisitQuantity"]->ToString());
            //p->Type = reader["Type"]->ToString()[0];
            p->RucNumber = reader["RucNumber"]->ToString();
            p->Rate = Convert::ToInt32(reader["Rate"]->ToString());
            p->TxtOpin = reader["TxtOpin"]->ToString();
            //p->Gender = reader["Gender"]->ToString()[0];

            if (!DBNull::Value->Equals(reader["Status"])) p->Status = reader["Status"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["Type"])) p->Type = reader["Type"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["Gender"])) p->Gender = reader["Gender"]->ToString()[0];
            clientInfos = p;
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
    return clientInfos;
}

int ProjectPersistance::Persistance::AddClient_Info(Client_Info^ p)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_AddClient_Info", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@DocNumber", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Name", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@LastName", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@PhoneNumber", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@VisitQuantity", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@Type", System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@RucNumber", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Rate", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@TxtOpin", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Status", System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@Gender", System::Data::SqlDbType::Char, 1);

      
        SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        comm->Parameters->Add(outputIdParam);
        comm->Prepare();
        comm->Parameters["@docNumber"]->Value = p->DocNumber;
        comm->Parameters["@name"]->Value = p->Name;
        comm->Parameters["@lastName"]->Value = p->LastName;
        comm->Parameters["@phoneNumber"]->Value = p->PhoneNumber;
        comm->Parameters["@visitQuantity"]->Value = p->VisitQuantity;
        comm->Parameters["@type"]->Value = Char::ToString(p->Type);
        comm->Parameters["@rucNumber"]->Value = p->RucNumber;
        comm->Parameters["@rate"]->Value = p->Rate;
        comm->Parameters["@txtOpin"]->Value = p->TxtOpin;
        comm->Parameters["@status"]->Value = Char::ToString(p->Status);
        comm->Parameters["@gender"]->Value = Char::ToString(p->Gender);
       

        //Paso 3: Se ejecuta la sentencia
        comm->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados        
        output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);
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

int ProjectPersistance::Persistance::UpdateClient_Info(Client_Info^ p)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int result;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_UpdateClient_Info", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@Id", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@DocNumber", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Name", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@LastName", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@PhoneNumber", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@VisitQuantity", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@Type", System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@RucNumber", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Rate", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@TxtOpin", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Status", System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@Gender", System::Data::SqlDbType::Char, 1);

        comm->Prepare();
        comm->Parameters["@id"]->Value = p->Id;
        comm->Parameters["@docNumber"]->Value = p->DocNumber;
        comm->Parameters["@name"]->Value = p->Name;
        comm->Parameters["@lastName"]->Value = p->LastName;
        comm->Parameters["@phoneNumber"]->Value = p->PhoneNumber;
        comm->Parameters["@visitQuantity"]->Value = p->VisitQuantity;
        comm->Parameters["@type"]->Value = Char::ToString(p->Type);
        comm->Parameters["@rucNumber"]->Value = p->RucNumber;
        comm->Parameters["@rate"]->Value = p->Rate;
        comm->Parameters["@txtOpin"]->Value = p->TxtOpin;
        comm->Parameters["@status"]->Value = Char::ToString(p->Status);
        comm->Parameters["@gender"]->Value = Char::ToString(p->Gender);

        //Paso 3: Se ejecuta la sentencia
        result = comm->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados        

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return result;
}

int ProjectPersistance::Persistance::DeleteClient_Info(int Client_InfoId)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int result;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("UPDATE CLIENT_INFO "
            + "SET Status = 'I' "
            + "WHERE id = " + Client_InfoId, conn);

        //Paso 3: Se ejecuta la sentencia
        result = comm->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados (No aplica)    
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return result;
}

List<Client_Info^>^ ProjectPersistance::Persistance::QueryClient_InfoByNameOrLastName(String^ value)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<Client_Info^>^ activeClientsList = gcnew List<Client_Info^>();
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM CLIENT_INFO WHERE " +
            "(Name LIKE '%" + value + "%' OR " +
            "LastName LIKE '%" + value + "%') AND " +
            "Status = 'A'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        while (reader->Read()) {
            Client_Info^ p = gcnew Client_Info();
            p->Id = Convert::ToInt32(reader["Id"]->ToString());
            p->DocNumber = reader["DocNumber"]->ToString();
            p->Name = reader["Name"]->ToString();
            p->LastName = reader["LastName"]->ToString();
            p->PhoneNumber = reader["PhoneNumber"]->ToString();
            p->VisitQuantity = Convert::ToInt32(reader["VisitQuantity"]->ToString());
            //p->Type = reader["Type"]->ToString()[0];
            p->RucNumber = reader["RucNumber"]->ToString();
            p->Rate = Convert::ToInt32(reader["Rate"]->ToString());
            p->TxtOpin = reader["TxtOpin"]->ToString();
            //p->Gender = reader["Gender"]->ToString()[0];

            if (!DBNull::Value->Equals(reader["Status"])) p->Status = reader["Status"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["Type"])) p->Type = reader["Type"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["Gender"])) p->Gender = reader["Gender"]->ToString()[0];
            activeClientsList->Add(p);
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
    return activeClientsList;
}

Client_Info^ ProjectPersistance::Persistance::QueryClient_InfoByDocNumber(String^ DocNumber)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    Client_Info^ clientInfos;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM CLIENT_INFO WHERE DOCNUMBER=" + DocNumber + 
            " AND Status = 'A'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        if (reader->Read()) {
            Client_Info^ p = gcnew Client_Info();
            p->Id = Convert::ToInt32(reader["Id"]->ToString());
            p->DocNumber = reader["DocNumber"]->ToString();
            p->Name = reader["Name"]->ToString();
            p->LastName = reader["LastName"]->ToString();
            p->PhoneNumber = reader["PhoneNumber"]->ToString();
            p->VisitQuantity = Convert::ToInt32(reader["VisitQuantity"]->ToString());
            //p->Type = reader["Type"]->ToString()[0];
            p->RucNumber = reader["RucNumber"]->ToString();
            p->Rate = Convert::ToInt32(reader["Rate"]->ToString());
            p->TxtOpin = reader["TxtOpin"]->ToString();
            //p->Gender = reader["Gender"]->ToString()[0];

            if (!DBNull::Value->Equals(reader["Status"])) p->Status = reader["Status"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["Type"])) p->Type = reader["Type"]->ToString()[0];
            if (!DBNull::Value->Equals(reader["Gender"])) p->Gender = reader["Gender"]->ToString()[0];
            clientInfos = p;
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
    return clientInfos;
}

TableDetail^ ProjectPersistance::Persistance::QueryTableDetailtById(int TableDetailId)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    TableDetail^ tableDetails;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM TABLEDETAIL WHERE Id=" + TableDetailId +
            " AND status = 'A'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        if (reader->Read()) {
            TableDetail^ p = gcnew TableDetail();
            p->Id = Convert::ToInt32(reader["Id"]->ToString());
            p->Floor = Convert::ToInt32(reader["Floor"]->ToString());
            p->TableCapacity = Convert::ToInt32(reader["TableCapacity"]->ToString());
            p->Disponibility = reader["Disponibility"]->ToString();
            p->Reserved = reader["Reserved"]->ToString();
            p->TimeReserv = reader["TimeReserv"]->ToString();

            if (!DBNull::Value->Equals(reader["Status"])) p->Status = reader["Status"]->ToString()[0];
            tableDetails = p;
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
    return tableDetails;
}

List<TableDetail^>^ ProjectPersistance::Persistance::QueryAllTableDetail()
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<TableDetail^>^ activeTablesList = gcnew List<TableDetail^>();
    try {
        // paso1: Se obtiene la conexion
        conn = GetConnection();
        // paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM TABLEDETAIL WHERE Status ='A'", conn);
        //paso 3: Se ejecuta la sentecia
        reader = comm->ExecuteReader();
        // paso 4: se procesan los resultados
        while (reader->Read()) {
            TableDetail^ p = gcnew TableDetail();
            p->Id = Convert::ToInt32(reader["Id"]->ToString());
            p->Floor = Convert::ToInt32(reader["Floor"]->ToString());
            p->TableCapacity = Convert::ToInt32(reader["TableCapacity"]->ToString());
            p->Disponibility = reader["Disponibility"]->ToString();
            p->Reserved = reader["Reserved"]->ToString();
            p->TimeReserv = reader["TimeReserv"]->ToString();
            if (!DBNull::Value->Equals(reader["Status"])) p->Status = reader["Status"]->ToString()[0];
            activeTablesList->Add(p);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //paso 5: S e cierra los objetos de conexion
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeTablesList;
}


SaleDetail^ ProjectPersistance::Persistance::QueryAllSaleDetailById(int SaleDetailId) {
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    SaleDetail^ saleDetail;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM SALE_DETAIL WHERE id=" + SaleDetailId /* +
            " AND status = 'A'"*/, conn);
            //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        if (reader->Read()) {
            SaleDetail^ p = gcnew SaleDetail  ();


           
            p->Id = Convert::ToInt32(reader["Id"]->ToString());
            p->Meals = QueryMealsById(Convert::ToInt32(reader["Meals_id"]->ToString()));
            p->Quantity = Convert::ToInt32(reader["Quantity"]->ToString());
            p->Estado = reader["Estado"]->ToString();



            saleDetail = p;
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
    return saleDetail;
}
Suggestions^ ProjectPersistance::Persistance::QuerySuggestionsById(int SuggestionsId) {
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    Suggestions^ suggestions;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM SUGGESTIONS WHERE id=" + SuggestionsId /* +
            " AND status = 'A'"*/, conn);
            //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        if (reader->Read()) {
            Suggestions^ p = gcnew Suggestions();

          

            p->Id = Convert::ToInt32(reader["Id"]->ToString());
            p->ClientName = reader["ClientName"]->ToString();
            p->AttentionScore = reader["AttentionScore"]->ToString();
            p->FoodScore = reader["FoodScore"]->ToString();
            p->VenueScore = reader["VenueScore"]->ToString();
            p->Comments = reader["Comments"]->ToString();
            p->Client_Info = QueryClient_InfotById(Convert::ToInt32(reader["Client_id"]->ToString()));
            p->Estado = reader["Estado"]->ToString();
            if (!DBNull::Value->Equals(reader["Status"])) p->Status = reader["Status"]->ToString()[0];


            suggestions = p;
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
    return suggestions;
}
Sale^ ProjectPersistance::Persistance::QueryAllSaleById(int SaleId)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    Sale^ sale;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM SALE WHERE id=" + SaleId, conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        if (reader->Read()) {
            Sale^ p = gcnew Sale();
            p->Id = Convert::ToInt32(reader["Id"]->ToString());
            p->TxtDate = reader["Transaction_date"]->ToString();
            p->Total = Convert::ToDouble(reader["Total"]->ToString());
            p->Fecha = reader["Fecha"]->ToString();
            p->Client_Info = QueryClient_InfotById(Convert::ToInt32(reader["Client_id"]->ToString()));
            p->User = QueryUserById(Convert::ToInt32(reader["Usuario_id"]->ToString()));
            p->TableDetail = QueryTableDetailtById(Convert::ToInt32(reader["Table_id"]->ToString()));
            p->Estado = reader["Estado"]->ToString();
            if (!DBNull::Value->Equals(reader["Status"])) p->Status = reader["Status"]->ToString()[0];
            sale = p;
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
    return sale;
}
int ProjectPersistance::Persistance::SuggestionsChangeEstado(String^ estado, int Id)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int result;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia

        comm = gcnew SqlCommand("UPDATE SUGGESTIONS "
            + "SET Estado ='" + estado + "'WHERE Id = " + Id, conn);

        //Paso 3: Se ejecuta la sentencia
        result = comm->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados (No aplica)    
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return result;
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
        comm = gcnew SqlCommand("SELECT * FROM USUARIO WHERE id=" + UserId + "AND State LIKE '%ACTIVO%'"/* +
            " AND status = 'A'"*/, conn);
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

List<User^>^ ProjectPersistance::Persistance::QueryAllUser()
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<User^>^ UserList = gcnew List<User^>(); 
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM USUARIO WHERE " + " State LIKE '%ACTIVO%'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        while (reader->Read()) {
            User^ p = gcnew User();
            p->Id = Convert::ToInt32(reader["id"]->ToString());
            p->DocNumber = reader["DocNumber"]->ToString();
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
            UserList ->Add(p);
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
    return UserList;
}

User^ ProjectPersistance::Persistance::QueryUserbyDni(String^ Dni)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    User^ activeUser;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM USUARIO WHERE DocNumber LIKE '%" +Dni+ "%'AND State LIKE '%ACTIVO%'"/* +
            " AND status = 'A'"*/, conn);
            //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        if (reader->Read()) {
            User^ p = gcnew User();
            p->Id = Convert::ToInt32(reader["id"]->ToString());
            p->DocNumber = reader["DocNumber"]->ToString();
            p->Name = reader["Name"]->ToString();
            p->Email = reader["Email"]->ToString();
            p->Adress = reader["Adress"]->ToString();
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

int ProjectPersistance::Persistance::UpdateUser(User^p)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int result;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_UpdateUsuario", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@Id", System::Data::SqlDbType::Int);
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
        comm->Prepare();
        comm->Parameters["@Id"]->Value = p->Id;
        comm->Parameters["@Name"]->Value = p->Name;//1
        comm->Parameters["@DocNumber"]->Value = p->DocNumber;//2
        comm->Parameters["@Adress"]->Value = p->Adress;//3
        comm->Parameters["@Email"]->Value = p->Email;//4
        comm->Parameters["@PhoneNumber"]->Value = p->PhoneNumber;//5
        comm->Parameters["@Status"]->Value = Char::ToString(p->Status);//6
        comm->Parameters["@LastName"]->Value = p->LastName;//7
        comm->Parameters["@Salary"]->Value = p->Salary;//8
        comm->Parameters["@Username"]->Value = p->Username;//9
        comm->Parameters["@Password"]->Value = p->Password;//10
        comm->Parameters["@Gender"]->Value = Char::ToString(p->Gender);//11
        comm->Parameters["@Birthday"]->Value = p->Birthday;//12
        comm->Parameters["@Type"]->Value = p->Type;//13
        comm->Parameters["@State"]->Value = p->State;//14
        if (p->Foto == nullptr) {
            comm->Parameters["@Photo"]->Value = DBNull::Value;
        }
        else {
            comm->Parameters["@Photo"]->Value = p->Foto;//15
        }
        //Paso 3: Se ejecuta la sentencia
       result= comm->ExecuteNonQuery();
       //Paso 4: Se procesan los resultados (no aplica)  
      

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.

        if (conn != nullptr) conn->Close();
    }
    return result;
}

int ProjectPersistance::Persistance::DeleteUser(int UserId)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int result;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("UPDATE USUARIO "
            + "SET State = 'ELIMINADO' "
            + "WHERE id = " + UserId, conn);

        //Paso 3: Se ejecuta la sentencia
        result = comm->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados (No aplica)    
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return result;
}

User^ ProjectPersistance::Persistance::Login(String^ Username, String^ Password)
{
    User^ user;
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_ValidateUsuario ", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@Vusername", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@Vpassword", System::Data::SqlDbType::VarChar, 100);
        comm->Prepare();
        comm->Parameters["@Vusername"]->Value = Username;
        comm->Parameters["@Vpassword"]->Value = Password;
        reader = comm->ExecuteReader();
        //paso 4 se Procesan los resultados
        if (reader->Read()) {
            if (reader["Type"]->ToString()->Equals("Administrador")) {/*Mesero Cocinero Cajero Administrador*/
                User^ p = gcnew User();
                p->Id = Convert::ToInt32(reader["id"]->ToString());
                p->DocNumber = reader["DocNumber"]->ToString();
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
                user = p;
            }
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
    return user;
}

User^ ProjectPersistance::Persistance::ChangePassword(String^ UserDNI, String^ UserUsuario, String^ UserName, String^ UserLastName, String^ UserNumber, String^ newpassword)
{
    User^ user= QueryUserRecover( UserDNI,  UserUsuario, UserName,  UserLastName,  UserNumber);
    SqlConnection^ conn;
    SqlCommand^ comm;
    int id = user->Id;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia

       /* comm = gcnew SqlCommand("UPDATE USUARIO "
            + "SET State = 'ELIMINADO' "
            + "WHERE id = " + UserId, conn);
        '%" +Dni+ "%'*/


        comm = gcnew SqlCommand("UPDATE USUARIO "
            
            + "SET Password = '"+newpassword+"' WHERE Id = " + id, conn);

        //Paso 3: Se ejecuta la sentencia
        comm->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados (No aplica)    
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    

    return user;
}

User^ ProjectPersistance::Persistance::QueryUserRecover(String^ UserDNI, String^ UserUsuario, String^ UserName, String^ UserLastName, String^ UserNumber)
{
    User^ user;
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_ValidateUserRecover ", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
       
        comm->Parameters->Add("@Name", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@DocNumber", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@PhoneNumber", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@LastName", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Username", System::Data::SqlDbType::VarChar, 250);
        //comm->Parameters->Add("@Type", System::Data::SqlDbType::VarChar, 120);


        comm->Prepare();
        comm->Parameters["@Name"]->Value = UserName;
        comm->Parameters["@DocNumber"]->Value = UserDNI;
        comm->Parameters["@PhoneNumber"]->Value = UserNumber;
        comm->Parameters["@LastName"]->Value = UserLastName;
        comm->Parameters["@Username"]->Value = UserUsuario;
        reader = comm->ExecuteReader();
        //paso 4 se Procesan los resultados
        if (reader->Read()) {

            User^ p = gcnew User();
            p->Id = Convert::ToInt32(reader["id"]->ToString());
            p->DocNumber = reader["DocNumber"]->ToString();
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
            user = p;
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
    return user;
}

List<Sale^>^ ProjectPersistance::Persistance::QueryAllSale()
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<Sale^>^ list = gcnew List<Sale^>();
    try {
        /* 1er paso: Se obtiene la conexión */
        conn = GetConnection();

        /* 2do paso: Se prepara la sentencia */
        comm = gcnew SqlCommand("dbo.usp_QueryAllSale", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Prepare();

        /* 3er paso: Se ejecuta la sentencia */
        reader = comm->ExecuteReader();

        /* 4to paso: Se procesan los resultados */
        while (reader->Read()) {
            Sale^ s = gcnew Sale();
            s->Id = Int32::Parse(reader["id"]->ToString());
            s->Total = Double::Parse(reader["total"]->ToString());
            DateTime^ TxtDate = safe_cast<DateTime^>(reader["transaction_date"]);
            s->TxtDate = TxtDate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);
            s->Status = reader["id"]->ToString()[0];
            s->Fecha = reader["Fecha"]->ToString();
            s->Client_Info = QueryClient_InfotById(Int32::Parse(reader["Client_id"]->ToString()));
            s->TableDetail = QueryTableDetailtById(Int32::Parse(reader["Table_id"]->ToString()));
            s->User = QueryUserById(Int32::Parse(reader["Usuario_id"]->ToString()));
            list->Add(s);
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
    return list;
}

int ProjectPersistance::Persistance::RegisterSale(Sale^ sale)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_AddSale", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@Transaction_date", System::Data::SqlDbType::Date);
        comm->Parameters->Add("@Status", System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@Fecha", System::Data::SqlDbType::Date);
        comm->Parameters->Add("@Total", System::Data::SqlDbType::Decimal, 10);
        comm->Parameters["@Total"]->Precision = 10;
        comm->Parameters["@Total"]->Scale = 2;
        comm->Parameters->Add("@Client_id", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@Usuario_id", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@Estado", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Table_id", System::Data::SqlDbType::Int);

        SqlParameter^ outputIdParam = gcnew SqlParameter("@Id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        comm->Parameters->Add(outputIdParam);
        comm->Prepare();
        comm->Parameters["@transaction_date"]->Value = sale->TxtDate;
        comm->Parameters["@status"]->Value = Char::ToString(sale->Status);
        comm->Parameters["@total"]->Value = sale->Total;
        comm->Parameters["@Fecha"]->Value = sale->Fecha;
        //comm->Parameters["@customer_id"]->Value = 4; // Hardcode de un código de cliente
        comm->Parameters["@Client_id"]->Value = sale->Client_Info->Id;
        comm->Parameters["@Usuario_id"]->Value = sale->User->Id;
        comm->Parameters["@Estado"]->Value = sale->Estado;
        comm->Parameters["@Table_id"]->Value = sale->TableDetail->Id;

        //Paso 3: Se ejecuta la sentencia
        comm->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados        
        output_id = Convert::ToInt32(comm->Parameters["@Id"]->Value);




        for (int i = 0; i < sale->SaleDetails->Count; i++) {
            comm = gcnew SqlCommand("dbo.usp_AddSaleDetail", conn);
            comm->CommandType = System::Data::CommandType::StoredProcedure;
            comm->Parameters->Add("@Sale_id", System::Data::SqlDbType::Int);
            comm->Parameters->Add("@Meals_id", System::Data::SqlDbType::Int);
            comm->Parameters->Add("@Quantity", System::Data::SqlDbType::Int);
            comm->Parameters->Add("@Subtotal", System::Data::SqlDbType::Decimal, 10);
            comm->Parameters["@Subtotal"]->Precision = 10;
            comm->Parameters["@Subtotal"]->Scale = 2;
            comm->Parameters->Add("@Unit_price", System::Data::SqlDbType::Decimal, 10);
            comm->Parameters["@Unit_price"]->Precision = 10;
            comm->Parameters["@Unit_price"]->Scale = 2;
            comm->Parameters->Add("@Estado", System::Data::SqlDbType::VarChar, 250);
            SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
            outputIdParam->Direction = System::Data::ParameterDirection::Output;
            comm->Parameters->Add(outputIdParam);
            comm->Prepare();
            comm->Parameters["@Sale_id"]->Value = output_id;
            comm->Parameters["@Meals_id"]->Value = sale->SaleDetails[i]->Meals->Id;
            comm->Parameters["@Quantity"]->Value = sale->SaleDetails[i]->Quantity;
            comm->Parameters["@Subtotal"]->Value = sale->SaleDetails[i]->Subtotal;
            comm->Parameters["@Unit_price"]->Value = sale->SaleDetails[i]->UnitPrice;
            comm->Parameters["@Estado"]->Value = sale->SaleDetails[i]->Estado;

            //Paso 3: Se ejecuta la sentencia
            comm->ExecuteNonQuery();
        }
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

int ProjectPersistance::Persistance::RegisterSuggestions(Suggestions^ suggestions)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_AddSUGGESTIONS", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@Fecha", System::Data::SqlDbType::Date);
        comm->Parameters->Add("@ClientName", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@AttentionScore", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@FoodScore", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@VenueScore", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Comments", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Client_id", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@Estado", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@Status", System::Data::SqlDbType::Char, 1);
        SqlParameter^ outputIdParam = gcnew SqlParameter("@Id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        comm->Parameters->Add(outputIdParam);
        comm->Prepare();
        comm->Parameters["@Fecha"]->Value = suggestions->Date;
        comm->Parameters["@ClientName"]->Value = suggestions->ClientName;
        comm->Parameters["@AttentionScore"]->Value = suggestions->AttentionScore;
        comm->Parameters["@FoodScore"]->Value = suggestions->FoodScore;
        comm->Parameters["@VenueScore"]->Value = suggestions->VenueScore;
        comm->Parameters["@Comments"]->Value = suggestions->Comments;
        comm->Parameters["@Status"]->Value = Char::ToString(suggestions->Status);
        comm->Parameters["@Client_id"]->Value = suggestions->Client_Info->Id;
        comm->Parameters["@Estado"]->Value = suggestions->Estado;
      

        //Paso 3: Se ejecuta la sentencia
        comm->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados        
        output_id = Convert::ToInt32(comm->Parameters["@Id"]->Value);

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

List<SaleDetail^>^ ProjectPersistance::Persistance::QueryAllSaleDetailsNp()
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<SaleDetail^>^ SaleDetailList = gcnew List<SaleDetail^>();
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM SALE_DETAIL WHERE " + " Estado LIKE '%no preparado%'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        while (reader->Read()) {
            SaleDetail^ p = gcnew SaleDetail();
            p->Id = Convert::ToInt32(reader["Id"]->ToString());
            p->Meals =QueryMealsById( Convert::ToInt32(reader["Meals_id"]->ToString()));
            p->Quantity = Convert::ToInt32( reader["Quantity"]->ToString());
            p->Estado = reader["Estado"]->ToString();
            
            SaleDetailList->Add(p);
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
    return SaleDetailList;
}


int ProjectPersistance::Persistance::SaledetailChangeEstado(int Id) {
    SqlConnection^ conn;
    SqlCommand^ comm;
    int result;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("UPDATE SALE_DETAIL "
            + "SET Estado = 'preparado' "
            + "WHERE id = " + Id, conn);

        //Paso 3: Se ejecuta la sentencia
        result = comm->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados (No aplica)    
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return result;
}







