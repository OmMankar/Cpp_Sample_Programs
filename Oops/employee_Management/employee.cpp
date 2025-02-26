#include "./developer.hpp"
#include "./manager.hpp"
#include<iostream>

Employee *EmployeFactory(char **argv) {
  Employee *ptr = nullptr;
  char designation=argv[1][0];

  switch (designation) {
  case 'd':
    ptr=new Developer(argv[2],argv[3],argv[4]);
    break;
  case 'm':
    ptr=new Manager(argv[2],argv[3],argv[4]);
    break;
  default:
    break;
  }

  return ptr;
}
