#ifndef INPUTOUTPUT_H
#define INPUTOUTPUT_H
#include "../inc/matrix.h"
#include <iostream>
class Input
{
public:
    void operation();
    int  errorHandling();
    void Multiplication();
    void Addition();
    void continueForInput(char choice);
    void readInput(Matrix &obj, int rows, int columns);
    void userInputRowsAndColumn(int &rows, int &column);
};
#endif