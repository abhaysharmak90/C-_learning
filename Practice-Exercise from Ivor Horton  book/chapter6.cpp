#include <iostream>
#include <cmath>
#include <vector>
#include <memory>

void oddfunction()
{
    int odd[50];
    std::cout << "The first 50 odd numbers are:\n";
    for (int i = 0; i < 50; i++)
    {
        *(odd + i) = i * 2 + 1;
    }
    for (int i = 0, temp{}; i < 50; i++)
    {
        std::cout << *(odd + i) << "\t";
        temp++;
        if (temp == 10)
        {
            std::cout << std::endl;
            temp = 0;
        }
    }
}

void randomshit()
{
    std::cout << "Enter the size of the array:\n";
    int temp;
    std::cin >> temp;
    float arr[temp], sum{};
    for (int i = 0; i < temp; i++)
    {
        *(arr + i) = (1.0 / ((i + 1) * (i + 1)));
    }
    for (int i = 0; i < temp; i++)
    {
        sum += arr[i];
    }
    std::cout << "the answer is:" << std::sqrt(sum * 6.0) << std::endl;
}

void vectorshit()
{
    std::cout << "Enter the size of vector:\n";
    int n;
    std::cin >> n;
    auto *arr{new std::vector<double>(n)};
    double sum, temp1;
    for (size_t i = 0; i < n; i++)
    {
        (*arr)[i] = 1.0 / ((1 + i) * (1 + i));
    }
    for (double temp : *arr)
    {
        sum += temp;
    }
    std::cout << "the answer is: " << std::sqrt(6.0 * sum) << std::endl;
    delete arr;
}

void newshit()
{
    int n;
    std::cout << "Enter the size of the array: \n";
    std::cin >> n;
    auto arr{std::make_unique<double[]>(n)};
    double sum{};
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = 1.0 / ((1 + i) * (1 + i));
        sum += arr[i];
    }

    std::cout << "the result is:" << std::sqrt(6.0 * sum) << std::endl;
}

void againvectorshit()
{
    std::cout << "Enter the size of vector:\n";
    int n;
    std::cin >> n;
    auto arr{std::make_unique<std::vector<double>>(n)};
    double sum, temp1;
    for (size_t i = 0; i < n; i++)
    {
        (*arr)[i] = 1.0 / ((1 + i) * (1 + i));
    }
    for (double temp : *arr)
    {
        sum += temp;
    }
    std::cout << "the answer is: " << std::sqrt(6.0 * sum) << std::endl;
}

int main()
{
    std::cout << "Enter your choice:\n";
    std::cout << "1.6-1:\n";
    std::cout << "2.6-3:\n";
    std::cout << "3.6-4:\n";
    std::cout << "4.6-5:\n";
    std::cout << "5.6-6:\n";
    int var;
    std::cin >> var;
    switch (var)
    {
    case 1:
        oddfunction();
        break;
    case 2:
        randomshit();
        break;
    case 3:
        vectorshit();
        break;
    case 4:
        newshit();
        break;
    case 5:
        againvectorshit();
        break;

    default:
        std::cout << "Wrong input program terminated...\n";
        break;
    }
}