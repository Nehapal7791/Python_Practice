#include<iostream>
// using namespace std;
namespace n1{
    int x=5;
    void fun()
    {
        std::cout<<"n1 fun"<<std::endl;
    }
}

namespace n2{
    int x=2;
    void fun()
    {
        std::cout<<"n2 fun"<<std::endl;
    }
}
using namespace n2;
int main(){
    std::cout<<n1::x<<std::endl;
    std::cout<<n2::x<<std::endl;
    fun();
}