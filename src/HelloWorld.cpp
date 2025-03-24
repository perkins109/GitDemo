#include <iostream>
#include <string>
#include <thread>
#include <chrono>

void printWithDelay(const std::string& text, int delayMs) {
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
    }
}

int main() {
    // Clear screen (works on Unix-like systems)
    std::cout << "\033[2J\033[1;1H";
    
    // ASCII art banner
    std::cout << "\033[1;36m";  // Cyan color
    std::cout << R"(
    *****************************
    *      WELCOME TO THE       *
    *    AMAZING C++ WORLD!     *
    *****************************
    )" << std::endl;
    
    std::cout << "\033[1;32m";  // Green color
    printWithDelay("Loading", 200);
    printWithDelay("...", 500);
    std::cout << std::endl;
    
    std::cout << "\033[1;35m";  // Magenta color
    printWithDelay("Hello, Wonderful World! 🌎\n", 100);
    
    std::cout << "\033[0m";  // Reset color
    return 0;
}