#pragma once
#include <iostream>
using namespace std;

class Receipt {
    private:
    string receiptId;
    string customerName;
    string roomId;
    double price;
    public:
    Receipt(string _receiptId,string _customerName,string _roomId,double _price): receiptId(_receiptId),customerName(_customerName),roomId(_roomId),price(_price){}
    string getReceiptId(){
        return this -> receiptId;
    }
    string getCustomerName(){
        return this -> customerName;
    }
    string getRoomId(){
        return this -> roomId;
    }
    double getPrice(){
        return this -> price;
    }
};
