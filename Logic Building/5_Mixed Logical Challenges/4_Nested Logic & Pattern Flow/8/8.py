# Q8: Print Pascal's triangle up to N rows.
# Input: An integer N
# Output: Pascal's triangle

n = int(input())
for i in range(n):
    val = 1
    row = []
    for j in range(i + 1):
        row.append(str(val))
        val = val * (i - j) // (j + 1)
    print(' '.join(row))
