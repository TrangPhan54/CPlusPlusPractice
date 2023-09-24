#include <stdio.h>
#include <iostream>
using namespace std;

int SumOfDigit(int number){
    if(number < 10){
        return number;
    }
    return SumOfDigit(number / 10) + number % 10;

}

int main(){
    int num;
    cout <<"please enter a number: " << endl;
    cin >> num;
    int result = SumOfDigit(num);
    cout << result << endl;

}