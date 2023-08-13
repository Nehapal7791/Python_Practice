#include<iostream>
#include"../inc/linkedlist.h"
linkedlist ::linkedlist(){
    top=NULL;
}
Node ::Node(int n)
{
    this->data=n;
    this->link=NULL;
}

void linkedlist::push(int n){
    Node *temp=new Node(n);
    temp->data=n;
    temp->link=top; 
    top=temp;
}
bool linkedlist:: isEmpty(){
    return top==NULL;
}
void linkedlist::pop(){
    if(top==NULL)
    return;
    else{
        Node *temp=top;
        top=top->link;
        delete(temp);
    }
}
void linkedlist::display(){
    Node*temp=top;
    while(temp!=NULL)
    {
       std::cout<<temp->data;
       temp=temp->link;
       if(temp!=NULL){
        std::cout<<"->";
       }
    }
}
