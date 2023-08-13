#include<iostream>
using namespace std;
class complex{
    private:
        int a{},b{};
    public:
        void setData(int x,int y);
        void showData()
        {
            cout<<a<<" "<<b<<endl;
        }
        complex operator -(complex c)
        {
            complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
};
void complex::setData(int x,int y)
{
    a=x;b=y;
}
int main(){
    complex c1,c2,c3,c4;
    c1.setData(3,4);
    c2.setData(9,8);
    // c3.setData(4,8);
    c4=c1-c2;//c1.add(c2);
    // c4=c1-c2-c3;//c3+c1.add(c2)--> c3.add(c1.add(c2));
    c4.showData();
    return 0;
}