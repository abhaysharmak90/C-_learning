#include <iostream>
#include <cctype>

void oddsquare()
{
    std::cout << "Enter a number to wich you want odd square from 1\n";
    int range;
    std::cin >> range;
    for (int i = 0; i <= range; i++)
    {
        if (i % 2 != 0)
        {
            std::cout << i * i << std::endl;
        }
    }
}

void sum()
{
    int sum{};
    char ch{'y'};
    while (std::tolower(ch) == 'y')
    {
        std::cout << "Enter an arbitrary number:\n";
        int temp;
        std::cin >> temp;
        sum += temp;
        std::cout << "Do you want to enter more numbers press 'y' for yes or 'n' for no \n";
        std::cin >> ch;
    }
    std::cout << "The sum of all the entered numbers is :" << sum << std::endl;
}

void nonwhitespace()
{
    int temp1 = 100;
    char text[temp1];
    std::cout << "Enter  a string less than 100 characters\n";
    std::cin.getline(text, temp1);
    int i = 0, count{};
    char ch{};
    do
    {
        ch = text[i];
        if (std::isprint(ch))
        {
            if (ch == '#')
            {
                return;
            }
            ++count;
        }
    } while (i < 100, i++);
    std::cout << "The number of non whitespace characters in the gives text are: " << count << std::endl;
}

int main()
{
    std::cout << "Enter Selection: \n ";
    std::cout << "1.squre of Odd number: \n ";
    std::cout << "2.sum of number: \n ";
    std::cout << "3.non-whitespace characters: \n ";
    int var;
    std::cin >> var;
    switch (var)
    {
    case 1:
        oddsquare();
        break;
    case 2:
        sum();
        break;
    case 3:
        nonwhitespace();
        break;

    default:
        std::cout << "Wrong Choice program terminated...";
        break;
    }
}