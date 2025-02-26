#ifndef EMPOYEE_HPP
#define EMPLOYEE_HPP

#include<string>
using namespace std;

class Employee{
    protected:
        string _name;
        string _employeeid;
        string _salary;
    public:
    Employee()=default;
    Employee(string name,string employeeid,string salary):_name{name},_employeeid{employeeid},_salary{salary}{};
    virtual float CalculateBonus()=0;//pure virtual function     

};
Employee *EmployeFactory(char **argv);
#endif
