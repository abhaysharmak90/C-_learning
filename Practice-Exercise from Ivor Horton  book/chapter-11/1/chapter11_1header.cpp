#include <iostream>
#include<vectors>

#include "chapter11_1header.h"

void words::enter_string(std::shared_ptr<std::string> str1)
{
    std::cout << "\n Enter a string ended with '*'\n";
    getline(std::cin, *str1, '*');
    std::cout << std::endl;
}

void words::show_string(std::shared_ptr<std::string> str2)
{
    std::cout << "\n"
              << *str2 << std::endl;
}

void words::create_vector(std::shared_ptr<std::string> str3)
{
    const std::vector<std::string> seprators{};
}