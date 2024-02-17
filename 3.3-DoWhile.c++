#include<iostream>
using namespace std;

int main() {
    // Declare an integer variable to store the user's input
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";

    // Read and store the user's input in the 'num' variable
    cin >> num;

    // Initialize the sum to 0
    int sum = 0;

    // Use a do-while loop to calculate the sum of numbers from 1 to the user's input
    int i = 1; // Initialization outside the loop
    do {
        sum += i; // Add the current value of 'i' to the sum
        i++;      // Increment 'i' for the next iteration
    } while (i <= num);

    // Display the sum of numbers from 1 to the user's input
    cout << "Sum of numbers from 1 to " << num << " is: " << sum << endl;

    // End of the program
    return 0;
}
