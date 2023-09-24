#pragma once
#include <iostream>
using namespace std;

class Worker {
    private:
    string id;
    string firstName;
    string lastName;
    int quantityOfProduct;
    public:
    Worker(string _id,string _firstName, string _lastName,int _quantity) : id(_id), firstName(_firstName), lastName(_lastName), quantityOfProduct(_quantity){}
    string getId(){
        return this -> id;
    }
    string getFirstName(){
        return this -> firstName;
    }
    string getLastName(){
        return this -> lastName;
    }
    int getQuantityOfProduct() const{
        return this -> quantityOfProduct;
    }
    double getSalary(){
        double salary = 0;
        if(quantityOfProduct >= 1 && quantityOfProduct <= 199){
            salary = quantityOfProduct * 0.5;
        }
        else if(quantityOfProduct >= 200 && quantityOfProduct <= 399){
            salary = quantityOfProduct * 0.55;
        }
        else if(quantityOfProduct >= 400 && quantityOfProduct <= 599){
            salary = quantityOfProduct * 0.6;
        }
        else if(quantityOfProduct >= 600){
            salary = quantityOfProduct * 0.65;
        }
        return salary;
    }
    bool operator<(const Worker &a) const{
        return quantityOfProduct > a.getQuantityOfProduct();
    }
};