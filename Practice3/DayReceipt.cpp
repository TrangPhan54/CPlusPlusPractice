#pragma once
#include "Receipt.cpp"
#include <vector>

class DayReceipt : public Receipt {
    private:
    int numOfDays;
    public:
    DayReceipt(string receiptId,string customerName,string roomId,double price,int numOfDays) : Receipt(receiptId,customerName,roomId,numOfDays), numOfDays(numOfDays){}
    int getNumsOfDays(){
        return this -> numOfDays;
    }
    double getMoneyDueToDay(){
        if(numOfDays <= 7){
            return numOfDays * getPrice() * 24;
        }
        return 7 * getPrice() * 24 + (numOfDays - 7) * getPrice() * 24;
    }
};