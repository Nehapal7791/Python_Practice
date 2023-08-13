#include<iostream>
#include "../explicitLinking/lib_cal.h"
using namespace std;
bool isValidInput(string input){
    bool rightInput=false;
    int decimalValue=0; 
    for(int i=0;i<input.length();i++){
        if(input[i]=='.'){
            decimalValue=decimalValue+1;
        }
        else if(input[i]=='-' && i==0){
            rightInput=true;
        }
        else if(input[i]>='0' && input[i]<='9'){
            rightInput=true;
        }
        else{
            cout<<"Enter Valid Input\n";
            return false;
        }
    }
    if(decimalValue >1){
        cout<<"Enter Valid Input\n";
        rightInput=false;
    }
    return rightInput;
}
double addition(double a,double b){
    return a+b;
}
double subtraction(double a,double b){
    return a-b;
}
double multiplication(double a,double b){
    return a*b;
}
double division(double a,double b){
    return a/b;
}


