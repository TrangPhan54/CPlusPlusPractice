// reverse number of n


#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int number, reversenumber, purenumber;
	cout << "please enter number: " << endl;
	cin >> number;
	purenumber = number;

    while(number >=10){
		int lastdigit = number % 10;
		number = number / 10;
		reversenumber = (reversenumber + lastdigit ) * 10;
	}
	reversenumber += number;
	cout << "the reverse number of " << purenumber << " is " << reversenumber << endl;

}