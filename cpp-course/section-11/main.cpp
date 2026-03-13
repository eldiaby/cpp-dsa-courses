#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
#include <cctype>

// function prototypes
void show_menu();
void print_numbers(const vector<int>& numbers);
void add_number(vector<int>& numbers);
void display_mean(const vector<int>& numbers);
void display_smallest(const vector<int>& numbers);
void display_largest(const vector<int>& numbers);

void get_user_selection(char  &user_selection ) {
    cin >> user_selection;
     user_selection = std::tolower(user_selection);
}

int main() {

    char selection{};
    vector<int> numbers{};

    do {
        show_menu();
       get_user_selection(selection);


        switch (selection) {

            case 'p':
                print_numbers(numbers);
                break;

            case 'a':
                add_number(numbers);
                break;

            case 'm':
                display_mean(numbers);
                break;

            case 's':
                display_smallest(numbers);
                break;

            case 'l':
                display_largest(numbers);
                break;

            case 'q':
                cout << "Goodbye" << endl;
                break;

            default:
                cout << "Unknown selection, try again" << endl;
        }

    } while (selection != 'q');

    return 0;
}

// ===== function definitions =====

void show_menu() {
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

void print_numbers(const vector<int>& numbers) {
    if (numbers.empty()) {
        cout << "[] - The list is empty" << endl;
        return;
    }

    cout << "[ ";
    for (auto num : numbers)
        cout << num << " ";
    cout << "]" << endl;
}

void add_number(vector<int>& numbers) {
    cout << "Enter a number: ";
    int number{};
    cin >> number;

    numbers.push_back(number);
    cout << number << " added" << endl;
}

void display_mean(const vector<int>& numbers) {
    if (numbers.empty()) {
        cout << "Unable to calculate mean - no data" << endl;
        return;
    }

    int sum{0};
    for (auto num : numbers)
        sum += num;

    double mean = static_cast<double>(sum) / numbers.size();
    cout << "Mean is: " << mean << endl;
}

void display_smallest(const vector<int>& numbers) {
    if (numbers.empty()) {
        cout << "Unable to determine smallest - list empty" << endl;
        return;
    }

    int smallest = *std::min_element(numbers.begin(), numbers.end());
    cout << "Smallest number is: " << smallest << endl;
}

void display_largest(const vector<int>& numbers) {
    if (numbers.empty()) {
        cout << "Unable to determine largest - list empty" << endl;
        return;
    }

    int largest = *std::max_element(numbers.begin(), numbers.end());
    cout << "Largest number is: " << largest << endl;
}