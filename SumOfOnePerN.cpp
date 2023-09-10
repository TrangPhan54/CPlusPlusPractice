// Nhap vao mot so nguyen duong n
// Tinh S = 1 + 1/2 + ... + 1/n

#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	int number;
	double sum;
	cout << "enter number: " << endl;
	cin >> number;

	for(int i = 1; i <=number ;i++){
		sum+= 1.0/i;
	}
	cout << "the answer is: " << sum << endl;
}
