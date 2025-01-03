#pragma once

class Base{
protected:
    int z;
public:
    Base(){
        z = 0;
    }
    Base(int z){
        this->z = z;
    }

    void setZ(int z);
    int getZ();
};
