#include <iostream>
using namespace std;
class Instrument {
    public:
    virtual void MakeSound() {
        cout << "you r not alone" << endl;
    }
};
class Guitar : public Instrument {
    public:
    void MakeSound(){
        cout << "Guitar is my friend" << endl;
    }
};
class Piano : public Instrument {
    public:
    void MakeSound(){
        cout << "I wish I could play the piano" << endl;
    }
};
int main (){
    Instrument* i1 = new Guitar();
    // i1 -> MakeSound();
    Instrument* i2 = new Piano();
    // i2 -> MakeSound();
    Instrument* instr[2] = {i1,i2};
    for(int i = 0 ; i<2; i++){
        instr[i] -> MakeSound();
    }

}
