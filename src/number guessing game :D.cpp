#include <iostream>
#include <ctime>

int main() {
    int number;
    int guess;
    int tries;

    std::cout << "*****NUMBER GUESSING GAME*****" << std::endl;
    std::cout << "Enter the number of tries you will have: " << std::endl;
    std::cin >> tries;

    srand(time(nullptr));
    number = rand() % 100 + 1;
    
    while (tries != 0) {
        std::cout << "Enter a guess: " << std::endl;
        std::cin >> guess;
        if (guess > number) {
            std::cout << "Too high" << std::endl;;
            tries -= 1;
            std::cout << "You have " << tries << " tries left" << std::endl;
        }
        else if (guess < number) {
            std::cout << "Too low" << std::endl;
            tries -= 1;
            std::cout << "You have " << tries << " tries left" << std::endl;
        }
        else {
            std::cout << "You got it" << std::endl;
            std::cout << "The number was " << number << std::endl;
            break;
        }
}
std::cout << "**********";
return 0;
}
