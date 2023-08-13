#ifndef MATRIX_H
#define MATRIX_H
#include <stdexcept>
#include"../inc/iMatrix.h"
class Matrix: public iMatrix
{
private:
    int rows;
    int columns;
    int **matrix;

public:
    Matrix(int row, int column);
    Matrix operator+( Matrix &tempobj);
    Matrix operator*( Matrix &tempobj);
    int getRows();
    int getColumns();
    void setElement(int row, int column, int value);
    void display();
    int getElement(int row, int column);
    ~Matrix();
};
#endif
