#include<iostream>
#include"A_person.cpp"
using namespace std;

int main(){
    person person1;
    cout<<"size: "<<sizeof(person1)<<endl;
    //to acess properties we use dot operator.
    //static allocation
    person1.setHealth(80);
    person1.setLevel('8');
    cout<<"level  is "<<person1.level<<endl;
    cout<< "Health is"<< person1.getHealth()<<endl;
    
    //Dynamic allocation
    person *p=new person;
    p->setLevel('A');
    p->setHealth(2);
    cout<<"level  is "<<(*p).level<<endl;
    cout<< "Health is"<<(*p).getHealth()<<endl;
    

    cout<<person1.level;
    cout<<person1.getHealth();
    person1.setLevel(89);
    person1.setHealth(90);
    


    person1.print();



    
}