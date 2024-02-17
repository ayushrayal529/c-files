#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable to store the user's input
    int n;

    // Prompt the user to enter a number
    cout << "Enter a number: ";

    // Read the user's input and store it in the variable 'n'
    cin >> n;

    // Check if the number is odd or even using the modulo operator (%)
    if (n % 2 != 0) {
        // If the remainder is not zero, the number is odd
        cout << "It is an odd number.";
    } else {
        // If the remainder is zero, the number is even
        cout << "It is an even number.";
    }

    // End of the program
    return 0;
}
