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

int main()
{
    std::cout << "\nchose question:\n";
    std::cout << "1.7-1\n";
    std::cout << "2.7-2\n";
    std::cout << "3.7-3\n";
    std::cout << "4.7-4\n";
    std::cout << "5.7-5\n\n";
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

    default:
        std::cout << "Wrong input program terminated...\n";
        break;
    }
}