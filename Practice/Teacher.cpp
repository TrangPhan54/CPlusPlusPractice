#include "Person.cpp"
#include "Student.cpp"
#include <vector>
class Teacher : public Person {
private:
    string classFormer;
    string subject;
    vector<Student> studentList;
public:
    Teacher(string name,int yearOfBirth,string _classFormer,string _subject,vector<Student> _studentList) : Person(name,yearOfBirth), classFormer(_classFormer),subject(_subject),studentList(_studentList){}
    string getClassFormer() {
        return this -> classFormer;
    }
    string getSubject() {
        return this -> subject;
    }
    vector<Student> getStudentList(){
        return this -> studentList;
    }
    void addNewStudent(Student student){
        int id;
        cout << "Please enter the id: " ;
        cin >> id;
        for(int i = 0; i < studentList.size(); i++){
            if(studentList[i].getId() == id){
                cout << "Existed student" << endl;
            }
            else {
                studentList.insert(studentList.begin(),student);
                cout << "Add successfully" << endl; 
            }
        }
    }
    void removeStudent(Student student){
        int id;
        bool flag = false;
        cout << "Please enter the id: " ;
        cin >> id;
        for(int i = 0; i < studentList.size(); i++){
            if(studentList[i].getId() == id){
                flag = true;
                for(int j = i; j < studentList.size();j++){
                    studentList[j] = studentList[j + 1];
                }     
            }
            cout << "Delete successfully" << endl;
            break;
        } 
        if(flag == false){
            cout << "Cannot find the student" << endl;
        }    
    }
    void searchStudentInformation(int id){
        for(int i = 0; i < studentList.size();i++){
            if(studentList[i].getId() == id){
            cout << "Student id: " << id << endl;
            cout << "Student name: " << studentList[i].getName() << endl;
            cout << "Student yob : " << studentList[i].getYearOfBirth() << endl;
            cout << "Student average point: " << studentList[i].getAvgPoint() << endl;
            cout << "Student class name: " << studentList[i].getClassName() << endl;
                
            }
        }
    }
};