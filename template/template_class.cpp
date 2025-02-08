#include<iostream>
#include<cstdlib>
const int size=20;
template <class Atpye, int x> class atype{
    Atpye arr[size];
    public:
        atype(){
            register int i;
            for(i=0;i<size;i++)a[i]=i;
        }
        Atpye & operator[](int i);
};
template <class Atype,int size> Atype &atype<Atype, size>::operator[](int i){
    if(i>size-1||i<0){
        exit();
    }
    return a[i];
}
int main(){
    atype<int,size>obj;

    return 0;
}