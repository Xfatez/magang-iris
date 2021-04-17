#include <iostream>
using namespace std;

// Parent class
class Mother {
public:
    void mySound() {
        cout << "Mother sound like this :"<< "Auouououostopss \n";
    }
};

// Child class
class Daughter : public Mother {
public:
    void mysound() {
        cout << "Daughter sound like this :"<<"Euououiouhhjjd \n";
    }
};

int main() {
    Mother myMother;
    Daughter myDaughter;
    myMother.mySound();
    myDaughter.mySound();
    return 0;
}
