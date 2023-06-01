// TODO: This code can definitely be improved:
//   - Find more elegant solution.
//   - Make solution faster.
//
// References:
//   https://jinglescode.github.io/2020/01/08/project-euler-problem-5/

#include <iostream>  

bool works(int i, int n)
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

int find_number(int n)
{
    int i = 1;
    bool found = false;
    while (!works(i, n))
    {
        ++i;
    }
    return i;
}

int main()  
{
    const auto n = find_number(20);
    std::cout << n << std::endl;
}
