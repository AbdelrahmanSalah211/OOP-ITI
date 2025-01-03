#pragma once
#include "Person.h"

class Employee:public Person{
    float salary;
public:
    Employee(int id, string name, float salary):Person(id, name){
        this->salary = salary;
    }
    void print();
};


