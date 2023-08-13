#include<iostream>
using namespace std;
class IntPair{
    public:
    int m_a,m_b;
    void set(int a,int b){
        m_a=a;
        m_b=b;
    }
    void print(){
        cout<<"Pair("<<m_a<<","<<m_b<<")\n";
    }
};
int main(){
    IntPair p1;
	p1.set(1, 1); 

	IntPair p2 { 2, 2 }; 
	p1.print();
	p2.print();
    return 0;
}
