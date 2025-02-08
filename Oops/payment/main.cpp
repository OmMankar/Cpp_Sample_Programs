#include "payment.hpp"
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << " please specify paymant methode n=net banking, c =card\n";
    return -1;
  }

  Payment *p = nullptr;

  try {
    p = PaymentFactory(argv[1][0]);
    if (p->Pay()) {
      std::cout << "payment successful tr id  " << p->GetId() << "\n";
    } else {
      std::cout << "payment failed with transaction id " << p->GetId() << "\n";
    }
    delete p;

  } catch (const std::exception &ex) {
    std::cout << ex.what()<< " please specify paymant methode n=net banking, c =card\n";
    return -1;
  }

  return 0;
}