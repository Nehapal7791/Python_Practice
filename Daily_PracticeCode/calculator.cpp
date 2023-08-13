#include<iostream>
// #include "calculator.h"
using namespace std;
int myaddition(int a,int b){
    return a+b;
}
int mysubtraction(int a,int b){
    if(a>b){
    return a-b;
    }else{
    return b-a;}
}
double mymultiplication(double a,double b){
    return a*b;
}
double mydivision(double a,double b){
    if(a>b){
        return a/b;
    }else{
        return b/a;
    }
}
// int main(){
//     // cout<<myaddition(265,3653)<<endl;
//     // cout<<mysubtraction(66,465)<<endl;
//     // cout<<mymultiplication(266,74)<<endl;
//     cout<<mydivision(45,62)<<endl;
// }