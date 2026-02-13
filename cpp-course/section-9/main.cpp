#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {

    char selection{};
    vector<int> numbers{};

    do {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";

        cin >> selection;

        switch (selection) {

            case 'P':
            case 'p':
                if (numbers.empty()) {
                    cout << "[] - The list is empty" << endl;
                } else {
                    cout << "[ ";
                    for (auto num : numbers)
                        cout << num << " ";
                    cout << "]" << endl;
                }
                break;

            case 'A':
            case 'a': {
                cout << "Enter a number: ";
                int number;
                cin >> number;
                numbers.push_back(number);
                cout << number << " added" << endl;
                break;
            }

            case 'M':
            case 'm':
                if (numbers.empty()) {
                    cout << "Unable to calculate mean - no data" << endl;
                } else {
                    int sum{0};
                    for (auto num : numbers)
                        sum += num;
                    double mean = static_cast<double>(sum) / numbers.size();
                    cout << "Mean is: " << mean << endl;
                }
                break;

            case 'S':
            case 's':
                if (numbers.empty()) {
                    cout << "Unable to determine smallest - list empty" << endl;
                } else {
                    int smallest = *std::min_element(numbers.begin(), numbers.end());
                    cout << "Smallest number is: " << smallest << endl;
                }
                break;

            case 'L':
            case 'l':
                if (numbers.empty()) {
                    cout << "Unable to determine largest - list empty" << endl;
                } else {
                    int largest = *std::max_element(numbers.begin(), numbers.end());
                    cout << "Largest number is: " << largest << endl;
                }
                break;

            case 'Q':
            case 'q':
                cout << "Goodbye" << endl;
                break;

            default:
                cout << "Unknown selection, try again" << endl;
        }

    } while (selection != 'q' && selection != 'Q');

    return 0;
}
