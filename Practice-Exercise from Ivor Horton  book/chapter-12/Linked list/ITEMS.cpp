#include "ITEMS.h"

void items::display_item() const
{
    std::cout << "the name of item is: " << B_item_name << "\n";
    std::cout << "the price of item is: " << B_item_price << "\n";
}

void items::fill_item()
{
    std::cout << "Enter the name of the item in the box:\n";
    std::cin.ignore();
    getline(std::cin, B_item_name);
    std::cout << "Enter the price of the item in the box:\n";
    std::cin >> B_item_price;
}

std::string items::get_name()
{
    return B_item_name;
}