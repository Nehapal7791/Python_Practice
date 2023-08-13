#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
    private:
        int rows;
        int cols;
        int **data;
    public:
        Matrix(int r, int c); // Constructor to initialize matrix with all elements set to 0
        Matrix(const Matrix& other); // Copy constructor
        ~Matrix(); // Destructor
        Matrix operator+(const Matrix& other) const; 
        int getRows() const;
        int getCols() const; 
        void setElement(int row, int col, int val); 
        void print() const; 
};

#endif