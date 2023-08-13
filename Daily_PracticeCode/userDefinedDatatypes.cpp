#include<iostream>
using namespace std;
//Structure
typedef struct employee
{
    int eId;
    char favchar;
    float Salary;
}ep;

union money{
    float pound;
    char car;
    int rice;

};
int main()
{
    enum week{
        Monday,Tuesday,Wednesday,Thrusday,Friday,Saturday
    };
    cout<<Thrusday<<endl;
    ep neha;
    neha.eId=1;
    neha.favchar='n';
    neha.Salary=40000;
    cout<<neha.eId<<endl;
    cout<<neha.Salary<<endl;

    union money m;
    m.car='a';
    // m.rice=34; so, we can use only one beacause memory is shared
    cout<<m.car<<endl;


    
    
}