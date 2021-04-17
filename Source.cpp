#include <iostream>
using namespace std;

class Rectangle {
private:
    int Panjang;
    int Lebar;

public:
    void setPanjang (int P) {
        Panjang=P;
    }
    int getPanjang() {
        return Panjang;
    }
    void setLebar(int L) {
        Lebar = L;
    }
    int getLebar() {
        return Lebar;
    }
};


int main() {
    Rectangle myObj;
    myObj.setPanjang(50);
    myObj.setLebar(50);
    cout <<"Panjangnya adalah :" << myObj.getPanjang() <<"\n";
    cout << "Lebarnya adalah : "<<myObj.getLebar()<< "\n";
    cout << "Jadi luas : "<< myObj.getPanjang() * myObj.getLebar();
    return 0;
}
