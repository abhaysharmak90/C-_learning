#include <iostream>
#include <string>

int add(int, int);
double add(double, double);
std::string add(const std::string &, const std::string &);

int main()
{
    const int n{add(3, 4)};
    const double d{add(3.2, 4.2)};
    const std::string s{add("he", "llo")};
    const std::string s1{"aaa"};
    const std::string s2{"bbb"};
    const std::string s3{add(s1, s2)};
    // const auto d{add(static_cast<double>(3), 4.2)};

    std::cout << n << "\n"
              << d << "\n"
              << s << "\n"
              << s1 << "\n"
              << s2 << "\n"
              << s3 << "\n";
}

int add(int a, int b)
{
    return a + b;
}

double add(double c, double d)
{
    return c + d;
}

std::string add(const std::string &txt1, const std::string &txt2)
{
    return txt1 + txt2;
}
