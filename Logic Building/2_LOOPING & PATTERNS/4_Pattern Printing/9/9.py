# Q9: Print a centered pyramid of stars.
# Input: An integer n
# Output: Centered pyramid pattern

n = int(input())
for i in range(1, n + 1):
    print(" " * (n - i) + "*" * (2 * i - 1))
