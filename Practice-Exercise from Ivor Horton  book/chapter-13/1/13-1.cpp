#include <iostream>
#include<typeinfo>
#include "box.h"

int main()
{
    double num{ 5.3 };
    Box obj1(3, 6, 9), obj2{ 7.8, 6.8, 3.6 };
    Box Obj1{ 3, 6, 9 };
    Box obj3 = (obj1 + obj2);

    Box obj4{ obj1 * num };
    Box obj5{ num * obj2 };

    // const Box obj5; error(no user defined default constructor)

    obj1.showbox_dimensions();
    obj2.showbox_dimensions();
    obj3.showbox_dimensions();
    obj4.showbox_dimensions();
    obj5.showbox_dimensions();

    //Comparison test
    std::cout << (obj1 == Obj1) << "\n";
    if (!(obj1 != Obj1)) { std::cout << "Equal and working\n"; }
    if (obj1 != obj2) { std::cout << "Not Equal and working\n"; }
    auto result = Obj1 <=> obj1;
    if (result == 0)
    {
        std::cout << typeid(result).name() << " Equal <=> working\n";
    }
    else if (result < 0)
    {
        std::cout << typeid(result).name() << " Smaller <=> working\n";
    }
    else if (result > 0)
    {
        std::cout << typeid(result).name() << " Bigger <=> working\n";
    }

    Box obj6{ 1.1,2.2,3.3 }, obj7{ 1.2,2.1,0 };

    // std::cout << (obj7) << (!obj7) << (obj6) << (!obj6) << "\n";   (wont work with explicit bool conversion)

    if (obj7)
    {
        std::cout << "bool working...obj7\n";
    }
    if (!obj7)
    {
        std::cout << "bool! working...obj7\n";
    }
    if (obj6)
    {
        std::cout << "bool working...obj6\n";
    }
    if (!obj6)
    {
        std::cout << "bool! working...obj6\n";
    }
}