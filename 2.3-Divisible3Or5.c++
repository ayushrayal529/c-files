#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable to store the user's input
    int num;

    // Prompt the user to enter a number
    cout << "Enter your number: ";
    
    // Read and store the user's input in the 'num' variable
    cin >> num;

    // Check if the number is divisible by 3 or 5 using the modulo operator
    if (num % 3 == 0 || num % 5 == 0) {
        // If the condition is true, print that it's divisible by 3 and/or 5
        cout << "It is divisible by 3 and/or 5.";
    } else {
        // If the condition is false, print that it's not divisible by 3 and 5
        cout << "It is not divisible by 3 and 5.";
    }

    // End of the program
    return 0;
}
