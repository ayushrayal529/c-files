#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store user input for the number
    int n;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Declare variables to store the reversed number and remainder
    int reversedNumber = 0;
    int remainder;

    // Use a while loop to reverse the digits
    while (n > 0) {
        // Extract the last digit (remainder) from the number
        remainder = n % 10;

        // Build the reversed number by appending the extracted digit
        reversedNumber = reversedNumber * 10 + remainder;

        // Remove the last digit from the number
        n = n / 10;
    }

    // Print the reversed number
    cout << "Reversed number: " << reversedNumber << endl;

    // End of the program
    return 0;
}
