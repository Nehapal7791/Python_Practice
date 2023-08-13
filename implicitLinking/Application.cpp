#include<iostream>
#include "libmylibrary.h"
using namespace std;
bool isValidInput(string input) {
  bool rightInput = false;
  int negativeValue = 0;
  int decimalValue = 0;
  for (int iterator = 0; iterator < input.length(); iterator++) {
    if (input[iterator] == '.') {
      decimalValue = decimalValue + 1;
    }
    else if (input[iterator] == '-' && iterator==0) {
      rightInput=true;
    }
    else if (input[iterator] >= '0' && input[iterator] <= '9') {
      rightInput = true;
    } else {
      rightInput = false;
      cout << "Enter Valid Input\n";
      break;
    }
  }
  if (decimalValue > 1 ) {
    rightInput = false;
  }
  return rightInput;
}

int main() {
  int choice;
  string input1, input2;
  double newInput1, newInput2, result;
  cout << "1.Addition\n2.Subtraction\n3.multiplication\n4.division\n";
  cin >> choice;
  switch (choice) {
  case 1:
    cout << "Enter number 1: ";
    cin >> input1;
    if (isValidInput(input1)) {
      newInput1 = stod(input1);
      cout << "Enter number 2: ";
      cin >> input2;
      if (isValidInput(input2)) {
        newInput2 = stod(input2);
      result = addition(newInput1, newInput2);
      cout << "Result: " << result << endl;
      } 
    } 
    break;
  case 2:
    cout << "Enter number1: ";
    cin >> input1;
    if (isValidInput(input1)) {
      newInput1 = stod(input1);
      cout << "Enter number2: ";
      cin >> input2;
      if (isValidInput(input2)) {
        newInput2 = stod(input2);
        result = subtraction(newInput1, newInput2);
        cout << "Result: " << result << endl;
      }
    }
    
    break;
  case 3:
    cout << "Enter number1: ";
    cin >> input1;
    if (isValidInput(input1)) {
      newInput1 = stod(input1);
      cout << "Enter number2: ";
      cin >> input2;
      if (isValidInput(input2)) {
      newInput2 = stod(input2);
      result = multiplication(newInput1, newInput2);
      cout << "Result: " << result << endl;
      } 
    }
    break;
  case 4:
    cout << "Enter number1: ";
    cin >> input1;
    if (isValidInput(input1)) {
      newInput1 = stod(input1);
      cout << "Enter number2: ";
      cin >> input2;
      if (isValidInput(input2) && input2 != "0") {
        newInput2 = stod(input2);
        result = division(newInput1, newInput2);
        cout << "Result: " << result << endl;
      }else{
        cout << "Please Enter Valid Input divisior cannot be zero" << endl;
      }
    } 
    break;
  default:
    cout << "Enter Valid Input" << endl;
    break;
  }
}