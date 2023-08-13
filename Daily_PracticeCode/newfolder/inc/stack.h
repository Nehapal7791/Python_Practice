#ifndef STACK_H
#define STACK_H
class Stack{
    public:

    int stack[20];
    int top{};
    int size=0;
    void push(int n);
    int peek();
    int pop();
    Stack();
    void display();
    
};
#endif