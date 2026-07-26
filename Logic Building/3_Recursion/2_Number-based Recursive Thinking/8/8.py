# Q8: Calculate the sum of first n even numbers recursively.
# Input: An integer n
# Output: Sum of first n even numbers

def sum_even(n):
    if n == 0:
        return 0
    return (2 * n) + sum_even(n - 1)

n = int(input())
print(sum_even(n))
