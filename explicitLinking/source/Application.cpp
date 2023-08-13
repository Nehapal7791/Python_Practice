#include<iostream>
#include<dlfcn.h>
#include "../explicitLinking/lib_cal.h"
typedef bool (isValid) (std::string s);
typedef double(calculator)(double userInput1,double userInput2);
void *handle=NULL;
calculator* cal;
isValid* valid;
int main(){
        handle = dlopen("./lib_library.so", RTLD_LAZY);
        if (!handle) {
            std::cerr << "dlopen error: " << dlerror() << '\n';
            return 1;
            dlerror();
        }
        valid=(isValid*)(dlsym(handle,"isValidInput"));
        int choice;
        string input1, input2;
        double newInput1, newInput2, result;
        cout << "1.Addition\n2.Subtraction\n3.multiplication\n4.division\n";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter number 1: ";
            cin >> input1;
            if (valid(input1)) {
            newInput1 = stod(input1);
            cout << "Enter number 2: ";
            cin >> input2;
                if (valid(input2)) {
                newInput2 = stod(input2);
                cal=(calculator*)(dlsym(handle,"addition"));
                    if(cal){
                        result = cal(newInput1, newInput2);
                        cout << "Result: " << result << endl;
                    }
                } 
            }
            break;
        case 2:
            cout << "Enter number1: ";
            cin >> input1;
            if (valid(input1)) {
               newInput1 = stod(input1);
                cout << "Enter number2: ";
                cin >> input2;
                if (valid(input2)) {
                newInput2 = stod(input2);
                cal=(calculator*)(dlsym(handle,"subtraction"));
                    if(cal){
                        result = cal(newInput1, newInput2);
                        cout << "Result: " << result << endl;
                    }
                } 
            } 
            break;
        case 3:
            cout << "Enter number1: ";
            cin >> input1;
            if (valid(input1)) {
            newInput1 = stod(input1);
                cout << "Enter number2: ";
                cin >> input2;
                if (valid(input2)) {
                newInput2 = stod(input2);
                cal=(calculator*)(dlsym(handle,"multiplication"));
                    if(cal){
                        result = cal(newInput1, newInput2);
                        cout << "Result: " << result << endl;
                    }
                }
            } 
            break;
        case 4:
            cout << "Enter number1: ";
            cin >> input1;
            if (valid(input1)) {
            newInput1 = stod(input1);
                cout << "Enter number2: ";
                cin >> input2;
                if (valid(input2) && input2 != "0") {
                newInput2 = stod(input2);
                cal=(calculator*)(dlsym(handle,"division"));
                    if(cal){
                        result = cal(newInput1, newInput2);
                        cout << "Result: " << result << endl;
                    }
                } 
            }
            break;
        default:
            cout << "Enter Valid Input" << endl;
            break;
                dlclose(handle);
    }
}