#pragma once

#include "Savings_Account.h"

class Trust_Account : public Savings_Account
{
  friend std::ostream &operator<<(std::ostream &, const Trust_Account &);

private:
  short withdraw_ber_year;
  /* data */
public:
  Trust_Account();
  Trust_Account(const std::string name, double balance, double int_rate);

  bool deposit(const double amount);

  ~Trust_Account();
};
