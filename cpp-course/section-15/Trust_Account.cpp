
#include "Trust_Account.h"

Trust_Account::Trust_Account() : Savings_Account{}, withdraw_ber_year{0}
{
}

Trust_Account::Trust_Account(/* args */ const std::string name, double balance, double int_rate) : Savings_Account{name, balance, int_rate}, withdraw_ber_year{0}
{
}

bool Trust_Account::deposit(const double amount)
{
  const bool is_deposit_done = Savings_Account::deposit(amount);

  if (amount > 5000.00 && is_deposit_done)
    this->balance += 50.0;

  return is_deposit_done;
};

Trust_Account::~Trust_Account()
{
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
  os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate
     << "%, withdrawals: " << account.withdraw_ber_year << "]";
  return os;
};
