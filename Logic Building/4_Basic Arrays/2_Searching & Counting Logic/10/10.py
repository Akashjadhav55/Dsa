# Q10: Count how many elements are perfect squares.
# Input: Size n, then n integers
# Output: Count of perfect squares

import math

def is_perfect_square(num):
    if num < 0:
        return False
    sqrt = int(math.isqrt(num))
    return sqrt * sqrt == num

n = int(input())
arr = list(map(int, input().split()))
print(sum(1 for x in arr if is_perfect_square(x)))
