#include<iostream>
class Point3d{
    int m_x;
    int m_y;
    int m_z;
    public:
    void setValues(int a,int b,int c){
        m_x=a;
        m_y=b;
        m_z=c;
    }
    void print(){
        std::cout<<"<"<<m_x<<", " <<m_y<<", " <<m_z<<">";
    }
};
int main()
{
    Point3d point;
    point.setValues(1, 2, 3);

    point.print();
    std::cout << '\n';

    return 0;
}