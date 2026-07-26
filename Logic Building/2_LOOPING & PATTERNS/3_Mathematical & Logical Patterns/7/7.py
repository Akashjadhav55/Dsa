# Q7: Find the sum of all factors of a number.
# Input: An integer
# Output: Sum of all factors

n = int(input())
total = 0
for i in range(1, n + 1):
    if n % i == 0:
        total += i
print(total)
