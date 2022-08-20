#ifndef chapter11_1
#define chapter11_1

#include <memory>

namespace words
{
    void enter_string(std::shared_ptr<std::string> str1);

    void show_string(std::shared_ptr<std::string> str2);

    void create_vector(std::shared_ptr<std::string> str3);
}

#endif