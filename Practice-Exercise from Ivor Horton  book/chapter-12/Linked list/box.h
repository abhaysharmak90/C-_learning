#ifndef BOX
#define BOX

#include <iostream>
#include <string>

class box
{
private:
    std::string B_item_name;
    double B_item_price;

public:
    void display_BOX() const;
    void fill_BOX(/*std::string&,double*/);
};

#endif