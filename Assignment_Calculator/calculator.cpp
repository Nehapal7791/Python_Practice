#include<iostream>
#include<math.h>
#include"../Assignment_Calculator/utility.h"
void exponentialFunction(){
    int choice;
    string number;
    double result=0,newValue;
    std::cout<<"1.Square\n2.cube\n3.SquareRoot\n4.cubeRoot\n";
    std::cin>>choice;
    switch(choice){
    case 1:{
        std::cout<<"Enter number: ";
        std::cin>>number;
        if(isValidInput(number)){
            newValue=stod(number);
            result=newValue*newValue;
            std::cout<<"Square of "<<newValue<<" = "<<result;
        }
         break;}
    case 2:{
        std::cout<<"Enter number: ";
        std::cin>>number;
        if(isValidInput(number)){
            newValue=stod(number);
            result=newValue*newValue*newValue;
            std::cout<<"cube of "<<number<<" = "<<result<<std::endl;
        }
        break;}
    case 3:{
        std::cout<<"Enter number: ";
        std::cin>>number;
        if(isValidInput(number)){
            newValue=stod(number);
            result=sqrt(newValue);
            std::cout<<"square root of "<<number<<" = "<<result<<std::endl;
        }
        break;}
    case 4:{
        std::cout<<"Enter number: ";
        std::cin>>number;
        if(isValidInput(number)){
            newValue=stod(number);
            result=cbrt(newValue);
            std::cout<<"cube root of "<<number<<" = "<<result<<std::endl;
        }
        break;}
    default:{
        std::cout<<"Enter Valid Input\n";
        break;}
    }
}
void bitManipulation(){
    int choice;
    string number1,number2;
    int result=0,newValue1,newValue2;
    std::cout<<"1.Bitwise OR\n2.Bitwise AND\n3.Bitwise NOT\n4.Bitwise XOR\n";
    std::cin>>choice;
    switch (choice)
    {
    case 1:
        std::cout<<"Enter number 1: ";
        std::cin>>number1;
        if(isValidInputForInteger(number1)){
            newValue1=stod(number1);
            std::cout<<"Enter number 2: ";
            std::cin>>number2;
            if(isValidInputForInteger(number2)){
              newValue2=stod(number2);
              result=newValue1|newValue2;
              std::cout<<"Bitwise OR "<<newValue1<<" and "<<newValue2<<" = "<<result<<std::endl;
            }
        }
        break;
    case 2:
        std::cout<<"Enter number 1: ";
        std::cin>>number1;
        if(isValidInputForInteger(number1)){
            newValue1=stod(number1);
            std::cout<<"Enter number 2: ";
            std::cin>>number2;
            if(isValidInputForInteger(number2)){
              newValue2=stod(number2);
              result=newValue1 & newValue2;
              std::cout<<"Bitwise AND "<<newValue1<<" and "<<newValue2<<" = "<<result<<std::endl;
            }
        }
        break;
    case 3:
        std::cout<<"Enter number: ";
        std::cin>>number1;
        if(isValidInputForInteger(number1)){
            newValue1=stod(number1);
            result=~(newValue1);
            std::cout<<"Bitwise NOT "<<newValue1<<" = "<<result<<std::endl;
        }
        break;

    case 4:
        std::cout<<"Enter number 1: ";
        std::cin>>number1;
        if(isValidInputForInteger(number1)){
            newValue1=stod(number1);
            std::cout<<"Enter number 2: ";
            std::cin>>number2;
            if(isValidInputForInteger(number2)){
              newValue2=stod(number2);
              result=newValue1 ^ newValue2;
              std::cout<<"Bitwise XOR "<<newValue1<<" and "<<newValue2<<" = "<<result<<std::endl;
            }
        }
         break;
    default:
        std::cout<<"Enter Valid Input\n";
        break;
    }
}
void arthmeticOperations(){
    int choice;
    string number1,number2;
    double result=0,newValue1,newValue2;
    std::cout<<"Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    std::cin>>choice;
    switch (choice)
    {
    case 1:
        std::cout<<"Enter number 1: ";
        std::cin>>number1;
        if(isValidInput(number1)){
            
            newValue1=stod(number1);
            std::cout<<"Enter number 2: ";
            std::cin>>number2;
            if(isValidInput(number2)){
              newValue2=stod(number2);
              result=newValue1+newValue2;
              std::cout<<"Addition of "<<newValue1<<" and "<<newValue2<<" = "<<result<<"\n";
            }
        }
        break;
    case 2:
        std::cout<<"Enter number 1: ";
        std::cin>>number1;
        if(isValidInput(number1)){
            newValue1=stod(number1);
            std::cout<<"Enter number 2: ";
            std::cin>>number2;
            if(isValidInput(number2)){
            newValue2=stod(number2);
            result=newValue1-newValue2;
            std::cout<<"Subtraction of "<<newValue1<<" and "<<newValue2<<" = "<<result<<std::endl;
            }
        }
        break;
    case 3:
        std::cout<<"Enter number 1: ";
        std::cin>>number1;
        if(isValidInput(number1)){
            newValue1=stod(number1);
            std::cout<<"Enter number 2: ";
            std::cin>>number2;
            if(isValidInput(number2)){
            newValue2=stod(number2);
            result=newValue1*newValue2;
            std::cout<<"multiplication of "<<newValue1<<" and "<<newValue2<<" = "<<result<<std::endl;
            }
        } 
        break;
    case 4:
        std::cout<<"Enter number 1: ";
        std::cin>>number1;
        if(isValidInput(number1)){
            newValue1=stod(number1);
            std::cout<<"Enter number 2: ";
            std::cin>>number2;
            if(isValidInput(number2)){
                newValue2=stod(number2);
                if(newValue2==0){
                    std::cout<<"Divisor cannot be zero.";
                    std::cout<<"\nEnter divisor once again\n";
                    std::cin>>newValue2;
                }
            result=newValue1/newValue2;
            std::cout<<"Quotient is "<<newValue1<<" and "<<newValue2<<" = "<<result<<std::endl; 
            }
        }
        break;
    default:
        std::cout<<"Enter Valid Input\n";
        break;
    }
}
int main(){
    int selectChoice;
    std::cout<<"Enter choice which operation you want to perform: \n";
    std::cout<<"1.Arithmetic Operation\n";
    std::cout<<"2.Exponential Operation\n";
    std::cout<<"3.Bit Manipulation\n";
    std::cin>>selectChoice;
    switch (selectChoice)
    {
    case 1:arthmeticOperations();
        break;
    case 2: exponentialFunction();
        break;
    case 3: bitManipulation();
        break;
    default:
        std::cout<<"Enter Valid Input\n"<<std::endl;
        break;
    }
}