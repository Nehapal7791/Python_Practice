#ifndef MATRIXADDITION_H
#define MATRIXADDITION_H
#include"../inc/matrix.h"
class additionOfMatrix : public Matrix{
    public:
    Matrix operator+ (Matrix &other);
    additionOfMatrix(int rows, int columns);
    additionOfMatrix();
};
#endif
