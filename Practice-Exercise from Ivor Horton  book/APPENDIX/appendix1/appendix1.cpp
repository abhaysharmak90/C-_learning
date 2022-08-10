#include<iostream>
#include"appendix1.h"
int main()
{
    int y{10};
    for (size_t i = 0; i < 20; i++)
    {
        std::cout<<i<<std::endl;
        ASSERTION( i < y , "x exceeded 9");
    }
    
}