#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <limits>
using namespace std;
class Matrix
{
    protected:
        int rows{};
        int columns{};
        int **matrix;

    public:
        Matrix(int rows, int columns);
        Matrix();
        int getMatrix(int row, int column);
        void setMatrix(int row, int column, int data);
        int errorHandling();
        void printMatrix();
        int rowGetter();
        int colGetter();
        ~Matrix();
};
class AdditionMatrix : public Matrix
{
    public:
        Matrix* operator+(Matrix &tempobj);
};
class MultiplicationMatrix : public Matrix
{
    public:
        Matrix* operator*(Matrix &tempobj);
};
#endif