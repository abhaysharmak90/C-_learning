#include <iostream>

class INTEGER
{
    int number;

public:
    void getter() const { std::cout << number << "\n"; }
    void setter(int num) { number = num; }
    void compare(INTEGER) const;
    void add(INTEGER num) const;
    void sub(INTEGER num) const;
    void multiply(INTEGER num) const;

    INTEGER() = default; // 2 ways are either don't put a constructer or add a default keyword at the end
    INTEGER(auto num) : number{num}
    {
        std::cout << "constructor 1 called\n";
    }
    INTEGER(const INTEGER &num) : number{num.number}
    {
        // std::cout << sizeof(num) << "\n";
        std::cout << "copy constructor called\n";
    }
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
    numb1.compare(numb3);
    numb1.add(numb3);
    numb1.sub(numb3);
    numb1.multiply(numb3);
    numb1.add(5);
    numb1.sub(5);
    numb1.multiply(5);
}

void INTEGER::compare(INTEGER t_number) const
{
    if (number < t_number.number)
    {
        std::cout << "-1\n";
    }
    else if (number == t_number.number)
    {
        std::cout << "0\n";
    }
    else
    {
        std::cout << "1\n";
    }
}

void INTEGER::add(INTEGER num) const
{
    std::cout << "sum is" << number + num.number << std::endl;
}
void INTEGER::sub(INTEGER num) const
{
    std::cout << "sub is" << number - num.number << std::endl;
}
void INTEGER::multiply(INTEGER num) const
{
    std::cout << "multi is" << number * num.number << std::endl;
}