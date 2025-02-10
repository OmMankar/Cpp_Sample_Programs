#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;
int main(int argc, char **argv) {

  unique_ptr<vector<string>> ptr(new vector<string>());
  for (int i = 1; i < argc; i++) {
    ptr->push_back(argv[i]);
  }

  cout << "Enter index : ";
  int index;
  cin >> index;
  if (index > ptr->size()) {
    cout << "enter index again : ";
    cin >> index;
  }

  partial_sort(ptr->begin(), ptr->begin() + index, ptr->end());
  cout << "partially sorted array : " << endl;
  for (auto i : (*ptr)) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}