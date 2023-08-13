// #include<iostream>
// using namespace std;
// void print(char *c){
//     char *ptr;
//     ptr=c;
//     cout<<ptr;
// // }
// int main(){
//     char c[]="helloNeha";
    // char *ch;
    // ch=c;
    // cout<<ch<<endl;
    // cout<<(c+2)<<endl;
    // cout<<(c-1)<<endl;
    // cout<<ch+5;
    //  char c[] = "APPLIED AND LEARN";
    // char *p = c;
    
    // cout << p + p[5] - p[10];

//     return 0;
// }
// ========
// #include <iostream>

// using namespace std;

// int main()
// {

//     char *str[] = {"SWEAT","SMILE","AND","REPEAT"};
//     char** sptr[] = {str + 3, str + 2, str + 1, str};
//     char*** pp=sptr;
    
//     ++pp;
//     cout << **++pp << " ";
    
//     --pp;
//     cout << **pp << " ";
    
//     --pp;
//     cout << **pp+3 << endl;

//     return 0;
// }

// ===================
// #include<iostream>
// using namespace std;
// int main(){
//     char *t,*Y,*X;
//     cout<<Y<<X<<endl;
//     t = X;
//     X=Y;
//     Y=t;
//     cout<<Y<<X<<endl;
    
// }
// ============
// #include <stdio.h>

// void foo(char**);

// int main()
// {
//     char *str[] = {"Jaipur","Kota","Mumbai","Delhi","Noida","Amritsar"};
//     foo(str);

//     return 0;
// }

// void foo(char **ptr) 
// {
//     char *ptr1;
//     ptr1 = (ptr += sizeof(int))[-2];
//     printf("%s",ptr1);
// }