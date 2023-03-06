#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector n1{ 1, 2, 3 }, n2{ 1, 2, 3 };
    auto n3 = n1 <=> n2;
    std::cout << __cplusplus << "\n";
    if (n3 == 0)
    {
        std::cout << "Equal\n";
    }
    else if (n3 < 0)
    {
        std::cout << "Smaller\n";
    }
    else
    {
        std::cout << "Bigger\n";
    }
}
// class test
// {
// public:
//     test(int a = 5, int b = 5) : num1{a}, num2{b} {}
//     int num1;

//     int get1() const { return num1; }
//     int get2() const { return num2; }

//     void set1()
//     {
//         std::cout << "\nenter num1\n";
//         std::cin >> num1;
//     }
//     void set2()
//     {
//         std::cout << "\nenter num2\n";
//         std::cin >> num2;
//     }

//     int multiple() const { return num1 * num2; }

//     void show() const { std::cout << "\n"
//                                   << num1 << " " << num2 << "\n"; }

// private:
//     int num2;
// };

// int main()
// {
//     test obj1;
//     const test C_obj2;

//     obj1.set1();
//     obj1.set2();
//     std::cout << "\n"
//               << obj1.get1() << "\n";
//     std::cout << "\n"
//               << obj1.get2() << "\n";
//     std::cout << "\n"
//               << obj1.multiple() << "\n";
//     obj1.show();

//     // C_obj2.set1();
//     // C_obj2.set2();
//     std::cout << "\n"
//               << C_obj2.get1() << "\n";
//     std::cout << "\n"
//               << C_obj2.get2() << "\n";
//     std::cout << "\n"
//               << C_obj2.multiple() << "\n";
//     C_obj2.show();
// }

// #include "abhay.h"

// void foo1(int);

// int main()
// {
//     foo1(7);
//     foo2(8);
//     foo3(9);
// }

// void foo1(int a)
// {
//     std::cout << "\n"
//               << a << "\n\n";
// }

// void doubleit(const double &c) { std::cout << c * 2; }
// void doubleitprint(const double &d) { std::cout << d << "\n"; }
// int main()
// {
//     std::cout<<__cplusplus<<std::endl;
//     double a{7};
//     double b{2};
//     double c{a / b};
//     int d{7};
//     int e{2};
//     double f{/*static_cast<double>(*/d / static_cast<double>(e)};
//     std::cout << "\n"
//               << c << " " << f << "\n";
//     double a{5};
//     doubleit(a);
//     doubleitprint(a);
//     int ac{55};
//     doubleit(ac);
//     doubleitprint(ac);
//     std::string name{"abhay is is this sharma"};
//     std::string word{"is"};
//     for (size_t i = 0; i < name.length(); i++)
//     {
//         std::cout << i << " " << name.find(word, i) << "\n";
//         if (name.find(word, i) != std::string::npos)
//             name.replace(name.find(word, i), word.length(), word.length(), '*');
//     }
//     std::cout << name << std::endl;
//      bool check = (para.find(para[rplcindx + word.length()]) == std::string::npos);
//  }