#include <iostream>

int main() {

    float chance = 0;
    for (int i = 1; i < 6; i++) {
        chance += float(6-i)/6.0;  // chance on the second roll 
    }
    chance *= 1.0/6.0;      // initial role chance 

    std::cout << chance << std::endl;
    return 0;
}

