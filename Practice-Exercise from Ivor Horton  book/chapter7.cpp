#include <iostream>
#include <string>
#include <vector>

void studentdata()
{
    int No_of_entries{};
    double average, sum;
    std::vector<std::string> names;
    std::vector<double> grades;

    std::cout << "Enter the number of data entries:\n";
    std::cin >> No_of_entries;

    std::cin.ignore();
    for (size_t i = 0; i < No_of_entries; i++)
    {
        double grade;
        std::string name;
        std::cout << "Enter the name of the student no: " << i + 1 << "\n";
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

int main()
{
    std::cout << "chose question:\n";
    std::cout << "1.7-1\n";
    std::cout << "2.7-2\n";
    std::cout << "3.7-3\n";
    std::cout << "4.7-4\n";
    std::cout << "5.7-5\n";
    int var;
    std::cin >> var;
    switch (var)
    {
    case 1:
        studentdata();
        break;
    case 2:
        // studentdata();
        break;

    default:
        std::cout << "Wrong input program terminated...\n";
        break;
    }
}