#include <bitset>
#include <iostream>
#include <string>
using namespace std;
int main() {
  bitset<8> var(string("1011101"));
  // find if that bit is set or not
  cout << "1 Present at 2nd index : " << var.test(1) << endl;
  cout << "1 Present at 3nd index : " << var.test(2) << endl;

  // find if any bitr is set or not
  if (var.any())
    cout << var << " has " << var.count() << " bits set." << endl;
  else
    cout << var << " has no bits set." << endl;

  // test if no bit is set
  if (var.none())
    cout <<" has no bits set." << endl;
  else
    cout << var << " has " << var.count() << " bits set." << endl;

    //test all bits are set
    if (var.all())
    cout << "All bits set." << endl;
    else
      cout << var << " has some zero bits set." << endl;

  return 0;
}