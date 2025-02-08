//also known as explicit function overloading
#include<iostream>
template<class x,class y> void name(x a, y b){
    std::cout<<a <<" "<<b<<std::endl;
}
void name(int x,int y){
    std::cout<<"i am from overriden class"<<std::endl;
}
//this means writing specialization function
template<> void name<double> (double x, double y){
    std::cout<<"i am double ."<<std::endl;
}
int main(){
    name("om",'m');
    name(2,5);
    name(2.0,5.1);
    return 0;
}