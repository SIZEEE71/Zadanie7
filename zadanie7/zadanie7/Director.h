// Director.h - Dyrektor, który korzysta z budowniczego do konstrukcji obiektu

#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "CarBuilder.h"

class Director {
public:
    void construct(CarBuilder& builder) {
        builder.buildBrand();
        builder.buildModel();
        builder.buildEngine();
        builder.buildTransmission();
    }
};

#endif // DIRECTOR_H
