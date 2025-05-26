#pragma once
#include <vector>

#include "Recipe.h"
using namespace std;

class RecipeRepo {
private:
    vector<Recipe> recipes; 

public:
    void loadRecipesFromFile(const string& filename); 
    Recipe getRecipeByIndex(int index) const; 
    int getNumRecipes() const; 
    void showMenu() const; 
};
