/*1.0.0.1 Hello, World! Zmodyfikuj program z listingu 1 tak żeby wyświetlał two$
lub jakiś inny wybrany tekst.
*/

#include <iostream>
#include <string>

auto main () -> int{
}
auto ask_user_for_integer(std::string const prompt)-> int
{
        if (not prompt.empty()) {
                std::cout << prompt;
        }
        auto value = std::string{};
        std::getline(std::cin, value);
        return std::stoi(value);
}

