/**
 * Clase que modela los diferente platos del menu
 */


#pragma once


using namespace System;

namespace Model_Project {
    public ref class Meals {
    public:
        property int Id;
        property String^ Name;
        property String^ Desripcion;
        property Double Price;
        property int Stock;
        property char Status;
        property array<Byte>^ Photo;
    };
}