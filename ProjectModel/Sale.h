/**
 * Clase que almacena informacion de la venta, asi como la dsitribuye al resto de clases
 */


#pragma once
#include "User.h"
#include "Client_Info.h"
#include "SaleDetail.h"
#include "TableDetail.h"
//#include "Meals.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProjectModel {
    [Serializable]
    public ref class Sale {
    public:
        property int Id;
        property String^ TxtDate;
        property char Status;
        property double Total;
        property String^ Fecha; //agregado para el grafico de barras
        property User^ User;
        //property Meals^ Meals;
        property TableDetail^ TableDetail;
        property Client_Info^ Client_Info;
        property List<SaleDetail^>^ SaleDetails;
        property String^ Estado;
        Sale() {
            SaleDetails = gcnew List<SaleDetail^>();
        }
    };

}

