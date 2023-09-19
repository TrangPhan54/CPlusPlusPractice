#pragma once
#include <iostream>
#include <vector>

using namespace std;
class Person {
private:
    string name;
    int yearOfBirth;
public:
    Person(string _name,int _yearOfBirth) : name(_name), yearOfBirth(_yearOfBirth){}
    string getName(){
        return this -> name;
    }
    int getYearOfBirth(){
        return this -> yearOfBirth;
    }
};
