#include <exception>
#include <iostream>
#include "./employee.hpp"

using namespace std;

int main(int argc, char **argv) {
  Employee* ptr=nullptr;
  if (argc == 5) {
    try {
       ptr = EmployeFactory(argv);
      
      cout << "Bonus Offered to the employee is : " << ptr->CalculateBonus()<<endl;
    } catch (const exception exp) {
      cout << exp.what() << endl;
    }
  } else {
    cout << "Enter All The Details ." << endl;
  }
  return 0;
}