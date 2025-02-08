#include<iostream>
using namespace std;
template <class X> X multiply(X a,X b){
    
    return a*b;
}
int main(){
    int one=multiply(1,5);
    double two=multiply(1.25,5.0);
    cout<<one<<endl;
    cout<<two<<endl;
    return 0;
}