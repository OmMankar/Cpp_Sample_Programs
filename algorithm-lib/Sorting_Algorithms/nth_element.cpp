#include<iostream>
#include<memory>
#include<vector>
#include<algorithm>
using namespace std;
bool predict(int a,int b){
    return a>b;
}
int main(int argc,char** argv){
    unique_ptr<vector<int>> ptr(new vector<int>());
    for(int i=1;i<argc;i++){
        ptr->push_back((*argv[i])-'0');
    }
    cout<<"Enter the nth positon Where size of dyanamic array is "<<argc-1<<" : "<<endl;
    int n;cin>>n;
    nth_element(ptr->begin(),ptr->begin()+n,ptr->end());
    cout<<"Array after performing nth_element function on it "<<endl;
    for(int i:*(ptr)){
        cout<<i<<" ";
    }
    cout<<endl;
    //using a predict functionn
    nth_element(ptr->begin(),ptr->begin()+n,ptr->end(),predict);
    cout<<"Array after performing nth_element function on it "<<endl;
    for(int i:*(ptr)){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}