/**
 * Clase que intercede entre Sale y Meals, para saber informacion de cada venta unitaria
 */


#pragma once
#include "Meals.h"

using namespace System;

namespace ProjectModel {
    [Serializable]
    public ref class SaleDetail {
    public:
        property int Id;
        property int Quantity;
        property double Subtotal;
        property Double UnitPrice;
        property Meals^ Meals;
        property String^ Estado;

    };
}