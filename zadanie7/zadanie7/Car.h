// Car.h - Klasa reprezentuj�ca obiekt Samoch�d

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car {
public:
    void setBrand(const std::string& brand) {
        brand_ = brand;
    }

    void setModel(const std::string& model) {
        model_ = model;
    }

    void setEngine(const std::string& engine) {
        engine_ = engine;
    }

    void setTransmission(const std::string& transmission) {
        transmission_ = transmission;
    }

    void showInfo() const {
        std::cout << "Samoch�d: " << brand_ << " " << model_ << "\n";
        std::cout << "Silnik: " << engine_ << "\n";
        std::cout << "Skrzynia bieg�w: " << transmission_ << "\n";
        std::cout << "------------------------\n";
    }

private:
    std::string brand_;
    std::string model_;
    std::string engine_;
    std::string transmission_;
};

#endif // CAR_H
