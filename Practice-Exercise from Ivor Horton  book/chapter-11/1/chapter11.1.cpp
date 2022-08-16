#include <iostream>
#include <string>
#include <memory>

#include "chapter11_1header.h"

int main()
{
    std::shared_ptr<std::string> full_string{std::make_shared<std::string>("")};
    words::enter_string(full_string);
    words::show_string(full_string);
}