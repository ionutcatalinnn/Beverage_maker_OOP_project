#pragma once

#include "ResourceHandler.h"
#include "RecipeRepo.h"

class CommandManager {
private:
    ResourceHandler handler;
    bool canWork;
    RecipeRepo recipeRepo;

public:
    CommandManager(RecipeRepo& repo);
    void reload();
    bool takeCommand(int order);
};