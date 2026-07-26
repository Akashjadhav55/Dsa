# Q7: Print all prime numbers between 1 and N.
# Input: An integer N
# Output: All primes from 1 to N

import math

n = int(input())
for i in range(2, n + 1):
    is_prime = True
    for j in range(2, int(math.isqrt(i)) + 1):
        if i % j == 0:
            is_prime = False
            break
    if is_prime:
        print(i)
