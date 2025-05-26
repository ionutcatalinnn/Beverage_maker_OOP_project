#include "Recipe.h"

using namespace std;

Recipe::Recipe(string n, int coffee, int water, int milk)
     :name(n), coffeeQuantity(coffee), waterQuantity(water), milkQuantity(milk) {}

string Recipe::getName() const {
    return name;
}

int Recipe::getCoffeeQuantity() const {
    return coffeeQuantity;
}

int Recipe::getWaterQuantity() const {
    return waterQuantity;
}

int Recipe::getMilkQuantity() const {
    return milkQuantity;
}
