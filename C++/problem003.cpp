/*
 * References:
 *   https://www.tutorialspoint.com/prime-factor-in-cplusplus-program
 */

#include <cmath>
#include <iostream>

auto getLargestPrimeFactor(int64_t n) -> int64_t
{
    while (n % 2 == 0)
    {
       n = n / 2;
    }

   for (int64_t i = 3; i <= std::sqrt(static_cast<long double>(n)); i += 2)
   {
      while (n % i == 0)
      {
         n = n / i;
      }
   }
   return n;
}

auto problem003() -> int64_t
{
   const auto number = 600851475143;
   const auto largestPrimeFactor = getLargestPrimeFactor(number);
   return largestPrimeFactor;
}
