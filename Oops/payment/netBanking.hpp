#pragma once
#include "./payment.hpp"

class netBanking : public Payment {
private:
  std::string _userName;
  std::string _password;

public:
  netBanking(std::string userName, std::string password)
      : _userName{userName}, _password{password} {};
  bool Pay() override{
     std::cout << " User name " << _userName <<" Password " <<_password
              <<  '\n';
    std::cout << "generating OTP \n";
    std::cout << "Using OTP 4561 \n";
    transaction_id = "5432";
    std::cout << "Payment Successfu with transaction Id " << transaction_id
              << " \n";
    return true;
  };
  ~netBanking() {
    std::cout<<"Net Banking des\n";

  };
};