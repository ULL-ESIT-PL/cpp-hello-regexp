#include <iostream>
#include <regex>

int main() {
    std::string input = "Hello, world!";
    std::regex pattern("world");

    if (std::regex_search(input, pattern)) {
        std::cout << "Found 'world' in the input string." << std::endl;
    } else {
        std::cout << "Didn't find 'world' in the input string." << std::endl;
    }

    return 0;
}

