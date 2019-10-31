#include "To-Do.h"

ToDo::ToDo() {
    setTodo();
    setPriority();
    printDesc();
}

void ToDo::setTodo() {
    std::cout << "Please key in task >> " << std::endl;
    std::cin >> this->todo;
}

void ToDo::printPriority() {
    switch(this->level) {
        case High:
            std::cout << "Priority: " << "High" << std::endl;
            break;
        case Medium:
            std::cout << "Priority: " << "Medium" << std::endl;
            break;
        case Low:
            std::cout << "Priority: " << "Low" << std::endl;
            break;
        default:
            std::cout << "Error retrieving the Priority!";
            break;

    }
}



void ToDo::setPriority() {
    int option;
    std::cout << "Please select priority: " << std::endl;
    std::cout << "1. High" << std::endl;
    std::cout << "2. Medium" << std::endl;
    std::cout << "3. Low" << std::endl;
    
    std::cout << "Option >> ";
    std::cin >> option;

    switch (option) {
        case 1:
            this->level = High;
            break;
        case 2:
            this->level = Medium;
            break;
        case 3:
            this->level = Low;
            break;
        default:
            std::cout << "Error!" << std::endl;
            break;
    }
}

void ToDo::setDone() {
    this->isCompleted = true;
}

void ToDo::printDesc() {
    std::cout << "To-Do: " << todo << std::endl;
    std::cout << "Complete? " << isCompleted << std::endl;
    printPriority();
}

