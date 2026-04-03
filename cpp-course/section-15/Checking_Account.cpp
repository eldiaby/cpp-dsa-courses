#include "Checking_Account.h"

Checking_Account::Checking_Account(/* args */) : Account{}
{
}

Checking_Account::Checking_Account(const std::string name, const double balance) : Account{name, balance}
{
}

bool Checking_Account::withdrawal(const double amount)
{
  if (this->balance - (amount + this->withdrawal_fee) <= 0)
    return false;

  this->balance -= this->withdrawal_fee;
  return Account::withdraw(amount);
};

Checking_Account::~Checking_Account()
{
}
