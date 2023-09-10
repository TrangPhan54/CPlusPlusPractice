// Nhap vao mot so nguyen duong n
// n co phai la so chinh phuong?

#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	int number;
	cout << "enter a number:" << endl;
	cin >> number;
	int squareofnumber = (int)sqrt(number);
	if(squareofnumber * squareofnumber == number){
		printf("%d is a square number",number);
	}
}
