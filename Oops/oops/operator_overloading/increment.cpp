#include <iostream>
using namespace std;
class obj {

public:
  int x;
  obj() : x(0) {}
  obj(int x) : x(x) {}
  
  // pre increment
  obj operator++() {
    x++;
    return *this;
  }

  // post increment
  obj operator++(int) {
    obj temp = *this; // Store original value
    x++;              // Increment the current object
    return temp;      // Return old value
  }
};
int main() {
  obj a(15);
  cout<<(++a).x<<endl;
  cout<<(a++).x<<endl;
  cout << a.x << endl;
  return 0;
}
