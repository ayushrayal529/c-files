#include <iostream>
using namespace std;

int main() {
    // Declare three integer variables to store user input
    int num1, num2, num3;

    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    // Read and store the user's input in num1
    cin >> num1;

    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    // Read and store the user's input in num2
    cin >> num2;

    // Prompt the user to enter the third number
    cout << "Enter the third number: ";
    // Read and store the user's input in num3
    cin >> num3;

    // Check which number is the greatest among the three using if-else statements
    if (num1 > num2 && num1 > num3) {
        // If num1 is the greatest, print num1
        cout << num1 << " is the greatest";
    } else if (num2 > num3) {
        // If num2 is the greatest, print num2
        cout << num2 << " is the greatest";
    } else {
        // If num3 is the greatest, print num3
        cout << num3 << " is the greatest";
    }

    // End of the program
    return 0;
}
