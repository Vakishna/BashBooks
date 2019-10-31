#include <iostream>
#include <cstdio>

#ifndef TODO_H
#define TODO_H

enum Priority {
    High,
    Medium,
    Low
};

class ToDo {
    
    public:
        ToDo();
        ToDo(char todo);
        void setTodo();
        void setPriority();
        void setDone();
        void printDesc();
        void printPriority();
    protected:
        
    private:
        std::string todo; 
        bool isCompleted = false;
        Priority level;
        
};
#endif
