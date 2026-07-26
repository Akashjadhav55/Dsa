# Q15: Print binary alternating pattern (1, 01, 101, 0101).
# Input: An integer n
# Output: Binary alternating pattern

n = int(input())
for i in range(1, n + 1):
    row = ""
    for j in range(i):
        if (i + j) % 2 == 0:
            row += "1"
        else:
            row += "0"
    print(row)
