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
        // Use a nested for loop to print '*' characters in the current row
        for (int j = 1; j <= n - i; j++) {
            cout << '*';
        }

        // Move to the next line after printing each row
        cout << endl;
    }

    // End of the program
    return 0;
}
