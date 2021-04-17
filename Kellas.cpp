#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string Name;
    int Marks1, Marks2;
};

int main() {
    Student myObj1;
    cin >> myObj1.Name;
    cin >> myObj1.Marks1;
   cin >> myObj1.Marks2;
   int total1 = myObj1.Marks1 + myObj1.Marks2;

    Student myObj2;
    cin >> myObj2.Name;
    cin >> myObj2.Marks1;
    cin >> myObj2.Marks2;
    int total2 = myObj2.Marks1 + myObj2.Marks2;

    cout << myObj1.Name << " " << myObj1.Marks1 << " " << myObj1.Marks2 << "\n" << total1<<"\n";
    cout << myObj2.Name << " " << myObj2.Marks1 << " " << myObj2.Marks2 << "\n" << total2<<"\n";
   
    return 0;
}