#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store user input for the number
    int n;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Declare a variable to store the count of digits
    int digits = 0;

    // Use a while loop to count the digits by repeatedly dividing the number by 10
    while (n > 0) {
        digits++;
        n = n / 10;
    }

    // Print the count of digits
    cout << "Number of digits: " << digits << endl;

    // End of the program
    return 0;
}
