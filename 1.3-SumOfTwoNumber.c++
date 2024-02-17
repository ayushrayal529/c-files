#include<iostream>

using namespace std;

int main() {
    // Declare variables to store two numbers and their sum
    int num1, num2, num3;

    // Prompt the user to input the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Prompt the user to input the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum of the two numbers
    num3 = num1 + num2;

    // Display the sum of the two numbers
    cout << "Sum of " << num1 << " and " << num2 << " is: " << num3 << endl;

    // Return 0 to indicate successful program execution
    return 0;
}
