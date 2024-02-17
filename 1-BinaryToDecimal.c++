#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store user input for the binary number
    int num;

    // Prompt the user to enter a binary number
    cout << "Enter your binary number: ";
    cin >> num;

    // Declare variables to store the decimal equivalent and power
    int ans = 0;
    int power = 1;

    // Use a while loop to convert binary to decimal
    while (num > 0) {
        int lastDigit = num % 10;
        ans += lastDigit * power;
        power *= 2;
        num /= 10;
    }

    // Print the decimal equivalent
    cout << "Decimal equivalent: " << ans << endl;

    // End of the program
    return 0;
}
