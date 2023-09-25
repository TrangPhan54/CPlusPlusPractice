#pragma once
#include "Receipt.cpp"
#include <vector>

class HourReceipt : public Receipt {
    private:
    int numOfHours;
    public:
    HourReceipt(string receiptId,string customerName,string roomId,double price,int numOfHours) : Receipt(receiptId,customerName,roomId,price), numOfHours(numOfHours){}
    int getNumsOfHours(){
        return this -> numOfHours;
    }
    double getMoneyDueToHour(){
        if(numOfHours > 0 && numOfHours < 24){
            return getPrice() * numOfHours;
        }
        else if(numOfHours >= 24 && numOfHours <= 30){
            return getPrice() * 24;
        }
        return 0;
    }
};