#pragma once
#include "Base.h"

class Base2:virtual public Base{
protected:
    int y;
public:
    Base2(){
        y = 0;
    }
    Base2(int y):Base(y){
        this->y = y;
    }

    void setY(int Y);
    int getY();
};
