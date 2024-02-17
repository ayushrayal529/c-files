#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store user input for the number
    int n;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Declare a variable to store the factorial
    int fact = 1;

    // Use a loop to calculate the factorial
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    // Print the factorial
    cout << "Factorial: " << fact << endl;

    // End of the program
    return 0;
}