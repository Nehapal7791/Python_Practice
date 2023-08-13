#include<iostream>
using namespace std;

void matrixInput(){
    int rows,columns;
    cout<<"Enter No of Rows";
    cin>>rows;
    cout<<"Enter No of Column";
    cin>>columns;
    int **matrix;
    matrix= new int*[rows];
    for(int row=0;row<columns;row++){
        matrix[row]=new int[columns];   
    }
    //initialization od matrix
    for(int row=0;row<rows;row++){
        for(int col=0;col<columns;col++){
            matrix[row][col]=0;
        }
    }
}
void printMatrix(){
    int rows,columns;
    int **matrix;
    for(int row=0;row<rows;row++){
        for(int col=0;col<columns;col++){
            matrix[row][col]=0;
        }
    }
}
void MatrixMultiplication(){
    int **matrix1,**matrix2;
    int rows1,columns1;
    int rows2,columns2;
    if(columns1==rows2){
        int **resultMatrix[rows1][columns2];
        for(int row=0;row<rows1;row++){
            for(int col=0;col<columns2;col++){
                for(int k=0;k<rows2;k++){
                    resultMatrix[row][col]=resultMatrix[row][col]+()
                }
            }
        }
    }
    else{
        cout<<"Invalid Matrix"<<endl;
    }
}
int main(){

}