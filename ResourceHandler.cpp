#include "ResourceHandler.h"
#include <thread>
#include <chrono>
#include <iostream>

using namespace std;

ResourceHandler::ResourceHandler() : coffeeContainer(COFFEE), waterContainer(WATER), milkContainer(MILK) {}

void ResourceHandler::boilWater(int quantity, int duration) {
    if (quantity > 0) {

        // Verifica daca exista suficienta apa
        int actualQuantity = waterContainer.getQuantity(quantity);
        if (actualQuantity < quantity) {
            cout << "Se reincarca containerul de apa!\n";
            waterContainer.refill();
        }

       cout << "Apa fierbe timp de " << duration << " secunde.\n";
       this_thread::sleep_for(chrono::seconds(duration));

       
    }
}

void ResourceHandler::grindCoffee(int quantity, int duration) {

    // Verifica daca exista suficienta cafea
    int actualQuantity = coffeeContainer.getQuantity(quantity);
    if (actualQuantity < quantity) {
        cout << "Se reincarca containerul de cafea!\n";
        coffeeContainer.refill();
    }

    cout << "Se macina boabele de cafea timp de " << duration << " secunde.\n";
    this_thread::sleep_for(chrono::seconds(duration));

    
}

void ResourceHandler::heatMilk(int quantity, int duration) {
    if (quantity > 0) {

        // Verifica daca exista suficient lapte
        int actualQuantity = milkContainer.getQuantity(quantity);
        if (actualQuantity < quantity) {
            cout << "Se reincarca containerul delapte!\n";
            milkContainer.refill();
        }

        cout << "Se incalzeste laptele timp de " << duration << " secunde.\n";
        this_thread::sleep_for(chrono::seconds(duration));

        
    }
}


void ResourceHandler::processTea(int duration) {
    cout << "Ceaiul se prepara timp de " << duration << " secunde.\n";
    this_thread::sleep_for(chrono::seconds(duration));
}