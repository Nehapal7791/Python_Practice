#include <iostream>
#include "../inc/matrix.h"
#include "../inc/inputoutput.h"
Matrix::Matrix(int row, int column)
{
    rows = row;
    columns = column;
    matrix = new int *[rows];
    for (int row = 0; row < rows; row++)
    {
        matrix[row] = new int[columns];
        for (int column = 0; column < columns; column++)
        {
            matrix[row][column] = 0;
        }
    }
}
Matrix::~Matrix()
{
    for (int row = 0; row < rows; row++)
    {
        delete[] matrix[row];
    }
    delete[] matrix;
}
Matrix Matrix::operator+( Matrix &tempobj)
{
    Matrix result(rows, columns);
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            result.matrix[row][column] = matrix[row][column] + tempobj.matrix[row][column];
        }
    }
    return result;
}
Matrix Matrix::operator*( Matrix &tempobj)
{
    Matrix result(rows, tempobj.columns);
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < tempobj.columns; column++)
        {
            int product = 0;
            for (int k = 0; k < columns; k++)
            {
                product += matrix[row][k] * tempobj.matrix[k][column];
            }
            result.matrix[row][column] = product;
        }
    }
    return result;
}
int Matrix::getRows()
{
    return rows;
}
int Matrix::getColumns()
{
    return columns;
}
void Matrix::setElement(int row, int column, int value)
{
    matrix[row][column] = value;
}
void Matrix::display()
{
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            std::cout << matrix[row][column] << " ";
        }
        std::cout << std::endl;
    }
}
int Matrix::getElement(int row, int column)
{
    return matrix[row][column];
}


