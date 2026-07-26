# Q17: Print repeated alphabet per row (A, BB, CCC, DDDD).
# Input: An integer n
# Output: Repeated alphabet pattern

n = int(input())
for i in range(n):
    print(chr(65 + i) * (i + 1))
