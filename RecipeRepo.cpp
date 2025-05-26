#include "RecipeRepo.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

void RecipeRepo::loadRecipesFromFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Eroare la deschiderea fisierului " << filename << "\n";
        return;
    }

    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        string name;
        int coffee, water, milk;

        if (iss >> name >> coffee >> water >> milk) {
            recipes.emplace_back(name, coffee, water, milk);
        }
        else {
            cerr << "Format gresit in fisierul de retete.\n";
        }
    }

    file.close();
}

Recipe RecipeRepo::getRecipeByIndex(int index) const {
    // Returneaza reteta la indexul specificat
    if (index >= 0 && index < static_cast<int>(recipes.size())) {
        return recipes[index];
    }
    else {
        throw out_of_range("Index invalid pentru reteta.");
    }
}




