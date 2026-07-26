# Q18: Print increasing alphabet per row (A, AB, ABC, ABCD, ABCDE).
# Input: An integer n
# Output: Increasing alphabet pattern

n = int(input())
for i in range(n):
    for j in range(i + 1):
        print(chr(65 + j), end="")
    print()
