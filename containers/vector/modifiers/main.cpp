#include <iostream>
#include <vector>
int main() {
  std::vector<int> first;
  std::vector<int> second;
  std::vector<int> third;
  first.assign(5, 7);
  std::cout << "size " << first.size() << " capacity " << first.capacity()
            << std::endl;
  second.assign(first.begin() + 1, first.end() - 1);
  std::cout << "size " << second.size() << " capacity " << second.capacity()
            << std::endl;

  int myints[] = {1776, 7, 4};
  third.assign(myints, myints + 3);
  std::cout << "size " << second.size() << " capacity " << second.capacity()
            << std::endl;
  first.push_back(12);
  first.pop_back();

  //   The vector is extended by inserting new elements before the element at
  //   the specified position
  std::vector<int> v(2, 5);
  for (auto it = v.begin(); it != v.end(); it++) {
    std::cout << (*it) << " ";
  }
  std::cout << std::endl;
  v.insert(v.begin(), 2);
  for (auto it = v.begin(); it != v.end(); it++) {
    std::cout << (*it) << " ";
  }
  std::cout << std::endl;

  std::vector<int> num = {1, 5, 5};
  v.insert(v.begin(), num.begin(), num.end() - 1);
  for (auto it = v.begin(); it != v.end(); it++) {
    std::cout << (*it) << " ";
  }
  std::cout << std::endl;

  v.insert(v.begin() + 2, 4, -1);
  for (auto it = v.begin(); it != v.end(); it++) {
    std::cout << (*it) << " ";
  }
  std::cout << std::endl;

  int myarray[] = {501, 502, 503};
  v.insert(v.begin(), myarray, myarray + 3);
  for (auto it = v.begin(); it != v.end(); it++) {
    std::cout << (*it) << " ";
  }
  std::cout << std::endl;
  // Erase elements
  // Removes from the vector either a single element (position) or a range of
  // elements ([first,last)).
  v.erase(v.begin() + 2);
  for (auto it = v.begin(); it != v.end(); it++) {
    std::cout << (*it) << " ";
  }
  std::cout << std::endl;
  v.erase(v.begin(), v.end() - 4);
  for (auto it = v.begin(); it != v.end(); it++) {
    std::cout << (*it) << " ";
  }
  std::cout << std::endl;

  //   Exchanges the content of the container by the content of x, which is
  //   another vector object of the same type. Sizes may differ.
  std::vector<int> net(5, -9);
  net.swap(v);
  std::cout << "v" << std::endl;
  for (auto it = v.begin(); it != v.end(); it++) {
    std::cout << (*it) << " ";
  }
  std::cout << "net" << std::endl;
  for (auto it = net.begin(); it != net.end(); it++) {
    std::cout << (*it) << " ";
  }
  auto it = v.emplace(v.begin() + 1, 100);
  v.emplace(it, 200);
  std::cout << std::endl;
  
  for (auto it = v.begin(); it != v.end(); it++) {
    std::cout << (*it) << " ";
  }
  std::cout << std::endl;
  // Inserts a new element at the end of the vector, right after its current last element.
  //  This new element is constructed in place using args as the arguments for its constructor.
  v.emplace_back (100);
  v.emplace_back (200);
  std::cout<<"Using back emplace "<<std::endl;
   std::cout << std::endl;
  
  for (auto it = v.begin(); it != v.end(); it++) {
    std::cout << (*it) << " ";
  }
  std::cout << std::endl;
  // If a reallocation happens, the storage is allocated using the container's
  //  allocator, which may throw exceptions on failure
  
  return 0;
}