// Sum of the first N number:

#include <stdio.h>
#include <iostream>
using namespace std;
int SumOfN(int);
int main(){
    int number;
    cout << "please enter a number " << endl;
    cin >> number;
    int result = SumOfN(number);
    cout << "the sum of n number is : " << result << endl;
}
int SumOfN(int n){
    if(n == 0){
        return 0;
    }
    return SumOfN(n-1) + n;
}