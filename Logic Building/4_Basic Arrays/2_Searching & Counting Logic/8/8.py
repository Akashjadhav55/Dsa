# Q8: Find the count of prime numbers in the array.
# Input: Size n, then n integers
# Output: Count of primes

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

n = int(input())
arr = list(map(int, input().split()))
print(sum(1 for x in arr if is_prime(x)))
