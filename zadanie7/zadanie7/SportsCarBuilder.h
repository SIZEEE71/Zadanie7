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

class SportCarBuilder : public CarBuilder {
public:
    SportCarBuilder() : car1() {}

    void buildBrand() override {
        car1.setBrand("BMW");
    }

    void buildModel() override {
        car1.setModel("M3");
    }

    void buildEngine() override {
        car1.setEngine("V1");
    }

    void buildTransmission() override {
        car1.setTransmission("Turbo 3v");
    }

    Car getResult() override {
        return car1;
    }

private:
    Car car1 ;
};

#endif // SPORTSCARBUILDER_H
