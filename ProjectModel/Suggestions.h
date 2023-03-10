/**
 * Una clase que recolecta y distribuye las sugerencias de los clientes
 */


#pragma once
#include "Client_Info.h"

using namespace System;
namespace ProjectModel {
    [Serializable]
    public ref class Suggestions {
    public:
        property int Id;
        property String^ Date;
        property String^ ClientName;
        property String^ AttentionScore;
        property String^ FoodScore;
        property String^ VenueScore;
        property String^ Comments;
        property String^ Estado;
        property Client_Info^ Client_Info;
        property char Status;

    };
}