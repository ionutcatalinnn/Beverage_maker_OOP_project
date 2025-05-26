#include "CommandPanel.h"
#include <iostream>

using namespace std;

CommandPanel::CommandPanel(CommandManager& mgr) : manager(mgr) {}

void CommandPanel::showMenu() const {
    cout << "Meniu:\n";
    cout << "1. Espresso\n";
    cout << "2. Espresso Lung\n";
    cout << "3. Cappuccino\n";
    cout << "4. LatteMacchiato\n";
    cout << "5. Apa\n";
    cout << "6. Ceai\n";
    cout << "0. Iesire\n";
}

int CommandPanel::takeCommand() const {
    int opt;
    cout << "Introduceti numarul corespunzator comenzii: ";
    cin >> opt;
    return opt;
}
