# Q20: Print number triangle (1, 12, 123, 1234, 12345).
# Input: An integer n
# Output: Number triangle pattern

n = int(input())
for i in range(1, n + 1):
    for j in range(1, i + 1):
        print(j, end="")
    print()
