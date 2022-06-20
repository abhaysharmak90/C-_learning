#include <iostream>
#include <string>
#include <vector>
#include <array>

void vector_sort(std::vector<unsigned int> &);

int main()
{
    std::array<int, 5> results;
    std::vector<unsigned int> grades;
    int inpt{};
    do
    {
        std::cout << "\nEnter a grade between 0 and 100\n";
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