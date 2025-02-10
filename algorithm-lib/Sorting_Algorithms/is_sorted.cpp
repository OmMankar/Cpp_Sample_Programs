#include<iostream>
#include<vector>
#include<memory>
#include<algorithm>


using namespace std;

int main(int argc ,char **argv){
    unique_ptr<vector<int>>ptr(new vector<int>());
    for(int i=1;i<argc;i++){
        ptr->push_back((*argv[i])-'0');
    }
    //need to handle the case when more than one digit present in the numbers.
    if(is_sorted(ptr->begin(),ptr->end())){
        cout<<"Array is sorted."<<endl;
    }else{
        cout<<"Array is unsorted."<<endl;
    }


    return 0;
}