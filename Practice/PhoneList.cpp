#pragma once
#include "SmartPhone.cpp"
#include <vector>
class PhoneList {
    private:
    vector<SmartPhone> smartPhoneList;
    public:
    PhoneList(){}
    
    bool addPhone(){
        string id = "";
        string manufacturer = "";
        double price = 0;
        string createdDate = "";
        string description = "";
        bool isAdded = false;
        bool existed = false;
        cout << "Please enter the id of the phone " << endl;
        cin >> id;
        cout << "Please enter the manufacturer of the phone " << endl;
        cin >> manufacturer;
        cout << "Please enter the price of the phone " << endl;
        cin >> price;
        cout << "Please enter the create date of the phone " << endl;
        cin >> createdDate;
        cout << "Please enter the description of the phone " << endl;
        cin >> description;
        SmartPhone smartPhone(id,manufacturer,price,createdDate,description);
        if(smartPhoneList.size() == 0){
            existed = false;
        }
        else {
            for(int i = 0; i < smartPhoneList.size();i++){
                if(smartPhoneList[i].getId() == id){
                    existed = true;
                    cout << "This phone is existed" << endl;
                }
            }
        }
        if(existed == false){
            smartPhoneList.push_back(smartPhone);
            cout << "add succesfully" << endl;
            isAdded = true;
        }
        return isAdded;
    }
    void deletePhone(){
        string id = "";
        cout << "please enter the id of the phone" << endl;
        cin >> id;
        if(smartPhoneList.size() == 0){
            cout << "this list is empty" << endl;
        }
        else {
            for(int i = 0; i < smartPhoneList.size();i++){
                if(smartPhoneList[i].getId() == id){
                    smartPhoneList.erase(smartPhoneList.begin() + i);
                    cout << "delete successfully" << endl;
                }
                else {
                    cout << "cannot find the phone" << endl;
                }
            }
        }

    }
    void viewListOfSmartPhone(){
        if(smartPhoneList.size() == 0){
            cout << "List is empty." << endl;
        }
        else {
        for(int i = 0; i<smartPhoneList.size();i++){
            cout << "The smart phone information with id: " << smartPhoneList[i].getId() << endl;
            cout << "The manufacturer: " << smartPhoneList[i].getManufacturer() << endl;
            cout << "The price: " << smartPhoneList[i].getPrice() << endl;
            cout << "The created date: " << smartPhoneList[i].getCreatedDate() << endl;
            cout << "The description: " << smartPhoneList[i].getDescription() << endl;
        }
        }
    }
    void searchById(){
        cout << "Please enter the id: " << endl;
        string id = "";
        cin >> id;
        for(int i = 0; i<smartPhoneList.size();i++){
            if(smartPhoneList[i].getId() == id){
            cout << "The smart phone information with id: " << smartPhoneList[i].getId() << endl;
            cout << "The manufacturer: " << smartPhoneList[i].getManufacturer() << endl;
            cout << "The price: " << smartPhoneList[i].getPrice() << endl;
            cout << "The created date: " << smartPhoneList[i].getCreatedDate() << endl;
            cout << "The description: " << smartPhoneList[i].getDescription() << endl;
            }
        }
    }
    vector<SmartPhone> searchByMinAndMaxPrice(){
        double min = 0;
        double max = 0;
        vector<SmartPhone> result;
        cout << "enter min price: " << endl;
        cin >> min;
        cout << "enter max price: " << endl;
        cin >> max;
        if(smartPhoneList.size() == 0){
            cout << "List is empty." << endl;
        }
        else {
        for(int i = 0; i < smartPhoneList.size() ;i++){
            if(smartPhoneList[i].getPrice() > min && smartPhoneList[i].getPrice() < max){
                result.push_back(smartPhoneList[i]);
            }
            else {
                cout << "cannot by the phone" << endl;
            }
        }
        }
        for(int i = 0; i < result.size();i++){
            cout << "The smart phone information with id: " << smartPhoneList[i].getId() << endl;
            cout << "The manufacturer: " << smartPhoneList[i].getManufacturer() << endl;
            cout << "The price: " << smartPhoneList[i].getPrice() << endl;
        }
        return result;
    }
    vector<SmartPhone> listOfPhoneByManufacturer(){
        vector<SmartPhone> result;
        string manu ="";
        cout << "Please enter the name of manufacturer: " << endl;
        cin >> manu;
        for(int i = 0; i < smartPhoneList.size() ;i++){
            if(smartPhoneList[i].getManufacturer() == manu){
                result.push_back(smartPhoneList[i]);
            }
        }
        for(int i = 0; i < result.size();i++){
            cout << "The smart phone information with id: " << smartPhoneList[i].getId() << endl;
            cout << "The manufacturer: " << smartPhoneList[i].getManufacturer() << endl;
            cout << "The price: " << smartPhoneList[i].getPrice() << endl;
        }
        return result;
    }
    void sortByPrice(){
        if(smartPhoneList.size() > 0){
        sort(smartPhoneList.begin(),smartPhoneList.end());
        for(int i = 0; i < smartPhoneList.size();i++){
            cout << "The smart phone information with id: " << smartPhoneList[i].getId() << endl;
            cout << "The manufacturer: " << smartPhoneList[i].getManufacturer() << endl;
            cout << "The price: " << smartPhoneList[i].getPrice() << endl;

        }
        }
        else {
            cout << "List is empty" << endl;
        }
    }
    
};
