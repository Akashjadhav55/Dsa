# Q25: Print number pyramid (1, 232, 34543, 4567654).
# Input: An integer n
# Output: Number pyramid pattern

n = int(input())
for i in range(1, n + 1):
    row = " " * (n - i)
    for j in range(i):
        print(i + j, end="")
    for j in range(i - 2, -1, -1):
        print(i + j, end="")
    print()
