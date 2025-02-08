#pragma once
#include "./payment.hpp"

class wallet : public Payment {
private:
  std::string _userName;
  std::string _password;

public:

  wallet(std::string userName, std::string password)
      : _userName{userName}, _password{password} {};
  bool Pay() override{
     std::cout << " User name " << _userName <<" Password " <<_password
              <<  '\n';
    std::cout << "generating OTP \n";
    std::cout << "Using OTP 1001 \n";
    transaction_id = "9090";
    std::cout << "Payment Successfu with transaction Id " << transaction_id
              << " \n";
    return true;
  };
  ~wallet() {
    std::cout<<"wallet des\n";

  };
};