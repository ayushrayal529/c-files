#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store user input for the number
    int n;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Declare a variable to store the result
    int result = 0;

    // Use a loop to calculate the result based on odd and even numbers
    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            // Add odd numbers to the result
            result += i;
        } else {
            // Subtract even numbers from the result
            result -= i;
        }
    }

    // Print the result
    cout << "Result: " << result << endl;

    // End of the program
    return 0;
}
