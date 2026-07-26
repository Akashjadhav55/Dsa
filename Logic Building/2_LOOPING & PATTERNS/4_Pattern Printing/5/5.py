# Q5: Print an increasing triangle of stars.
# Input: An integer n
# Output: Triangle with 1 star in row 1, 2 in row 2, etc.

n = int(input())
for i in range(1, n + 1):
    print("*" * i)
