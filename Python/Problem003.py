# TODO:
#   * Check if this is correct for the number 600851475143
#   * Don't reinvent the wheel!  Remove the user-defined prime_factors function and use a library!


def prime_factors(n):
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors

number = 600851475143
prime_factors = prime_factors(number)
print 'Prime factors of ' + str(number) + ': ' + str(prime_factors)
print 'Max of the prime factors = ' + str(max(prime_factors))
