Here's a simple example of a "hello world" program in C++ using regular expressions:

```cpp
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
```

This program searches for the substring "world" within the input string "Hello, world!" using a regular expression pattern. If it finds a match, it prints "Found 'world' in the input string.", otherwise, it prints "Didn't find 'world' in the input string."

To compile this program on macOS, you can use `clang++`, the C++ compiler that comes with Xcode command line tools. Assuming you've saved the code in a file named `hello_regex.cpp`, you can compile it using the following command in the terminal:

```
clang++ -std=c++11 hello_regex.cpp -o hello_regex
```

This command tells `clang++` to use C++11 standard (`-std=c++11`), compiles `hello_regex.cpp` and produces an executable named `hello_regex`. You can then run the program using `./hello_regex` in the terminal. Make sure you have Xcode command line tools installed, which you can install via the Mac App Store or by running `xcode-select --install` in the terminal.