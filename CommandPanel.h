#pragma once
#include "CommandManager.h"

class CommandPanel {
private:
    CommandManager& manager;

public:
    CommandPanel(CommandManager& mgr);
    void showMenu() const;
    int takeCommand() const;
};