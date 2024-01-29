// main.cpp - Funkcja main do zaprezentowania wzorca budowniczego

#include "CarBuilder.h"
#include "SportsCarBuilder.h"
#include "Director.h"

int main() {
    // Użycie wzorca budowniczego
    SportsCarBuilder sportsCarBuilder;
    Director director;

    director.construct(sportsCarBuilder);
    Car sportsCar = sportsCarBuilder.getResult();

    SportCarBuilder sportCarBuilder;
    Director director1;

    director1.construct(sportCarBuilder);
    Car sportCar = sportCarBuilder.getResult();
    

    // Wyświetlenie informacji o zbudowanym samochodzie
    sportsCar.showInfo();

    cout << endl;

    sportCar.showInfo();

    

    return 0;
}
