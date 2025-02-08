#pragma once
#include <iostream>
#include <string>
#include <vector>

//abstract class
class Payment {
protected:
  std::string transaction_id;

public:
  Payment() = default;
  virtual bool Pay() = 0; //pure virtual function
  std::string GetId() const { return transaction_id; };
  // if we don't set abstract class destructor virtual it will not called derived class destructor
  virtual ~Payment() {
    
    std::cout<<"Payment des\n";

  };
};
Payment *PaymentFactory(char type) ;