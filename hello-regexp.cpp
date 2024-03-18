#include <iostream>
#include <regex>

int main() {
    std::string input = "Hello, world of dynamic C++ regexps!";
    std::regex pattern("w(.*?)d"); // Regular expression with capturing groups and lazy quantifier
    std::smatch matches;

    if (std::regex_search(input, matches, pattern)) {
        std::cout << "Found 'world' in the input string." << std::endl;
        std::cout << "First captured group: '" << matches[1] << "'" << std::endl;
    } else {
        std::cout << "Didn't find 'world' in the input string." << std::endl;
    }

    return 0;
}

