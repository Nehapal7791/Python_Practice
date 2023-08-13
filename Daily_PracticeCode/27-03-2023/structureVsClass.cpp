#include <iostream>
struct DateStruct
{
    int year {};
    double month {};
    int day {};
    void print()
    {
        std::cout <<year << '/' << month << '/' << day;
    }
};

int main()
{
    DateStruct today {2001,04,12}; 
    today.day = 16; 
    today.print();
    std::cout<<sizeof(DateStruct);
    return 0;
}