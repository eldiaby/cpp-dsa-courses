#include "InsufficientFundsException.h"

const char *InsufficientFundsException::what() const noexcept
{
  return "Withdrawal amount exceeds current balance";
}
