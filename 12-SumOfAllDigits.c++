#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store user input for the number
    int n;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Declare variables to store the sum and remainder
    int sum = 0;
    int remainder;

    // Use a while loop to calculate the sum of digits
    while (n > 0) {
        // Extract the last digit (remainder) from the number
        remainder = n % 10;

        // Add the extracted digit to the sum
        sum += remainder;

        // Remove the last digit from the number
        n = n / 10;
    }

    // Print the sum of digits
    cout << "Sum of digits: " << sum << endl;

    // End of the program
    return 0;
}
