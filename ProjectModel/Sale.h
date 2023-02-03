/**
 * Clase que almacena informacion de la venta, asi como la dsitribuye al resto de clases
 */


#pragma once
#include "User.h"
#include "Client_Info.h"

using namespace System;

namespace ProjectModel {
    public ref class Sale {
    public:
        property int Id;
        property String^ TxtDate;
        property char Status;
        property double Total;
        property User^ User;
        property Client_Info^ Client_Info;
    };

}