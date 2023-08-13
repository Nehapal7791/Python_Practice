// #include<iostream>
// #include "../inc/multiplication.h"
// using namespace std;
// MatrixMultiplication MatrixMultiplication:: operator*(const MatrixMultiplication &obj){
//     Matrix result(matrix)
//     if(columns==obj.rows){
//         for(int i=0; i<rows; i++)
//         {  for(int j=0; j<obj.columns; j++)
//             {
//                 tempobj.matrix[i][j]=0;
//                 for(int k=0;k<columns;k++){
//                     tempobj.matrix[i][j]=tempobj.matrix[i][j]+matrix[i][k]*obj.matrix[k][j];
//                 }
//             }
//         }
//     }
//     return tempobj;
// }
// MatrixMultiplication::MatrixMultiplication(){
//     int row,col;
//     this->rows=row;
//     this->columns=col;
// }
// MatrixMultiplication::MatrixMultiplication(int rows,int col){
//     int** matrix = new int*[rows];
//     for (int i = 0; i < rows; i++) {
//         matrix[i] = new int[col];
//     }
//     std::cout << "Enter the matrix elements:\n";
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < col; j++) {
//             std::cin >> matrix[i][j];
//         }
//         std::cout<<std::endl;
//     }
// }
// void MatrixMultiplication::MatrixMultiplicationOutput(int rows,int col){
//     std::cout << "The matrix is:\n";
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < col; j++) {
//             std::cout << matrix[i][j] << " ";
//         }
//         std::cout << "\n";
//     }
// }
// MatrixMultiplication::~MatrixMultiplication(){
//      for(int i=0;i<rows;i++){
//         delete [] matrix[i];
//     }
//     delete []matrix;
// }
#include "../inc/multiplication.h"

Matrix multiplicationOfMatrix ::operator*(Matrix &tempobj)
{
    Matrix result(Matrix ::getRows(), Matrix ::getColumns());
    for (int rowIndex = 0; rowIndex < Matrix ::getRows(); rowIndex++)
    {
        for (int columnIndex = 0; columnIndex < Matrix ::getColumns(); columnIndex++)
        {
            for (int subIndex = 0; subIndex < Matrix ::getColumns(); subIndex++)
            {
                result.setMatrix(rowIndex, columnIndex,
                                             result.getMatrix(rowIndex, columnIndex) +
                                                 (Matrix ::getMatrix(rowIndex, subIndex) *
                                                  tempobj.getMatrix(subIndex, columnIndex)));
            }
        }
    }
    return result;
}
multiplicationOfMatrix ::multiplicationOfMatrix(int rows, int columns) : Matrix ::Matrix(this->getRows(), this->getColumns())
{
    int r = 0;
}
multiplicationOfMatrix ::multiplicationOfMatrix()
{
    int r = 0;
}