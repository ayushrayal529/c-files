#include<iostream>
using namespace std;

int main() {
    // Declare an integer variable to store the user's input
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";

    // Read and store the user's input in the 'num' variable
    cin >> num;

    // Initialize variables for the loop
    int i = 1;
    int sum = 0;

    // Use a while loop to calculate the sum of numbers from 1 to the user's input
    while (i <= num) {
        sum += i;   // Add the current value of 'i' to the sum
        i++;        // Increment 'i' for the next iteration
    }

    // Display the sum of numbers from 1 to the user's input
    cout << "Sum of numbers from 1 to " << num << " is: " << sum << endl;

    // End of the program
    return 0;
}
