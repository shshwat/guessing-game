#include "splashkit.h"
#include <cstdlib>
#include <ctime>

int generateRandomNumber(int min, int max) {
    static bool seedSet = false;
    if (!seedSet) {
        srand(static_cast<unsigned int>(time(nullptr)));
        seedSet = true;
    }
    return rand() % (max - min + 1) + min;
}
int main()
{
// Generate a random number between 1 and 100
int randomNumber = generateRandomNumber(1, 100);
write_line("Welcome to the Guess the Number game!");
wr ite_line("I have chosen a random number between 1 and 100.");
int guess;
int numAttempts = 0;
do {
write("Enter your guess: ");
read(guess);
numAttempts++;
if (guess < randomNumber) {
write_line("Too low, try again.");
} else if (guess > randomNumber) {
write_line("Too high, try again.");
} else {
write_line("Congratulations! You guessed the number correctly.");
write_line("It took you " + to_string(numAttempts) + " attempts.");
break;
}
} while (true);
return 0;
}
