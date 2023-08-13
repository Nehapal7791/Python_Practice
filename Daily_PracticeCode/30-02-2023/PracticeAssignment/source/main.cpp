#include"../inc/multiplication.h"
#include"../inc/addition.h"
#include<iostream>
#include<limits>
using namespace std;
char input(){
    cout<<"Enter Which operation you want:\nMultiplication: * \nAddition: + "<<endl;
    char c;
    std::cout << "Enter operation: ";
    std::cin.get(c);
    while(std::cin.peek() != '\n') {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Please enter only one character." << std::endl;
    cin.clear();
        cin.ignore();
        std::cout << "Enter operation: ";
        std::cin.get(c);
    }
    while(c != '*' && c != '+') {
        std::cout << "Invalid character entered" << std::endl;
        cin.clear();
        cin.ignore();
        std::cout << "Enter operation: ";
        std::cin.get(c);
    }
    std::cout << "You entered: " << c <<std::endl;
    return c;
}
   
int main(){
    if(input()=='+'){
        additionOfMatrix *m1 = new additionOfMatrix();
        additionOfMatrix *m2 = new additionOfMatrix();
        matrix result(m1->getRows(),m2->getColumns());
        result= *m1 + *m2;
        result.getMatrixValues();

    } 
    if(input()=='*'){
        multiplicationOfMatrix *m1 = new multiplicationOfMatrix();
        multiplicationOfMatrix *m2 = new multiplicationOfMatrix();
        matrix result(m1->getRows(),m2->getColumns());
        result = *m1 * *m2;
        result.getMatrixValues();

    }
}