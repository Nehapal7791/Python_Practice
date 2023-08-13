
#include <iostream>
using namespace std;
extern "C"{
    double addition(double a,double b);
    double subtraction(double a,double b);
    double multiplication(double a,double b);
    double division(double a,double b);
    bool isValidInput(std::string s);
}
