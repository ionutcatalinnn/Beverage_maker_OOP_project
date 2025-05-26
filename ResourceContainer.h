#pragma once
#include "Resource.h"



class ResourceContainer {
private:
    Resource resource;
    int lowQ = 20;
    int maxQ = 100;
    int currentQ;

public:
    ResourceContainer(Resource res);
    void refill();
    int getQuantity(int quantity);
};
