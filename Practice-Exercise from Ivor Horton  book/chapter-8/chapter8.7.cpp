#include <iostream>

void fibbonacci(int, int, const int);
void fibbonacci_loop(int, int, const int);

int main()
{
    int num1{0}, num2{1}, limit{}, ch{};

    std::cout << "\n1 for fibonacci by recursion\n2 for fibonacci by loop\n";
    std::cin >> ch;

    std::cout << "\nEnter the number upto you want fibonacci numbers\n";
    std::cin >> limit;

    switch (ch)
    {
    case 1:
        std::cout << "\n The Fibonacci series numbers upto '" << limit << "' by recursion:-\n";
        std::cout << num2 << std::endl;
        fibbonacci(num1, num2, limit);
        break;

    case 2:
        std::cout << "\n The Fibonacci series numbers upto '" << limit << "' by loops:-\n";
        std::cout << num2 << std::endl;
        fibbonacci_loop(num1, num2, limit);
        break;

    default:
        std::cout << "\nwrong input\n";
        break;
    }
}

void fibbonacci_loop(int n1, int n2, const int lim)
{
    for (size_t sum = n1 + n2; sum <= lim; sum = n1 + n2)
    {
        std::cout << "\n"
                  << sum << std::endl;

        n1 = n2;
        n2 = sum;
    }
}

void fibbonacci(int n1, int n2, const int lim)
{
    int sum{n1 + n2};
    if (sum >= lim)
    {
        exit(0);
    }
    else
    {
        std::cout << "\n"
                  << sum << std::endl;

        n1 = n2;
        n2 = sum;
        fibbonacci(n1, n2, lim);
    }
    exit(0);
}