#ifndef TRUCK_L
#define TRUCK_L

#include "ITEMS.h"

class truckload
{
private:
    class BOX;
    size_t T_size;
    BOX *current;
    BOX *first;
    BOX *last;

public:
    size_t T_load_no;
    void display_T_load();
    void create_T_load();
};

#endif