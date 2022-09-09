#include <iostream>

void calculate(INTEGER &, INTEGER &, INTEGER &, INTEGER &, INTEGER &, INTEGER &);

class INTEGER
{
    int number;

public:
    void getter() const { std::cout << number << "\n"; }
    void setter(int num) { number = num; }
    // void compare(INTEGER) const;
    void add(INTEGER &num) const;
    void sub(INTEGER &num) const;
    void multiply(INTEGER &num) const;

    INTEGER() = default; // 2 ways are either don't put a constructer or add a default keyword at the end
    INTEGER(int num) : number{num}
    {
        std::cout << "constructor 1 called\n";
    }
    // INTEGER(const INTEGER &num) : number{num.number}
    // {
    //     // std::cout << sizeof(num) << "\n";
    //     std::cout << "copy constructor called\n";
    // }
};

int main()
{
    INTEGER numb4{4}, numb5{5}, numb6{6}, numb7{7}, numb8{8};
    std::cout << "answer to equation is:\n";
    // int temp_num;
    // std::cout << "enter a number:\n";
    // std::cin >> temp_num;
    // numb1.setter(temp_num);
    // numb1.getter();
    // std::cout << "enter a number:\n";
    // std::cin >> temp_num;
    // numb3.setter(temp_num);
    // numb3.getter();
    // // numb1.compare(numb3);
    // numb1.add(numb3);
    // numb1.sub(numb3);
    // numb1.multiply(numb3);
    // numb1.add(5);
    // numb1.sub(5);
    // numb1.multiply(5);
}

void INTEGER::add(INTEGER &num) const
{
    number + num.number;
}
void INTEGER::sub(INTEGER &num) const
{
    number - num.number;
}
void INTEGER::multiply(INTEGER &num) const
{
    number *num.number;
}

void calculate(INTEGER &num4, INTEGER &num5, INTEGER &num6, INTEGER &num7, INTEGER &num8)
{
}