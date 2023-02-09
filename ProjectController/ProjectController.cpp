#include "pch.h"

#include "ProjectController.h"
using namespace ProjectPersistance;


void ProjectController::Controller::Init()
{

}

int ProjectController::Controller::AddMeals(Meals^ meals)
{
    //Persistance::PersistBinary("meals.bin", MealsList);
    MealsList->Add(meals);
    return meals->Id;
}

Meals^ ProjectController::Controller::QueryMealstById(int MealsId)
{
    //MealsList = (List<Meals^>^)Persistance::LoadBinaryData("meals.bin");
    for (int i = 0; i < MealsList->Count; i++)
        if (MealsList[i]->Id == MealsId)
            return MealsList[i];
    return nullptr;
}

List<Meals^>^ ProjectController::Controller::QueryAllMeals()
{
    // MealsList = (List<Meals^>^)Persistance::LoadBinaryData("meals.bin");
    return MealsList;
}

int ProjectController::Controller::UpdateMeals(Meals^ Meals)
{
    for (int i = 0; i < MealsList->Count; i++)
        if (MealsList[i]->Id == Meals->Id) {
            MealsList[i] = Meals;
            //Persistance::PersistBinary("meals.bin", MealsList);
            return Meals->Id;
        }
    return 0;
}

int ProjectController::Controller::DeleteMeals(int MealsId)
{
    for (int i = 0; i < MealsList->Count; i++)
        if (MealsList[i]->Id == MealsId) {
            MealsList->RemoveAt(i);
            //Persistance::PersistBinary("meals.bin", MealsList);
            return MealsId;
        }
    return 0;
}

List<Meals^>^ ProjectController::Controller::QueryMealsByNameOrDescription(String^ value)
{
    //MealsList = (List<Meals^>^)Persistance::LoadBinaryData("meals.bin");
    List<Meals^>^ newProductList = gcnew List<Meals^>();
    for (int i = 0; i < MealsList->Count; i++) {
        if (MealsList[i]->Name->Contains(value) || MealsList[i]->Description->Contains(value))
            newProductList->Add(MealsList[i]);
    }
    return newProductList;
}

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
    //Persistance::PersistBinary("Client_Info.bin", Client_InfoList);
    Client_InfoList->Add(Client_Info);
    return Client_Info->DocNumber;
}

Client_Info^ ProjectController::Controller::QueryClient_InfotById(int Client_InfoId)
{
    // Client_InfoList = (List<Client_Info^>^)Persistance::LoadBinaryData("Client_Info.bin");
    for (int i = 0; i < Client_InfoList->Count; i++)
        if (Client_InfoList[i]->Id == Client_InfoId)
            return Client_InfoList[i];
    return nullptr;
}

List<Client_Info^>^ ProjectController::Controller::QueryAllClient_Info()
{
    // Client_InfoList = (List<Client_Info^>^)Persistance::LoadBinaryData("Client_Info.bin");
    return Client_InfoList;
}

String^ ProjectController::Controller::UpdateClient_Info(Client_Info^ Client_Info)
{
    for (int i = 0; i < Client_InfoList->Count; i++)
        if (Client_InfoList[i]->DocNumber == Client_Info->DocNumber) {
            Client_InfoList[i] = Client_Info;
            // Persistance::PersistBinary("Client_Info.bin", Client_InfoList);
            return Client_Info->DocNumber;
        }
    return nullptr;
}

int ProjectController::Controller::DeleteClient_Info(int Client_InfoId)
{
    for (int i = 0; i < Client_InfoList->Count; i++)
        if (Client_InfoList[i]->Id == Client_InfoId) {
            Client_InfoList->RemoveAt(i);
            // Persistance::PersistBinary("Client_Info.bin", Client_InfoList);
            return Client_InfoId;
        }
    return 0;
}

List<Client_Info^>^ ProjectController::Controller::QueryClient_InfoByNameOrLastName(String^ value)
{
    //Client_InfoList = (List<Client_Info^>^)Persistance::LoadBinaryData("Client_Info.bin");
    List<Client_Info^>^ newProductList = gcnew List<Client_Info^>();
    for (int i = 0; i < Client_InfoList->Count; i++) {
        if (Client_InfoList[i]->Name->Contains(value) || Client_InfoList[i]->LastName->Contains(value))
            newProductList->Add(Client_InfoList[i]);
    }
    return newProductList;
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
    //Persistance::PersistBinary("Sale.bin", SaleList);
    SaleList->Add(Sale);
    return Sale->Id;
}

Sale^ ProjectController::Controller::QuerySaletById(int SaleId)
{
    //SaleList = (List<Sale^>^)Persistance::LoadBinaryData("Sale.bin");
    for (int i = 0; i < SaleList->Count; i++)
        if (SaleList[i]->Id == SaleId)
            return SaleList[i];
    return nullptr;
}

List<Sale^>^ ProjectController::Controller::QueryAllSale()
{
    // SaleList = (List<Sale^>^)Persistance::LoadBinaryData("Sale.bin");
    return SaleList;
}

int ProjectController::Controller::UpdateSale(Sale^ Sale)
{
    for (int i = 0; i < SaleList->Count; i++)
        if (SaleList[i]->Id == Sale->Id) {
            SaleList[i] = Sale;
            // Persistance::PersistBinary("Sale.bin", SaleList);
            return Sale->Id;
        }
    return 0;
}

int ProjectController::Controller::DeleteSale(int SaleId)
{
    for (int i = 0; i < SaleList->Count; i++)
        if (SaleList[i]->Id == SaleId) {
            SaleList->RemoveAt(i);
            //Persistance::PersistBinary("Sale.bin", SaleList);
            return SaleId;
        }
    return 0;
}

int ProjectController::Controller::AddTableDetail(TableDetail^ TableDetail)
{
    // Persistance::PersistBinary("TableDetail.bin", TableDetailList);
    TableDetailList->Add(TableDetail);

    return TableDetail->Id;
}

TableDetail^ ProjectController::Controller::QueryTableDetailtById(int TableDetailId)
{
    // TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    for (int i = 0; i < TableDetailList->Count; i++)
        if (TableDetailList[i]->Id == TableDetailId)
            return TableDetailList[i];
    return nullptr;
}

List<TableDetail^>^ ProjectController::Controller::QueryAllTableDetail()
{
    // TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    return TableDetailList;
}

int ProjectController::Controller::UpdateTableDetail(TableDetail^ TableDetail)
{
    for (int i = 0; i < TableDetailList->Count; i++)
        if (TableDetailList[i]->Id == TableDetail->Id) {
            TableDetailList[i] = TableDetail;
            //Persistance::PersistBinary("TableDetail.bin", TableDetailList);
            return TableDetail->Id;
        }
    return 0;
}

int ProjectController::Controller::DeleteTableDetail(int TableDetailId)
{
    for (int i = 0; i < TableDetailList->Count; i++)
        if (TableDetailList[i]->Id == TableDetailId) {
            TableDetailList->RemoveAt(i);
            // Persistance::PersistBinary("TableDetail.bin", TableDetailList);
            return TableDetailId;
        }
    return 0;
}

List<TableDetail^>^ ProjectController::Controller::QueryTableDetailByFloorOrCapacity(int value)
{
    //TableDetailList = (List<TableDetail^>^)Persistance::LoadBinaryData("TableDetail.bin");
    List<TableDetail^>^ newProductList = gcnew List<TableDetail^>();
    for (int i = 0; i < TableDetailList->Count; i++) {
        if (TableDetailList[i]->Floor == value || TableDetailList[i]->TableCapacity == value)
            newProductList->Add(TableDetailList[i]);
    }
    return newProductList;
}

int ProjectController::Controller::AddUser(User^ User)
{
    // Persistance::PersistBinary("User.bin", UserList);
    UserList->Add(User);
    return User->Id;
}

User^ ProjectController::Controller::QueryUsertById(int UserId)
{
    // UserList = (List<User^>^)Persistance::LoadBinaryData("User.bin");
    for (int i = 0; i < UserList->Count; i++)
        if (UserList[i]->Id == UserId)
            return UserList[i];
    return nullptr;
}

List<User^>^ ProjectController::Controller::QueryAllUser()
{
    //UserList = (List<User^>^)Persistance::LoadBinaryData("User.bin");
    return UserList;
}

int ProjectController::Controller::UpdateUser(User^ User)
{
    for (int i = 0; i < UserList->Count; i++)
        if (UserList[i]->Id == User->Id) {
            UserList[i] = User;
            //Persistance::PersistBinary("User.bin", UserList);
            return User->Id;
        }
    return 0;
}

int ProjectController::Controller::DeleteUser(int UserId)
{
    for (int i = 0; i < UserList->Count; i++)
        if (UserList[i]->Id == UserId) {
            UserList->RemoveAt(i);
            //Persistance::PersistBinary("User.bin", UserList);
            return UserId;
        }
    return 0;
}

List<User^>^ ProjectController::Controller::QueryUserByNameOrLastName(String^ value)
{
    
    //UserList = (List<User^>^)Persistance::LoadBinaryData("User.bin");
    List<User^>^ newProductList = gcnew List<User^>();
    for (int i = 0; i < UserList->Count; i++) {
        if (UserList[i]->Name->Contains(value) || UserList[i]->LastName->Contains(value))
            newProductList->Add(UserList[i]);
    }
    return newProductList;
}

User^ ProjectController::Controller::Login(String^ username, String^ password)
{
    User^ user;
    if (username == "usuario" && password == "usuario") {
        user = gcnew User();
        user->Id = 1;
        user->Name = "usuario";
        user->LastName = "usuario";
        user->Salary = 4500;
        user->Username = "usuario";
    }
    return user;
}