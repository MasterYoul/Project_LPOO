/**
 * Clase que modela los diferente platos del menu
 */


#pragma once
//#include "SaleDetail.h"

using namespace System;

namespace ProjectModel {
    [Serializable]
    public ref class Meals {
    
        
    public:
        property int Id;
        property String^ Name;
        property String^ Description;
        property Double Price;
        property int Stock;
        property String^ DateMeal;
        property int StockUsed;
        property char Status;
        property array<Byte>^ Photo;
        property double TotalMeals;
        //property SaleDetail^ SaleDetail;

        
    };
}