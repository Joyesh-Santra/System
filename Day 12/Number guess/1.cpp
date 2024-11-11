#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    int num;
    int guess;
    int tries = 0;  // Initialize tries to 0

    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate random number between 1 and 100
    num = (rand() % 100) + 1;

    std::cout << "************************ Number Guessing Game *************\n";

    // Do-while loop continues until the user guesses the correct number
    do {
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;

        // Increment tries every time the user makes a guess
        tries++;

        // Check if the guess is too high, too low, or correct
        if (guess > num) {
            std::cout << "Too high\n";
        } else if (guess < num) {
            std::cout << "Too low\n";
        } else {
            std::cout << "Correct!