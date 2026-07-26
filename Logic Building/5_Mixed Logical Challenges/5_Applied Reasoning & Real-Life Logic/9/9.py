# Q9: Count how many prime numbers are there in an array.
# Input: Size n, then n integers
# Output: Count of primes

import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.isqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

n = int(input())
arr = list(map(int, input().split()))
count = sum(1 for v in arr if is_prime(v))
print(count)
