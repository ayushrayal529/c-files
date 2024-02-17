#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable to store the user's input for the day
    int day;

    // Prompt the user to enter a day (1-7)
    cout << "Enter a day (1-7): ";

    // Read and store the user's input in the 'day' variable
    cin >> day;

    // Use a switch statement to determine the day and print the corresponding message
    switch(day) {
        case 1:
            cout << "Today is Monday." << endl;
            break;
        case 2:
            cout << "Today is Tuesday." << endl;
            break;
        case 3:
            cout << "Today is Wednesday." << endl;
            break;
        case 4:
            cout << "Today is Thursday." << endl;
            break;
        case 5:
            cout << "Today is Friday." << endl;
            break;
        case 6:
            cout << "Today is Saturday." << endl;
            break;
        case 7:
            cout << "Today is Sunday." << endl;
            break;
        default:
            cout << "Please enter a valid day between 1 and 7." << endl;
    }

    // End of the program
    return 0;
}
