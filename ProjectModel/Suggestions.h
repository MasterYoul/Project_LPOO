/**
 * Una clase que recolecta y distribuye las sugerencias de los clientes
 */


#pragma once

using namespace System;
namespace ProjectModel {
    [Serializable]
    public ref class Suggestions {
    public:
        property String^ Date;
        property String^ ClientName;
        property String^ AttentionScore;
        property String^ FoodScore;
        property String^ VenueScore;
        property String^ Comments;

    };
}