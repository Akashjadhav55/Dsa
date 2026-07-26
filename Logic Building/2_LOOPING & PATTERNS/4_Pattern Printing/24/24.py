# Q24: Print hollow diamond star pattern.
# Input: An integer n
# Output: Hollow diamond with stars

n = int(input())
for i in range(1, n + 1):
    row = " " * (n - i)
    for j in range(2 * i - 1):
        if j == 0 or j == 2 * i - 2:
            row += "*"
        else:
            row += " "
    print(row)
for i in range(n - 1, 0, -1):
    row = " " * (n - i)
    for j in range(2 * i - 1):
        if j == 0 or j == 2 * i - 2:
            row += "*"
        else:
            row += " "
    print(row)
