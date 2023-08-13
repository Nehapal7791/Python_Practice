#include<iostream>
using namespace std;
void daimondPattern(){
   int n=5;
    for (int row=1;row<=n-1;row++)
    {
        for(int column=1;column<=2*n-2;column++){
            if(column>=6-row && column<=4+row){
             cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for (int row=1;row<=n;row++)
    {
        for(int column=1;column<=2*n;column++){
            if(column>=row  && column<=10-row){
             cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main(){
    daimondPattern();
}
