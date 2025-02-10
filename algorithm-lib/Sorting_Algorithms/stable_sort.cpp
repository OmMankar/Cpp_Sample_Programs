#include<iostream>
#include<vector>
#include<memory>
#include<algorithm>

using namespace std;

//[char,int]
bool predict(pair<char,int> i,pair<char,int> j){
    return (i.first<=j.first);
}

int main(int argc,char **argv){

    //input from command line
    unique_ptr<vector<pair<char,int>>>ptr(new vector<pair<char,int>>());
    //char and its index

    for(int i=1;i<argc;i++){
        ptr->push_back({(*argv[i]),i});
    }
    stable_sort(ptr->begin(),ptr->end(),predict);
    cout<<"Perfoning stable sort on our vector : "<<endl;
    for(auto i: (*ptr)){
        cout<<"char : "<<i.first<<" index : "<<i.second<<endl;
    }

    return 0;
}