#include <iostream>

int main() {
    std::cout << "Welcome to Game Tracker, which will track all of the games you have played in real time." << std::endl;
    std::cout "Type 'start' to start the game, 'quit' to quit, or 'help' for help." << std::endl
    return 0;

    while (true) {
        std::string input;
        std::cin >> input;

        if (input == "start") {
            std::cout << "Starting the game..." << std::endl;
        } else if (input == "quit") {
            std::cout << "Goodbye!" << std::endl;
            return 0
        } else if (input == "help") {
            std::cout << "Type 'start' to start the game, 'quit' to quit, or 'help' for help." << std::endl;
        } else {
            std::cout <<"Invalid command. Try again!" << std::endl;
        }
    }

    return 0
}
