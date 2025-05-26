#include "CommandManager.h"
#include <iostream>

using namespace std;

CommandManager::CommandManager(RecipeRepo& repo) : canWork(true), recipeRepo(repo) {}

void CommandManager::reload() {
    handler.boilWater(100, 10);
}

bool CommandManager::takeCommand(int order) {
    if (canWork) {
        if (order >= 1 && order <= 6) {
            Recipe chosenRecipe = recipeRepo.getRecipeByIndex(order - 1);

            handler.boilWater(chosenRecipe.getWaterQuantity(), 4);

            if (chosenRecipe.getCoffeeQuantity() > 0) {
                handler.grindCoffee(chosenRecipe.getCoffeeQuantity(), 3);
            }

            if (chosenRecipe.getMilkQuantity() > 0) {
                handler.heatMilk(chosenRecipe.getMilkQuantity(), 5);
            }

            if (order == 6) {
                handler.processTea(10);
            }

            cout << chosenRecipe.getName() << " este gata!La revedere\n";
        }
        else if (order != 0) {
            cout << "Optiune invalida. Va rugam sa alegeti din nou.\n";
        }
        return true;
    }
    else {
        cout << "Resurse insuficiente. Va rugam reincarcati containerele.\n";
        return false;
    }
}
