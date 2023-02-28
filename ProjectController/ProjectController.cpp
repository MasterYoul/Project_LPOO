#include "pch.h"

#include "ProjectController.h"



void ProjectController::Controller::Init()
{

}

List<SaleDetail^>^ ProjectController::Controller::ChangeQueryAllSaleDetail()
{
    SaleList = (List<Sale^>^)Persistance::LoadBinaryData("Sale.bin");
    List<SaleDetail^>^ returnedDetalle = gcnew List<SaleDetail^>();
    // cambios
    for (int num = 0; num < SaleList->Count; num++)
    {
        for (int i = 0; i < SaleList[num]->SaleDetails->Count; i++) {
            if (SaleList[num]->SaleDetails[i]->Estado->Equals("no preparado")) {
                SaleList[num]->SaleDetails[i]->Estado = "preparado";
                returnedDetalle->Add(SaleList[num]->SaleDetails[i]);
            }
        }
        Persistance::PersistBinary("Sale.bin", SaleList);
    }
    return returnedDetalle;

}

List<TableDetail^>^ ProjectController::Controller::QueryAllTableOcupado() {
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    int j = 0;

    List<TableDetail^>^ returnedDetalle = gcnew List<TableDetail^>();
    for (int i = 0; i < TableDetailList->Count; i++)
    {
        if (TableDetailList[i]->Disponibility->Equals("DISPONIBLE")) {
            j++;
        }
        else {
            returnedDetalle->Add(TableDetailList[i]);
        }

    }
    return returnedDetalle;
}

List<TableDetail^>^ ProjectController::Controller::QueryAllTableLibreporpiso(int piso) {
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    List<TableDetail^>^ returnedDetalle = gcnew List<TableDetail^>();
    for (int i = 0; i < TableDetailList->Count; i++)
    {
        if (TableDetailList[i]->Disponibility->Equals("DISPONIBLE") && TableDetailList[i]->Floor==(piso)) {
            returnedDetalle->Add(TableDetailList[i]);
        }

    }
    return returnedDetalle;

}

List<TableDetail^>^ ProjectController::Controller::QueryAllTableOcupadasporpiso(int piso) {
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    List<TableDetail^>^ returnedDetalle = gcnew List<TableDetail^>();
    for (int i = 0; i < TableDetailList->Count; i++)
    {
        if (TableDetailList[i]->Disponibility->Equals("NO DISPONIBLE") && TableDetailList[i]->Floor == (piso)) {
            returnedDetalle->Add(TableDetailList[i]);
        }

    }
    return returnedDetalle;

}
List<TableDetail^>^ ProjectController::Controller::QueryAllTableOcupadasporcapacidad(int capacidad) {
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    List<TableDetail^>^ returnedDetalle = gcnew List<TableDetail^>();
    for (int i = 0; i < TableDetailList->Count; i++)
    {
        if (TableDetailList[i]->Disponibility->Equals("NO DISPONIBLE") && TableDetailList[i]->TableCapacity == (capacidad)) {
            returnedDetalle->Add(TableDetailList[i]);
        }

    }
    return returnedDetalle;

}



List<TableDetail^>^ ProjectController::Controller::QueryAllTableLibreporpisoporcapacidad(int piso, int capacidad) {
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    List<TableDetail^>^ returnedDetalle = gcnew List<TableDetail^>();
    for (int i = 0; i < TableDetailList->Count; i++)
    {
        if (TableDetailList[i]->Disponibility->Equals("DISPONIBLE") && TableDetailList[i]->Floor == (piso) && TableDetailList[i]->TableCapacity == capacidad) {
            returnedDetalle->Add(TableDetailList[i]);
        }

    }
    return returnedDetalle;
}



List<TableDetail^>^ ProjectController::Controller::QueryAllTableporpisoporcapacidad(int piso, int capacidad) {
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    List<TableDetail^>^ returnedDetalle = gcnew List<TableDetail^>();
    for (int i = 0; i < TableDetailList->Count; i++)
    {
        if ( TableDetailList[i]->Floor == (piso)&& TableDetailList[i]->TableCapacity==capacidad) {
            returnedDetalle->Add(TableDetailList[i]);
        }

    }
    return returnedDetalle;
}

List<TableDetail^>^ ProjectController::Controller::QueryAllTableOcupadaporpisoporcapacidad(int piso, int capacidad) {
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    List<TableDetail^>^ returnedDetalle = gcnew List<TableDetail^>();
    for (int i = 0; i < TableDetailList->Count; i++)
    {
        if (TableDetailList[i]->Disponibility->Equals("NO DISPONIBLE") && TableDetailList[i]->Floor == (piso) && TableDetailList[i]->TableCapacity == capacidad) {
            returnedDetalle->Add(TableDetailList[i]);
        }

    }
    return returnedDetalle;
}


List<TableDetail^>^ ProjectController::Controller::QueryAllTableporpiso(int piso) {
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    List<TableDetail^>^ returnedDetalle = gcnew List<TableDetail^>();
    for (int i = 0; i < TableDetailList->Count; i++)
    {
        if (TableDetailList[i]->Floor == (piso) ) {
            returnedDetalle->Add(TableDetailList[i]);
        }

    }
    return returnedDetalle;
}
List<TableDetail^>^ ProjectController::Controller::QueryAllTableporcapacidad(int capacidad) {
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    List<TableDetail^>^ returnedDetalle = gcnew List<TableDetail^>();
    for (int i = 0; i < TableDetailList->Count; i++)
    {
        if (TableDetailList[i]->TableCapacity == (capacidad)) {
            returnedDetalle->Add(TableDetailList[i]);
        }

    }
    return returnedDetalle;
}


List<TableDetail^>^ ProjectController::Controller::QueryAllTableLibre() {
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
 
    List<TableDetail^>^ returnedDetalle = gcnew List<TableDetail^>();
    for (int i = 0; i < TableDetailList->Count; i++)
    {
        if (TableDetailList[i]->Disponibility->Equals("DISPONIBLE")) {
            returnedDetalle->Add(TableDetailList[i]);
        }
        
    }
    return returnedDetalle;
}

List<Meals^>^ ProjectController::Controller::QueryMealsByNameOrDescription(String^ value)
{
    MealsList = (List<Meals^>^)Persistance::LoadData("Meals.txt");
    MealsList = (List<Meals^>^)Persistance::LoadXMLData("Meals.xml");
    MealsList = (List<Meals^>^)Persistance::LoadBinaryData("Meals.bin");
    List<Meals^>^ newProductList = gcnew List<Meals^>();
    for (int i = 0; i < MealsList->Count; i++) {
        if (MealsList[i]->Name->Contains(value) || MealsList[i]->Description->Contains(value))
            newProductList->Add(MealsList[i]);
    }
    return newProductList;
}
/*User^ ProjectController::Controller::QuerychangeEstado(int id) {
    UserList = (List<User^>^)Persistance::LoadBinaryData("User.bin");
    for (int i = 0; i < UserList->Count; i++) {
        if (UserList[i]->Id == id) {
            UserList[i]->State = "NO DISPONIBLE";
            Persistance::PersistBinary("User.bin", UserList);
            for (int i = 0; i < UserList->Count; i++) {
                if (UserList[i]->Id == id) {
                    return UserList[i];
                }
            }

            return nullptr;
        }
    }
    return nullptr;
}*/

List<SaleDetail^>^ ProjectController::Controller::QueryAllSaleDetail()
{
    SaleList = (List<Sale^>^)Persistance::LoadBinaryData("Sale.bin");
    List<SaleDetail^>^ returnedDetalle = gcnew List<SaleDetail^>();
    
    for (int num = 1; num <=SaleList->Count; num++)
    {
        
        Sale^ sale =QuerySaletById(num);
        for (int i = 0; i < sale->SaleDetails->Count; i++) {
            if (sale->SaleDetails[i]->Estado->Equals ("no preparado")) {
                returnedDetalle->Add(sale->SaleDetails[i]);
            }
        }
    }
    
    // cambios
    
    return returnedDetalle;
}

List<SaleDetail^>^ ProjectController::Controller::QuerySingleSaleDetail(int SaleId)
{
    SaleList = (List<Sale^>^)Persistance::LoadBinaryData("Sale.bin");
    List<SaleDetail^>^ returnedDetalle = gcnew List<SaleDetail^>();
    Sale^ sale = QuerySaletById(SaleId);
    for (int i = 0; i < sale->SaleDetails->Count; i++) {
        if (sale->SaleDetails[i]->Id==SaleId) {
            returnedDetalle->Add(sale->SaleDetails[i]);
            return returnedDetalle;
        }
    }
    return nullptr;
}



int ProjectController::Controller::AddMeals(Meals^ meals)
{
    /*MealsList->Add(meals);
    Persistance::PersistBinary("Meals.bin", MealsList);
    Persistance::Persist("Meals.txt", MealsList);
    Persistance::PersistXML("Meals.xml", MealsList);

    return meals->Id;*/
    return Persistance::AddMeals(meals);
}

Meals^ ProjectController::Controller::QueryMealstById(int MealsId)
{
    //MealsList = (List<Meals^>^)Persistance::LoadData("products.txt");
    //MealsList = (List<Meals^>^)Persistance::LoadXMLData("products.xml");
    //MealsList = (List<Meals^>^)Persistance::LoadBinaryData("Meals.bin");

    //for (int i = 0; i < MealsList->Count; i++)
       // if (MealsList[i]->Id == MealsId)
           // return MealsList[i];
    //return nullptr;
    return Persistance::QueryProductById(MealsId);
}

List<Meals^>^ ProjectController::Controller::QueryAllMeals()
{
   // MealsList = (List<Meals^>^)Persistance::LoadData("Meals.txt");
   // MealsList = (List<Meals^>^)Persistance::LoadBinaryData("Meals.bin");
   // MealsList = (List<Meals^>^)Persistance::LoadXMLData("Meals.xml");
    MealsList = Persistance::QueryAllActiveMeals();
    return MealsList;
}

int ProjectController::Controller::UpdateMeals(Meals^ Meals)
{
    /*for (int i = 0; i < MealsList->Count; i++)
        if (MealsList[i]->Id == Meals->Id) {
            MealsList[i] = Meals;
            Persistance::Persist("Meals.txt", MealsList);
            Persistance::PersistXML("Meals.xml", MealsList);
            Persistance::PersistBinary("Meals.bin", MealsList);
            return Meals->Id;
        }
    return 0;*/
    return Persistance::UpdateMeals(Meals);
}

int ProjectController::Controller::DeleteMeals(int MealsId)
{
    /*for (int i = 0; i < MealsList->Count; i++)
        if (MealsList[i]->Id == MealsId) {
            MealsList->RemoveAt(i);
            Persistance::Persist("Meals.txt", MealsList);
            Persistance::PersistXML("Meals.xml", MealsList);
            Persistance::PersistBinary("Meals.bin", MealsList);
            return MealsId;
        }
    return 0;*/
    return Persistance::DeleteMeals(MealsId);
}



/*List<SaleDetail^>^ ProjectController::Controller::QueryAllSaleDetail()
{
    //TableDetailList = (List<Meals^>^)Persistance::LoadData("Meals.txt");
    TableDetailList = (List<SaleDetail^>^)Persistance::LoadBinaryData("Meals.bin");
   // TableDetailList = (List<Meals^>^)Persistance::LoadXMLData("Meals.xml");
    return TableDetailList;
}*/

int ProjectController::Controller::AddIngredients(Ingredients^ Ingredients)
{
    //Persistance::PersistBinary("Ingredients.bin", IngredientsList);
    IngredientsList->Add(Ingredients);
    return Ingredients->Id;
}

Ingredients^ ProjectController::Controller::QueryIngredientstById(int IngredientsId)
{
    // IngredientsList = (List<Ingredients^>^)Persistance::LoadBinaryData("Ingredients.bin");
    for (int i = 0; i < IngredientsList->Count; i++)
        if (IngredientsList[i]->Id == IngredientsId)
            return IngredientsList[i];
    return nullptr;
}

List<Ingredients^>^ ProjectController::Controller::QueryAllIngredients()
{
    //IngredientsList = (List<Ingredients^>^)Persistance::LoadBinaryData("Ingredients.bin");
    return IngredientsList;
}

int ProjectController::Controller::UpdateIngredients(Ingredients^ Ingredients)
{
    for (int i = 0; i < IngredientsList->Count; i++)
        if (IngredientsList[i]->Id == Ingredients->Id) {
            IngredientsList[i] = Ingredients;
            // Persistance::PersistBinary("Ingredients.bin", IngredientsList);
            return Ingredients->Id;
        }
    return 0;;
}

int ProjectController::Controller::DeleteIngredients(int IngredientsId)
{
    for (int i = 0; i < IngredientsList->Count; i++)
        if (IngredientsList[i]->Id == IngredientsId) {
            IngredientsList->RemoveAt(i);
            // Persistance::PersistBinary("Ingredients.bin", IngredientsList);
            return IngredientsId;
        }
    return 0;
}

List<Ingredients^>^ ProjectController::Controller::QueryIngredientsByNameOrDescription(String^ value)
{
    // IngredientsList = (List<Ingredients^>^)Persistance::LoadBinaryData("Ingredients.bin");
    List<Ingredients^>^ newProductList = gcnew List<Ingredients^>();
    for (int i = 0; i < IngredientsList->Count; i++) {
        if (IngredientsList[i]->Name->Contains(value) || IngredientsList[i]->Description->Contains(value))
            newProductList->Add(IngredientsList[i]);
    }
    return newProductList;
}

String^ ProjectController::Controller::AddClient_Info(Client_Info^ Client_Info)
{

    Client_InfoList->Add(Client_Info);
    Persistance::Persist("Client_Info.txt", Client_InfoList);
    Persistance::PersistBinary("Client_Info.bin", Client_InfoList);
    Persistance::PersistXML("Client_Info.xml", Client_InfoList);
    return Client_Info->DocNumber;
}

Client_Info^ ProjectController::Controller::QueryClient_InfotById(int Client_InfoId)
{
    // Client_InfoList = (List<Client_Info^>^)Persistance::LoadData("Client_Info.txt");
    Client_InfoList = (List<Client_Info^>^)Persistance::LoadBinaryData("Client_Info.bin");
   //Cient_InfoList = (List<Client_Info^>^)Persistance::LoadXMLData("Client_Info.xml");
    for (int i = 0; i < Client_InfoList->Count; i++)
        if (Client_InfoId == Client_InfoList[i]->Id) {
            return Client_InfoList[i];
         }
    return nullptr;
}


List<Client_Info^>^ ProjectController::Controller::QueryAllClient_Info()
{
    Client_InfoList = (List<Client_Info^>^)Persistance::LoadData("Client_Info.txt");
    Client_InfoList = (List<Client_Info^>^)Persistance::LoadBinaryData("Client_Info.bin");
    Client_InfoList = (List<Client_Info^>^)Persistance::LoadXMLData("Client_Info.xml");
    return Client_InfoList;
}

String^ ProjectController::Controller::UpdateClient_Info(Client_Info^ Client_Info)
{
    for (int i = 0; i < Client_InfoList->Count; i++)
        if (Client_InfoList[i]->DocNumber == Client_Info->DocNumber) {
            Client_InfoList[i] = Client_Info;
            Persistance::Persist("Client_Info.txt", Client_InfoList);
            Persistance::PersistXML("Client_Info.xml", Client_InfoList);
            Persistance::PersistBinary("Client_Info.bin", Client_InfoList);
            return Client_Info->DocNumber;
        }
    return nullptr;
}

int ProjectController::Controller::DeleteClient_Info(int Client_InfoId)
{
    for (int i = 0; i < Client_InfoList->Count; i++)
        if (Client_InfoList[i]->Id == Client_InfoId) {
            Client_InfoList->RemoveAt(i);
            Persistance::Persist("Client_Info.txt", Client_InfoList);
            Persistance::PersistXML("Client_Info.xml", Client_InfoList);
            Persistance::PersistBinary("Client_Info.bin", Client_InfoList);
            return Client_InfoId;
        }
    return 0;
}

List<Client_Info^>^ ProjectController::Controller::QueryClient_InfoByNameOrLastName(String^ value)
{
    Client_InfoList = (List<Client_Info^>^)Persistance::LoadData("Client_Info.txt");
    Client_InfoList = (List<Client_Info^>^)Persistance::LoadBinaryData("Client_Info.bin");
    Client_InfoList = (List<Client_Info^>^)Persistance::LoadXMLData("Client_Info.xml");

    List<Client_Info^>^ newProductList = gcnew List<Client_Info^>();
    for (int i = 0; i < Client_InfoList->Count; i++) {
        if (Client_InfoList[i]->Name->Contains(value) || Client_InfoList[i]->LastName->Contains(value))
            newProductList->Add(Client_InfoList[i]);
    }
    return newProductList;
}

Client_Info^ ProjectController::Controller::QueryClient_InfoByDocNumber(String^ docNumber)
{
    Client_InfoList = (List<Client_Info^>^)Persistance::LoadBinaryData("Client_Info.bin");
    for (int i = 0; i < Client_InfoList->Count; i++)
        if (docNumber == Client_InfoList[i]->DocNumber) {
            return Client_InfoList[i];
        }
    return nullptr;
}

/*List<Client_Info^>^ ProjectController::Controller::QueryClient_InfoByDni(String^ nameDesc)
{
    List<Client_Info^>^ newProductList = gcnew List<Client_Info^>();
    for (int i = 0; i < Client_InfoList->Count; i++) {
        if (Client_InfoList[i]->DocNumber->Contains(value) || Client_InfoList[i]->LastName->Contains(value))
            newProductList->Add(Client_InfoList[i]);
    }
    return newProductList;

}
*/
int ProjectController::Controller::AddSale(Sale^ Sale)
{
    SaleList->Add(Sale);
    Persistance::Persist("Sale.txt", SaleList);
    Persistance::PersistXML("Sale.xml", SaleList);
    Persistance::PersistBinary("Sale.bin", SaleList);
    return Sale->Id;
}

Sale^ ProjectController::Controller::QuerySaletById(int SaleId)
{
    //SaleList = (List<Sale^>^)Persistance::LoadData("Sale.txt");
    //SaleList = (List<Sale^>^)Persistance::LoadXMLData("Sale.xml");
    SaleList = (List<Sale^>^)Persistance::LoadBinaryData("Sale.bin");
    for (int i = 0; i < SaleList->Count; i++)
        if (SaleList[i]->Id == SaleId)
            return SaleList[i];
    return nullptr;
}



int ProjectController::Controller::UpdateSale(Sale^ Sale)
{
    for (int i = 0; i < SaleList->Count; i++)
        if (SaleList[i]->Id == Sale->Id) {
            SaleList[i] = Sale;
            Persistance::Persist("Sale.txt", SaleList);
            Persistance::PersistXML("Sale.xml", SaleList);
            Persistance::PersistBinary("Sale.bin", SaleList);
            return Sale->Id;
        }
    return 0;
}

int ProjectController::Controller::DeleteSale(int SaleId)
{
    for (int i = 0; i < SaleList->Count; i++)
        if (SaleList[i]->Id == SaleId) {
            SaleList->RemoveAt(i);
            Persistance::Persist("Sale.txt", SaleList);
            Persistance::PersistXML("Sale.xml", SaleList);
            Persistance::PersistBinary("Sale.bin", SaleList);
            return SaleId;
        }
    return 0;
}

int ProjectController::Controller::AddTableDetail(TableDetail^ TableDetail)
{
    
    TableDetailList->Add(TableDetail);
    Persistance::Persist("TableDetail.txt", TableDetailList);
    Persistance::PersistXML("TableDetail.xml", TableDetailList);
    Persistance::PersistBinary("TableDetail.bin", TableDetailList);
    return TableDetail->Id;
}

TableDetail^ ProjectController::Controller::QueryTableDetailtById(int TableDetailId)
{
    TableDetailList = (List<TableDetail^>^)Persistance::LoadData("TableDetail.txt");
    TableDetailList = (List<TableDetail^>^)Persistance::LoadXMLData("TableDetail.xml");
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    for (int i = 0; i < TableDetailList->Count; i++)
        if (TableDetailList[i]->Id == TableDetailId)
            return TableDetailList[i];
    return nullptr;
}
TableDetail^ ProjectController::Controller::QueryTableDetailOcupado(int TableDetailId)
{
    TableDetailList = (List<TableDetail^>^)Persistance::LoadData("TableDetail.txt");
    TableDetailList = (List<TableDetail^>^)Persistance::LoadXMLData("TableDetail.xml");
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    for (int i = 0; i < TableDetailList->Count; i++)
        if (TableDetailList[i]->Id == TableDetailId) {
            return TableDetailList[i];
            TableDetailList[i]->Disponibility = "OCUPADO";
        }
    return nullptr;
}



List<TableDetail^>^ ProjectController::Controller::QueryAllTableDetail()
{
    TableDetailList = (List<TableDetail^>^)Persistance::LoadData("TableDetail.txt");
    TableDetailList = (List<TableDetail^>^)Persistance::LoadXMLData("TableDetail.xml");
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    return TableDetailList;
}

int ProjectController::Controller::UpdateTableDetail(TableDetail^ TableDetail)
{
    for (int i = 0; i < TableDetailList->Count; i++)
        if (TableDetailList[i]->Id == TableDetail->Id) {
            TableDetailList[i] = TableDetail;
            Persistance::Persist("TableDetail.txt", TableDetailList);
            Persistance::PersistXML("TableDetail.xml", TableDetailList);
            Persistance::PersistBinary("TableDetail.bin", TableDetailList);
            return TableDetail->Id;
        }
    return 0;
}

int ProjectController::Controller::DeleteTableDetail(int TableDetailId)
{
    for (int i = 0; i < TableDetailList->Count; i++)
        if (TableDetailList[i]->Id == TableDetailId) {
            TableDetailList->RemoveAt(i);
            Persistance::Persist("TableDetail.txt", TableDetailList);
            Persistance::PersistXML("TableDetail.xml", TableDetailList);
            Persistance::PersistBinary("TableDetail.bin", TableDetailList);
            return TableDetailId;
        }
    return 0;
}

List<TableDetail^>^ ProjectController::Controller::QueryTableDetailByFloorOrCapacity(int value)
{
    TableDetailList = (List<TableDetail^>^)Persistance::LoadData("TableDetail.txt");
    TableDetailList = (List<TableDetail^>^)Persistance::LoadXMLData("TableDetail.xml");
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    List<TableDetail^>^ newProductList = gcnew List<TableDetail^>();
    for (int i = 0; i < TableDetailList->Count; i++) {
        if (TableDetailList[i]->Floor == value || TableDetailList[i]->TableCapacity == value)
            newProductList->Add(TableDetailList[i]);
    }
    return newProductList;
}

int ProjectController::Controller::AddUser(User^ User)
{

    
    /*Persistance::PersistBinary("User.bin", UserList);
    Persistance::Persist("User.txt", UserList);
    Persistance::PersistXML("User.xml", UserList);*/
    
    return Persistance::AddUser(User);
}

User^ ProjectController::Controller::QueryUserbyDni(String^ Dni)
{
    /*UserList = (List<User^>^)Persistance::LoadData("User.txt");
    UserList = (List<User^>^)Persistance::LoadBinaryData("User.bin");
    UserList = (List<User^>^)Persistance::LoadXMLData("User.xml");
    for (int i = 0; i < UserList->Count; i++)
        if (UserList[i]->DocNumber->Equals(Dni))
            return UserList[i];
    return nullptr;*/
    return Persistance::QueryUserbyDni(Dni);
}

User^ ProjectController::Controller::QueryUsertById(int UserId)
{
   /* UserList = (List<User^>^)Persistance::LoadData("User.txt");
    UserList = (List<User^>^)Persistance::LoadBinaryData("User.bin");
   // UserList = (List<User^>^)Persistance::LoadXMLData("User.xml");
    for (int i = 0; i < UserList->Count; i++)
        if (UserList[i]->Id == UserId)
            return UserList[i];*/
    return Persistance::QueryUserById(UserId);
}

List<User^>^ ProjectController::Controller::QueryAllUser()
{
    /*UserList = (List<User^>^)Persistance::LoadData("User.txt");
    UserList = (List<User^>^)Persistance::LoadBinaryData("User.bin");
    UserList = (List<User^>^)Persistance::LoadXMLData("User.xml");
    return UserList;*/
    return Persistance::QueryAllUser();
}

int ProjectController::Controller::UpdateUser(User^ User)
{
    /*for (int i = 0; i < UserList->Count; i++)
        if (UserList[i]->Id == User->Id) {
            UserList[i] = User;
            Persistance::Persist("User.txt", UserList);
            Persistance::PersistXML("User.xml", UserList);
            Persistance::PersistBinary("User.bin", UserList);
            return User->Id;
        }
    return 0;*/
    return Persistance::UpdateUser(User);
}

int ProjectController::Controller::DeleteUser(int UserId)
{
    /*for (int i = 0; i < UserList->Count; i++)
        if (UserList[i]->Id == UserId) {
            UserList->RemoveAt(i);
            Persistance::Persist("User.txt", UserList);
            Persistance::PersistXML("User.xml", UserList);
            Persistance::PersistBinary("User.bin", UserList);
            return UserId;
        }
    return 0;*/
    return Persistance::DeleteUser(UserId);
}

List<User^>^ ProjectController::Controller::QueryUserByNameOrLastName(String^ value)
{

    UserList = (List<User^>^)Persistance::LoadData("User.txt");
    UserList = (List<User^>^)Persistance::LoadBinaryData("User.bin");
    UserList = (List<User^>^)Persistance::LoadXMLData("User.xml");
    List<User^>^ newProductList = gcnew List<User^>();
    for (int i = 0; i < UserList->Count; i++) {
        if (UserList[i]->Name->Contains(value) || UserList[i]->LastName->Contains(value))
            newProductList->Add(UserList[i]);
    }
    return newProductList;
}

User^ ProjectController::Controller::QueryUsertByCredentials(String^ username, String^ password)
{
    /*UserList = (List<User^>^)Persistance::LoadBinaryData("User.bin");
    for (int i = 0; i < UserList->Count; i++) {
        if (UserList[i]->Username->Equals(username) && UserList[i]->Password->Equals(password)) {
            return UserList[i];
        }
    }
    return nullptr;*/
    return Persistance::Login(username, password);

}
User^ ProjectController::Controller::QuerychangeEstado(int id) {
    UserList = (List<User^>^)Persistance::LoadBinaryData("User.bin");
    for (int i = 0; i < UserList->Count; i++) {
        if (UserList[i]->Id==id ) {
            UserList[i]->State = "NO DISPONIBLE";
            Persistance::PersistBinary("User.bin", UserList);
            for (int i = 0; i < UserList->Count; i++) {
                if (UserList[i]->Id == id) {
                    return UserList[i];
                }
            }

            return nullptr;
        }
    }
    return nullptr;
}

TableDetail^ ProjectController::Controller::QuerychangeEstadoTable(int id) {
    TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    for (int i = 0; i < TableDetailList->Count; i++) {
        if (TableDetailList[i]->Id == id) {
            TableDetailList[i]->Disponibility = "NO DISPONIBLE";
            TableDetailList[i]->Reserved = "Reservado";
            Persistance::PersistBinary("TableDetail.bin", TableDetailList);
            for (int i = 0; i < TableDetailList->Count; i++) {
                if (TableDetailList[i]->Id == id) {
                    return TableDetailList[i];
                }
            }

            return nullptr;
        }
    }
    return nullptr;
}


User^ ProjectController::Controller::QueryUserChangePassword(String^ UserDNI, String^ UserUsuario, String^ UserName, String^ UserLastName, String^ UserNumber, String^ newpassword) {
    UserList = (List<User^>^)Persistance::LoadBinaryData("User.bin");
    for (int i = 0; i < UserList->Count; i++) {
        if (UserList[i]->DocNumber->Equals(UserDNI) && UserList[i]->Username->Equals(UserUsuario) && UserList[i]->Name->Equals(UserName) && UserList[i]->LastName->Equals(UserLastName) && UserList[i]->PhoneNumber->Equals(UserNumber)) {
            UserList[i]->Password=newpassword;
            Persistance::PersistBinary("User.bin", UserList);
            for (int i = 0; i < UserList->Count; i++) {
                if (UserList[i]->DocNumber->Equals(UserDNI) && UserList[i]->Username->Equals(UserUsuario) && UserList[i]->Name->Equals(UserName) && UserList[i]->LastName->Equals(UserLastName) && UserList[i]->PhoneNumber->Equals(UserNumber)) {
                    return UserList[i];
                }
            }
            
            return nullptr;
        }
    }
    return nullptr;
}

User^ ProjectController::Controller::Login(String^ username, String^ password)
{
    /*User^ user;
    if (username == "usuario" && password == "usuario") {
        user = gcnew User();
        user->Id = 1;
        user->Name = "usuario";
        user->LastName = "usuario";
        user->Salary = 4500;
        user->Username = "usuario";
    }
    return user;*/
    return QueryUsertByCredentials(username, password);
}

User^ ProjectController::Controller::CambioEstado(int id) {
    return QuerychangeEstado(id);
}
TableDetail^ ProjectController::Controller::CambioEstadoTable(int id) {
    return QuerychangeEstadoTable (id);
}


User^ ProjectController::Controller::ChangePassword(String^ UserDNI, String^ UserUsuario, String^ UserName, String^ UserLastName, String^ UserNumber, String^ newpassword) {
    /*return QueryUserChangePassword(UserDNI, UserUsuario, UserName, UserLastName, UserNumber, newpassword);*/
    return Persistance::ChangePassword(UserDNI, UserUsuario, UserName, UserLastName, UserNumber, newpassword);
}

Void ProjectController::Controller::RegisterSuggestions(Suggestions^ suggestions)
{
    SuggestionsList->Add(suggestions);
}




List<Sale^>^ ProjectController::Controller::QueryAllSale()
{
    //SaleList = (List<Sale^>^)Persistance::LoadData("Sale.txt");
    //SaleList = (List<Sale^>^)Persistance::LoadXMLData("Sale.xml");
    SaleList = (List<Sale^>^)Persistance::LoadBinaryData("Sale.bin");
    return SaleList;
}

int ProjectController::Controller::QueryLastSaleId()
{
    SaleList = (List<Sale^>^)Persistance::LoadBinaryData("Sale.bin");
    if (SaleList->Count == 0) return 0;
    else return SaleList[SaleList->Count - 1]->Id;
}

Void ProjectController::Controller::RegisterSale(Sale^ sale)
{
    SaleList->Add(sale);
    Persistance::PersistBinary("Sale.bin", SaleList);
}


List<Sale^>^ ProjectController::Controller::QueryAllTotalSaleList(String^ date)
{
    SaleList = (List<Sale^>^)Persistance::LoadBinaryData("Sale.bin");
    List<Sale^>^ SalesList = Controller::QueryAllSale();
    List<Sale^>^ totalList = gcnew List<Sale^>();
    for (int i = 0; i < SalesList->Count; i++) {
        if (SaleList[i]->TxtDate->Equals(date)) 
            totalList->Add(SaleList[i]);

    }
    return totalList;
    //return List<Sale^>();
}




