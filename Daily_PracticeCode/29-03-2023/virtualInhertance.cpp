#include <iostream>
using namespace std;
class Animal {
    public:
        virtual void speak() { cout << "Animal speaks" << endl; }
};

class Mammal : public virtual Animal {
    public:
        virtual void speak() { cout << "Mammal speaks" << endl; }
};

class WingedAnimal : public virtual Animal {
    public:
        virtual void fly() { cout << "WingedAnimal flies" << endl; }
};

class Bat : public Mammal, public WingedAnimal {
    public:
        virtual void speak() { cout << "Bat speaks" << endl; }
};
int main() {
    Bat bat;
    bat.speak();
    bat.fly();
    return 0;
}