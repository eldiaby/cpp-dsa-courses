#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__

#include <exception>

class IllegalBalanceException : public std::exception
{
public:
    IllegalBalanceException() {}
    virtual const char *what() const noexcept override;
    ~IllegalBalanceException() {}
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
