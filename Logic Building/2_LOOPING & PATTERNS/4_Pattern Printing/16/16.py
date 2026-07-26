# Q16: Print alphabet sequence (A, AB, ABC, ABCD).
# Input: An integer n
# Output: Alphabet sequence pattern

n = int(input())
for i in range(n):
    for j in range(i + 1):
        print(chr(65 + j), end="")
    print()
