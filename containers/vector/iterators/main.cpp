#include<iostream>
#include<vector>
int main(){
    std::vector<int>v={1,2,3,4};
    auto it=v.begin();
    auto zt=v.begin();
    auto first=v.front();
    auto resevers=v.rbegin();
    auto reverseEnd=v.rend();
    for(auto pt=v.cbegin();pt!=v.cbegin();pt++){
        std::cout<<(*pt)<<std::endl;
    }

    return 0;
}