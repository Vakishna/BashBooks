#include <iostream>
#include "Account.h"
#include "Asset.h"
#include "Banking.h"
#include "To-Do.h"



int main() {
    std::cout << "Project Initialized!" << std::endl;
    Asset* myAsset = new Asset();
    Banking* BankingMod = new Banking();
    ToDo* newDoIt = new ToDo();
    return 0;
}
