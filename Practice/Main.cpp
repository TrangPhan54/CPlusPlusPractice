#include "PhoneList.cpp"

int main(){
    PhoneList phone;
    int input = 0;
   
    while(input != 8){
        cout << "Menu:\n1: add smart phone\n2: delete smart phone\n3: View the list of all smart phones:\n4: Sort the list of smart phones by price:\n5: Search smart phone by ID:\n6: Search smart phone by min price and max price:\n7: List of smart phones by manufacturer:\n8:exit" << endl;
        cout << "please enter a value:" << endl;
        cin >> input;
        switch (input){
        case 1:
        phone.addPhone();
        break;
        case 2:
        phone.deletePhone();
        break;
        case 3:
        phone.viewListOfSmartPhone();
        break;
        case 4:
        phone.searchById();
        break;
        case 5:
        phone.searchByMinAndMaxPrice();
        break;
        case 6:
        phone.listOfPhoneByManufacturer();
        break;
        case 7:
        phone.sortByPrice();
        break;
        case 8:
        cout << "exit" << endl;
        break;
        default:
        cout << "Please enter another number" << endl;
        break;
        }

    }
    return 0;
};