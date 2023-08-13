#include<iostream>
using namespace std;
void increment(int *p){
    *p=*p+1;
}
// void square(int *p){
//     int a=10;
//     p=&a;
//     *p = *p * *p ;
// }
void swap(char *x,char *y){
    char *t;
    t=x;
    x=y;
    y=t;
}
int main(){
    // int *a;
    // int b=10;
    // a=&b;
    // square(a);
    // cout<<*a;

    //----question
    char *a= "neha";
    char *b= "pal";
    char *t;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    t=a;
    a=b;
    b=t;
    cout<<" "<<a<<" "<<b<<endl;

    
    // int a;
    // a=10;
    // increment(&a);
    // cout<<a;
    // int m=10,n,o;
    // int *z;
    // z=&m;
    // cout<<*z<<endl;
    // int &n=n;
    // int &m=m;
    // int &o=o;
    // int &z=z;
//     cout<<&m<<endl;
//     cout<<&n<<endl;
//     cout<<&o<<endl;
//    cout<<&z<<endl;
// int arr[5];
// int *p;
// p=arr;
// cout<<p;
// + ++a;
// cout<<b<<endl;
//-----question
// char str[]="ABCD";
// float arr[5]={12.5,10.0,13.5,90.5,0.5};
// float *ptr1=&arr[0];
// float *ptr2=ptr1+3;
// cout<<*ptr2;
// cout<<ptr2-ptr1;
//-----question



//-----question
// for(int i=0;str[i]!='\0';i++){
    // cout<<str<<endl;
    // cout<<*(i+str);
    // cout<<i[str];
// }


}