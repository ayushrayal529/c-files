#include <iostream>
using namespace std;

int main() {
    // Declare variables to store user input for the number of rows and columns
    int n, m;

    // Prompt the user to enter the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Prompt the user to enter the number of columns
    cout << "Enter the number of columns: ";
    cin >> m;

    // Use nested loops to print a hollow rectangle of '*' characters
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            // Check if it's the first or last row, or the first or last column
            if (i == 1 || i == n || j == 1 || j == m) {
                cout << '*';
            } else {
                cout << " "; // Print a space for the inner area
            }
        }
        cout << endl; // Move to the next line after each row
    }

    // End of the program
    return 0;
}
