#include <iostream>
#include <thread>

using namespace std;

void fun(int x) {

  thread fun_thread([]() { cout << "thread inside the function." << endl; });
  fun_thread.join();
  if (fun_thread.joinable()) {
    cout << "Thread was joinable" << endl;
  }
}
int main() {

  thread th1[5]; // default-constructed threads

  cout << "Spawning 5 threads...\n";
  for (int i = 0; i < 5; ++i)
    th1[i] = thread(fun, i + 1); // move-assign threads

  cout << "Done spawning threads. Now waiting for them to join:\n";

  // After detaching, the thread continues execution without blocking the main
  // thread, and the std::thread object no longer manages it.
  th1[0].detach();

  for (int i = 0; i < 5; ++i)
    if (th1[i].joinable()) {
      th1[i].join();
    }
    
  cout << "All threads joined!\n";

  return 0;
}