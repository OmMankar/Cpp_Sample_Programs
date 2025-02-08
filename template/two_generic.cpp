#include <exception>
#include <iostream>
#include <string>
template <class x, class y> void name(x a, y b) {
  std::cout << a*b << std::endl;
}
int main(int argc, char **argv) {
  try {
    std::cout<<argc<<std::endl;
    
    name(std::stoi(argv[1]),std::stoi(argv[2]));
  } catch (const std::exception &ex) {
    std::cout << "ERROR" << std::endl;
    std::cout << ex.what() << std::endl;
  }
  return 0;
}