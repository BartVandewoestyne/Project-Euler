#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 1; i < 1000; ++i)
    {
        if ( (i % 3 == 0) || (i % 5 == 0) )
        {
            std::cout << i << " is divisible by 3 or 5." << std::endl;
            sum += i;
        }
    }
    std::cout << "The sum of all numbers below 1000 that are divisible by 3 or 5 is " << sum << "." << std::endl;
}
