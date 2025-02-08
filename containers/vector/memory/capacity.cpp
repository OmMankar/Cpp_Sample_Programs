#include <iostream>
#include <vector>
int main() {
  std::vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  std::cout << "size of vector " << v.size() << std::endl;         // size()
  std::cout << "capcity of vector " << v.capacity() << std::endl;  // capacity
  std::cout << "max_size of vector " << v.max_size() << std::endl; // max_size
  v.resize(19);
  std::cout << std::endl;
  std::cout << "size of vector " << v.size() << std::endl;
  std::cout << "capcity of vector " << v.capacity() << std::endl;
  std::cout << "max_size of vector " << v.max_size() << std::endl;
  v.push_back(3);
  std::cout << std::endl;
  std::cout << "size of vector " << v.size() << std::endl;
  std::cout << "capcity of vector " << v.capacity() << std::endl;
  std::cout << "max_size of vector " << v.max_size() << std::endl;
  std::cout << std::endl;

  v.shrink_to_fit(); // max_size()
  std::cout << "shrink_fit_to" << std::endl;
  std::cout << "size of vector " << v.size() << std::endl;
  std::cout << "capcity of vector " << v.capacity() << std::endl;
  std::cout << "max_size of vector " << v.max_size() << std::endl;

  v.clear();

  std::cout << std::endl;
  std::cout << "size of vector " << v.size() << std::endl;
  std::cout << "capcity of vector " << v.capacity() << std::endl;
  std::cout << "max_size of vector " << v.max_size() << std::endl;
  std::cout << std::endl;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  v.reserve(2); //Requests that the vector capacity be at least enough to contain n elements

  std::cout << std::endl;
  std::cout << "size of vector " << v.size() << std::endl;
  std::cout << "capcity of vector " << v.capacity() << std::endl;
  std::cout << "max_size of vector " << v.max_size() << std::endl;
  std::cout << std::endl;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  std::cout << std::endl;
  std::cout << "size of vector " << v.size() << std::endl;
  std::cout << "capcity of vector " << v.capacity() << std::endl;
  std::cout << "max_size of vector " << v.max_size() << std::endl;
  std::cout << std::endl;

  // Note : Does'nt works for case v(4,2) when we create use parameterised
  // constructor,or when we use initialiser list
  return 0;
}
