#include "Classroom.cpp"
#include "ITRoom.cpp"
#include "Studyroom.cpp"
#include "Lab.cpp"
#include <vector>
#include <algorithm> 
class Management {
    private:
    vector<Classroom*> classroomList;
    public:
    Management(){}
    Management(vector<Classroom*> _classroomList) : classroomList(_classroomList){}
    bool checkIfExist(string id){
        for(int i = 0; i < classroomList.size(); i++){
            if(classroomList[i] -> getId() == id){
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
            cin >> hasSink;

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
    void findRoomById(string id){
        bool isFound = false;
        for(int i = 0; i < classroomList.size(); i++){
            if(classroomList[i] -> getId() == id){
                isFound = true;
                cout << "This room id is " << classroomList[i] -> getId() << endl;
                cout << "This room area is " << classroomList[i] -> getArea() << endl;
                cout << "This room has number of bubs " << classroomList[i] -> getNumOfBubs() << endl;
                if(Lab* lab = dynamic_cast<Lab*>(classroomList[i])){
                    cout << "this room major is: " << lab -> getMajor() << endl;
                    cout << "this room capacity is: " << lab -> getCapacity() << endl;
                    cout << "does this room has sink?: " << (lab -> getHasSink() == true ? "yes" : "no") << endl;
                }
                else if(Studyroom* stuRoom = dynamic_cast<Studyroom*>(classroomList[i])){
                    cout << "does this room has projector?: " << (stuRoom -> getHasProjector() == true ? "yes" : "no") << endl;
                }
                else if(ITRoom* it = dynamic_cast<ITRoom*>(classroomList[i])){
                    cout << "This room has nums of computers: " << it ->getNumOfComputers() << endl;
                }
            }
        }
        if(!isFound){
            cout << "Cannot find the room!" << endl;
        }
    }
    void getStandardRoom(){
        for(Classroom* cl : classroomList){
            if(Lab* lab = dynamic_cast<Lab*>(cl)){
                cout << "is this lab with id " << lab -> getId() << " has good standard? " << (lab -> hasStandardQuality() == true ? "yes" : "no") << endl; 
            }
            else if(Studyroom* stu = dynamic_cast<Studyroom*>(cl)){
                cout << "is this studyroom with id " << stu -> getId() << " has good standard? " << (stu -> hasStandardQuality() == true ? "yes" : "no") << endl; 
            }
            else if(ITRoom* it = dynamic_cast<ITRoom*>(cl)){
                cout << "is this it room with id " << it -> getId() << " has good standard? " << (cl -> hasStandardQuality() == true ? "yes" : "no") << endl; 
            }
        }

    }
    // void sortByArea(){
    //     sort(classroomList.begin(), classroomList.end(), [](Classroom& classA, Classroom& classB){
    //         return classA.getArea() > classB.getArea();
    //     });
    // }
    void deleteById(string id){
        bool isDel = false;
        for(int i = 0 ; i < classroomList.size(); i++){
            if(classroomList[i] -> getId() == id){
                classroomList.erase(classroomList.begin() + i);
                isDel = true;
                cout << "del successfully!" << endl;
                return;
            }
        }
        if(!isDel){
            cout << "Cannot find the room to delete!" << endl;
        }
    }
    ITRoom* updateITRoom(string id,int number){
        bool isFound = false;
        for(int i = 0; i < classroomList.size(); i++){
            if(classroomList[i] -> getId() == id){
                if(ITRoom* it = dynamic_cast<ITRoom*>(classroomList[i])){
                isFound = true;
                it -> setNumOfComputers(number);
                cout << "Update successfully!" << endl;
                return it;
            }
            else {
                cout << "This is not the id of IT room. Pls enter another id!" << endl;
                return NULL;
            }
        }
        if(!isFound){
            cout << "Cannot find the IT room with this id" << endl;
        }
        return NULL;
    }
    }
    vector<ITRoom*> listOfRoomHas60Computers(){

    }    
};