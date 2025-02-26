#ifndef MANAGER_HPP
#define MANAGER_HPP

class Manager:public Employee{
    public:
        Manager(string name,string employee_id,string salary):Employee(name,employee_id,salary){}
        float CalculateBonus()override{
            return 0.3*stoi(_salary);
        }
};

#endif