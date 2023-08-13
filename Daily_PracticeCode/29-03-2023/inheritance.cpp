#include<iostream>

class Animal{
    public:
    int age;
    int weight;
    public:
    void bark(){
        std::cout<<"barking"<<std::endl;
    }
};
class Human{
    public :
    std::string color;

    public:
    void speak(){
        std::cout<<"Speaking "<<std::endl;
    }

};
//multiple inheritance
class hybrid: public Human,public Animal{
    

};

int main(){
    // dog d;
    // d.speak();
    //--------multiple-----
    // hybrid obj;
    // obj.speak();
    // obj.bark();
    return 0;
}