#include<iostream>
using namespace std;
 
 union t{
    int x,y;
 };

int main(){
    union t t1;
    t1.x=10;
    cout<<t1.y<<endl;
    cout<<t1.x<<endl;
    t1.y=3;
    cout<<t1.y<<endl;
    cout<<t1.x<<endl;

}