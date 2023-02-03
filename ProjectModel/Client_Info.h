/**
 * Una clase que recolecta y distribuye la informacion del Cliente
 */


#pragma once
#include "User.h"


using namespace System;
namespace Model_Project {

    public ref class Client_Info {
    public:
        property String^ DocNumber;
        property String^ Name;
        property String^ LastName;
        property String^ PhoneNumber;
        property int VisitQuantity;
        property char Type;
        property String^ RucNumber;
        property int Rate;
        property String^ TxtOpin;
        property User^ User;
    };
}

