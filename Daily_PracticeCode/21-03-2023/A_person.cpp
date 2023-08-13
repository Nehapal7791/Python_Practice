#include<iostream>
using namespace std;
class person{
    private:
    int health;
    public:
    char level;

    void print(){
        cout<<level<<endl;
    }
    //to get the value of private variable we use getter and setter
    int getHealth(){
        return health;
    }
    int getLevel(){
        return health;
    }
    void setHealth(int h){
         health=h;
    }
    void setLevel(int h){
        level=h;
    }






};