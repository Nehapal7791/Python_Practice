#include<iostream>
#include"../inc/linkedlist.h"
using namespace std;
int main(){
    linkedlist list;
    list.push(9);
    list.push(8);
    list.push(6);
    list.display();
    list.pop();
    list.display();
    return 0;
}