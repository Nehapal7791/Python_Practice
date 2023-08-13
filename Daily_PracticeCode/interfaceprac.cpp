#include<iostream>
using namespace std;
class Web{
    public:
    virtual string getName()=0;
};
class shortform: public Web{
    public :
    string getName(){
        return "neha";
    }
};
class fullform: public Web{
    public :
    string getName(){
        return "Neha Pal";
    }
};
int main(){
    shortform s1;
    fullform s2;
    Web *ptr;
    ptr=&s1;
    cout<<ptr->getName();
    cout<<endl;
    ptr=&s2;
    cout<<ptr->getName();
    return 0;
}