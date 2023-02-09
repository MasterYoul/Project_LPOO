/**
 * Clase que alamcena y modifica la informacion de los ingredientes disponibles
 */


#pragma once


using namespace System;

namespace ProjectModel {
    [Serializable]
    public ref class Ingredients {
    public:
        property int Id;
        property String^ Name;
        property String^ Description;
        property int Stock;
        property array<Byte>^ Photo;
        
    };



}
