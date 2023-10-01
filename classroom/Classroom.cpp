#pragma once
#include <iostream>
using namespace std;

class Classroom {
    private:
    string id;
    string areaName;
    double area;
    int numOfBubs;
    public:
    Classroom(){}
    Classroom(string _id,string _areaName,double _area,int _numOfBubs) : id(_id),areaName(_areaName),area(_area),numOfBubs(_numOfBubs){}
    string getId(){
        return this -> id;
    }
    string getAreaName(){
        return this -> areaName;
    }
    double getArea(){
        return this -> area;
    }
    int getNumOfBubs(){
        return this -> numOfBubs;
    }
    virtual bool hasStandardQuality(){
        if(area / numOfBubs >= 10){
            return true;
        }
        return false;
    }
};