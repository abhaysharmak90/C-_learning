#include <iostream>
#include <string>

template <typename T>
const T &clamp_new(const T &first, const T &second, const T &third);

int main()
{
    std::string a, b, c;
    std::cout << "enter a,b,c\n";
    std::cin >> a >> b >> c;
    std::cout << clamp_new(a, b, c) << "\n";
}

template <typename T>
const T &clamp_new(const T &first, const T &second, const T &third)
{
    if (first < second)
    {
        return second;
    }
    else if (first > third)
    {
        return third;
    }
    return first;
}
