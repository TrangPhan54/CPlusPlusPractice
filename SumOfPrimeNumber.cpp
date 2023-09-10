// Nhap n sao cho 0 < n < 50
// Tinh tong cac so nguyen to nho hon n

#include <stdio.h>
#include <iostream>
using namespace std;

bool IsPrime(int);
int main(){
	int number;
	cout << "please enter a number:" << endl;
	cin >> number;
	int sum = 0;
	if(number > 0 && number < 50){
	    for(int i = 2; i<= number; i++){
		if(IsPrime(i)){
			cout << "prime numbers: " << i << endl;
			sum +=i;
		}
	}
	cout << "sum of them is: " << sum << endl;
	}
	else {
		cout << "the number is out of range " << endl;
	}
}
bool IsPrime(int n){
	int count = 0;
	for(int i = 1; i<=n;i++){
		if(n % i == 0){
			count ++;
		}
		if(count > 2){
			return false;
		}
	}
	return true;
}