#ifndef TRUCK_L
#define TRUCK_L

#include "ITEMS.h"

class truckload
{
private:
    class BOX;

    size_t T_size;

    BOX *first;
    BOX *previous;
    BOX *current;
    BOX *last;

public:
    size_t T_load_no;

    void create_T_load();
    void display_T_load();
    void Add_to_load();
    void remove_from_load();

    truckload()
    {
        T_load_no = 0;
        T_size = 0;
        first = nullptr;
        previous = nullptr;
        current = nullptr;
        last = nullptr;
    }
};

#endif