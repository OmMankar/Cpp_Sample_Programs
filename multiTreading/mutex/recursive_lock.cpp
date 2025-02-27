#include<iostream>
#include<mutex>
#include<thread>

using namespace std;

std::recursive_mutex rmtx;
void recurssion(int i,int& cnt){
    if(i==0){
        return;
    }
    rmtx.lock();
    cnt++;
    cout<<"Thread "<<i<<" locked. "<<cnt<<endl;
    recurssion(i-1, cnt);
    cout<<"Thread "<<i<<" unlocked. "<<endl;

    rmtx.unlock();

}
int main(){
int cnt=0;
thread t1(recurssion,12,ref(cnt));
thread t2(recurssion,12,ref(cnt));
t1.join();
t2.join();

    return 0;
}