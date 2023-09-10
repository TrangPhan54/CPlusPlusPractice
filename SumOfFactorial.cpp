// Nhap vao mot so nguyen duong n
// Tinh S = 1! + 2! + ... + n!

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int number;
	int factorial = 1;
	int sum = 0;
	cout << "enter a number: " << endl;
	cin >> number;
	for(int i = 1;i<= number;i++){
			factorial*=i;
			sum+=factorial;
	}
	cout <<"sum of n!= : " << sum << endl; 
}