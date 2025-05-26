#pragma once
#include "ResourceContainer.h"

class ResourceHandler {
private:
    ResourceContainer coffeeContainer;
    ResourceContainer waterContainer;
    ResourceContainer milkContainer;

public:
    ResourceHandler();
    void boilWater(int quantity, int duration);
    void grindCoffee(int quantity, int duration);
    void heatMilk(int quantity, int duration);
    void processTea(int duration);
};
