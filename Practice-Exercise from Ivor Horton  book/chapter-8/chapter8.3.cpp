#include <iostream>

int main(int a, char *txt[])
{
    // std::cout << "\n";
    // std::cout << a << " " << *txt << std::endl;
    std::cout << "\nYou entered " << a << (a < 2 ? " Argument\n" : "Arguments\n");
    if (a >= 2 && a <= 4)
    {

        for (size_t i = 0; i < a; i++)
        {
            std::cout << "\nArgument " << i + 1 << " is " << txt[i] << std::endl;
        }
    }
    else
    {
        std::cout << "\nFUCK OFF\n";
    }
}