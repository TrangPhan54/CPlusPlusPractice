#include<iostream>
using namespace std;
void printNumber(int *pointerNum){
    cout<< *pointerNum << endl;
}

void printChar(char *pointerChar){
    cout<< *pointerChar << endl;
}
void print(void *pointer, char type){
    switch (type)
    {
    case 'i':
        cout<< *((int*)pointer) << endl; 
        break;
    
    case 'c':
        cout<< *((char*)pointer) << endl; 
        break;
    }
}
int main (){
    int number = 5;
    char character = 'a';
    print(&number,'i');
    return 0;
}