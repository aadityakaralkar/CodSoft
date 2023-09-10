#include <bits/stdc++.h>
#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); int randomNumber = rand() % 100 + 1;
    int userGuess; int attempts = 0;

    cout << "Number Guessing Game!" << endl;

    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > randomNumber) {
            cout << "Too high! Please try again." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low! Please try again." << endl;
        } else {
            cout << "Congratulations! You finally guessed the number " << randomNumber << " in " << attempts << " attempts!" << endl;
        }
    } 

    return 0;
}
