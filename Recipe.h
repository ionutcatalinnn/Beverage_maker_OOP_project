#pragma once
#include <string>

using namespace std;

class Recipe {
private:
    string name;
    int coffeeQuantity;
    int waterQuantity;
    int milkQuantity;

public:
    Recipe(string n, int coffee, int water, int milk);
    string getName() const;
    int getCoffeeQuantity() const;
    int getWaterQuantity() const;
    int getMilkQuantity() const;
};
