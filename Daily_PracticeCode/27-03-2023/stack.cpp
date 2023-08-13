#include<iostream>
using namespace std;
class Stack{
    private:
        int m_arr[11];
        int m_top{};
    public:
        void reset() {
            m_top=0;
        }

        bool push(int a){
            if(m_top==10){
                return false;
            }
            m_arr[m_top++]=a;
            return true;
        }

        int pop()
        {
            if(m_top==0){
                exit(1);
            }
            return m_arr[m_top--];
        }

        void print(){
            int i=0;
            cout<<endl;
            cout<<"( ";
            while(i<m_top){
                cout<<m_arr[i++]<<" ";
            }
            cout<<")"<<endl;
        }
};
int main()
{
	Stack stack;
	stack.print();
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();
	stack.pop();
	stack.print();
	stack.pop();
	stack.pop();
	// stack.print();
}