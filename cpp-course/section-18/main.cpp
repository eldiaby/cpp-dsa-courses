#include <iostream>
#include <memory>
#include <exception>

#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

int main()
{
    // test your code here
    try
    {
        // Savings_Account ahmed{"Ahmed", 50, 2.5};
        // ahmed.withdraw(500);

        std::unique_ptr<Savings_Account> mohamed{std::make_unique<Savings_Account>("mohamed", 500, 3.2)};
        mohamed->withdraw(600);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Program completed successfully" << std::endl;
    return 0;
}