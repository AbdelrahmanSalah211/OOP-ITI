#pragma once
#include "Base1.h"
#include "Base2.h"

class Child:public Base1, public Base2{
public:
    Child(int x, int y):Base1(x),Base2(y){}
    int product();
    int sum();
};
