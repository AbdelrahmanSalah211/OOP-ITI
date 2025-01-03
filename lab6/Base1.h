#pragma once
#include "Base.h"

class Base1:virtual public Base{
protected:
    int x;
public:
    Base1(){
        x = 0;
    }
    Base1(int x):Base(x){
        this->x = x;
    }

    void setX(int x);
    int getX();
};

