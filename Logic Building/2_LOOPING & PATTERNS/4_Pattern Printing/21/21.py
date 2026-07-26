# Q21: Print palindromic number triangle (1, 21, 321, 4321).
# Input: An integer n
# Output: Decreasing number triangle

n = int(input())
for i in range(1, n + 1):
    for j in range(i, 0, -1):
        print(j, end="")
    print()
