#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    cout<<" Size"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    print(v);
    v.pop_back();
    print(v);
    return 0;
}