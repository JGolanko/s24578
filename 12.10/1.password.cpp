#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    if (argc == 0) {
        return 1;
    }
        auto const password = std::string{argv[1]};
        auto podane_haslo = std::string{};
        while (password != podane_haslo) {
            std::cout << "password:";
            std::getline(std::cin, podane_haslo);
    } 
    std::cout << "ok!\n";
    return 0;
}