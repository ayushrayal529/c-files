#include<iostream>
using namespace std;

int main() {
    // Declare a variable to store the user's marks
    int marks;

    // Prompt the user to enter their marks
    cout << "Enter your marks: ";
    
    // Read the user's input and store it in the 'marks' variable
    cin >> marks;

    // Check if the marks are greater than 33
    if (marks > 33) {
        // If the condition is true, print "pass!"
        cout << "Pass!";
    } else {
        // If the condition is false, print "fail!"
        cout << "Fail!";
    }

    // End of the program
    return 0;
}
