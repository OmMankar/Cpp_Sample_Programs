#include<iostream>
using namespace std;
template<class typ1,class typ2> void name(typ1 a,typ2 b,int c=1){
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main(){
    name('o','c');
    return 0;
}