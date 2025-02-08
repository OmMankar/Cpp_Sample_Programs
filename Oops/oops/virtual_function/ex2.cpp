#include<iostream>
#include<vector>
class Base{
    public:
    virtual void func(){
        std::cout<<"this is base class member function"<<std::endl;
    }
};
class Deriver1: public Base{
    public:
        void func()override{
            std::cout<<"this is a derived1 class member function"<<std::endl;
        }
};
class Deriver2: public Base{
    public:
        void func()override{
            std::cout<<"this is a derived2 class member function"<<std::endl;
        }
};
void f(Base & b){
    b.func();
}
int main(){
    Base a;
    Deriver1 d1;
    Deriver2 d2;
    f(a);
    f(d1);
    f(d2);

    return 0;
}