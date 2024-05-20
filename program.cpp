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
