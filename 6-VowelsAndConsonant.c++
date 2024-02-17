#include <iostream>
using namespace std;

int main() {
    // Declare character variables for vowels and the input alphabet
    char a, e, i, o, u, alphabet;

    // Prompt the user to enter an alphabet
    cout << "Enter an alphabet: ";

    // Read the user's input and store it in the variable 'alphabet'
    cin >> alphabet;

    // Check if the entered alphabet is a vowel (a, e, i, o, or u)
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u') {
        // If the condition is true, print "It is a vowel."
        cout << "It is a vowel.";
    } else {
        // If the condition is false, print "It is not a vowel; It is consonant."
        cout << "It is a Consonant:.";
    }

    // End of the program
    return 0;
}
