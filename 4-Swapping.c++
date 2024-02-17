#include <iostream>
using namespace std;

int main() {
    // Declare variables to store two numbers
    int a, b;

    // Prompt the user to input the first number
    cout << "Enter the first number: ";
    cin >> a;

    // Prompt the user to input the second number
    cout << "Enter the second number: ";
    cin >> b;

    // Swap the values of a and b without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display the values after the swap
    cout << "Value of a after swap: " << a << endl;
    cout << "Value of b after swap: " << b << endl;

    // Return 0 to indicate successful program execution
    return 0;
}
