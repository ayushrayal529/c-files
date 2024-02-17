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

    // Use nested loops to print a rectangle of '*' characters
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << '*';
        }
        cout << endl; // Move to the next line after each row
    }

    // End of the program
    return 0;
}
