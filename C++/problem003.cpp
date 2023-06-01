/*
 * References:
 *   https://www.tutorialspoint.com/prime-factor-in-cplusplus-program
 */

#include <iostream>
#include <cmath>

long int getLargestPrimeFactor(long int n)
{
    while (n % 2 == 0)
    {
       n = n / 2;
    }

   for (long int i = 3; i <= std::sqrt(n); i += 2)
   {
      while (n % i == 0)
      {
         n = n / i;
      }
   }
   return n;
}

long int problem003()
{
   const auto n = 600851475143;
   const auto largestPrimeFactor = getLargestPrimeFactor(n);
   return largestPrimeFactor;
}
