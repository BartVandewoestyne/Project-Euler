def is_symmetric(s):

    # The elegant method...
    return s == s[::-1]

    # ... and my (not so elegant) solution.
    # n = len(s)
    # k = 0
    # while k < n/2 and s[k] == s[n-k-1]:
    #     k += 1
    # if k == n/2:
    #     return True
    # else:
    #     return False


def is_palindrome(n):
    n_string = str(n)
    return is_symmetric(n_string)


# Create all three digit number products
largest_palindrome = 1
factor1 = 1
factor2 = 1
for i in range(1, 1000):
    for j in range(1, 1000):
        product = i*j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product
            factor1 = i
            factor2 = j


print "Largest palindrome: {0} = {1} * {2}".format(largest_palindrome, factor1, factor2)