#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the number of rows (n) and columns (m)
    int n, m;

    // Prompt the user to enter the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    // Use a nested loop to iterate through each row and column
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            // Check if the sum of row number and column number is even
            if ((i + j) % 2 == 0) {
                cout << "1";
            } else {
                cout << "2";
            }
        }
        
        // Move to the next line after printing each row
        cout << endl;
    }

    // End of the program
    return 0;
}
