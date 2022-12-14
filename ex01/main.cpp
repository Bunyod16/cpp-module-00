#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"

int main(void) {
    std::string        input;
    PhoneBook   phonebook;

    input = "";
    while (std::strcmp(input.c_str(), "EXIT")) {
        std::cout << "COMMAND: ";
        std::getline(std::cin, input);

        if (!std::strcmp(input.c_str(), "ADD")) {
            phonebook.add();
        } else if (!std::strcmp(input.c_str(), "SEARCH")) {
            phonebook.search();
        }
    }
    return 0;
}
