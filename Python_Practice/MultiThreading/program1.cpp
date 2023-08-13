#include<iostream>
#include<thread>
// #include<pthread.h>
using namespace std;
using namespace std::chrono;
void findEvenNumberSum(int number){
    int sum=0;
    for(int i=1;i<=number;i++){
        if((i&1)==0){
            sum=sum+i;
        }
    }
    cout<<"Sum of Odd numbers : "<<sum<<" "<<endl;
}
void findOddNumberSum(int number){
    int sumOdd=0;
    for(int i=1;i<=number;i++){
        if((i&1)==1){
            sumOdd=sumOdd+i;
        }
    }
    cout<<"Sum of Odd numbers : "<<sumOdd<<" "<<endl;
}
int main(){
    auto startTime=high_resolution_clock::now();

    thread evenThread(findEvenNumberSum,5);
    thread OddThread(findOddNumberSum,5);

    evenThread.join();
    OddThread.join();
    
    auto stopTime=high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(stopTime-startTime);

    cout<<"Sec : "<< duration.count()/1000000<<endl;

}

//commands to run -> g++ -std=c++11 program_name.cpp -o program_name -pthread
