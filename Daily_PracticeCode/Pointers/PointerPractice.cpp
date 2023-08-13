
// #include <stdio.h>

// void fun1(int (*p)[3]);
// void fun2(int (*a)[3]);

// int main()
// {
//    int arr[][3] = {10,20,30,40,50,60};
   
//    fun1(arr);

//    return 0;
// }

// void fun1(int (*p)[3]) 
// {
//     ++p;
//     printf("%d ",*(*p+1));
//     fun2(p);
// }

// void fun2(int (*a)[3]) 
// {
//     --a;
//     printf("%d",*(*(a+1)+1));
// }
// ------------------------------------
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4,5,6};
   
//    int *ptr1 = arr,*ptr2 = arr + 4;
   
//    cout << ptr2 - ptr1;

//     return 0;
// }
//--------------------------------

// #include <stdio.h>

// int main()
// {
//     int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
//     int *p;
//     p = (int *)(arr+2);
//     printf("%d", *(p-2));
// }

//--------------
// #include <stdio.h>

// int main()
// {
// char a[3][4][2] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

//     printf("%d\n",*(*(a+2)-3)[2]);
//     printf("%d\n",(*(*(a+2)-3))[2]);
//     printf("%d\n",a[2][-3][2]);
// }
//--------------------------
// #include <iostream>

// using namespace std;

// int main()
// {
    
//     char c[] = "APPLIED AND LEARN";
//     char *p = c;
    
//     cout << p + p[5] - p[10];

//     return 0;
// }
// ----------------------------
// #include <iostream>

// using namespace std;

// int main()
// {

//     int a[3][4][2] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,88,17,18,19,20};
    
//     cout << *(((*(a+2)-3))[2]+1 )<< endl;

//     return 0;
// }
//--------------------
// #include <iostream>

// using namespace std;

// int main()
// {
    
//     char arr[2][3][3] = {'L','E','A','R','N','*','A','N','D','^','C','O','D','E'};
//     char (*p)[2][3][3] = &arr;
//     // cout <<(*(*(*p)[0]));
//     cout<<(*(*(*p)[1]));
//     // cout << (*(*(*p)[0] + 5)) - (*(*(*p)[0] - 3)) << endl;

//     return 0;
// }

// =================================
// #include <iostream>
// using namespace std;
// void fun(int ptr1,int *ptr2,int **ptr3) 
// {
//     ptr1 = 2;
//     *ptr2 = ptr1;
//     **ptr3 = *ptr2;
//     ptr1 = 1;
// }
// int main()
// {
    
//     int a = 3, b = 3, *c = &b;
//     fun(a,&b,&c);
//     cout << a << " " << b << " " <<c;
//     return 0;
// }
// ======================================
// #include <iostream>

// using namespace std;

// char *getMyString() {
//     char str[] = "Ayush";
//     int i = 2;
   
//     cout<<str[i++]++;
//     cout <<*str +i;
//     return str;
// }

// int main()
// {
    // char *p = getMyString();\
    
    // cout << p;
    // return 0;
// }
// ======================================
// #include<iostream>
// using namespace std;
// int main(){
//     static int a[]={0,1,2,3,4};
//     int*p[]={a,a+1,a+2,a+3,a+4};
//     printf("%u,%u,%d",p,*p,*(*p));
//     return 0;
// }
//========================================
// #include <stdio.h>

// struct test 
// {
//     int i;
//     struct test *p;
// };

// struct test arr[4] = {7, arr+3, 8, arr+2, 9, arr, 8, arr+1};
// struct test *ap[] = {arr+3, arr+2, arr+1, arr};
// struct test **pp = ap;

// int main() {

//     printf("%d ", ap[++pp[2]->i-6]->i++);
//     printf("%d ", pp[1]++->p++->i);
//     printf("%d ", ap[pp[0]->p->i%2]->i++);
//     printf("%d ", ++arr[2].p->i);

//     return 0;
// }
