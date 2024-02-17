#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable to store the user's input for the year
    int year;

    // Prompt the user to enter a year
    cout << "Enter a year: ";

    // Read the user's input and store it in the variable 'year'
    cin >> year;

    // Check if the year is divisible by 4 to determine if it's a leap year
    if (year % 4 == 0) {
        // If the condition is true, print "It is a leap year."
        cout << "It is a leap year.";
    } else {
        // If the condition is false, print "It is not a leap year."
        cout << "It is not a leap year.";
    }

    // End of the program
    return 0;
}
