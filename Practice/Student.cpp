#include "Person.cpp"

class Student : public Person {
private:
    int id;
    string className;
    double avgPoint;
public:
    Student(string name, int yearOfBirth, int _id, string _className,double _avgPoint): Person(name,yearOfBirth), id(_id), className(_className),avgPoint(_avgPoint){}
    int getId(){
        return this -> id;
    }
    string getClassName(){
        return this -> className;
    }
    double getAvgPoint(){
        return this -> avgPoint;
    }
    void displayInformation(vector<Student> studentList){
        for(Student stu : studentList){
            cout << "Student id: " << stu.id << endl;
            cout << "Student name: " << stu.getName() << endl;
            cout << "Student yob : " << stu.getYearOfBirth() << endl;
            cout << "Student average point: " << stu.avgPoint << endl;
            cout << "Student class name: " << stu.className << endl;
        }
    }
    
   

};