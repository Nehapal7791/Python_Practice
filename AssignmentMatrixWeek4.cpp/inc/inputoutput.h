#ifndef INPUTOUTPUT_H
#define INPUTOUTPUT_H
#include "../inc/matrix.h"
#include "../inc/iMatrix.h"
class Input
{
public:
    iMatrix &obj;
    void operation();
    int  errorHandling();
    void Multiplication();
    void Addition();
    Input(iMatrix &obj);
    void continueForInput(char choice);
    void readInput(int rows, int columns);
    void userInputRowsAndColumn(int &rows, int &column);
};
#endif