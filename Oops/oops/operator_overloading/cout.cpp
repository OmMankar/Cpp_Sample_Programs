#include<iostream>
using namespace std;
class obj{
    private:
    int a;
    public:
    obj() : a(0) {}  
    obj(int a) : a(a) {}  
    
    friend ostream& operator<<(std::ostream& out, const obj& p) {
        out << "(" << p.a << ")";
        return out;
    }
};
int main(){
    obj o1;
    cout<<o1;
    obj o2(5);
    cout<<o2;

    return 0;
}