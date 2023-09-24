#include <stdio.h>
#include <iostream>
using namespace std;

// bool IsPalindrome(int number){
//     if(number < 11){
//         return false;
//     }

// }

int ReverseNumber(int number){
    if(number < 10){
        return number;
    }
    return ReverseNumber(number / 10) % 10 * 10 + number % 10 * 10;

}
int main(){
    int number = 121;
    int result = ReverseNumber(number);
    cout << result << endl;
}