// Nhap vao mot so nguyen duong n
// Tinh S(n) = 1 + 2 + ... + (n - 1) + n
// => S(n) = S(n - 1) + n

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int number;
	cout << "enter a number:" << endl;
	cin >> number;
	int sum = 0;
	for(int i = 1; i<=number; i++){
	  sum+= i;
	}
	printf("the sum of n number is: %d",sum);
}
