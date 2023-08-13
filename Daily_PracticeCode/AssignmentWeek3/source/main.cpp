#include <iostream>
#include "../inc/matrix.h"
#include <limits>
using namespace std;
char input()
{
    cout << "Enter Which operation you want:\nMultiplication: * \nAddition: + " << endl;
    char c;
    while ( true )
    {
        cin >> c;
        if (cin.fail()){
            cout << "Invalid input!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (cin.peek() == '\n')
            {
                cin.ignore();
            }
        }
        else{
            break;
        }
    }
    return c;
}
int main()
{
    if (input() == '+')
    {
        AdditionMatrix *matrixNumber1 = new AdditionMatrix();
        AdditionMatrix *matrixNumber2 = new AdditionMatrix();
        Matrix *resultMatrix=new Matrix(matrixNumber1->rowGetter(), matrixNumber1->colGetter());
        if (matrixNumber1->rowGetter() == matrixNumber2->rowGetter() && matrixNumber1->colGetter() == matrixNumber2->colGetter())
        {
            resultMatrix = *matrixNumber1 + *matrixNumber2;
            cout << "Matrix Addition :" << endl;
            resultMatrix->printMatrix();
        } else {
            cout << "Invalid Matrix";
        }
    }
    else if (input() == '*')
    {
        MultiplicationMatrix *matrixNumber1 = new MultiplicationMatrix();
        MultiplicationMatrix *matrixNumber2 = new MultiplicationMatrix();
        Matrix *result=new Matrix(matrixNumber1->rowGetter(), matrixNumber2->colGetter());
        if (matrixNumber1->colGetter() == matrixNumber2->rowGetter())
        {
            result = *matrixNumber1 * *matrixNumber2;
            cout << "Matrix Multiplication :" << endl;
            result->printMatrix();
        }
    }
}