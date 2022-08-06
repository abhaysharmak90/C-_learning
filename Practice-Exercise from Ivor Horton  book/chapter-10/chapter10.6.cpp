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
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
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

        break;
    case 2:
        create_vecter_elements(m_d_vector);
        output_vector_elements(m_d_vector);

        break;
    case 3:
        create_vecter_elements(m_s_vector);
        output_vector_elements(m_s_vector);

        break;

    default:
        std::cout << "Wrong Input!!!\n\n";
        break;
    }
}
