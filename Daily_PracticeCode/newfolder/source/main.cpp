#include<iostream>
#include<gtest/gtest.h>
using namespace std;
#include"../inc/stack.h"
int main(int argc,char **argv){
    testing::InitGoogleTest(&argc,argv);
    Stack s;
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(1);
    s.peek();
    s.display();
    return RUN_ALL_TESTS();


}