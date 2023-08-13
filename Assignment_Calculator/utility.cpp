#include<iostream>
#include"../Assignment_Calculator/utility.h"
bool isValidInput(string input){
    bool rightInput=false;
    int decimalValue=0; 
    for(int i=0;i<input.length();i++){
        if(input[i]=='.'){
            decimalValue=decimalValue+1;
        }
        else if(input[i]=='-' && i==0){
            rightInput=true;
        }
        else if(input[i]>='0' && input[i]<='9'){
            rightInput=true;
        }
        else{
            std::cout<<"Enter Valid Input\n";
            return false;
        }
    }
    if(decimalValue >1){
        std::cout<<"Enter Valid Input\n";
        rightInput=false;
    }
    return rightInput;
}
bool isValidInputForInteger(std::string input){
    bool rightInput=false;
    int decimalValue=0; 
    for(int i=0;i<input.length();i++){
        if(input[i]=='.'){
            std::cout<<"Enter Only Integer Value\n";
            return false;
        }
        else if(input[i]=='-' && i==0){
            rightInput=true;
        }
        else if(input[i]>='0' && input[i]<='9'){
            rightInput=true;
        }
        else{
            std::cout<<"Enter Valid Input\n";
            return false;
        }
    }
    if(decimalValue >1){
        rightInput=false;
    }
    return rightInput;
}





