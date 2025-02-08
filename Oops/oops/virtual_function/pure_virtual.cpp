#include <iostream>
class base {
protected:
  int val;

public:
  void setVal(int i) { val = i; }
  virtual void show() = 0;
};
class hextype : public base {
public:
  void show() override { std::cout << std::hex << val << std::endl; }
};
class octType : public base {
public:
  void show() override { std::cout << std::oct << val << std::endl; }
};
int main() {
  hextype h;
  octType o;
  h.setVal(16);
  h.show();
  o.setVal(16);
  o.show();
  
  

  return 0;
}