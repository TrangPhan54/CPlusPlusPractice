#include "Classroom.cpp"

class Studyroom : public Classroom {
    private:
    bool hasProjector;
    public:
    Studyroom(){}
    Studyroom(string id, string areaName,double area,int numOfBubs,bool hasProjector) : Classroom(id,areaName,area,numOfBubs), hasProjector(hasProjector){}
    bool getHasProjector(){
        return hasProjector;
    }
    bool hasStandardQuality(){
        if(getArea() / getNumOfBubs() >= 10 && hasProjector){
            return true;
        }
        return false;
    }
};