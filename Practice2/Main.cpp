#include "WorkerList.cpp"

int main(){
    WorkerList worker;
    int input = 0;
   
    while(input != 5){
        cout << "Menu:\n1: add new worker\n2: view worker list\n3: view worker with more than 200 products\n4: sort base on descending number of products\n5: exit" << endl;
        cout << "please enter a value:" << endl;
        cin >> input;
        switch (input){
        case 1:
        worker.addWorker();
        break;
        case 2:
        worker.viewWorkerList();
        break;
        case 3:
        worker.workerListMoreThan200Products();
        break;
        case 4:
        worker.sortByQuantityOfProduct();
        break;
        case 5:
        cout << "exit" << endl;
        break;
        default:
        cout << "please enter another number!" << endl;
        break;

        }
    }
};