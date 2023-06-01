#include <iostream>
#include <vector>

auto to_digits(int number) -> std::vector<int>
{
    constexpr auto base10 = 10;
    
    std::vector<int> digits;
    while (number > 0)
    {
        digits.push_back(number % base10);
        number /= base10;
    }
    return digits;
}

auto is_palindromic(int number) -> bool
{
    const auto digits = to_digits(number);
    auto is_palindromic = true;
    int idx = 0;
    while ( (idx < digits.size()/2) && is_palindromic)
    {
        if (digits[idx] != digits[digits.size()-1-idx])
        {
            is_palindromic = false;
        }
        idx++;
    }
    return is_palindromic;
}

auto problem004() -> int
{
    constexpr auto begin = 100;
    constexpr auto end = 1000;

    auto largest_palindrome = -1;
    auto winning_i = -1;
    auto winning_j = -1;
    for (int i = begin; i < end; ++i)
    {
        for (int j = begin; j < end; ++j)
        {
            const auto product = i*j;
            if (is_palindromic(product) && (product > largest_palindrome) )
            {
                largest_palindrome = product;
            }
        }
    }
    return largest_palindrome;
}