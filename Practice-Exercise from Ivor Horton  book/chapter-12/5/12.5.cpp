#include <iostream>

class Integer
{
    int number;
    static int no_of_objs;

public:
    int getter() const { return number; }
    void setter(int t_num) { number = t_num; }

    const static void print_count();

    Integer() { ++no_of_objs; }
    Integer(int t_num) : number{t_num} { ++no_of_objs; }

    ~Integer() { --no_of_objs; }
};
int Integer::no_of_objs{0};

void newnums();

int main()
{
    Integer::print_count();
    // std::cout << Integer::no_of_objs;
    Integer num, num1{1}, num2{2}, num3{3}, num4{4};
    // std::cout << num.no_of_objs;
    newnums();
    num.print_count();
}

void newnums()
{
    Integer nums1;
    nums1.print_count();
}
const void Integer::print_count()
{
    std::cout << "there are " << no_of_objs << " objects alive at this moment\n";
}