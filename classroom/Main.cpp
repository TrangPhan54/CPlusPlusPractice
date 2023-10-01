#include "Management.cpp"

int main(){
    Management manage;
    int input = 0;
    int numOfComps;
    string id = "";
    while (input != 6)
    {
        cout << "Please enter your choice:" << endl;
        cin >> input;
        switch (input)
        {
        case 1:
            manage.addClassroom();
            break;
        
        case 2:
            cout << "Enter the id of the room:" << endl;
            cin >> id;
            manage.findRoomById(id);
            break;
        case 3:
            cout << "List of standard room:" << endl;
            manage.getStandardRoom();
            break;
            case 4:
            cout << "Please enter the id:" << endl;
            cin >> id;
            manage.deleteById(id);
            break;
            case 5:
            cout << "Please enter the id of IT room:" << endl;
            cin >> id;
            cout << "Please enter the num of computers:" << endl;
            cin >> numOfComps;
            manage.updateITRoom(id,numOfComps);

        }
    }
    
}