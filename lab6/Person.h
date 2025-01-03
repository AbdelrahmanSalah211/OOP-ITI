#pragma once
#include <iostream>

using namespace std;

class Person {
protected:
    int id;
    string name;

public:
    Person(){
        id = 100;
        name = "Person";
    }

    Person(int id, string name){
        this->id = id;
        this->name = name;
    }

    void print();
};
