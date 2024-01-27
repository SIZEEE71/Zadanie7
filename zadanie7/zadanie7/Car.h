// Car.h - Klasa reprezentuj¹ca obiekt Samochód

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    void setBrand(const string& brand) {
        brand_ = brand;
    }

    void setModel(const string& model) {
        model_ = model;
    }

    void setEngine(const string& engine) {
        engine_ = engine;
    }

    void setTransmission(const string& transmission) {
        transmission_ = transmission;
    }

    void showInfo() const {
        cout << "Samochod: " << brand_ << " " << model_ << "\n";
        cout << "Silnik: " << engine_ << "\n";
        cout << "Skrzynia biegow: " << transmission_ << "\n";
        cout << "------------------------\n";
    }

private:
    string brand_;
    string model_;
    string engine_;
    string transmission_;
};

#endif // CAR_H
