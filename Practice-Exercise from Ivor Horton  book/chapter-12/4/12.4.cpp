#include <iostream>

class Integer
{
    int number;

public:
    int getter() const { return number; }
    void setter(int num) { number = num; }

    Integer(int t_num) : number{t_num}
    {
        std::cout << "Constructor called\n";
    }

    friend int compare(Integer &obj, Integer &obj1);
};

int main()
{
    Integer num1{9}, num2{4};
    std::cout << compare(num1, num2) << "\n";
}

int compare(Integer &obj, Integer &obj1)
{
    if (obj.getter() < obj1.getter())
        return -1;
    else if (obj.getter() > obj1.getter())
        return 1;
    else
        return 0;
}