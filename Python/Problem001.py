my_sum = 0
for i in range(1, 1000):
    if (i % 3 == 0) or (i % 5 == 0):
        print str(i) + ' is divisible by ' + str(3) + ' or ' + str(5)
        my_sum += i
print 'The sum of all numbers below 1000 that are divisible by 3 or 5 is ' + str(my_sum) + '.'