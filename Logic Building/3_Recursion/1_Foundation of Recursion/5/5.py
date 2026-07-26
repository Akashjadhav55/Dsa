# Q5: Print sum of first n natural numbers recursively.
# Input: An integer n
# Output: Sum of 1+2+...+n

def sum_n(n):
    if n == 0:
        return 0
    return n + sum_n(n - 1)

n = int(input())
print(sum_n(n))
