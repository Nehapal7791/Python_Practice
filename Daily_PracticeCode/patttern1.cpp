#include<iostream>
using namespace std;
class PrintPattern{
    public:
    void pattern()
    {
        int n=5;
        for (int row=1;row<=n;row++)
        {
            for(int column=1;column<=2*n-1;column++){
                if(column<=n+1-row || column>=n-1+row){
                cout<<row;
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
};
int main(){
    PrintPattern Obj; //object of class
    Obj.pattern();
    return 0;
    
}