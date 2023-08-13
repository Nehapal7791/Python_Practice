#include<iostream>
using namespace std;
int fun(int x,int *py,int **ppz){
    int y,z;
    **ppz+=1;
    z=**ppz;
    *py+=2;
    y=*py;
    cout<<y<<endl;
    cout<<x<<endl;
    x+=3;
    cout<<x<<endl;
    return x+y+z;
}
int main(){
    int c,*b,**a;
    c=4;
    b=&c;
    a=&b;
    cout<<fun(c,b,a);
}