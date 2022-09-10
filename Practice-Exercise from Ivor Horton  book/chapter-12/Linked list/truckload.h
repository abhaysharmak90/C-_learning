#ifndef TRUCK_L
#define TRUCK_L

#include "box.h"

class truckload
{
private:
    int T_load_no, T_size;

    class BOXES;

public:
    void display_T_load() const;
    void create_T_load();
};

#endif