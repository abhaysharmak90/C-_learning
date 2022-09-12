#include "truckload.h"

class truckload::BOX
{
private:
    static int no_of_BOX;

    items *item;
    BOX *nxt_BOX;

public:
    void create_box();
    void view_box();
    void assign_nxt(BOX *);
    void add_box();
    void remove_box();
    BOX *get_nxt();
};

int truckload::BOX::no_of_BOX{0};

void truckload::BOX::create_box()
{
    item = new items;
    item->fill_item();
}

void truckload::BOX::view_box()
{
    item->display_item();
}

void truckload::BOX::assign_nxt(BOX *t_nxt)
{
    nxt_BOX = t_nxt;
}

void truckload::BOX::add_box()
{
}
void truckload::BOX::remove_box()
{
}

truckload::BOX *truckload::BOX::get_nxt()
{
    return nxt_BOX;
}

void truckload::create_T_load()
{
    std::cout << "Enter Truckload no:";
    std::cin >> T_load_no;
    // size_t no_of_boxes{};
    std::cout << "how many boxes do u want:\n";
    std::cin >> T_size;
    first = new BOX;
    first->create_box();
    current = first;
    for (size_t i = 1; i < T_size; i++)
    {
        current->assign_nxt(new BOX);
        current = current->get_nxt();
        current->create_box();
        if (i == T_size - 1)
        {
            last = current;
        }
    }
}

void truckload::display_T_load()
{
    // first->view_box();
    current = first;
    for (size_t i = 0; i < T_size; i++)
    {
        current->view_box();
        current = current->get_nxt();
    }
}