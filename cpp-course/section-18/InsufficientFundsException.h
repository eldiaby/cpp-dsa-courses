#ifndef __INSUFFICIENT_FUNDS_BALANCE_EXCEPTION_H__
#define __INSUFFICIENT_FUNDS_BALANCE_EXCEPTION_H__

#include <exception>

class InsufficientFundsException : public std::exception
{
private:
  /* data */
public:
  InsufficientFundsException(/* args */) = default;
  virtual const char *what() const noexcept override;
  ~InsufficientFundsException() = default;
};

#endif