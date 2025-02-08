#include <iostream>
using namespace std;
int add(int x, int y) { return x + y; }
int subtraction(int x, int y) { return y - x; }
int operation(int x, int y, int (*func)(int, int)) { return (*func)(x, y); }
int main() {

  int (*minus)(int, int) = subtraction;

  int m = operation(7, 5, add);
  int n = operation(20, m, minus);
  cout << n<<"\n";
  return 0;
}