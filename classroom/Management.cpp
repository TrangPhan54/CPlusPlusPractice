#include "Classroom.cpp"
#include "ITRoom.cpp"
#include "Studyroom.cpp"
#include "Lab.cpp"
#include <vector>

class Management {
    private:
    vector<*Classroom> classroomList;
    public:
    Management(vector<*Classroom> _classroomList) : classroomList(_classroomList){}
    bool checkIfExist(string id){
        for(int i = 0; i < classroomList.size(); i++){
            if(classroomList[i].getId() == id){
                return true;
            }
        }
        return false;
    }
    void addClassroom(){
        string id = "";
        string areaName = "";
        double area = 0;
        int numOfBubs = 0;
        int input = 0;
        int hasProjector = 0;  
        string major = "";
        double capacity = 0;
        int hasSink = 0;
        int numOfComputers = 0;
        cout << "Please enter the id of classroom: " << endl;
        cin >> id;
        if(checkIfExist(id)){
            cout << "existed id!" << endl;
            return;
        }
        cout << "Please enter area name: " << endl;
        cin >> areaName;
        cout << "Please enter area:" << endl;
        cin >> area;
        cout << "Please enter number of light bubs:" << endl;
        cin >> numOfBubs;
        cout << "Please enter 1: Add Study room , 2: Add Laboratory, 3: IT room:" << endl;
        cin >> input;
        switch (input)
        {
        case 1:
            cout << "Does study room has projector? (0 for false, another for true)" << endl;
            cin >> hasProjector;
            if(hasProjector == 0){
                Classroom* studyroom = new Studyroom(id,areaName,area,numOfBubs,false);
                classroomList.push_back(studyroom);
                cout << "add successfully!" << endl;
            }
            else {
                Classroom* studyroom = new Studyroom(id,areaName,area,numOfBubs,true);
                classroomList.push_back(studyroom);
                cout << "add successfully!" << endl;
            }
            break;
        case 2:
            cout << "Please enter major: " << endl;
            cin >> major;
            cout << "Please enter capacity:" << endl;
            cin >> capacity;
            cout << "Does lab has sink? (0 for false, another for true)" << endl;

            if(hasSink == 0){
                Classroom* lab = new Lab(id,areaName,area,numOfBubs,major,capacity,false);
                classroomList.push_back(lab);
                cout << "add successfully!" << endl;
            }
            else {
                Classroom* lab = new Lab(id,areaName,area,numOfBubs,major,capacity,true);
                classroomList.push_back(lab);
                cout << "add successfully!" << endl;
            }
            break;
        
        case 3:
            cout << "please enter the number of computers: " << endl;
            cin >> numOfComputers;
            Classroom* ITroom = new ITRoom(id,areaName,area,numOfBubs,numOfComputers);
            classroomList.push_back(ITroom);
            cout << "add successfully!" << endl;
            break;
        }
    }
};