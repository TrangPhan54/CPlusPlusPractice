// Nhap so nguyen duong n
// Xuat n phan tu dau tien cua day Fibonacci

#include <stdio.h>
#include <iostream>
using namespace std;

int Fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1 || n == 2){
        return 1;
    }
    return (Fib(n-1)+Fib(n-2));
}
int main(){
	int n;
	cout << "please enter n: " << endl;
	cin >> n;
	for(int i = 0; i<n; i++){
		cout << Fib(i) << " ";
	}
}


