# Q9: Calculate the sum of first n odd numbers recursively.
# Input: An integer n
# Output: Sum of first n odd numbers

def sum_odd(n):
    if n == 0:
        return 0
    return (2 * n - 1) + sum_odd(n - 1)

n = int(input())
print(sum_odd(n))
