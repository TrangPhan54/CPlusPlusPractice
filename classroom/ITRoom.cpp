#include "Classroom.cpp"

class ITRoom : public Classroom {
    private:
    int numOfComputers;
    public:
    ITRoom(){}
    ITRoom(string id, string areaName,double area,int numOfBubs,int numOfComputers) : Classroom(id,areaName,area,numOfBubs), numOfComputers(numOfComputers){}
    int getNumOfComputers(){
        return numOfComputers;
    }
    void setNumOfComputers(int number){
        this -> numOfComputers = number;
    }
    bool hasStandardQuality(){
        if(getArea() / getNumOfBubs() >= 10 && getArea() / numOfComputers <= 1.5){
            return true;
        }
        return false;
    }
};