#include <iostream>
#include <vector>
#include <string>

template <typename t>
void create_vecter_elements(std::vector<t> &vec)
{
    t inpt;

    char ch{};
    do
    {
        std::cout << "Enter some elements of selected type\n";
        std::cin >> inpt;
        vec.push_back(inpt);
        std::cout << "enter ch = n to stop\n";
        std::cin >> ch;
    } while (ch != 'n');
}

template <typename t>
void output_vector_elements(std::vector<t> &vec)
{
    std::cout << std::endl;
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;
}

template <typename t>
void vector_sort(std::vector<t> &vec)
{
    for (size_t i = 0; i < vec.size(); i++)
    {
        t smallest = vec[i];
        // std::cout << vec.size() << " " << smallest << " " << vec[i] << std::endl;
        for (size_t j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < smallest)
            {
                // std::cout << vec.size() << " " << smallest << " " << vec[i] << " " << vec[j] << std::endl;
                smallest = vec[j];
                vec[j] = vec[i];
                vec[i] = smallest;
            }
            // std::cout << vec.size() << " " << smallest << " " << vec[i] << " " << vec[j] << std::endl;
        }
    }
}

int main()
{
    std::vector<int> m_i_vector{};
    std::vector<double> m_d_vector{};
    std::vector<std::string> m_s_vector{};
    int choice{0};
    std::cout << "What kind of vector is wanted 1.integer,2.double,3.string\n";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        create_vecter_elements(m_i_vector);
        output_vector_elements(m_i_vector);
        vector_sort(m_i_vector);
        output_vector_elements(m_i_vector);

        break;
    case 2:
        create_vecter_elements(m_d_vector);
        output_vector_elements(m_d_vector);

        vector_sort(m_d_vector);
        output_vector_elements(m_d_vector);

        break;
    case 3:
        create_vecter_elements(m_s_vector);
        output_vector_elements(m_s_vector);
        vector_sort(m_s_vector);
        output_vector_elements(m_s_vector);

        break;

    default:
        std::cout << "Wrong Input!!!\n\n";
        break;
    }
}
