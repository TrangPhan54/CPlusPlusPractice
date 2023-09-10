// Nhap vao mot so nguyen duong n
// Tinh S = 1^2 + 2^2 + ... + n^2

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

	int number,sum;
	cout << "enter n: " << endl;
	cin >> number;
	for(int i = 1; i <= number; i++){
		sum+= i*i;
	}
	printf("the answer of sum is %d ",sum);

}