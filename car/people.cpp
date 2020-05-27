#include <people.h>
#include <iostream>

class People{

private:
    string name;
    int age;

public:
    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }
    string getName(){
        return this->name;
    }
    int getAge(){
        return this->age;
    }

};
