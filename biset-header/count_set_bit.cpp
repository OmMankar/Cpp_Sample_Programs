#include<iostream>
#include<string>
#include<bitset>

using namespace std;
int main(){
    bitset<8>var(string("10101010"));
    cout<<"Number of set bits : "<<var.count()<<endl;
    cout<<"Number of Zeros : "<<var.size()-var.count()<<endl;
    return 0;
}