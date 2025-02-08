#pragma once
#include "./payment.hpp"
#include <vector>

class card : public Payment {
private:
  std::string _cardNumber;
  std::string _cvv;
  std::string _expiry;

public:
  card(std::string cardNumber, std::string cvv, std::string expiry)
      : _cardNumber{cardNumber}, _cvv{cvv}, _expiry{expiry} {};
  bool Pay() override {
    std::cout << " using card number " << _cardNumber << " cvv number " << _cvv
              << " expiry " << _expiry << '\n';
    std::cout << "generating OTP \n";
    std::cout << "Using OTP 1234 \n";
    transaction_id = "1235";
    std::cout << "Payment Successfu with transaction Id " << transaction_id
              << " \n";
    return true;
  };
  ~card(){
    std::cout<<"card des\n";
  };
};