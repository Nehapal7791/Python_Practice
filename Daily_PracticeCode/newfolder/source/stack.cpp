#include<iostream>
#include"../inc/stack.h"
#include<gtest/gtest.h>
using namespace std;

Stack::Stack(){
    size=10;
}
void Stack::push(int number){
    if(top==size){
        std::cout<<"Stack Overflow\n";
    }
    else{
        stack[top]=number;
        top++;
    }
}
int Stack::peek(){
    return stack[top];
}
int Stack::pop(){
    if(top==0){
        std::cout<<"Stack underflow\n";
        return 0;
    }
    else{
        return top;
        top--;
    }
}
void Stack::display(){
    while(top!=-1){
        cout<<peek();
        top--;
    }
}
struct stackTest: public testing::Test{
    Stack s1;
    void setUp(){
        int number[]={1,2,3,4,5,6,7,8,9};
        for(auto &val:number){
            s1.push(val);
        }
    }
    void TearDown(){}
};
TEST_F(stackTest,popTest){
    int lastPoppedValue=9;
    while(lastPoppedValue!=9){
        ASSERT_EQ(s1.pop(),lastPoppedValue--);
    }
}
