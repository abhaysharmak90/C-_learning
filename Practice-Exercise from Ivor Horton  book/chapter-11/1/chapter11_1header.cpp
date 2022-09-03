#include <iostream>
#include <vector>

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
    const std::string SEPRATORS{" ,./<>?;'\n\\[]{}-=_+!@#$%^&*()\t"};

    std::string word{""};
    std::vector<std::string> words;
    size_t start_index{}, end_index{}, word_length{};

    start_index = (*str3).find_first_not_of(SEPRATORS);
    while (start_index != std::string::npos)
    {
        // std::cout << "\n"
        //           << start_index << " " << end_index << " " << word_length << "\n";
        end_index = (*str3).find_first_of(SEPRATORS, start_index);
        if (end_index == std::string::npos)
        {
            end_index = (*str3).length();
        }
        // std::cout << "\n"
        //           << start_index << " " << end_index << " " << word_length << "\n";
        word_length = end_index - start_index;
        word = (*str3).substr(start_index, word_length);
        // std::cout << std::endl
        //           << word << std::endl;
        words.push_back(word);
        start_index = (*str3).find_first_not_of(SEPRATORS, end_index);
        // std::cout << "\n"
        //           << start_index << " " << end_index << " " << word_length << "\n";
        // exit(0);
    }
    for (auto ch : words)
    {
        std::cout << "\n"
                  << ch << "\n";
    }
}