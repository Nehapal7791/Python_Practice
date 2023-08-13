#include <iostream>
#include "matrix.h"

int main() {
    int rows, cols;
    std::cout << "Enter the dimensions of matrix 1: ";
    std::cin >> rows >> cols;
    Matrix matrix1(rows, cols);
    std::cout << "Enter the elements of matrix 1:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int val;
            std::cin >> val;
            matrix1.setElement(i, j, val);
        }
    }
    std::cout << "Enter the dimensions of matrix 2: ";
    std::cin >> rows >> cols;
    Matrix matrix2(rows, cols);
    std::cout << "Enter the elements of matrix 2:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int val;
            std::cin >> val;
            matrix2.setElement(i, j, val);
        }
    }
     try {
        Matrix sum = matrix1 + matrix2;
        std::cout << "The sum of the two matrices is:" << std::endl;
        sum.print();
    }
    catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}