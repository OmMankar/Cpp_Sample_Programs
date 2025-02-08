// //NOTES:

// 0. shared_ptr is asmart pointer which can share the ownership of object (managed object)
// 1. several shared_ptr can point to the same object (managed object).
// 2. It keep a refernce count to maintain how many shared_ptr are pointing to the same object.
//     and once last shared_ptr goes out of scope then the managed object get deleted.
// 3.shared_ptr is threads safe and not thread safe 
//     a. control block is thread transaction_safe
//     b. managed object is not
// 4. There are three ways shared_ptr will destroy managed object.
//     a. Tf the last shared_ptr goes out of scope .
//     b.If you initialise shared_ptr wiht some other shared_ptr.
//     c. If you reset share_ptr.
// 5. Refernce count does'nt work when we use refernce or pointer        

//use_count()



#include<iostream>
#include<memory>

using namespace std;

class Foo{
    int _x;
    public:
    Foo(int x):_x{x}{}
    int getX(){return _x;}
    ~Foo(){cout<<"~Foo"<<endl;}
};


int main(){
    shared_ptr<Foo>sp(new Foo(100));
    cout<<sp->getX()<<endl;
    cout<<sp.use_count()<<endl;
    shared_ptr<Foo>sp1=sp;
    cout<<sp.use_count()<<endl;
    cout<<sp1.use_count()<<endl;
//but we will have ob=nly one destructor  irrespective of the number of counts we have
shared_ptr<Foo>*sp1=&sp; // here the count won't increase 
    cout<<sp.use_count()<<endl;
    return 0;
}