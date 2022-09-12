#include "Functions.h"

void Create_Load(std::vector<truckload *> &t_loads)
{
    t_loads.push_back(new truckload);
    t_loads.at((t_loads.size() - 1))->create_T_load();
}

void Display_Load(std::vector<truckload *> &t_loads)
{
    for (size_t i = 0; i < t_loads.size(); i++)
    {
        t_loads.at(i)->display_T_load();
    }
}

void Add_Items(std::vector<truckload *> &t_loads)
{
}

void Remove_Items(std::vector<truckload *> &t_loads)
{
}