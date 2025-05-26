#include "CommandPanel.h"
#include "CommandManager.h"
using namespace std;

int main() {
    // Creare obiect RecipeRepo
    RecipeRepo recipeRepo;

    // Incarca retetele din fisier
    recipeRepo.loadRecipesFromFile("recipes.txt");

    // Creare obiect ResourceHandler
    ResourceHandler resourceHandler;

    // Creare obiect CommandPanel
    CommandManager commandManager(recipeRepo);
    CommandPanel commandPanel(commandManager);

    // Meniu interactiv
    int opt;
    do {
        commandPanel.showMenu();
        opt = commandPanel.takeCommand();

        if (opt != 0) {
            commandManager.takeCommand(opt);
        }
    } while (opt != 0);

    
    return 0;
}