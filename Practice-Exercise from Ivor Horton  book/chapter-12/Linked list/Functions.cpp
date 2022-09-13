#include "Functions.h"

void Create_Load(std::vector<truckload *> &t_loads)
{
    t_loads.push_back(new truckload);
    t_loads.at((t_loads.size() - 1))->create_T_load();
}

void Display_Load(std::vector<truckload *> &t_loads)
{
    if (t_loads.size() == 0)
    {
        std::cout << "!!!There are no Truckloads!!!\n";
        return;
    }

    for (size_t i = 0; i < t_loads.size(); i++)
    {
        t_loads.at(i)->display_T_load();
    }
}

void Add_Items(std::vector<truckload *> &t_loads)
{
    if (t_loads.size() == 0)
    {
        std::cout << "!!!There are no Truckloads!!!\n";
        return;
    }

    size_t t_loadno{};
    std::cout << "\nEnter the Truckload no you want to add a new Item to:";
    std::cin >> t_loadno;
    for (size_t i = 0; i < t_loads.size(); i++)
    {
        if (t_loads.at(i)->T_load_no == t_loadno)
        {
            t_loads.at(i)->Add_to_load();
            return;
            // exit(0);
        }
    }
    std::cout << "\n!!!Truckload not found!!!\n";
}

void Remove_Items(std::vector<truckload *> &t_loads)
{
    if (t_loads.size() == 0)
    {
        std::cout << "!!!There are no Truckloads!!!\n";
        return;
    }

    size_t t_loadno{};
    std::vector<truckload *>::iterator j;
    std::cout << "\nEnter the Truckload no you want to remove an Item from:";
    std::cin >> t_loadno;

    for (size_t i = 0; i < t_loads.size(); i++)
    {
        if (t_loads.at(i)->T_load_no == t_loadno)
        {
            if (t_loads.at(i)->T_size == 1)
            {
                delete t_loads.at(i);
                j = t_loads.begin() + i;
                t_loads.erase(j);
                std::cout << "Truckload removed\n";
                return;
            }
            else
            {
                t_loads.at(i)->remove_from_load();
                return;
                // exit(0);
            }
        }
    }
    std::cout << "\n!!!Truckload not found!!!\n";
}