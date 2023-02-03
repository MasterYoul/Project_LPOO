/**
 * Clase que alamcena y modifica la informacion de los ingredientes disponibles
 */


#pragma once


using namespace System;

namespace Model_Project {
    public ref class Ingredients {
    public:
        property int Id;
        property String^ Name;
        property String^ Descripcion;
        property int Stock;
        property array<Byte>^ Photo;
        
    };



}
