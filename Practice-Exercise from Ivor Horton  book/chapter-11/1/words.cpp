#include "words.h"

#include <iostream>
// #include <vector>

void words::enter_string(std::shared_ptr<std::string> str1)
{
    std::cout << "Enter a string ended with '*' :\n";
    getline(std::cin, *str1, '*');
    std::cout << std::endl;
}

void words::show_string(std::shared_ptr<std::string> str2)
{
    // std::cout << "\n";
    std::cout << *str2 << std::endl;
}

void words::create_vector(std::shared_ptr<std::string> str3, std::shared_ptr<std::vector<std::string>> sep_words1)
{
    const std::string SEPRATORS{" ,./<>?;'\n\\[]{}-=_+!@#$%^&*()\t"};

    std::string word{""};
    // std::vector<std::string> words;
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
        (*sep_words1).push_back(word);
        start_index = (*str3).find_first_not_of(SEPRATORS, end_index);
        // std::cout << "\n"
        //           << start_index << " " << end_index << " " << word_length << "\n";
        // exit(0);
    }
}

void words::sort_vector(std::shared_ptr<std::vector<std::string>> sep_words3)
{
    for (size_t i = 0; i < sep_words3->size(); i++)
    {
        auto smallest_word = sep_words3->at(i);
        for (size_t j = i + 1; j < sep_words3->size(); j++)
        {

            if (sep_words3->at(j) < smallest_word)
            {
                // std::cout << i << " " << j << " " << smallest_word << " " << sep_words3->at(i) << " " << sep_words3->at(j) << std::endl;
                smallest_word = sep_words3->at(j);
                sep_words3->at(j) = sep_words3->at(i);
                sep_words3->at(i) = smallest_word;
                // std::cout << i << " " << j << " " << smallest_word << " " << sep_words3->at(i) << " " << sep_words3->at(j) << std::endl;
            }
        }
    }
}

void words::show_vector(std::shared_ptr<std::vector<std::string>> sep_words2)
{
    std::cout << "\n";
    size_t CPL{0};
    for (auto ch : (*sep_words2))
    {
        ++CPL;
        std::cout << ch << "\t";
        if (CPL == 4)
        {
            std::cout << "\n"
                      << std::endl;
            CPL = 0;
        }
    }
}

// endoffile