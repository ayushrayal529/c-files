#include<iostream>
using namespace std;

int main() {
    // Use a for loop to iterate from 0 to 50
    for (int i = 0; i <= 50; i++) {
        // Check if 'i' is divisible by 3
        if (i % 3 == 0) {
            // Skip printing when 'i' is divisible by 3
            continue;
        }

        // Print the value of 'i' for each iteration
        cout << i << endl;
    }

    // End of the program
    return 0;
}
