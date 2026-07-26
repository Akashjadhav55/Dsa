# Q6: Print a right-aligned triangle of stars.
# Input: An integer n
# Output: Right-aligned triangle with leading spaces

n = int(input())
for i in range(1, n + 1):
    print(" " * (n - i) + "*" * i)
