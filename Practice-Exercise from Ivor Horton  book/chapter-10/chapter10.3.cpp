#include <iostream>
#include <string>

template <typename T, typename B>
auto plus(T &first, B &second)
{
    return first + second;
}

template <typename T, typename B>
auto plus(T *first, B *second)
{
    return *first + *second;
}

int main()
{
    // int a;
    std::string a, b;
    std::cout << "enter a,b\n";
    std::cin >> a >> b;
    std::string *ac = &a;
    std::string *bd = &b;
    auto c = plus(a, b);
    std::cout << c << "\n";
    std::cout << plus(ac, bd) << "\n";
}

// template <typename T, typename B>
// decltype(auto) plus(const T &first, const B &second)
// {
//     return first + second;
// }

// template <typename T, typename B>
// decltype(auto) plus(const T *first, const B *second)
// {
//     return *first + *second;
// }