#include<iostream>
using namespace std;
class test{
    public:
    virtual void func(double x){
        cout<<"Hii"<<endl;
    }
};
class test1: public test{
    public:
    void func(double y){
        cout<<"Hello"<<endl;
    }
};
int main(){
    test *p,t1;
    test1 t2;
    p= &t2;
    t2.func(4);
    
    return 0;

}