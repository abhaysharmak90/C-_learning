#include <iostream>
#include <string>
#include <vector>
#include <array>

void vector_sort(std::vector<unsigned int> &);
void output_greatest_five(std::vector<unsigned int> &);
void output_smallest_five(std::vector<unsigned int> &);
void output_average(std::vector<unsigned int> &);
void output_median(std::vector<unsigned int> &);

int main()
{
    std::array<int, 5> results;
    std::vector<unsigned int> grades;
    int inpt{};
    do
    {
        std::cout << "\nEnter a grade between 0 and 100 to stop entering grades enter a negative number\n";
        std::cin >> inpt;
        if (inpt >= 0 && inpt <= 100)
        {
            grades.push_back(inpt);
        }

    } while (inpt >= 0);

    // std::cout << "\nunsorted\n";
    // for (size_t i = 0; i < grades.size(); i++)
    // {
    //     std::cout << "\n"
    //               << grades[i] << " " << i << "\n";
    // }

    vector_sort(grades);

    // std::cout << "\nsorted\n";
    // for (size_t i = 0; i < grades.size(); i++)
    // {
    //     std::cout << "\n"
    //               << grades[i] << " " << i << "\n";
    // }
    output_greatest_five(grades);
    output_smallest_five(grades);
    output_average(grades);
}

void vector_sort(std::vector<unsigned int> &vec)
{
    size_t vec_size{vec.size()}, temp;
    for (size_t i = 0; i < vec_size; i++)
    {
        for (size_t j = i + 1; j < vec_size; j++)
        {
            if (vec[i] > vec[j])
            {
                temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }

        // std::cout << "\nsorted" << i << "times\n";
        // for (size_t k = 0; k < vec_size; k++)
        // {
        //     std::cout << "\n"
        //               << vec[k] << " " << k << "\n";
        // }
    }
}

void output_greatest_five(std::vector<unsigned int> &vecta)
{
    size_t vecta_size{vecta.size() - 1};
    std::cout << "\nThe Greatest five grades are:-\n";
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << vecta[vecta_size - i] << "\n";
    }
}

void output_smallest_five(std::vector<unsigned int> &vectatoo)
{
    // size_t vectatoo_size{vectatoo.size() - 1};
    std::cout << "\nThe Smallest five grades are:-\n";
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << vectatoo[i] << "\n";
    }
}

void output_average(std::vector<unsigned int> &vecta_again)
{
    size_t vecta_again_sum{}, vecta_again_size{vecta_again.size()};
    for (auto grd : vecta_again)
    {
        vecta_again_sum += grd;
    }

    std::cout << "\nThe Average grade is:-\n"
              << vecta_again_sum / vecta_again_size << "\n";
}