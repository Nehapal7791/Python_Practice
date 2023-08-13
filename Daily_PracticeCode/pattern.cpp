#include<iostream>
using namespace std;
void triangle(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void reverse(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<"*";
        }
        // break;
        cout<<endl;
    }
}
void triangle1(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void triangle2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}

int main(){

    triangle1();
// reverse();
    

}
