// Nhap vao mot so nguyen duong n
// n co phai la so nguyen to?

#include <stdio.h>
#include <iostream>
using namespace std;
int main(){

	int number;
	cout << "enter a number :" << endl;
	cin >> number;
	int divisor;
	int count;
	for(int divisor = 1; divisor <= number ; divisor++){
		if(number % divisor == 0)
		count++;
	}
	if(count > 2){
		printf("%d is not a prime number", number);
	}
	else {
		printf("%d is a prime number", number);
	}
}