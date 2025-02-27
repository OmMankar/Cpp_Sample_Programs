#include <iostream>
#include <thread>
using namespace std;

// C and C++, a function signature that takes a void* as an argument and returns
// a void* looks like
void f(int x) { cout << "Printed from f with a value " << x << endl; }
void g(int x) { cout << "Printed from g with a value " << x << endl; }
int main() {
  thread first(f, 12);
  thread second(g, 2);
  thread three;
  if (first.joinable()) {
    cout << "Thread id of first : " << first.get_id() << endl;
    first.join();
  }
  if (second.joinable()) {
    cout << "Thread id of first : " << second.get_id() << endl;
    second.join();
  }

  return 0;
}