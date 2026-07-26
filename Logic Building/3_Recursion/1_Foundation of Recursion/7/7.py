# Q7: Calculate power of a number (x^n) using recursion.
# Input: Base x and exponent n
# Output: x raised to power n

def power(x, n):
    if n == 0:
        return 1
    return x * power(x, n - 1)

x, n = map(int, input().split())
print(power(x, n))
