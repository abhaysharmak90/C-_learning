#include <memory>
#ifndef chapter11_1
#define chapter11_1

namespace words
{
    void enter_string(std::shared_ptr<std::string>);

    void show_string(std::shared_ptr<std::string>);

}
#endif