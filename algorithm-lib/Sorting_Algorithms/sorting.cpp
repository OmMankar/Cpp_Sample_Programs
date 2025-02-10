#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

void display(const vector<int> v) {
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {

  // heap memory allocation using smart pointers.
  unique_ptr<vector<int>> ptr(new vector<int>{1, 2, 4, 1, 3, 2, 6, 5, 1, 0, 8});

  cout << "Printing the unsorted array : ";
  display((*ptr));

  // sorting the vector in ascending order.
  sort(ptr->begin(), ptr->end());
  cout << "Sorted Array in Ascending order : ";
  display(*ptr);

  // sorting in descending order.
  sort(ptr->rbegin(), ptr->rend());
  cout << "Sorted Array in Descending order : ";
  display(*ptr);

  // sorting in descending order by using a predict function.
  vector<int>vec={6,1,20,4,365,21,1};
  //lambda function has return type auto
  sort(vec.begin(), vec.end(),[](int i,int j){return (i>=j)?true:false;});
  cout << "Sorted Array in Descending order using a predict function : ";
  display(vec);

  return 0;
}