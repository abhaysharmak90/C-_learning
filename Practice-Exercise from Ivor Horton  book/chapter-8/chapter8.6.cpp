#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <cmath>

void vector_sort(std::vector<unsigned int> &);
void output_Highest_five(std::vector<unsigned int> &);
void output_Lowest_five(std::vector<unsigned int> &);
double output_mean(std::vector<unsigned int> &);
double get_median(std::vector<unsigned int> &);
double get_variance(std::vector<unsigned int> &, double);

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
    output_Highest_five(grades);
    output_Lowest_five(grades);
    double mean = output_mean(grades);
    std::cout << "\nThe Mean of grades is:-\n"
              << mean << "\n";

    double median = get_median(grades);
    std::cout << "\nThe Median of grades is:-\n"
              << median << "\n";

    double variance = get_variance(grades, mean);
    std::cout << "\nThe variance of grades is:-\n"
              << variance << "\n";

    std::cout << "\nThe standard deviation of grades is:-\n"
              << std::sqrt(variance) << "\n";
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

void output_Highest_five(std::vector<unsigned int> &vecta)
{
    size_t vecta_size{vecta.size() - 1};
    std::cout << "\nThe Highest five grades are:-\n";
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << vecta[vecta_size - i] << "\n";
    }
}

void output_Lowest_five(std::vector<unsigned int> &vectatoo)
{
    // size_t vectatoo_size{vectatoo.size() - 1};
    std::cout << "\nThe Lowest five grades are:-\n";
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << vectatoo[i] << "\n";
    }
}

double output_mean(std::vector<unsigned int> &vecta_again)
{
    size_t vecta_again_sum{}, vecta_again_size{vecta_again.size()};
    for (auto grd : vecta_again)
    {
        vecta_again_sum += grd;
    }

    return vecta_again_sum / static_cast<double>(vecta_again_size);
}

double get_median(std::vector<unsigned int> &vecta_mid)
{
    size_t vecta_mid_size = vecta_mid.size();
    if (vecta_mid_size % 2 != 0)
    {
        return vecta_mid[vecta_mid_size / 2];
    }
    else
    {
        return ((vecta_mid[vecta_mid_size / 2] + vecta_mid[(vecta_mid_size / 2) - 1]) / static_cast<double>(2));
    }
}

double get_variance(std::vector<unsigned int> &vecta, double mean)
{
    double s_d_sum{};
    double vec_size{static_cast<double>(vecta.size())};
    for (auto itm : vecta)
    {
        s_d_sum += std::pow((itm - mean), 2);
    }
    return s_d_sum / vec_size;
}
