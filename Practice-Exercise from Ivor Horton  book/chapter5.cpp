#include <iostream>
#include <cctype>
#include <vector>

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
    char ch;
    int count{};
    std::cout << "Enter a character: \n";
    do
    {
        std::cin >> ch;
        ++count;

    } while (ch != '#');
    --count;
    std::cout << "you have entered " << count << " non-whitespace characters.\n";
}

void cstring()
{
    char srtring[1000];
    std::cout << "Enter a string max 1000 characters:\n";
    std::cin.ignore();
    std::cin.getline(srtring, 1000);
    int count{};
    for (int i = 0; i < 1000; i++)
    {
        if (srtring[i] != '\0')
        {
            ++count;
        }
        else if (srtring[i] == '\0')
        {
            break;
        }
    }

    std::cout << "the total of all printable characters is: " << count << std::endl;
    std::cout << "the string in reverse order is: ";
    for (int i = count; i >= 0; i--)
    {
        std::cout << srtring[i];
    }
    std::cout << std::endl;
}

void vectorprint()
{
    int range{};
    std::cout << "Enter the range of vector: \n";
    std::cin >> range;
    std::vector<int> arr(range);
    for (int i = 0; i < range; i++)
    {
        arr[i] = (i + 1);
    }
    std::cout << "the multiple of 7 or 13 in the vector are: \n";
    for (int i = 0, count{}; i < range; i++)
    {
        if ((arr[i] % 7 == 0) || (arr[i] % 13 == 0))
        {
            std::cout << arr[i] << " ";
            ++count;
        }
        if (count == 10)
        {
            std::cout << std::endl;
            count = 0;
        }
    }
}

int main()
{
    std::cout << "Enter Selection: \n ";
    std::cout << "1.squre of Odd number: \n ";
    std::cout << "2.sum of number: \n ";
    std::cout << "3.non-whitespace characters: \n ";
    std::cout << "4.5-4: \n ";
    std::cout << "5.5-5: \n ";
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
    case 4:
        cstring();
        break;
    case 5:
        vectorprint();
        break;

    default:
        std::cout << "Wrong Choice program terminated...";
        break;
    }
}