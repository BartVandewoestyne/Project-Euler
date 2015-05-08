def fib(n):
    result = []
    a, b = 1, 2
    while a < n:
        result.append(a)
        a, b = b, a + b
    return result

# Generate Fibonacci numbers that do not exceed 4 million
fibonacci_numbers = fib(4000000)
print 'Fibonacci numbers: ' + str(fibonacci_numbers)

# Keep only the even valued ones
even_fibonacci_numbers = filter(lambda x: x % 2 == 0, fibonacci_numbers)
print 'Even Fibonacci numbers: ' + str(even_fibonacci_numbers)

# Sum their values
my_sum = sum(number for number in even_fibonacci_numbers)
print 'Sum of the even Fibonacci numbers = ' + str(my_sum)