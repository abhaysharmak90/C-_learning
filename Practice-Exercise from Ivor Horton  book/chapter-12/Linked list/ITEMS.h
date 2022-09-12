#ifndef ITEMS
#define ITEMS

#include <iostream>
#include <string>

class items
{
private:
    std::string B_item_name;
    double B_item_price;

public:
    void display_item() const;
    void fill_item(/*std::string&,double*/);
};

#endif