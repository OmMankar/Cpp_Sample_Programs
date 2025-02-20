#include<iostream>
#include<bitset>
#include<string>

using namespace std;

int main(){
    // default constructor
    bitset<16>var;
    //parameterised constructor
    bitset<16>con(12);

    //initialised with string
    bitset<16>str("11010111111");

    cout<<"Used Default Constructor : "<<var<<endl;
    cout<<"Used Paramterised constructor : "<<con<<endl;
    cout<<"Initialised with string  : "<<str<<endl;

    return 0;
}
