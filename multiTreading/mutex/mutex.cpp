#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex mtx;
void fun(int n,int &cnt){
    mtx.lock();
    for(int i=0;i<n;i++){
        cnt++;
        cout<<cnt<<endl;
    }
    mtx.unlock();
}
int main(){
    int cnt=0;
    //used ref as passing refernce 
    // By default, C++ threads copy arguments,
    thread t1(fun,6,ref(cnt));
    thread t2(fun,7,ref(cnt));
    t1.join();
    t2.join();
    return 0;
}