#include <iostream>

class INTEGER
{
    int number;

public:
    void getter() { std::cout << number << "\n"; }
    void setter(int num) { number = num; }
    INTEGER() = default; // 2 ways are either don't put a constructer or add a default keyword at the end
};

int main()
{
    INTEGER numb1, numb3;
    int temp_num;
    std::cout << "enter a number:\n";
    std::cin >> temp_num;
    numb1.setter(temp_num);
    numb1.getter();
    std::cout << "enter a number:\n";
    std::cin >> temp_num;
    numb3.setter(temp_num);
    numb3.getter();
}