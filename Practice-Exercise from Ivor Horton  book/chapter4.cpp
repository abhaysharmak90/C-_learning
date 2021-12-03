#include <iostream>
#include <cctype>
#include <bitset>

void greater_integer()
{
    int num1{}, num2{};
    std::cout << "Enter two integer values: \n";
    std::cin >> num1 >> num2;
    if (num2 == num1)
    {
        std::cout << "Entered integers are equal\n";
    }
    else
    {
        std::cout << "Entered integers aren't equal\n";
    }
}

void ismultiple()
{
    unsigned int num1{}, num2{};
    std::cout << "Enter two positive integer values excluding 0: \n";
    std::cin >> num1 >> num2;
    if ((num1 <= 0) || (num2 <= 0))
    {
        std::cout << "negative number or 0 entered...\n";
        return;
    }
    else if ((num2 >= num1) && (num2 % num1 == 0))
    {
        std::cout << "Yes, " << num1 << " is a multiple of " << num2 << "\n";
    }
    else if (num1 % num2 == 0)
    {
        std::cout << "Yes, " << num2 << " is a multiple of " << num1 << "\n";
    }
    else
    {
        std::cout << "No, neither of the entered number is a multiple of each other.\n";
    }
}

void rangecheck()
{
    float num;
    std::cout << "Enter a number between (1-100): \n";
    std::cin >> num;
    if ((num >= 1) && (num <= 100))
    {
        if (num < 50)
        {
            std::cout << "Entered Number " << num << " is between the range (1-50)exclusive\n";
        }
        else if (num > 50)
        {
            std::cout << "Entered Number " << num << " is between the range (50-100)exclusive\n";
        }
        else if ((num == 1) || (num == 50) || (num == 100))
        {
            if (num == 1)
            {
                std::cout << "Entered Number " << num << " is equals to 1\n";
            }
            else if (num == 50)
            {
                std::cout << "Entered Number " << num << " is equals to 50\n";
            }
            else if (num == 100)
            {
                std::cout << "Entered Number " << num << " is equals to 100\n";
            }
        }
    }
    else
    {
        std::cout << "You have entered a number outside specified range\n ";
    }
}

void jobapplication()
{
    enum AcademicDegree
    {
        none,
        associate,
        bachelor,
        professional,
        master,
        doctor
    };
    AcademicDegree Degree{none};
    int age{};
    bool married, speakhindi, speakurdu;
    char gender;
    std::cout << "Enter your Age(in numeric value): \n";
    std::cin >> age;
    if ((age < 22) || (age > 34))
    {
        std::cout << "Entered age is not in valid range.\n";
        return;
    }
    std::cout << "Enter your gender 'm' for male or 'f' for female:\n";
    std::cin >> gender;
    if (gender != 'f')
    {
        std::cout << "you are not a valid applicant.\n";
        return;
    }
    std::cout << "Enter few questions in 0 and 1, 1 for 'true' or 0 for 'false':\n";
    std::cout << "Are your married ? \n";
    std::cin >> married;
    std::cout << married << "\n";
    if (married)
    {
        std::cout << "You are not a valid applicant. \n";
        return;
    }
    std::cout << "Do you speak Hindi?\n";
    std::cin >> speakhindi;
    std::cout << "Do you speak Urdu?\n";
    std::cin >> speakurdu;
    if (!((speakhindi) || (speakurdu)))
    {
        std::cout << "you do not pass the requirements.\n";
        return;
    }
    std::cout << "Enter your qualification from these possible values( none, associate, bachelor, professional, master, doctor)\n";
    char degreevalue;
    std::cin >> degreevalue;
    degreevalue = std::tolower(degreevalue);
    if ((degreevalue == 'b') || (degreevalue == 'm'))
    {
        std::cout << "Your are selected\n";
    }
    else
    {
        std::cout << "GET OUT NIGGA!\n";
    }
}

void range()
{
    std::cout << "Enter an integer\n";
    int var;
    std::cin >> var;
    std::cout << "The entered integer is "
              << (var <= 20                    ? " less than or equal to 20\n"
                  : (var > 20) && (var <= 30)  ? " greater than 20 and greater than or equal to 30 \n"
                  : (var > 30) && (var <= 100) ? " between 30 and 100\n"
                                               : " greater than 100\n");
}

void isvowel()
{
    std::cout << "Enter a alphabet\n";
    char var;
    std::cin >> var;
    if (std::isalpha(var))
    {

        switch (std::tolower(var))
        {
        case 'a':
        case 'i':
        case 'o':
        case 'u':
        case 'e':
            std::cout << "Entered alphabet is a vowel and is " << (std::islower(var) ? "lowercase.\n" : "uppercase.\n");
            std::cout << "The ASCII value of " << var << " is "
                      << static_cast<int>(var) << " and the size of the alphabet is "
                      << sizeof(var) << " and the binary for it is " << std::bitset<8>(var) << std::endl;
            break;

        default:
            std::cout << "Entered alphabet is a consonant and " << (std::islower(var) ? "lowercase.\n" : "uppercase.\n");
            std::cout << "The ASCII value of " << var << " is "
                      << static_cast<int>(var) << " and the size of the alphabet is "
                      << sizeof(var) << " and the binary for it is " << std::bitset<8>(var) << std::endl;
            break;
        }
    }
    else
    {
        std::cout << "Entered variable is not a character cause it is " << var << std::endl;
    }
}

void changecalculater()
{
    std::cout << "Enter amount of money between 1$ and 10$\n";
    float cash;
    std::cin >> cash;
    if ((cash < 1) || (cash > 10))
    {
        std::cout << "Amount of money is out of bounds.\n";
        return;
    }
    const int centsperdollar{100};
    int cents{cash * centsperdollar}, quaters{}, dimes{}, nickles{}, pennies{};
    quaters = cents / 25;
    cents = cents % 25;
    dimes = cents / 10;
    cents = cents % 10;
    nickles = cents / 5;
    pennies = cents % 5;
    std::cout << "You need " << quaters << (quaters <= 1 ? " quater, " : " quaters, ")
              << dimes << (dimes <= 1 ? " dime, " : " dimes, ")
              << nickles << (nickles <= 1 ? " nickle, " : " nickles, ")
              << pennies << (pennies <= 1 ? " pennie.\n " : " pennies.\n ");
}

int main()
{
    std::cout << "Enter your choice:\n"
              << std::endl;
    std::cout << "1.Greater No." << std::endl;
    std::cout << "2.Check if it's a Multiple" << std::endl;
    std::cout << "3.Check if N is in range" << std::endl;
    std::cout << "4.Application for job" << std::endl;
    std::cout << "5.Range" << std::endl;
    std::cout << "6.Is vowel" << std::endl;
    std::cout << "7.Calculate change" << std::endl;
    int var;
    std::cout << std::endl;
    std::cin >> var;
    std::cout << std::endl;

    switch (var)
    {
    case 1:
        greater_integer();
        break;
    case 2:
        ismultiple();
        break;
    case 3:
        rangecheck();
        break;
    case 4:
        jobapplication();
        break;
    case 5:
        range();
        break;
    case 6:
        isvowel();
        break;
    case 7:
        changecalculater();
        break;

    default:
        std::cout << "Wrong choice program terminated...\n";
        break;
    }
}