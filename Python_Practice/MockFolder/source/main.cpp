#include"../inc/classB.h"
#include"../inc/classA.h"
#include<iostream>
int main(){
    IclassA* a = new A();
    B f(a);
    std::cout<<f.functionTwo(4,5);
}