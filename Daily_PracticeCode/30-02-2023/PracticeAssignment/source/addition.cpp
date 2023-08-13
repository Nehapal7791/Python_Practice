#include"../inc/addition.h"

 Matrix additionOfMatrix :: operator+ (Matrix& other){
    Matrix result(Matrix :: getRows() ,  Matrix ::getColumns());

        for (int rowIndex = 0; rowIndex < Matrix :: getRows(); rowIndex++)
        {
            for (int columnIndex = 0; columnIndex < Matrix :: getColumns(); columnIndex++)
            {
                result.setMatrix(rowIndex, columnIndex,
                                             Matrix :: getMatrix(rowIndex, columnIndex) +
                                               other.getMatrix(rowIndex, columnIndex));
            }
        }
        return result;
 }

 additionOfMatrix :: additionOfMatrix(int rows, int columns) : Matrix :: Matrix(this->getRows(), this->getColumns()){
    int r=0;
 }
 additionOfMatrix :: additionOfMatrix(){
    int r=0;
 }

