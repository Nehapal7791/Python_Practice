#ifndef MATRIX_MULTIPLICATION_H
#define MATRIX_MULTIPLICATION_H
#include<iostream>
#include"../inc/matrix.h"
class multiplicationOfMatrix : public Matrix
{
    public:
    Matrix operator*  (Matrix& other);
    multiplicationOfMatrix(int rows, int columns);
    multiplicationOfMatrix();
};

#endif