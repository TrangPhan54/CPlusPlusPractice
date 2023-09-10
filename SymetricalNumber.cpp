// Nhap vao mot so nguyen duong n
// n co phai la so doi xung?

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int number;
	int reversenumber = 0;
	int lastDigit;
	cout << "enter a number " << endl;
	cin >> number;
	int purenumber = number;

	while(number >= 10){
		lastDigit = number % 10;
		number = number / 10;
		reversenumber = (reversenumber+lastDigit) * 10;
	}
	reversenumber+=number;

	if(purenumber == reversenumber)
	printf("%d is the answer",purenumber);
	else
	printf("%d is not the answer",purenumber);
}
