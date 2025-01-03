#pragma once
#include "Person.h"

class Customer:public Person{
    float accountNumber;
public:
    Customer(int id, string name, float accountNumber):Person(id, name){
        this->accountNumber = accountNumber;
    }
    void print();
};
