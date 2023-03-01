/**
 * Una clase que recolecta y distribuye la informacion del Cliente
 */


#pragma once

using namespace System;
namespace ProjectModel {
    [Serializable]
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
        property char Status;
        property int Id;
        property char Gender;
        
       
    };
}



