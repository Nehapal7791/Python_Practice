#include<iostream>
using namespace std;
void swap(char **x,char **y){
    char  **t;
    t=x;
    x=y;
    y=t;
    cout<<x<<" "<<y<<endl;
}
int main(){
    char *a= "neha";
    char *b= "pal";
    char *t;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    t=a;
    a=b;
    b=t;
    cout<<" "<<a<<" "<<b<<endl;

}