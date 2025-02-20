#include<iostream>
#include<bitset>
#include<string>

using namespace std;
int main(){
    bitset<4>foo(string("10111"));
    bitset<4>hoo(string("10001"));

    cout << (foo^=hoo) << endl;       // 1010 (XOR,assign)
    cout << (foo&=hoo) << endl;       // 0010 (AND,assign)
    cout << (foo|=hoo) << endl;       // 0011 (OR,assign)
  
    cout << (foo<<=2) << endl;        // 1100 (SHL,assign)
    cout << (foo>>=1) << endl;        // 0110 (SHR,assign)
  
    cout << (~hoo) << endl;           // 1100 (NOT)
    cout << (hoo<<1) << endl;         // 0110 (SHL)
    cout << (hoo>>1) << endl;         // 0001 (SHR)
  
    cout << (foo==hoo) << endl;       // false (0110==0011)
    cout << (foo!=hoo) << endl;       // true  (0110!=0011)
  
    cout << (foo&hoo) << endl;        // 0010
    cout << (foo|hoo) << endl;        // 0111
    cout << (foo^hoo) << endl;  
    return 0;
}