/**
 * Clase que simula un usuario y su relacion con la interfaz del sistema
 */


#pragma once
using namespace System;

namespace Model_Project {
    public ref class User {
    public:
        property int Id;
        property String^ DocNumber;
        property String^ Name;
        property String^ Adress;
        property String^ PhoneNumber;
        property String^ Email;
        property char Status;
        property String^ LastName;
        property double Salary;
        property String^ Username;
        property String^ Password;
        property char Gender;
        property String^ Birthday;
        property String^ Type;
    };
}