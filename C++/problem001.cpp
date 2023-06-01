#include "problem001.h"

#include <iostream>

auto problem001() -> int
{
    constexpr auto upper_limit = 1000;
    constexpr auto number1 = 3;
    constexpr auto number2 = 5;

    auto sum = 0;
    for (auto i = 1; i < upper_limit; ++i)
    {
        if ( (i % number1 == 0) || (i % number2 == 0) )
        {
            sum += i;
        }
    }
    return sum;
}