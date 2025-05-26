#include "ResourceContainer.h"
#include <iostream>
ResourceContainer::ResourceContainer(Resource res) : resource(res), currentQ(maxQ) {}

void ResourceContainer::refill() {
    //  Reumplerea
    currentQ = maxQ;
}

int ResourceContainer::getQuantity(int quantity) {
    // Logica de obtinere a cantitatii
    if (currentQ >= quantity) {
        currentQ -= quantity;
        return quantity;
    }
    else {
        std::cout << "Nu sunt suficiente resurse.\n";
        return 0;
    }
}
