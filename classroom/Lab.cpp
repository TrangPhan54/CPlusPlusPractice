#include "Classroom.cpp"

class Lab : public Classroom {
    private:
    string major;
    double capacity;
    bool hasSink;
    public:
    Lab(){}
    Lab(string id, string areaName,double area,int numOfBubs,string major, double capacity,bool hasSink) : Classroom(id,areaName,area,numOfBubs),major(major),capacity(capacity), hasSink(hasSink){}
    string getMajor(){
        return major;
    }
    double getCapacity(){
        return capacity;
    }
    bool getHasSink(){
        return hasSink;
    }
    bool hasStandardQuality(){
        if(getArea() / getNumOfBubs() >= 10 && hasSink){
            return true;
        }
        return false;
    }

};