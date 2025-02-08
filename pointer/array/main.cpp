#include <iostream>
int main(int argc, char **argv) { 
    int number[5];
    int *p;
    p=number;
    *p=10;
    p++;
    *p=20;
    p=&number[2];
    *p=30;
    p=number+3;
    *p=40;
    p=number;
    *(p+4)=50;
    for(auto i:number){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    return 0; 
}