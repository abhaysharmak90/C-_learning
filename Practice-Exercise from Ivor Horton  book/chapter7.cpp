#include <iostream>
#include <string>
#include <vector>
#include <memory>

void studentdata()
{
    int No_of_entries{};
    double average, sum;
    std::vector<std::string> names;
    std::vector<double> grades;

    std::cout << "Enter the number of data entries:\n";
    std::cin >> No_of_entries;

    for (size_t i = 0; i < No_of_entries; i++)
    {
        double grade;
        std::string name;
        std::cout << "Enter the name of the student no: " << i + 1 << "\n";
        std::cin.ignore();
        std::getline(std::cin, name);
        std::cout << name << std::endl;
        if (name.size() == 0)
        {
            std::cout << "Empty name enter a valid name..\n";
            --i;
            continue;
        }
        names.push_back(name);
        std::cout << "Enter the grade of the student:\n";
        std::cin >> grade;
        grades.push_back(grade);
    }

    for (double temp : grades)
    {
        sum += temp;
    }
    average = sum / No_of_entries;

    for (size_t i = 0; i < No_of_entries; i++)
    {
        std::cout << names[i] << "\t" << grades[i] << std::endl;
    }
    std::cout << "The average score of " << No_of_entries
              << (No_of_entries == 1 ? " student is " : " students is ")
              << average << std::endl;
}

void allwordcounter()
{
    std::string paragraph{};
    std::cout << "\nEnter a string ended with '*'\n"
              << std::endl;
    std::cin.ignore();
    std::getline(std::cin, paragraph, '*');

    std::string alphabets{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};

    std::vector<std::string> unqwrd{};
    std::vector<int> wrdcount{};

    int start_index{}, end_index{};
    std::string word;
    while (start_index < paragraph.length())
    {
        start_index = paragraph.find_first_of(alphabets, start_index);
        end_index = paragraph.find_first_not_of(alphabets, start_index);
        word = paragraph.substr(start_index, end_index - start_index);
        start_index += (end_index - start_index);
        for (size_t i = 0; i < unqwrd.size(); i++)
        {
            if (unqwrd[i] == word)
            {
                wrdcount[i] += 1;
                word.clear();
                break;
            }
        }
        if (word.empty())
        {
            continue;
        }
        unqwrd.push_back(word);
        wrdcount.push_back(1);
    }
    std::cout << std::endl;
    for (size_t i = 0, j = 0; i < unqwrd.size(); i++)
    {
        std::cout << unqwrd[i] << "\t" << wrdcount[i] << "\t\t";
        ++j;
        if (j == 3)
        {
            std::cout << "\n\n";
            j = 0;
        }
    }
    std::cout << "\n\n";
}

void wordreplacer()
{
    std::string para;
    std::cout << "\nEnter a string ending with '*'\n\n";
    std::cin.ignore();
    std::getline(std::cin, para, '*');
    para += " ";
    std::cout << "\nEnter the word that needs to be replaced\n\n";
    std::string word;
    std::cin.ignore();
    std::getline(std::cin, word);
    std::string sprtr{" ,./<>?;'\\:\"|[]{}!@#$%^&*()_+~`"};
    for (int strtindx = 0; strtindx < para.length(); strtindx++)
    {
        auto rplcindx = para.find(word, strtindx);
        for (auto j : sprtr)
        {
            if (para[rplcindx - 1] == j || para[0] == word[0])
            {
                for (auto k : sprtr)
                {
                    if (para[rplcindx + word.length()] == k)
                    {
                        para.replace(rplcindx, word.length(), word.length(), '*');
                    }
                }
            }
        }
    }
    std::cout << "\n"
              << para << "\n";
}

void anagramcheck()
{
    std::string word1, word2;
    std::cout << "\nEnter Ist word,end with '*'\n";
    std::cin.ignore();
    std::getline(std::cin, word1, '*');
    std::cout << "\nEnter 2nd word,end with '*'\n";
    std::cin.ignore();
    std::getline(std::cin, word2, '*');
    std::vector<char> letters1, letters2;
    std::vector<int> lettercnt1, lettercnt2;
    std::cout << word1.length() << word1 << " " << word2.length() << word2 << "\n";
    for (int i{}; i < word1.length(); i++)
    {
        bool brk{false};
        for (size_t j = 0; j < letters1.size(); j++)
        {
            if (letters1.size() > 0 && letters1[j] == word1[i])
            {
                lettercnt1[j] += 1;
                brk = true;
                break;
            }
        }
        if (brk)
        {
            continue;
        }
        else
        {
            letters1.push_back(word1[i]);
            lettercnt1.push_back(1);
        }
    }
    for (int i{}; i < word2.length(); i++)
    {
        bool brk{false};
        for (size_t j = 0; j < letters2.size(); j++)
        {
            if (letters2.size() > 0 && letters2[j] == word2[i])
            {
                lettercnt2[j] += 1;
                brk = true;
                break;
            }
        }
        if (brk)
        {
            continue;
        }
        else
        {
            letters2.push_back(word2[i]);
            lettercnt2.push_back(1);
        }
    }
    int truecount{};
    for (size_t i = 0; i < letters1.size(); i++)
    {
        for (size_t j = 0; j < letters2.size(); j++)
        {
            if (letters1[i] == letters2[j])
            {
                if (lettercnt1[i] == lettercnt2[j])
                {
                    truecount++;
                }
                else if (letters1[i] == ' ' && letters2[j] == ' ')
                {
                    truecount++;
                }
            }
        }
    }
    if (truecount == letters1.size())
    {
        std::cout << "\nThe entered words are an anagram of each other\n";
    }
    else
    {
        std::cout << "\nthis isn not an anagram\n";
    }
    // for (size_t i = 0; i < letters1.size(); i++)
    // {
    //     std::cout << letters1[i] << "\t" << lettercnt1[i] << "\n";
    // }
}

void wrdextract()
{
    std::string text;
    std::cout << "\nEnter a text ending with '*'\n";
    std::cin.ignore();
    std::getline(std::cin, text, '*');
    std::string word;
    std::cout << "\nenter the word for search\n";
    std::cin.ignore();
    std::getline(std::cin, word);
    std::string seprators{"<>?,./;':|\"\[]{}!@#$%^&*()_+-= "};
    auto indexs{0};
    auto indexe{std::string::npos};
    for (size_t i = 0; i < text.length(); i++)
    {
        indexs = text.find_first_of(word, indexs);
        indexe = text.find_first_of(seprators, indexs);
        // std::cout << indexs << " " << indexe;
        if (indexs >= 0)
        {
            // std::cout << "\n123";
            for (size_t i = 0; i < seprators.length(); i++)
            {
                std::string printword;
                // std::cout << "\n1234";
                if ((text[indexs - 1] == seprators[i] || indexs == 0) && (indexe != std::string::npos))
                {
                    // std::cout << "\n12345";
                    printword = text.substr(indexs, indexe - indexs);
                    std::cout << printword << "\n";
                    // std::cout << indexe << "\n";
                    indexs = indexe;
                }
                else if (text[indexs - 1] == seprators[i] && indexe == std::string::npos)
                {
                    // std::cout << "\n123456";
                    printword = text.substr(indexs, text.length() - indexs);
                    std::cout << printword << "\n";
                    // std::cout << indexe << "\n";
                    indexs = indexe;
                }
            }
        }
        indexs = indexe;
        // std::cout << indexs << " " << indexe;
    }
}

void strtoint()
{
    std::string numstr;
    std::cout << "\nEnter a string of numbers seprated by ' ' and ended with '#' and a single number should be 10 digits long only\n\n";
    std::cin.ignore();
    std::getline(std::cin, numstr, '#');
    // std::cout << numstr << " " << numstr.length() << "\n";
    std::string seprator{" "};
    std::vector<std::string> numwords;
    std::vector<int> numbers;
    // in num;
    for (size_t i = 0; i < numstr.length();)
    {
        auto indexs = numstr.find_first_not_of(seprator, i);
        auto indexe = numstr.find_first_of(seprator, indexs);
        // std::cout << indexs << "  " << indexe << " " << i << "\n";
        if (indexe == std::string::npos)
        {
            indexe = numstr.length();
            numwords.push_back(numstr.substr(indexs, indexe - indexs));
            break;
        }
        auto numlength = indexe - indexs;
        numwords.push_back(numstr.substr(indexs, numlength));
        i = indexe;
    }
    for (size_t i = 0; i < numwords.size(); i++)
    {
        numbers.push_back(std::stoi(numwords[i]));
    }
    for (size_t i = 0; i < numbers.size(); i++)
    {
        std::cout << "\n"
                  << numbers.at(i) << "\n";
    }
    std::cout << "\n";
}

void tatargram()
{
    std::string tatargram;
    std::cout << "\nEnter a possible tatargram ending with '*'\n";
    std::cin.ignore();
    std::getline(std::cin, tatargram, '*');
    std::string seprators{" <>?,./;':|\\\"{}[]!@#$%^&*()_+-=/*\n"};
    char ch;
    int i{0};
    for (auto h : tatargram)
    {
        std::cout << h << " " << i << "\n";
        i++;
    }
    for (auto ch1 : tatargram)
    {
        if (std::isalpha(ch1))
        {
            ch = ch1;
            break;
        }
    }
    for (size_t i = 0; i < tatargram.length();)
    {
        auto indexs = tatargram.find_first_not_of(seprators, i);
        auto indexe = tatargram.find_first_of(seprators, indexs);
        if (indexe == std::string::npos)
        {
            indexe = tatargram.length();
        }
        else if (indexs == std::string::npos)
            break;
        if (std::tolower(tatargram[indexs]) != std::tolower(ch))
        {
            std::cout << indexs << "\t" << indexe << "\t" << i << "\t" << ch << " " << tatargram[indexs] << " " << static_cast<char>(std::tolower(tatargram[indexs])) << "\n";
            std::cout << "\nthis string is not a tatargram\n";
            exit(0);
        }
        i = indexe;
    }
    std::cout << "\nthis string is a tatargram\n";
}

int main()
{
    std::cout << "\nchose question:\n";
    std::cout << "1.7-1\n";
    std::cout << "2.7-2\n";
    std::cout << "3.7-3\n";
    std::cout << "4.7-4\n";
    std::cout << "5.7-5\n";
    std::cout << "6.7-6\n";
    std::cout << "7.7-7\n";
    std::cout << "8.7-8\n\n";
    int var;
    std::cin >> var;
    switch (var)
    {
    case 1:
        studentdata();
        break;
    case 2:
        allwordcounter();
        break;
    case 3:
        wordreplacer();
        break;
    case 4:
        anagramcheck();
        break;
    case 5:
        anagramcheck();
        break;
    case 6:
        wrdextract();
        break;
    case 7:
        strtoint();
        break;
    case 8:
        tatargram();
        break;

    default:
        std::cout << "Wrong input program terminated...\n";
        break;
    }
}