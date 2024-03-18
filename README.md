Here's a simple example of a "hello world" program in C++ using regular expressions:

```cpp
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
```

This program searches for the pattern `/w(.*?)d/` within the input string `"Hello, world of dynamic C++ regexps!"` using a regular expression pattern. 

To compile this program on macOS, you can use `clang++`, the C++ compiler that comes with Xcode command line tools. 

```
➜  cplusplus-learning git:(main) make run
clang++ -std=c++11 hello-regexp.cpp -o hello-regxp
./hello-regxp
Found 'world' in the input string.
First captured group: 'orl'
```