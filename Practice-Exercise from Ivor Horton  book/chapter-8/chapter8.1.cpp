#include <iostream>
#include <string>
#include <vector>

int enter_year();
int enter_month();
int enter_date(int, int);
int validate_input(const int, const int, const std::string &);

int main()
{
    std::cout << "\nEnter your DOB :-";
    int year{enter_year()};
    int month{enter_month()};
    int date{enter_date(month, year)};
    const std::vector<std::string> months{"Janurary", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    // for (auto abc : months)
    // {
    //     std::cout << abc << std::endl;
    // }
    std::cout << "\nYour DOB is " << date << " of " + months[month - 1] + ", " << year << std::endl;
}

int enter_year()
{
    const int lowerlimit{1800};
    const int upperlimit{2022};
    const std::string ask_year{"\nEnter the year of your birth(In Digits)\n"};
    return validate_input(upperlimit, lowerlimit, ask_year);
}
int enter_month()
{
    const int lowerlimit{1};
    const int upperlimit{12};
    const std::string ask_month{"\nEnter the month of your birth(In Digits)\n"};
    return validate_input(upperlimit, lowerlimit, ask_month);
}

int enter_date(const int month_arg, const int year_arg)
{
    const int lowerlimit{1};
    int upperlimit{};
    const std::vector<int> days_in_months{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month_arg == 2)
    {
        if (year_arg % 4 == 0)
        {
            if (year_arg % 100 == 0)
            {
                if (year_arg % 400 == 0)
                {
                    upperlimit = 29;
                }
                else
                {
                    upperlimit = 28;
                }
            }
            else
            {
                upperlimit = 29;
            }
        }
        else
        {
            upperlimit = 28;
        }
    }
    else
    {
        upperlimit = days_in_months[month_arg - 1];
    }
    std::string ask_date{"\nEnter the date of your birth(In Digits)\n"};
    return validate_input(upperlimit, lowerlimit, ask_date);
}

int validate_input(const int ul, const int ll, const std::string &prompttxt)
{
    std::cout << prompttxt << ul << " " << ll << "\n";
    int inpt;
    std::cin >> inpt;
    while (inpt > ul || inpt < ll)
    {
        std::cout << "\nOut of range entered enter again\n";
        std::cin >> inpt;
    }
    return inpt;
}