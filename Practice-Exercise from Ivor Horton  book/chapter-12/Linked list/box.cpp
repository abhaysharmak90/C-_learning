#include "boxes.h"

void box::display_BOX() const
{
    std::cout << "the name of item is: " << B_item_name << "\n";
    std::cout << "the price of item is: " << B_item_price << "\n";
}

void box::fill_BOX()
{
    std::cout << "Enter the name of the item in the box:\n";
    getline(std::cin, B_item_name);
    std::cout << "Enter the price of the item in the box:\n";
    std::cin >> B_item_price;
}