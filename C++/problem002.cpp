#include <iostream>

auto problem002() -> int
{
    constexpr auto max_value = 4000000;

    auto sum = 0;
    auto current = 1;
    auto next = 2;
    while (current < max_value)
    {
        if (current % 2 == 0)
        {
            sum += current;
        }
        auto temp = current + next;
        current = next;
        next = temp;
    }
    return sum;
}
