#ifndef appx2_assert
#define appx2_assert

#include <iostream>
#include <cstdlib>

#ifndef NDEBUG
#define ASSERTION(condition, err_message) \
    if (!(condition))                     \
    {                                     \
        std::cerr << (err_message);       \
        std::abort();                     \
    }                                     
#else 
#define ASSERTION(condition, err_message)
#endif

#endif