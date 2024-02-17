#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store user input for the decimal number
    int num;

    // Prompt the user to enter a decimal number
    cout << "Enter your decimal number: ";
    cin >> num;

    // Declare variables to store the binary equivalent and power
    int ans = 0;
    int power = 1;

    // Use a while loop to convert decimal to binary
    while (num > 0) {
        int parityDigit = num % 2;
        ans += parityDigit * power;
        power *= 10;
        num /= 2;
    }

    // Print the binary equivalent
    cout << "Binary equivalent: " << ans << endl;

    // End of the program
    return 0;
}
