#include <iostream>
using namespace std;

int main() {
    // C-style casting
    float floatValue = 3.14159;
    int intValue1 = (int)floatValue;
    cout << "C-style cast: " << intValue1 << endl;

    // Static cast
    float floatValue2 = 2.71828;
    int intValue2 = static_cast<int>(floatValue2);
    cout << "Static cast: " << intValue2 << endl;

    // Const cast
    const int constValue = 42;
    int& nonConstRef = const_cast<int&>(constValue);
    nonConstRef = 50;
    cout << "Const cast: " << nonConstRef << endl;

    // // Reinterpret cast
    // double doubleValue = 123.456;
    // long longValue = reinterpret_cast<long>(doubleValue);
    // cout << "Reinterpret cast: " << longValue << endl;

    // // User-defined conversion operator
    // class MyNumber {
    // private:
    //     int value;
    // public:
    //     MyNumber(int val) : value(val) {}
    //     operator int() const { return value; }
    // };

    // MyNumber myNum(7);
    // int num = myNum; // Calls the user-defined conversion operator
    // cout << "User-defined conversion: " << num << endl;

    return 0;
}
