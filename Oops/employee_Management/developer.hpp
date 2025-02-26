#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP
#include "./employee.hpp"

class Developer : public Employee {
public:
  
  Developer(string name, string employe_id, string salary)
      : Employee(name, employe_id, salary){};
  float CalculateBonus() override { return 0.2 * stoi(_salary); }
};
#endif