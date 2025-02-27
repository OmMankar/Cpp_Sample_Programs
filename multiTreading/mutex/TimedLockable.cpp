#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>

using namespace std;
timed_mutex t_mtx;
int num = 0;

// Tries to acquire the lock for a given duration
void task(int i) {
  if (t_mtx.try_lock_for(std::chrono::seconds(2))) {
    num++;
    cout << "Thread "<<i<<" acquired lock\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    t_mtx.unlock();
  } else {
    cout << "Thread "<<i<<" failed to acquire lock\n";
  }
}

// The try_lock_until(time_point) function attempts to lock a timed mutex until
// a specified time point.

void task2(int i){
    auto timeout_time = std::chrono::steady_clock::now() + std::chrono::seconds(3);

    if (t_mtx.try_lock_until(timeout_time)) {
        std::cout << "Thread " <<i<<" acquired lock\n";
        std::this_thread::sleep_for(std::chrono::seconds(4));
        t_mtx.unlock();
    } else {
        std::cout << "Thread "<<i<<" failed to acquire lock (timeout)\n";
    }
}

int main() {
  thread t1(task,1);
  thread t2(task,2);

  t1.join();
  t2.join();
  thread t3(task2,3);
  thread t4(task2,4);

  t3.join();
  t4.join();

  return 0;
}
