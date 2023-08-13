#ifndef LINKEDLIST_H
#define LINKEDLIST_H
class Node{
        public:
        int data;
        Node *link;
        Node(int n);
};
class linkedlist{
        
        Node *top;
        public:
        linkedlist();
        void push(int n);
        void pop();
        void display();
        bool isEmpty();
};
#endif