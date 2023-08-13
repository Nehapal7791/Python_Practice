#include<iostream>
using namespace std;
class unary{
    private:
    int a{};
    public:
    void setData(int a){
        this->a=a;
    }
    void show(){
        cout<<a<<endl;
    }
    unary  operator --(){
        unary temp;
        temp.a=a--;
        return temp;
    }
};
int main(){
    unary u1,u2;
    u1.setData(4);
    u2.setData(5);
    u1.show();
    u1.operator--();
    u2.operator--();
    u1.show();
    u2.show();
    return 0;
}