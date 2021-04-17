#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void animalName() {
        cout << "The animals name are : \n";
    }
    void animalAge() {
        cout << "The animals age are :\n";
    }
    void animalBody() {
        cout << "The animals body have :\n";
    }
};

// Derived class
class Zebra : public Animal {
public:
    void animalName() {
        cout << "Hello i am a zebra, my name is Bolu \n";
    }
    void animalAge() {
        cout << "I am 13 years old \n";
    }
    void animalBody() {
        cout << "I have a striped body \n";
    }
};

// Derived class
class Dolphin : public Animal {
public:
    void animalName() {
        cout << "Hello i am a dolphin, my name is Marjan \n\n";
    }
    void animalAge() {
        cout << "I am 5 years old \n\n";
    }
    void animalBody() {
        cout << "I have slippery body \n";
    }
};

int main() {
    Animal myAnimal;
    Zebra myZebra;
    Dolphin myDolphin;

    myAnimal.animalName();
    myZebra.animalName();
    myDolphin.animalName();

    myAnimal.animalAge();
    myZebra.animalAge();
    myDolphin.animalAge();

    myAnimal.animalBody();
    myZebra.animalBody();
    myDolphin.animalBody();
    return 0;
}
