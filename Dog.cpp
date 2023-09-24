#include <iostream>
#include <iostream>
#include <ctype.h>

using namespace std;

void toUpper(string s) {
    
	transform(s.begin(), s.end(), s.begin(), ::toupper);

}

int main() {
	string s;
	cin >> s;
	toUpper(s);
	cout << s;
	return 0;
}