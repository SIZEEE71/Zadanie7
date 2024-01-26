// CarBuilder.h - Interfejs budowniczego

#ifndef CARBUILDER_H
#define CARBUILDER_H

#include "Car.h"

class CarBuilder {
public:
    virtual void buildBrand() = 0;
    virtual void buildModel() = 0;
    virtual void buildEngine() = 0;
    virtual void buildTransmission() = 0;
    virtual Car getResult() = 0;
};

#endif // CARBUILDER_H
