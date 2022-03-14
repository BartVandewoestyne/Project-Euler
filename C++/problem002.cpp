#include <iostream>

int main()
{
    auto sum = 0;
    auto current = 1;
    auto next = 2;
    while (current < 4000000)
    {
        if (current % 2 == 0)
        {
            sum += current;
        }
        auto temp = current + next;
        current = next;
        next = temp;
    }
    std::cout << sum << std::endl;
}
