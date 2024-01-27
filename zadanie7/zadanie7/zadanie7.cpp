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

    // Wyświetlenie informacji o zbudowanym samochodzie
    sportsCar.showInfo();

    return 0;
}
