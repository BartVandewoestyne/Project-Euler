// TODO: This code can definitely be improved:
//   - Find more elegant solution.
//   - Make solution faster.
//
// References:
//   https://jinglescode.github.io/2020/01/08/project-euler-problem-5/

#include <iostream>  

auto works(int i, int n) -> bool
{
    bool result = true;
    for (int j = 1; j <= n; ++j)
    {
        if (i % j != 0)
        {
            result = false;
        }
    }
    return result;
}

auto find_number(int n) -> int
{
    int i = 1;
    while (!works(i, n))
    {
        ++i;
    }
    return i;
}

auto problem005() -> int
{
    const auto number = find_number(20);
    return number;
}
