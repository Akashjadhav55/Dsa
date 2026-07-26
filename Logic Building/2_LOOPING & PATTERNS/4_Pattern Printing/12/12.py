# Q12: Print repeated numbers per row (1, 22, 333, 4444, 55555).
# Input: An integer n
# Output: Repeated number pattern

n = int(input())
for i in range(1, n + 1):
    print(str(i) * i)
