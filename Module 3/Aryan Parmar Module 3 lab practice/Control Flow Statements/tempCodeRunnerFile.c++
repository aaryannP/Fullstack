// Write a C++ program that asks the user to guess a number between 1 and 100. The
// program should provide hints if the guess is too high or too low. Use loops to allow
// the user multiple attempts.


#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int numberToGuess = rand() % 100 + 1;
    int numberOfTries = 0;
    int guess;

    cout << "Welcome to the number guessing game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        // Validate the input
        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100.\n";
            continue;
        }

        numberOfTries++;

        // Provide hints
        if (guess > numberToGuess) {
            cout << "Your guess is too high. Try again!\n";
        } else if (guess < numberToGuess) {
            cout << "Your guess is too low. Try again!\n";
        } else {
            cout << "Congratulations! You've guessed the number in " << numberOfTries << " tries.\n";
        }
    } while (guess != numberToGuess);

    return 0;
}


