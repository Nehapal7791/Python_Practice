#include "../inc/matrix.h"
#include <limits>
void Matrix ::inputMatrixValues()
{
    cout << "Enter Rows And Columns of Matrix : " << endl;
    errorHandling(this->rows);
    errorHandling(this->columns);

    cout << "Enter Matrix values : " << endl;
    this->matrix = new int *[this->rows];
    for (int rowIndex = 0; rowIndex < this->rows; rowIndex++)
    {
        matrix[rowIndex] = new int[this->columns];
        for (int columnIndex = 0; columnIndex < this->columns; columnIndex++)
        {
            errorHandling(this->matrix[rowIndex][columnIndex]);
        }
    }
}

void Matrix ::getMatrixValues()
{
    for (int rowIndex = 0; rowIndex < this->rows; rowIndex++)
    {
        for (int columnIndex = 0; columnIndex < this->columns; columnIndex++)
        {
            cout << this->matrix[rowIndex][columnIndex] << " ";
        }
        cout << endl;
    }
}

void Matrix ::setMatrix(int row, int column, int value)
{
    this->matrix[row][column] = value;
}
int Matrix ::getMatrix(int row, int column)
{
    return this->matrix[row][column];
}

Matrix ::Matrix(int rows, int columns)
{
    this->rows = rows;
    this->columns = columns;
    this->matrix = new int *[this->rows];
    for (int row = 0; row < this->rows; row++)
    {
        matrix[row] = new int[this->columns];
        for (int column = 0; column < this->columns; column++)
        {
            this->matrix[row][column] = 0;
        }
    }
}
Matrix ::Matrix()
{
    inputMatrixValues();
}

int Matrix ::getRows()
{
    return this->rows;
}
int Matrix ::getColumns()
{
    return this->columns;
}

int** Matrix::getMatrix()
{
    return this->matrix;
}

void Matrix :: errorHandling(int &number)
{
    
    while(true){
        cin >> number;
   if (cin.fail()) {
            cout << "Invalid input!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            if (cin.peek() == '\n') {
                cin.ignore();
            }
        } else{
            break;
        }
    }
}