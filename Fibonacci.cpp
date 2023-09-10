// Value of number in Fibonacci:

#include <iostream>
using namespace std;
int Fib(int);
int main(){
    int number;
    cout << "please enter a number: " << endl;
    cin >> number;
    int result = Fib(number);
    cout << "the " << number << "th number in Fibonacci Sequence is: " << result << endl;

}
int Fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1 || n == 2){
        return 1;
    }
    return Fib(n-1)+Fib(n-2);
}
