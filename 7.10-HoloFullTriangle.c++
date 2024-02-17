#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store user input for the number of rows
    int n;

    // Prompt the user to enter the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Use a for loop to iterate through each row
    for (int i = 1; i <= n; i++) {
        // Print leading spaces based on the current row number
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print '*' for the first and last columns in each row
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        // Move to the next line after printing each row
        cout << endl;
    }

    // End of the program
    return 0;
}

