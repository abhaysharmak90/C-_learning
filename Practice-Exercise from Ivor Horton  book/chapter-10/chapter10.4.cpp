#include <iostream>
#include <vector>
#include <array>

// template <typename t>
// auto arr_size(t vec);                    cannot use auto if defination is after main()
template <typename t>
size_t arr_size(const t &vec)
{
    // size_t size{0}, indx{0};
    // while (vec[indx])
    // {
    //     size++;
    //     indx++;
    // }
    // return size;
    std::cout<<"vec,arr<>called\n";
    return vec.size();                          //saw answer 
}

template <typename t,size_t n>
size_t arr_size(const t (&vec)[n])
{
    // size_t size{0}, indx{0};
    // while (vec[indx])                        didn't work kept going ut of bounds
    // {
    //     size++;
    //     std::cout<<size<<" "<<indx<<" "<<vec[indx]<<std::endl;
    //     indx++;
    // }

    std::cout<<"arr_called\n";
    // return size;
    return n;                           //saw answer
}

int main()
{
    std::vector<int> v1{222, 775, 554, 668, 4432, 77985, 5, 4, 3, 8, 9};
    int a1[]{886, 774, 666, 55, 779, 4, 7, 5, 3, 8};
    std::array<int, 20> a2{556, 446, 553, 24, 222, 6, 7, 6, 3, 2, 779, 6, 4, 2, 4, 6, 9};
    std::cout << arr_size(v1) << "\n";
    std::cout << arr_size(a2) << "\n";
    std::cout << arr_size(a1) << "\n";
    std::cout<<std::endl;
}
