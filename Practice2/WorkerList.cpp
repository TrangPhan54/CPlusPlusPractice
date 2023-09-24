#pragma once
#include "Worker.cpp"
#include <vector>

class WorkerList {
    private:
    vector<Worker> listOfWorker;
    public:
    WorkerList(){}
    bool checkIfExisted(string id){
        if(listOfWorker.size() > 0)
        for(int i = 0; i < listOfWorker.size(); i++){
            if(listOfWorker[i].getId() == id){
                cout << "The worker is existed" << endl;
                return true;
            } 
        }
        return false;
    }
    bool checkIfEmpty(){
        if(listOfWorker.size() == 0){
            cout << "List is empty" << endl;
            return true;
        }
        return false;
    }
    void addWorker(){
        string id = "";
        string firstName = "";
        string lastName = "";
        int quantity = 0;
        cout << "Please enter the id of the worker " << endl;
        cin >> id;
        if(checkIfExisted(id)){
            return;
        };
        cout << "Please enter the first name of the worker " << endl;
        cin >> firstName;
        cout << "Please enter the last name of the worker " << endl;
        cin >> lastName;
        cout << "Please enter the quantity of product" << endl;
        cin >> quantity;
        Worker worker(id,firstName,lastName,quantity);       
        if(!checkIfExisted(id)){
            listOfWorker.push_back(worker);
            cout << "add successfully" << endl;
        }
    }
    void viewWorkerList(){
        if(!checkIfEmpty())
            for(int i = 0; i < listOfWorker.size(); i++){
                cout << "The information with worker have id: " << listOfWorker[i].getId() << endl;
                cout << "First name is: " << listOfWorker[i].getFirstName() << endl;
                cout << "Last name is: " << listOfWorker[i].getLastName() << endl;
                cout << "The quantity of product is: " << listOfWorker[i].getQuantityOfProduct() << endl;
                cout << "The salary is: " << listOfWorker[i].getSalary() << endl;
            }
    }
    vector<Worker> workerListMoreThan200Products(){
        vector<Worker> result; 
        if(!checkIfEmpty()){
            for(int i = 0; i < listOfWorker.size(); i++){
                if(listOfWorker[i].getQuantityOfProduct() > 200){
                    cout << "The name of worker is: " << listOfWorker[i].getFirstName() << " " << listOfWorker[i].getLastName() << " . And the quantity of products is: " << listOfWorker[i].getQuantityOfProduct() << endl;
                    result.push_back(listOfWorker[i]);
                }
            }
        }
        return result;
    }
    void sortByQuantityOfProduct(){
        if(!checkIfEmpty()){
            sort(listOfWorker.begin(),listOfWorker.end());
            for(int i = 0; i < listOfWorker.size();i++){
            cout << "The worker information with id: " << listOfWorker[i].getId() << endl;
            cout << "The quantity: " << listOfWorker[i].getQuantityOfProduct() << endl;
        }
        }
    }
};