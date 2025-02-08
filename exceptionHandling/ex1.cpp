#include<iostream>
int main(){
    try
    {
        std::cout<<"this will be displayed"<<std::endl;
    throw 5;
    }
    catch(int i){
        std::cout<<"We got he exception"<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}