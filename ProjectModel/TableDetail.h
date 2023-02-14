/**
 * Clase que modela el estado de una mesa entre todas las existentes
 */


#pragma once
#include "User.h"

using namespace System;

namespace ProjectModel {
    [Serializable]
    public ref class TableDetail {
    public:
        property int Id;
        property int Floor;
        property int TableCapacity;
        property String^ Disponibility;
        property String^ Reserved;
        property String^ TimeReserv;
        property User^ User;
    };


}