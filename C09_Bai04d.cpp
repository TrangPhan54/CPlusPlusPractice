// Nhap vao mot so nguyen duong n
// Tinh n!

#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	int number;
	int factorial = 1;
	cout << "enter a number: " << endl;
	cin >> number;
	for(int i = 1;i<= number;i++){
		factorial*=i;
	}
	cout <<"n!= : " << factorial << endl;
}
