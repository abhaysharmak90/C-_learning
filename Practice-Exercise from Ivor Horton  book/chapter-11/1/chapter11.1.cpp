#include <iostream>
#include <string>
#include <memory>
// #include <vector>

#include "words.h"

int main()
{
    std::shared_ptr<std::string> full_string{std::make_shared<std::string>("")};
    /*std::shared_ptr<std::vector<std::string>>*/
    auto sep_words{std::make_shared<std::vector<std::string>>()};
    // (*words).push_back("abhay sharma");
    // std::cout << ((*words).at(0));
    // (*words).push_back("askknight90");
    // std::cout << ((*words).at(1));

    words::enter_string(full_string);
    words::show_string(full_string);
    words::create_vector(full_string, sep_words);
    // std::cout << sep_words->size() << std::endl;
    words::show_vector(sep_words);
    words::sort_vector(sep_words);
    // std::cout << sep_words->size() << std::endl;
    words::show_vector(sep_words);
}