#include <iostream>
#include <regex>

int main() {
    std::string input = "Hello, world!";
    std::regex pattern("([a-zA-Z]+), ([a-zA-Z]+)!"); // Regular expression with capturing groups

    std::smatch matches;
    if (std::regex_search(input, matches, pattern)) {
        std::cout << "Found a match!" << std::endl;
        std::cout << "Whole match: " << matches[0] << std::endl;
        std::cout << "First captured group: " << matches[1] << std::endl;
        std::cout << "Second captured group: " << matches[2] << std::endl;
    } else {
        std::cout << "No match found." << std::endl;
    }

    return 0;
}
