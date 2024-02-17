#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store user input for the number of rows
    int n;

    // Prompt the user to enter the number of rows
    cout << "Enter a number: ";
    cin >> n;

    // Use a for loop to iterate through each row
    for (int i = 1; i <= n; i++) {
        // Use a nested for loop to print leading spaces based on the current row number
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Use another nested for loop to print ascending numbers from 1 to 'i'
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Use another nested for loop to print descending numbers from 'i-1' to 1
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        // Move to the next line after printing each row
        cout << endl;
    }

    // End of the program
    return 0;
}
