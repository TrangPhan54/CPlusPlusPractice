// Nhap vao a, b va n sao cho a,b < n
// Tinh tong cac so nguyen duong nho hon n chia het cho a nhung khong chia het cho b

#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	int a,b,n;
	int sum = 0;
	cout << "enter a, b, n:" << endl;
	cin >> a >> b >> n;
	for(int i = 1; i < n ; i++){
		if(i % a == 0 && i % b != 0){
			sum += i;
		}
	}
	cout << "sum is = " << sum << endl;

}
