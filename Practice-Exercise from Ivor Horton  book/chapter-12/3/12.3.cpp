#include <iostream>

class INTEGER
{
    int number;

public:
    int getter() const { return number; }
    void setter(int num) { number = num; }
    // void compare(INTEGER) const;
    INTEGER &add(const INTEGER &num);
    INTEGER &sub(const INTEGER &num);
    INTEGER &multiply(const INTEGER &num);

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

int calculate(INTEGER &num4, INTEGER &num5, INTEGER &num6, INTEGER &num7, INTEGER &num8);

int main()
{
    INTEGER numb4{4}, numb5{5}, numb6{6}, numb7{7}, numb8{8};
    std::cout << "answer to equation is:\n";
    std::cout << calculate(numb4, numb5, numb6, numb7, numb8) << std::endl;
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

INTEGER &INTEGER::add(const INTEGER &num)
{
    number += num.number;
    return *this;
}
INTEGER &INTEGER::sub(const INTEGER &num)
{
    number -= num.number;
    return *this;
}
INTEGER &INTEGER::multiply(const INTEGER &num)
{
    number *= num.number;
    return *this;
}

int calculate(INTEGER &num4, INTEGER &num5, INTEGER &num6, INTEGER &num7, INTEGER &num8)
{
    INTEGER result{0};
    // std::cout << result.getter();
    result.add(num4).multiply(num5).add(num6).multiply(num5).add(num7).multiply(num5).add(num8);
    return result.getter();
}