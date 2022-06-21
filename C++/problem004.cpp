#include <iostream>
#include <vector>

std::vector<int> to_digits(int number)
{
    std::vector<int> digits;
    while (number > 0)
    {
        digits.push_back(number % 10);
        number /= 10;
    }
    return digits;
}

bool is_palindromic(int number)
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

int main()
{
    auto largest_palindrome = -1;
    auto winning_i = -1;
    auto winning_j = -1;
    for (int i = 100; i < 1000; ++i)
    {
        for (int j = 100; j < 1000; ++j)
        {
            const auto product = i*j;
            if (is_palindromic(product) && (product > largest_palindrome) )
            {
                largest_palindrome = product;
                winning_i = i;
                winning_j = j;
            }
        }
    }
    std::cout << "largest palindrome: " << winning_i << " * " << winning_j << " = " << largest_palindrome << std::endl;
}
