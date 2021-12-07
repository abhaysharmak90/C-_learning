#include <iostream>
#include <cctype>
#include <vector>
#include <iomanip>

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

void bill()
{
    int product_id[50], quantity[50];
    double total_cost, unit_price[50];
    std::cout << "Enter the number of products you want to add(max is 50 products): \n";
    int range{};
    std::cin >> range;
    for (int i = 0; i < range; i++)
    {
        std::cout << "enter the product id,quantity,unit price of product no. " << i + 1 << std::endl;
        std::cin >> product_id[i] >> quantity[i] >> unit_price[i];
    }
    std::cout << "\nproduct no.\t product id \t quantity \t unit price \t total cost\n";
    for (int i = 0; i < range; i++)
    {
        total_cost += quantity[i] * unit_price[i];
        std::cout << i + 1 << "\t\t" << product_id[i] << "\t\t" << quantity[i] << "\t\t" << unit_price[i] << "\t\t" << quantity[i] * unit_price[i];
        std::cout << std::endl;
    }
    std::cout << "\nthe total cost of all the products is: " << total_cost << std::endl;
}

void fibonacciseries()
{
    long arr[94]{0, 1};
    std::cout << "The first 93 elements of fibonacci\n";
    std::cout << arr[1] << std::endl;
    for (int i = 2; i < 94; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        std::cout << arr[i] << "\t" << i << std::endl;
    }
}

int main()
{
    std::cout << "Enter Selection: \n ";
    std::cout << "1.squre of Odd number: \n ";
    std::cout << "2.sum of number: \n ";
    std::cout << "3.non-whitespace characters: \n ";
    std::cout << "4.5-4: \n ";
    std::cout << "5.5-6: \n ";
    std::cout << "6.billing: \n ";
    std::cout << "7.fibbonac series: \n ";
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
    case 6:
        bill();
        break;
    case 7:
        fibonacciseries();
        break;

    default:
        std::cout << "Wrong Choice program terminated...";
        break;
    }
}