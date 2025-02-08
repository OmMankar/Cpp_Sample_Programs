#include "payment.hpp"
#include "card.hpp"
#include "netBanking.hpp"
#include "wallet.hpp"

Payment *PaymentFactory(char type) {
  switch (type) {
  case 'c':
    return new card("1234-5678-0912", "888", "12/29");
    break;
  case 'n':
    return new netBanking("Om", "testPassword");
    break;
  case 'w':
    return new wallet("Om", "testPassword");
    break;
  default:
    throw std::runtime_error("no matching option");
  }
}