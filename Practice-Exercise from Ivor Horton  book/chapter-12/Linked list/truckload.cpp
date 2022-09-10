#include "truckload.h"

class truckload::BOXES
{
private:
    static int no_of_BOX;

    box *item;
    truckload::BOXES *nxt_BOX;

public:
};

int truckload::BOXES::no_of_BOX{0};