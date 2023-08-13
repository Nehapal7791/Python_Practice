#include <iostream>
// #include <stdexcept>
#include "matrix.h"

// Constructor to initialize matrix with all elements set to 0
Matrix::Matrix(int r, int c) {
    rows = r;
    cols = c;
    data = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        data[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            data[i][j] = 0;
        }
    }
}

// Copy constructor
Matrix::Matrix(const Matrix& other) {
    rows = other.rows;
    cols = other.cols;
    data = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        data[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            data[i][j] = other.data[i][j];
        }
    }
}

// Destructor
Matrix::~Matrix() {
    for (int i = 0; i < rows; ++i) {
        delete[] data[i];
    }
    delete[] data;
}

// Operator overloading for matrix addition using the + operator
Matrix Matrix::operator+(const Matrix& other) const {
    if (rows != other.rows || cols != other.cols) {
        std::cout<<"Matrix dimensions do not match.";
    }
    Matrix sum(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum.data[i][j] = data[i][j] + other.data[i][j];
        }
    }
    return sum;
}

// Getter functions for rows and columns
int Matrix::getRows() const {
    return rows;
}

int Matrix::getCols() const {
    return cols;
}

void Matrix::setElement(int row, int col, int val) {
    // Check if the indices are valid
    if (row < 0 || row >= rows || col < 0 || col >= cols) {
        std::cout<<"Invalid indices.";
    }
    data[row][col] = val;
}

// Function to display the matrix
void Matrix::print() const {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << data[i][j] <<" ";
        }
        std::cout << std::endl;
    }
}