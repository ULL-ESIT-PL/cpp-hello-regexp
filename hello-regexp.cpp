#include <iostream>
#include <regex>

int main() {
    std::string input = "Hello, world of dynamic C++ regexps!";
    std::regex pattern("w.*d");

    if (std::regex_search(input, pattern)) {
        std::cout << "Found 'world' in the input string." << std::endl;
    } else {
        std::cout << "Didn't find 'world' in the input string." << std::endl;
    }

    return 0;
}

