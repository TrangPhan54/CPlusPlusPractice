#include <iostream>
using namespace std;

void swap(int*, int*);

int main(){
    int a = 5 , b = 10;
    swap(&a,&b);
    cout << "now a = "<< a << endl;
    cout << "now b = " << b << endl;

}
void swap(int* x, int* y){
    int t = *x;
    *x = *y;
    *y = t;
}