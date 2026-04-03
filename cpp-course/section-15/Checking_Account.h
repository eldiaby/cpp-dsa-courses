#pragma once

#include "Account.h"

class Checking_Account : public Account
{

private:
  static constexpr float withdrawal_fee{1.50};
  /* data */
public:
  Checking_Account(/* args */);
  Checking_Account(const std::string, const double);

  bool withdrawal(const double amount);

  ~Checking_Account();
};
