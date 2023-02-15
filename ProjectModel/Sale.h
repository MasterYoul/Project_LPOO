/**
 * Clase que almacena informacion de la venta, asi como la dsitribuye al resto de clases
 */


#pragma once
#include "User.h"
#include "Client_Info.h"
#include "SaleDetail.h"
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
        property User^ User;
        //property Meals^ Meals;
        property Client_Info^ Client_Info;
        property List<SaleDetail^>^ SaleDetails;
        Sale() {
            SaleDetails = gcnew List<SaleDetail^>();
        }
    };

}

