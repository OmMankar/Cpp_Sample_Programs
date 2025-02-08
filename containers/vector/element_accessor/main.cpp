#include<iostream>
#include<vector>
int main(){
    std::vector<int>v={1,2,3,4,5,6,7,8};
    std::cout<<v[1]<<std::endl;
    //at provides beter exceptional hnadling
    // std::cout<<v.at(15)<<std::endl;
    std::cout<<v.front()<<std::endl;
    std::cout<<v.back()<<std::endl;
    // Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
    std::vector<int>tmp(v);
    int *p=tmp.data();
    *p=1;
    ++p;
    *p=12;
    for(auto i=tmp.begin();i!=tmp.end();i++){
        std::cout<<(*i)<<std::endl;
    }

    return 0;
}