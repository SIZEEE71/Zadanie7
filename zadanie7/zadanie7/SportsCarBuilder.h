// SportsCarBuilder.h - Konkretny budowniczy dla samochodu sportowego

#ifndef SPORTSCARBUILDER_H
#define SPORTSCARBUILDER_H

#include "CarBuilder.h"

class SportsCarBuilder : public CarBuilder {
public:
    SportsCarBuilder() : car_() {}

    void buildBrand() override {
        car_.setBrand("Pezot");
    }

    void buildModel() override {
        car_.setModel("Partner");
    }

    void buildEngine() override {
        car_.setEngine("V11");
    }

    void buildTransmission() override {
        car_.setTransmission("Turbo 2x");
    }

    Car getResult() override {
        return car_;
    }

private:
    Car car_;
};

#endif // SPORTSCARBUILDER_H
