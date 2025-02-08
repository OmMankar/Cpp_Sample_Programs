#include<iostream>
template <class type1,class type2> void name(type1 a, type2 b){
    std::cout<<a<<" "<<b<<std::endl;
}
template <class type1> void name(type1 a){
    std::cout<<a<<std::endl;
}

int main(){
    name("om","mankar");
    name("om");

    return 0;
}