#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

// Deferred locking
// Locking and unlocking multiple times

void fun(int n, int &cnt) {
    unique_lock<mutex> lock(mtx);  // Locks the mutex
    for (int i = 0; i < n; i++) {
        cnt++;
        cout << cnt << endl;
    }
}  // Lock is automatically released when `lock` goes out of scope

int main() {
    int cnt = 0;
    thread t1(fun, 6, ref(cnt));
    thread t2(fun, 7, ref(cnt));

    t1.join();
    t2.join();

    return 0;
}
