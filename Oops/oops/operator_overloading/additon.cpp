#include <iostream>
using namespace std;
class obj {
private:
  int a;
  int b;

public:
    obj():a(0),b(0){}
    obj(int x,int y):a(x),b(y){}
    
    obj operator+(obj inp){
        inp.a+=a;
        inp.b+=b;
        return inp;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
};
int main() { 
    obj a;
    obj b(2,5);
    a=b+a;
    a.display();

    return 0; }