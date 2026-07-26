# Q13: Print consecutive numbers pattern (1, 23, 456, 78910).
# Input: An integer n
# Output: Continuous number pattern

n = int(input())
num = 1
for i in range(1, n + 1):
    for j in range(i):
        print(num, end="")
        num += 1
    print()
