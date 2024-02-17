#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    // Display the menu
    cout << "Simple Calculator Menu\n";
    cout << "------------------------\n";
    cout << "A. Addition\n";
    cout << "S. Subtraction\n";
    cout << "M. Multiplication\n";
    cout << "D. Division\n";
    cout << "Choose an operation (A, S, M, D): ";
    
    // Read the user's choice
    cin >> operation;

    // Check the user's choice and perform the corresponding operation
    switch (operation) {
        case 'A':
        case 'a':
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        
        case 'S':
        case 's':
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        
        case 'M':
        case 'm':
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        
        case 'D':
        case 'd':
            cout << "Enter dividend: ";
            cin >> num1;
            cout << "Enter divisor: ";
            cin >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero\n";
            }
            break;

        default:
            cout << "Error: Invalid choice\n";
    }

    return 0;
}

