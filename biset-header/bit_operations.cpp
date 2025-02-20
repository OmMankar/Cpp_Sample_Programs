#include <bitset>
#include <iostream>
#include <string>

using namespace std;
int main() {
  bitset<8> var(string("1000111"));
  // set bits
  cout << var.set() << '\n';     // 1111111
  cout << var.set(2, 0) << '\n'; // 1011111
  cout << var.set(2) << '\n';    // 1111111

  // Order positions are counted from the rightmost bit, which is order position
  // 0.
  cout << var.reset(1) << '\n'; // 1111101
  cout << var.reset() << '\n';  // 0000000

  // Flip the bits
  // Order position of the bit whose value is flipped.
  //  Order positions are counted from the rightmost bit, which is order
  //  position 0.
  cout << var.flip(2) << '\n'; // 0000100
  cout << var.flip() << '\n';  // 1111011


  //covert to string 
  cout << var << " as string is: " << var.to_string() << '\n';
 
  //convert to long int
  cout << var << " as a long integer is: " << var.to_ulong() << '\n';
  
   //convert to long long 
   cout << var << " as a long long is: " << var.to_ullong() << '\n';
  

  return 0;
}
