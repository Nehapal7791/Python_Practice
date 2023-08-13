#include<iostream>
using namespace std;
int main(){
    // int n=9; 
    // int *arr=new int[n];
    // for(int i=0;i<n;i++){
    //     cout<<*arr<<endl;
    // }
    int row;
    cin>>row;
    int col;
    cin>>col;
    int **d=new int*[row];
    for(int i=0;i<row;i++){
        d[i]=new int[col];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>d[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        delete [] d[i];
    }
    delete []d;


}