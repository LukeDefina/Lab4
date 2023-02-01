#include <iostream>
#include <string>

int main() {
    std::string color1, color2;
    std::cout << "Enter the first primary color to mix (red, green, or blue): ";
    std::cin >> color1;
    std::cout << "Enter the second primary color to mix (red, green, or blue): ";
    std::cin >> color2;

    if ((color1 == "red" && color2 == "blue") || (color2 == "red" && color1 == "blue")) {
        std::cout << "The secondary color you mixed is magenta." << std::endl;
    } else if ((color1 == "red" && color2 == "green") || (color2 == "red" && color1 == "green")) {
        std::cout << "The secondary color you mixed is yellow." << std::endl;
    } else if ((color1 == "blue" && color2 == "green") || (color2 == "blue" && color1 == "green")) {
        std::cout << "The secondary color you mixed is cyan." << std::endl;
    } else if (color1 == color2) {
        std::cout << "The two colors cannot be the same. Please enter different colors." << std::endl;
    } else {
        std::cout << "Invalid color(s) entered. Please enter either red, green, or blue." << std::endl;
    }

    std::cout << "Bye!" << std::endl;
    return 0;
}
