#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int{

    int number = std::stoi(argv[1]);

    if (argc == 0) {
        return 1;
        }

    if (number % 15 == 0) {
        std::cout << number << " FizzBuzz\n";
        }
    else {
        if (number % 3 == 0) {
            std::cout << number << " Fizz\n";
            }
        else if (number % 5 == 0) {
            std::cout << number << " Buzz\n";
            }
        }
    return 0;
}