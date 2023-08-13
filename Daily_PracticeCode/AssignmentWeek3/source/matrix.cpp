#include "../inc/matrix.h"
#include <limits>
Matrix ::Matrix(int rows, int columns)
{
    matrix = new int *[rows];
    this->rows = rows;
    this->columns = columns;
    for (int row = 0; row < rows; row++)
    {
        matrix[row] = new int[columns];
        for (int column = 0; column < columns; column++)
        {
            matrix[row][column] = 0;
        }
    }
}
Matrix ::Matrix()
{
    cout << "Enter Rows And Columns of Matrix : " << endl;
    rows = errorHandling();
    columns = errorHandling();

    cout << "Enter Matrix values : " << endl;
    matrix = new int *[rows];
    for (int row = 0; row < rows; row++)
    {
        matrix[row] = new int[columns];
    }
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            matrix[row][column] = errorHandling();
        }
    }
}
Matrix:: ~Matrix()
{
    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int Matrix ::getMatrix(int row, int column)
{
    return matrix[row][column];
}
void Matrix ::setMatrix(int row, int column, int data)
{
    matrix[row][column] = data;
}
int Matrix ::rowGetter()
{
    return rows;
}

int Matrix ::colGetter()
{
    return columns;
}

int Matrix ::errorHandling()
{
    int number;
    while (true)
    {
        cin >> number;
        if (cin.fail())
        {
            cout << "Invalid input!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (cin.peek() == '\n')
            {
                cin.ignore();
            }
        }
        else
        {
            break;
        }
    }
    return number;
}

void Matrix ::printMatrix()
{
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            cout << this->matrix[row][column] << " ";
        }
        cout << endl;
    }
}

Matrix* AdditionMatrix ::operator+(Matrix &tempobj)
{
    Matrix *result = new Matrix(Matrix ::rows, Matrix ::columns);
    if (rows != tempobj.rowGetter() || columns != tempobj.colGetter()) {
        std::cout<<"Matrix dimensions do not match.";
    }
        for (int row = 0; row < Matrix ::rows; row++)
        {
            for (int column = 0; column < Matrix ::columns; column++)
            {
                int sum = matrix[row][column] + tempobj.getMatrix(row, column);
                result->setMatrix(row, column, sum);
            }
        }
        return result;
}
Matrix* MultiplicationMatrix ::operator*(Matrix &tempobj)
{
    Matrix *result = new Matrix(Matrix ::rows, Matrix ::columns);

    for (int row = 0; row < Matrix ::rows; row++)
    {
        for (int column = 0; column < Matrix ::columns; column++)
        {
            for (int k = 0; k < Matrix ::columns; k++)
            {
                int multiplication = result->getMatrix(row, column) + matrix[row][k] * tempobj.getMatrix(k, column);
                result->setMatrix(row, column, multiplication);
            }
        }
    }
    return result;
}
