#include<iostream>
using namespace std;
int main(){
    int a=5,b=6;
    int *arr[]={&a,&b};
    cout<<*arr[1];
}