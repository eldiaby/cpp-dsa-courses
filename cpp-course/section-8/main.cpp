#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double amount;

    cout << "Enter amount in dollars: ";
    cin >> amount;

    if (amount < 0) {
        cout << "Invalid amount!" << endl;
        return 0;
    }

    int cents = round(amount * 100);

    int dollars = cents / 100;
    cents %= 100;

    int quarters = cents / 25;
    cents %= 25;

    int riyals = cents / 20;
    cents %= 20;

    int dimes = cents / 10;
    cents %= 10;

    int pennies = cents;

    cout << "\nBreakdown:\n";
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Riyals (0.20): " << riyals << endl;
    cout << "Dimes (0.10): " << dimes << endl;
    cout << "Pennies (0.01): " << pennies << endl;


    cout << "This is the solution for section 8 challenge" << endl;

    return 0;
}
