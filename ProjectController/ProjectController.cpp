#include "pch.h"

#include "ProjectController.h"


void ProjectController::Controller::Init()
{

}

int ProjectController::Controller::AddMeals(Meals^ meals)
{
    MealsList->Add(meals);
    return meals->Id;
}

Meals^ ProjectController::Controller::QueryMealstById(int MealsId)
{
    for (int i = 0; i < MealsList->Count; i++)
        if (MealsList[i]->Id == MealsId)
            return MealsList[i];
    return nullptr;
}

List<Meals^>^ ProjectController::Controller::QueryAllMeals()
{
    return MealsList;
}

int ProjectController::Controller::UpdateMeals(Meals^ Meals)
{
    for (int i = 0; i < MealsList->Count; i++)
        if (MealsList[i]->Id == Meals->Id) {
            MealsList[i] = Meals;
            return Meals->Id;
        }
    return 0;
}

int ProjectController::Controller::DeleteMeals(int MealsId)
{
    for (int i = 0; i < MealsList->Count; i++)
        if (MealsList[i]->Id == MealsId) {
            MealsList->RemoveAt(i);
            return MealsId;
        }
    return 0;
}

List<Meals^>^ ProjectController::Controller::QueryMealsByNameOrDescription(String^ value)
{
    List<Meals^>^ newProductList = gcnew List<Meals^>();
    for (int i = 0; i < MealsList->Count; i++) {
        if (MealsList[i]->Name->Contains(value) || MealsList[i]->Description->Contains(value))
            newProductList->Add(MealsList[i]);
    }
    return newProductList;
}

int ProjectController::Controller::AddIngredients(Ingredients^ Ingredients)
{
    IngredientsList->Add(Ingredients);
    return Ingredients->Id;
}

Ingredients^ ProjectController::Controller::QueryIngredientstById(int IngredientsId)
{
    for (int i = 0; i < IngredientsList->Count; i++)
        if (IngredientsList[i]->Id == IngredientsId)
            return IngredientsList[i];
    return nullptr;
}

List<Ingredients^>^ ProjectController::Controller::QueryAllIngredients()
{
    return IngredientsList;
}

int ProjectController::Controller::UpdateIngredients(Ingredients^ Ingredients)
{
    for (int i = 0; i < IngredientsList->Count; i++)
        if (IngredientsList[i]->Id == Ingredients->Id) {
            IngredientsList[i] = Ingredients;
            return Ingredients->Id;
        }
    return 0;;
}

int ProjectController::Controller::DeleteIngredients(int IngredientsId)
{
    for (int i = 0; i < IngredientsList->Count; i++)
        if (IngredientsList[i]->Id == IngredientsId) {
            IngredientsList->RemoveAt(i);
            return IngredientsId;
        }
    return 0;
}

List<Ingredients^>^ ProjectController::Controller::QueryIngredientsByNameOrDescription(String^ value)
{
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
    return Client_Info->DocNumber;
}

Client_Info^ ProjectController::Controller::QueryClient_InfotById(String^ Client_InfoDocNumber)
{
    for (int i = 0; i < Client_InfoList->Count; i++)
        if (Client_InfoList[i]->DocNumber == Client_InfoDocNumber)
            return Client_InfoList[i];
    return nullptr;
}

List<Client_Info^>^ ProjectController::Controller::QueryAllClient_Info()
{
    return Client_InfoList;
}

String^ ProjectController::Controller::UpdateClient_Info(Client_Info^ Client_Info)
{
    for (int i = 0; i < Client_InfoList->Count; i++)
        if (Client_InfoList[i]->DocNumber == Client_Info->DocNumber) {
            Client_InfoList[i] = Client_Info;
            return Client_Info->DocNumber;
        }
    return nullptr;
}

String^ ProjectController::Controller::DeleteClient_Info(String^ Client_InfoDocNumber)
{
    for (int i = 0; i < Client_InfoList->Count; i++)
        if (Client_InfoList[i]->DocNumber == Client_InfoDocNumber) {
            Client_InfoList->RemoveAt(i);
            return Client_InfoDocNumber;
        }
    return nullptr;
}

List<Client_Info^>^ ProjectController::Controller::QueryClient_InfoByNameOrLastName(String^ value)
{
    List<Client_Info^>^ newProductList = gcnew List<Client_Info^>();
    for (int i = 0; i < Client_InfoList->Count; i++) {
        if (Client_InfoList[i]->Name->Contains(value) || Client_InfoList[i]->LastName->Contains(value))
            newProductList->Add(Client_InfoList[i]);
    }
    return newProductList;
}

int ProjectController::Controller::AddSale(Sale^ Sale)
{
    SaleList->Add(Sale);
    return Sale->Id;
}

Sale^ ProjectController::Controller::QuerySaletById(int SaleId)
{
    for (int i = 0; i < SaleList->Count; i++)
        if (SaleList[i]->Id == SaleId)
            return SaleList[i];
    return nullptr;
}

List<Sale^>^ ProjectController::Controller::QueryAllSale()
{
    return SaleList;
}

int ProjectController::Controller::UpdateSale(Sale^ Sale)
{
    for (int i = 0; i < SaleList->Count; i++)
        if (SaleList[i]->Id == Sale->Id) {
            SaleList[i] = Sale;
            return Sale->Id;
        }
    return 0;
}

int ProjectController::Controller::DeleteSale(int SaleId)
{
    for (int i = 0; i < SaleList->Count; i++)
        if (SaleList[i]->Id == SaleId) {
            SaleList->RemoveAt(i);
            return SaleId;
        }
    return 0;
}

int ProjectController::Controller::AddTableDetail(TableDetail^ TableDetail)
{
    TableDetailList->Add(TableDetail);

    return TableDetail->Id;
}

TableDetail^ ProjectController::Controller::QueryTableDetailtById(int TableDetailId)
{
    for (int i = 0; i < TableDetailList->Count; i++)
        if (TableDetailList[i]->Id == TableDetailId)
            return TableDetailList[i];
    return nullptr;
}

List<TableDetail^>^ ProjectController::Controller::QueryAllTableDetail()
{
    return TableDetailList;
}

int ProjectController::Controller::UpdateTableDetail(TableDetail^ TableDetail)
{
    for (int i = 0; i < TableDetailList->Count; i++)
        if (TableDetailList[i]->Id == TableDetail->Id) {
            TableDetailList[i] = TableDetail;
            return TableDetail->Id;
        }
    return 0;
}

int ProjectController::Controller::DeleteTableDetail(int TableDetailId)
{
    for (int i = 0; i < TableDetailList->Count; i++)
        if (TableDetailList[i]->Id == TableDetailId) {
            TableDetailList->RemoveAt(i);
            return TableDetailId;
        }
    return 0;
}

List<TableDetail^>^ ProjectController::Controller::QueryTableDetailByFloorOrCapacity(int value)
{
    List<TableDetail^>^ newProductList = gcnew List<TableDetail^>();
    for (int i = 0; i < TableDetailList->Count; i++) {
        if (TableDetailList[i]->Floor == value || TableDetailList[i]->TableCapacity == value)
            newProductList->Add(TableDetailList[i]);
    }
    return newProductList;
}

int ProjectController::Controller::AddUser(User^ User)
{
    UserList->Add(User);
    return User->Id;
}

User^ ProjectController::Controller::QueryUsertById(int UserId)
{
    for (int i = 0; i < UserList->Count; i++)
        if (UserList[i]->Id == UserId)
            return UserList[i];
    return nullptr;
}

List<User^>^ ProjectController::Controller::QueryAllUser()
{
    return UserList;
}

int ProjectController::Controller::UpdateUser(User^ User)
{
    for (int i = 0; i < UserList->Count; i++)
        if (UserList[i]->Id == User->Id) {
            UserList[i] = User;
            return User->Id;
        }
    return 0;
}

int ProjectController::Controller::DeleteUser(int UserId)
{
    for (int i = 0; i < UserList->Count; i++)
        if (UserList[i]->Id == UserId) {
            UserList->RemoveAt(i);
            return UserId;
        }
    return 0;
}

List<User^>^ ProjectController::Controller::QueryUserByNameOrLastName(String^ value)
{
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