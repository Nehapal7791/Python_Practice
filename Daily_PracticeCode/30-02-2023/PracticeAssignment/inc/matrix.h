#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
using namespace std;
class Matrix{
    int rows;
    int columns;
    int **matrix;

    public:
    Matrix(int rows, int columns);
    void inputMatrixValues();
    void getMatrixValues();
    void setMatrix(int row, int column, int value);
    int getMatrix(int row, int column);
    int getRows();
    int getColumns();
    int** getMatrix();
    Matrix();
    void errorHandling(int &number);
};
#endif