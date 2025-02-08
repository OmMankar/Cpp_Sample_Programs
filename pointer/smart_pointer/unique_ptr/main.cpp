//unique_ptr is a class template.
//unique_ptr is one of the smart pointer provided by c++ to prevent memory leaks.
//unique_ptr wraps a raw pointer in it and de- allocates the raw pointer, because it is overloaded in unique_ptr class
// when eception comes then also it will de-allocate the memory hence no memory leak.
// Not only object we create array of objects of unique _ptr

//OPERATIONS:
//release ,reset ,swap , get , get_deleter

#include<iostream>
#include<memory>
using namespace std;

class Foo{
    int _x;
    public: 
    explicit Foo(int x):_x{x}{
    int getX(){ return _x;}
};
 int main(){
    // p1 get's created on stack as we are not using "*"
    unique_ptr<Foo>p1(new Foo(10));
    unique_ptr<Foo>p6(new Foo(100));
    unique_ptr<Foo>p2=make_unique<Foo>(20);//should use make_unique (there are reasons)

    cout<<p1->getX()<<(*p2).getX()<<endl;

    //p1==p2; // FAIL : This will fail because you can't copy ownership.
    unique_ptr<Foo>p3=std::move(p1);
    
    x    return 0;
}