# Q1: Count the number of digits in a number recursively.
# Input: An integer
# Output: Number of digits

def count_digits(n):
    if n == 0:
        return 0
    return 1 + count_digits(n // 10)

n = int(input())
print(count_digits(n))
