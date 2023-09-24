#pragma once
#include <iostream>
using namespace std;

class SmartPhone {
    private:
    string id;
    string manufacturer;
    double price;
    string createdDate;
    string description;
    public:
    SmartPhone(string _id) :id(_id){}
    SmartPhone(string _id,string _manufacturer,double _price,string _createdDate,string _description) : id(_id),manufacturer(_manufacturer),price(_price),createdDate(_createdDate),description(_description){}
    string getId(){
        return this -> id;
    }
    string getManufacturer(){
        return this -> manufacturer;
    }
    double getPrice()const{
        return this -> price;
    }
    string getCreatedDate(){
        return this -> createdDate;
    }
    string getDescription(){
        return this -> description;
    }
    bool operator<(const SmartPhone &a) const{
        return price > a.getPrice();
    }
};