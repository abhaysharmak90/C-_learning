#ifndef assert_custom
#define assert_custom

#include<iostream>
#include<cstdlib>

#define ASSERTION(condition,err_message)    \
    if (!(condition))                       \
    {                                       \
        std::cerr<<(err_message);           \
        std::abort();                       \
    }                                       \

#endif