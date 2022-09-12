#include "truckload.h"

class truckload::BOX
{
private:
    items *item;
    BOX *nxt_BOX;
    BOX *prev_BOX;

public:
    void create_items();
    void view_items();

    void Add_BOX(BOX *);
    void Prev_BOX(BOX *);

    std::string get_item_name();

    BOX *get_nxt_BOX();
    BOX *get_prev_BOX();
};

// START OF CLASS BOX FUNCTION DEFINATIONS

void truckload::BOX::create_items()
{
    item = new items;
    item->fill_item();
}

void truckload::BOX::view_items()
{
    item->display_item();
}

void truckload::BOX::Add_BOX(BOX *t_nxt)
{
    nxt_BOX = t_nxt;
}

void truckload::BOX::Prev_BOX(BOX *t_prev)
{
    prev_BOX = t_prev;
}

std::string truckload::BOX::get_item_name()
{
    return item->get_name();
}

truckload::BOX *truckload::BOX::get_nxt_BOX()
{
    return nxt_BOX;
}

truckload::BOX *truckload::BOX::get_prev_BOX()
{
    return prev_BOX;
}

/*DEFINATIONS OF CLASS Truckload FUNCTIONS*/

void truckload::create_T_load()
{
    std::cout << "Enter Truckload no:";
    std::cin >> T_load_no;
    // size_t no_of_boxes{};
    std::cout << "how many boxes do u want:\n";
    std::cin >> T_size;
    first = new BOX;
    first->create_items();
    current = first;
    for (size_t i = 1; i < T_size; i++)
    {
        current->Add_BOX(new BOX);
        previous = current;
        current = current->get_nxt_BOX();
        current->Prev_BOX(previous);
        current->create_items();

        if (i == T_size - 1)
        {
            last = current;
        }
    }
    if (T_size == 1)
    {
        last = first;
    }
}

void truckload::display_T_load()
{
    // first->view_box();
    size_t D_choice;
    std::cout << "1.Forward.\n"
              << "2.Reverse.\n";
    std::cin >> D_choice;
    switch (D_choice)
    {
    case 1:
        std::cout << "TruckLoad No: " << T_load_no << "\n";
        current = first;
        for (size_t i = 0; i < T_size; i++)
        {
            current->view_items();
            current = current->get_nxt_BOX();
        }
        break;
    case 2:
        std::cout << "TruckLoad No: " << T_load_no << "\n";
        current = last;
        for (size_t i = 0; i < T_size; i++)
        {
            current->view_items();
            current = current->get_prev_BOX();
        }
        break;

    default:
        std::cout << "!!!Wrong Choice!!!";
        exit(0);
        break;
    }
}

void truckload::Add_to_load()
{
    last->Add_BOX(new BOX);
    current = last->get_nxt_BOX();
    current->create_items();
    current->Prev_BOX(last);
    last = current;
}

void truckload::remove_from_load()
{
    bool found{false};
    std::string t_name;
    std::cout << "Enter the name of the item you want removed:\n";
    std::cin.ignore();
    getline(std::cin, t_name);
    current = first;
    for (size_t i = 0; i < T_size && found == false; i++)
    {

        if (t_name == current->get_item_name())
        {
            found = true;
            previous->Add_BOX(current->get_nxt_BOX());
            current->Add_BOX(nullptr);
            current->Prev_BOX(nullptr);
            delete current;
            current = previous->get_nxt_BOX();
            current->Prev_BOX(previous);
        }
        previous = current;
        current = current->get_nxt_BOX();
    }
    if (found == true)
    {
        std::cout << t_name << " removed.\n";
    }
}